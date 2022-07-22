#pragma once
#include "wConstBuffer.h"
#include "Model.h"
#include "wTextureManager.h"
struct ConstBufferDataTransform {
	Matrix mat;//3D�ϊ��s��
};

class Object3D
{
public:
	Object3D() { transformCB.contents->mat = Matrix::Identity(); *brightnessCB.contents = { 1.0f, 1.0f, 1.0f, 1.0f }; };
	void UpdateMatrix();
	void Draw();

	//�ʓr�ǂݍ��񂾃e�N�X�`�����g���ꍇ
	void Draw(TextureKey key);

	wConstBuffer<ConstBufferDataTransform> transformCB;
	wConstBuffer<Float4> brightnessCB;

	Float3 scale = { 1, 1, 1 };
	Float3 rotation = { 0, 0, 0 };
	Float3 position = { 0, 0, 0 };

	Matrix matWorld = Matrix::Identity();

	Object3D* parent = nullptr;

	Model* model = nullptr;
};


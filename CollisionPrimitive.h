#pragma once
/// <summary>
///�����蔻��v���~�e�B�u
/// </summary>

#include <DirectXMath.h>

/// <summary>
/// ��
/// </summary>
struct Sphere
{
	//���S���W
	DirectX::XMVECTOR center = { 0,0,0,1 };
	//���a
	float radius = 1.0f;
};


/// <summary>
/// ����
/// </summary>
struct Plane
{
	//�@���x�N�g��
	DirectX::XMVECTOR normal = {0,1,0,0};
	//���_(0,0,0)����̋���
	float distance = 0.0f;
};



//==============================================
//
//オブジェクト3D(Cylinder.h)
//Author: fujiwara ryuki
//
//==============================================
#ifndef _Cylinder_H_
#define _Cylinder_H_

#include"object.h"

//**************************//
//2Dオブジェクトクラスの定義//
//**************************//
class CCylinder : public CObject
{
public:	//アクセス可能

	CCylinder();									//コンストラクタ
	virtual~CCylinder();							//デストラクタ

	//メンバ関数
	virtual HRESULT Init(void);							//初期処理
	virtual void Uninit(void);							//終了処理
	virtual void Update(void);							//更新処理
	virtual void Draw(void);							//描画処理

	void BindTexture(LPDIRECT3DTEXTURE9 pTexture);		//テクスチャの割り当て

	void SetPos(D3DXVECTOR3 pos, D3DXVECTOR3 scale);	//位置設定処理
	void SetRot(D3DXVECTOR3 rot) { m_rot = rot; }		//傾き設定処理
	D3DXVECTOR3 GetPos(void) { return m_pos; }			//位置取得処理
	D3DXVECTOR3 GetScale(void) { return m_scale; }		//角度取得処理
	D3DXVECTOR3 GetRot(void) { return m_rot; }			//角度取得処理

	//静的メンバ関数
	static CCylinder *Create(void);						//メモリ生成処理

private: //アクセス(メンバ関数内)

	//メンバ変数
	LPDIRECT3DTEXTURE9		m_pTexture; 				//テクスチャへのポインタ
	LPDIRECT3DVERTEXBUFFER9 m_pVtxBuffer;				//バッファへのポインタ
	LPDIRECT3DINDEXBUFFER9	m_pIdxBuffer;				//インデックスバッファへのポインタ
	D3DXMATRIX				m_mtxworld;					//ワールドマトリックス
	D3DXVECTOR3				m_pos;						//位置
	D3DXVECTOR3				m_rot;						//角度
	D3DXVECTOR3				m_scale;					//大きさ
};

#endif

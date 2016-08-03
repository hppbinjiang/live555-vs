/*
*****************************************************************************************
* \Brief :  Define the 4 API function proto type 
* \Author:  Bin Feng <frobby@163.com>
* \Date  :  2007-09-25
*****************************************************************************************
*/
#ifndef _ENCAPI_H_
#define _ENCAPI_H_

#include "..\inc\enclibvaris.h"

XDAS_Int32 VIDENCAVS_WNLO_initObj(
	VIDENCAVS_WNLO_Obj *handle,				//�������ľ��
	const IALG_MemRec memTab[], 		    //not care
	VIDENCAVS_WNLO_Obj p,					//not care
	const IVIDENC_Params *algParams);		//��������������IVIDENC_Params

XDAS_Int32 VIDENCAVS_WNLO_process(
	VIDENCAVS_WNLO_Obj *h, 		            //�������ľ��
	XDM_BufDesc *inBufs,			    	//����buffer�������XDM_BufDesc��
                                            //�����ø�inBufs-> bufs[0] ���ڴ�Ŵ������ԭʼ����
                                            //inBufs->numBufs=1
                                            //inBufs-> bufSizes[0]=����ԭʼ���ݵĳ���	
    XDM_BufDesc *outBufs, 			        //���buffer�������XDM_BufDesc���ڴ�ű���������
                                            //�����ø�outBufs -> bufs[0] ���ڴ�ű���������
                                            // outBufs ->numBufs=1
                                            // outBufs -> bufSizes[0]=����������ĳ���	
	IVIDENC_InArgs *inArgs, 			    //���������������������IVIDENC_InArgs
	IVIDENC_OutArgs *outArgs);		        //���������������������IVIDENC_OutArgs

XDAS_Int32 VIDENCAVS_WNLO_control(
	VIDENCAVS_WNLO_Obj *handle, 			    //�������ľ��
	IVIDENC_Cmd id,							//����
	IVIDENC_DynamicParams *params, 			//��̬�޸ĵĲ����������IVIDENC_DynamicParams
	IVIDENC_Status *status);				//���ر�������״̬�������IVIDENC_Status

XDAS_Int32 VIDENCAVS_WNLO_free(
    VIDENCAVS_WNLO_Obj *handle,			    //�������ľ��
    IALG_MemRec memTab[]);				    //not care





#endif
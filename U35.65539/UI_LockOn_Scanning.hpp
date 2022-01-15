#ifndef UE4SS_SDK_UI_LockOn_Scanning_HPP
#define UE4SS_SDK_UI_LockOn_Scanning_HPP

class UUI_LockOn_Scanning_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimScanning;
    UImage* Image_1;
    UImage* Image_2;
    UImage* Image_3;
    UImage* Image_4;
    UImage* Image_5;
    UImage* Image_6;
    UImage* Image_7;
    UImage* Image_8;
    UImage* Image_9;

    void Construct();
    void ExecuteUbergraph_UI_LockOn_Scanning(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif

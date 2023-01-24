#ifndef UE4SS_SDK_UI_LockOn_Scanning_HPP
#define UE4SS_SDK_UI_LockOn_Scanning_HPP

class UUI_LockOn_Scanning_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimScanning;
    class UImage* Image_1;
    class UImage* Image_2;
    class UImage* Image_3;
    class UImage* Image_4;
    class UImage* Image_5;
    class UImage* Image_6;
    class UImage* Image_7;
    class UImage* Image_8;
    class UImage* Image_9;

    void Construct();
    void ExecuteUbergraph_UI_LockOn_Scanning(int32 EntryPoint);
};

#endif

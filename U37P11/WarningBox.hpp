#ifndef UE4SS_SDK_WarningBox_HPP
#define UE4SS_SDK_WarningBox_HPP

class UWarningBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* NewAnimation_1;
    class UImage* Image_0;
    class USizeBox* SizeBox_2;
    float Size;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_WarningBox(int32 EntryPoint);
};

#endif

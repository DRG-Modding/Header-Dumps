#ifndef UE4SS_SDK_Basic_ScrollArrow2_HPP
#define UE4SS_SDK_Basic_ScrollArrow2_HPP

class UBasic_ScrollArrow2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* arrow_bracket;
    class UImage* arrow_main;
    class UHorizontalBox* HorizontalBox_102;
    class USizeBox* SizeBox_0;
    class USizeBox* SizeBox_1;
    FBasic_ScrollArrow2_COnClicked OnClicked;
    void OnClicked();
    float ButtonAngle;
    bool Active;

    FLinearColor SetActive(bool NewVar_0);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Basic_ScrollArrow2(int32 EntryPoint);
    void OnClicked__DelegateSignature();
};

#endif

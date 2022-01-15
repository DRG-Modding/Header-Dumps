#ifndef UE4SS_SDK_Basic_ScrollArrow2_HPP
#define UE4SS_SDK_Basic_ScrollArrow2_HPP

class UBasic_ScrollArrow2_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* arrow_bracket;
    UImage* arrow_main;
    UHorizontalBox* HorizontalBox_102;
    USizeBox* SizeBox_0;
    USizeBox* SizeBox_1;
    FBasic_ScrollArrow2_COnClicked OnClicked;
    void OnClicked();
    float ButtonAngle;
    bool Active;

    FLinearColor SetActive(bool NewVar_0bool Temp_bool_Variable, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor K2Node_Select_Default);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Basic_ScrollArrow2(int32 EntryPoint, FLinearColor CallFunc_SetActive_ReturnValue, bool K2Node_Event_IsDesignTime);
    void OnClicked__DelegateSignature();
}

#endif

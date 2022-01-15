#ifndef UE4SS_SDK_Lore_List_Filler_HPP
#define UE4SS_SDK_Lore_List_Filler_HPP

class ULore_List_Filler_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FadeOutNavigationIcon;
    UWidgetAnimation* IntroAnim;
    USpacer* Spacer_161;
    FLore_List_Filler_COnClicked OnClicked;
    void OnClicked(int32 Index);
    float ButtonYSize;
    int32 NumberOfButtons;

    void SetSize(int32 Number Of Buttons);
    void DecrementSize();
    void ExecuteUbergraph_Lore_List_Filler(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 K2Node_CustomEvent_Number_Of_Buttons, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_FMax_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void OnClicked__DelegateSignature(int32 Index);
}

#endif

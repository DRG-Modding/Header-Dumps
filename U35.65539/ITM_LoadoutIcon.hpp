#ifndef UE4SS_SDK_ITM_LoadoutIcon_HPP
#define UE4SS_SDK_ITM_LoadoutIcon_HPP

class UITM_LoadoutIcon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBorder* Background;
    UImage* Image_Icon;
    UButton* LoadoutButton;
    UBorder* SelectionBorder;
    FITM_LoadoutIcon_COnClicked OnClicked;
    void OnClicked(UTexture2D* Texture, int32 Index);
    int32 Index;

    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void SetData(UTexture2D* Texture, int32 Index);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_LoadoutIcon(int32 EntryPoint, UTexture2D* K2Node_CustomEvent_Texture, int32 K2Node_CustomEvent_Index, UTexture2D* CallFunc_GetBrushResourceAsTexture2D_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void OnClicked__DelegateSignature(UTexture2D* Texture, int32 Index);
}

#endif

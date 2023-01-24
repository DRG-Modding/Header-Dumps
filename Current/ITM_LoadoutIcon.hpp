#ifndef UE4SS_SDK_ITM_LoadoutIcon_HPP
#define UE4SS_SDK_ITM_LoadoutIcon_HPP

class UITM_LoadoutIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Background;
    class UImage* Image_Icon;
    class UButton* LoadoutButton;
    class UBorder* SelectionBorder;
    FITM_LoadoutIcon_COnClicked OnClicked;
    void OnClicked(class UTexture2D* Texture, int32 Index);
    int32 Index;

    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void SetData(class UTexture2D* Texture, int32 Index);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_LoadoutIcon(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UTexture2D* Texture, int32 Index);
};

#endif

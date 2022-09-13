#ifndef UE4SS_SDK_ITM_Modding_LoadoutSelection_HPP
#define UE4SS_SDK_ITM_Modding_LoadoutSelection_HPP

class UITM_Modding_LoadoutSelection_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_LoadoutIconSelector_C* ITM_LoadoutIconSelector;
    class UITM_Modding_Loadout_C* ITM_Modding_LoadoutA;
    class UITM_Modding_Loadout_C* ITM_Modding_LoadoutB;
    class UITM_Modding_Loadout_C* ITM_Modding_LoadoutC;
    class UITM_Modding_Loadout_C* ITM_Modding_LoadoutD;
    class UHorizontalBox* ModdingSlots;
    FITM_Modding_LoadoutSelection_COnSlotLoaded OnSlotLoaded;
    void OnSlotLoaded();
    class UBasic_ToolTip_HeadlineAndText_C* SelectorTooltip;
    int32 CurrentSlotNumber;

    class UWidget* GetSelectorTooltipWidget();
    void SetSelectorVisibility(bool IsVisible);
    void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutA_K2Node_ComponentBoundEvent_0_OnSlotLoaded__DelegateSignature();
    void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutB_K2Node_ComponentBoundEvent_1_OnSlotLoaded__DelegateSignature();
    void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutC_K2Node_ComponentBoundEvent_2_OnSlotLoaded__DelegateSignature();
    void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutD_K2Node_ComponentBoundEvent_3_OnSlotLoaded__DelegateSignature();
    void Construct();
    void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutB_K2Node_ComponentBoundEvent_5_IconButtonClicked__DelegateSignature(int32 SlotNumber);
    void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutC_K2Node_ComponentBoundEvent_6_IconButtonClicked__DelegateSignature(int32 SlotNumber);
    void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutD_K2Node_ComponentBoundEvent_7_IconButtonClicked__DelegateSignature(int32 SlotNumber);
    void BndEvt__ITM_Modding_LoadoutSelection_ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_8_OnIconSelected__DelegateSignature(class UTexture2D* Texture, int32 ImageIndex);
    void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutA_K2Node_ComponentBoundEvent_9_IconButtonClicked__DelegateSignature(int32 SlotNumber);
    void ExecuteUbergraph_ITM_Modding_LoadoutSelection(int32 EntryPoint);
    void OnSlotLoaded__DelegateSignature();
};

#endif

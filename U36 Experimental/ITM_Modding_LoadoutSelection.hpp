#ifndef UE4SS_SDK_ITM_Modding_LoadoutSelection_HPP
#define UE4SS_SDK_ITM_Modding_LoadoutSelection_HPP

class UITM_Modding_LoadoutSelection_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_Modding_Loadout_C* ITM_Modding_LoadoutA;
    class UITM_Modding_Loadout_C* ITM_Modding_LoadoutB;
    class UITM_Modding_Loadout_C* ITM_Modding_LoadoutC;
    class UITM_Modding_Loadout_C* ITM_Modding_LoadoutD;
    class UHorizontalBox* ModdingSlots;
    FITM_Modding_LoadoutSelection_COnSlotLoaded OnSlotLoaded;
    void OnSlotLoaded();

    void HideModSlotButtons(class UITM_Modding_Loadout_C* ModslotExcluded);
    void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutA_K2Node_ComponentBoundEvent_0_OnSlotLoaded__DelegateSignature();
    void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutB_K2Node_ComponentBoundEvent_1_OnSlotLoaded__DelegateSignature();
    void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutC_K2Node_ComponentBoundEvent_2_OnSlotLoaded__DelegateSignature();
    void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutD_K2Node_ComponentBoundEvent_3_OnSlotLoaded__DelegateSignature();
    void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutA_K2Node_ComponentBoundEvent_4_OnSlotClicked__DelegateSignature(class UITM_Modding_Loadout_C* ModSlot);
    void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutB_K2Node_ComponentBoundEvent_5_OnSlotClicked__DelegateSignature(class UITM_Modding_Loadout_C* ModSlot);
    void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutC_K2Node_ComponentBoundEvent_6_OnSlotClicked__DelegateSignature(class UITM_Modding_Loadout_C* ModSlot);
    void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutD_K2Node_ComponentBoundEvent_7_OnSlotClicked__DelegateSignature(class UITM_Modding_Loadout_C* ModSlot);
    void Construct();
    void ExecuteUbergraph_ITM_Modding_LoadoutSelection(int32 EntryPoint);
    void OnSlotLoaded__DelegateSignature();
};

#endif

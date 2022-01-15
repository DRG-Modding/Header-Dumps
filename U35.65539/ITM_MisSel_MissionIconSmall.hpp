#ifndef UE4SS_SDK_ITM_MisSel_MissionIconSmall_HPP
#define UE4SS_SDK_ITM_MisSel_MissionIconSmall_HPP

class UITM_MisSel_MissionIconSmall_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UITM_MisSel_MissionIconBasic_C* ITEM_MissionSelection_MissionIconBasic;
    UITM_MisSel_MissionIconBasic_Locked_C* ITM_MisSel_MissionIconBasic_Locked;

    void SetData(UGeneratedMission* mission);
    void BndEvt__ITEM_MissionSelection_MissionIconBasic_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature();
    void ExecuteUbergraph_ITM_MisSel_MissionIconSmall(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, UGeneratedMission* K2Node_CustomEvent_Mission, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocked_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1);
}

#endif

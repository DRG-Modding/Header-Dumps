#ifndef UE4SS_SDK_ITM_MisSel_MissionIconSmall_HPP
#define UE4SS_SDK_ITM_MisSel_MissionIconSmall_HPP

class UITM_MisSel_MissionIconSmall_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_MisSel_MissionIconBasic_C* ITEM_MissionSelection_MissionIconBasic;
    class UITM_MisSel_MissionIconBasic_Locked_C* ITM_MisSel_MissionIconBasic_Locked;

    void SetData(class UGeneratedMission* mission);
    void BndEvt__ITEM_MissionSelection_MissionIconBasic_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature();
    void ExecuteUbergraph_ITM_MisSel_MissionIconSmall(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, class UGeneratedMission* K2Node_CustomEvent_Mission, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocked_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1);
};

#endif

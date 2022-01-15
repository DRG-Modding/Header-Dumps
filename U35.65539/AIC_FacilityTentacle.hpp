#ifndef UE4SS_SDK_AIC_FacilityTentacle_HPP
#define UE4SS_SDK_AIC_FacilityTentacle_HPP

class AAIC_FacilityTentacle_C : UFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    AENE_FacilityTentacle_C* tentacle;
    UBehaviorTree* Behavior;
    bool IsChildOfOtherTentacle;

    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void ReceivePossess(APawn* PossessedPawn);
    void SetPaused(bool IsPaused);
    void ExecuteUbergraph_AIC_FacilityTentacle(int32 EntryPoint, const FTransform CallFunc_GetTransform_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_Add_VectorVector_ReturnValue, const FName K2Node_Event_keyName, FTransform CallFunc_MakeTransform_ReturnValue, bool K2Node_SwitchName_CmpSuccess, FName CallFunc_MakeLiteralName_ReturnValue, APawn* K2Node_Event_PossessedPawn, UENE_FacilityTentacle_C* K2Node_DynamicCast_AsENE_Facility_Tentacle, bool K2Node_DynamicCast_bSuccess, FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_GetValueAsBool_ReturnValue, bool CallFunc_RunBehaviorTree_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_2, FName CallFunc_MakeLiteralName_ReturnValue_3, bool K2Node_CustomEvent_isPaused, FName CallFunc_MakeLiteralName_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue);
}

#endif

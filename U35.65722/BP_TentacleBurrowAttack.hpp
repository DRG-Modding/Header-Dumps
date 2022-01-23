#ifndef UE4SS_SDK_BP_TentacleBurrowAttack_HPP
#define UE4SS_SDK_BP_TentacleBurrowAttack_HPP

class UBP_TentacleBurrowAttack_C : public UAttackBaseComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveAttackTarget(class AActor* Target);
    void ExecuteUbergraph_BP_TentacleBurrowAttack(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AENE_FacilityTentacle_Burrowing_C* K2Node_DynamicCast_AsENE_Facility_Tentacle_Burrowing, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_target);
};

#endif

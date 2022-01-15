#ifndef UE4SS_SDK_BP_TentacleMeleeAttack_HPP
#define UE4SS_SDK_BP_TentacleMeleeAttack_HPP

class UBP_TentacleMeleeAttack_C : UDamageAttackComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveAttackTarget(AActor* Target);
    void ExecuteUbergraph_BP_TentacleMeleeAttack(int32 EntryPoint, AActor* CallFunc_GetOwner_ReturnValue, UENE_FacilityTentacle_C* K2Node_DynamicCast_AsENE_Facility_Tentacle, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_target);
}

#endif

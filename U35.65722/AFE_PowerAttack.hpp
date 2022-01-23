#ifndef UE4SS_SDK_AFE_PowerAttack_HPP
#define UE4SS_SDK_AFE_PowerAttack_HPP

class UAFE_PowerAttack_C : public UAfflictionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginEffect(class UPawnAfflictionComponent* Target);
    void ReceiveEndEffect(class UPawnAfflictionComponent* Target);
    void ExecuteUbergraph_AFE_PowerAttack(int32 EntryPoint, class UPawnAfflictionComponent* K2Node_Event_target, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Array_Index_Variable, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, TArray<class UParticleSystemComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UParticleSystemComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPawnAfflictionComponent* K2Node_Event_target_1, class AActor* CallFunc_GetOwner_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, class UParticleSystemComponent* CallFunc_SpawnFirstPersonEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsFirstPerson_ReturnValue);
};

#endif

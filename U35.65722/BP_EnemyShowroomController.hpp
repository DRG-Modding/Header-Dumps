#ifndef UE4SS_SDK_BP_EnemyShowroomController_HPP
#define UE4SS_SDK_BP_EnemyShowroomController_HPP

class UBP_EnemyShowroomController_C : public UEnemyShowroomController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_PlayAttack(class UAnimSequenceBase* attackAnimation);
    void ExecuteUbergraph_BP_EnemyShowroomController(int32 EntryPoint, TArray<class UParticleSystemComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UParticleSystemComponent* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UAnimSequenceBase* K2Node_Event_attackAnimation, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue);
};

#endif

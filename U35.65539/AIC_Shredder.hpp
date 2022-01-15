#ifndef UE4SS_SDK_AIC_Shredder_HPP
#define UE4SS_SDK_AIC_Shredder_HPP

class AAIC_Shredder_C : UFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    AENE_Jelly_Passive_Mother_C* Mother;
    float SpeedModifier;

    AENE_Jelly_Passive_Mother_C* FindNewMother(TArray<UENE_Jelly_Passive_Mother_C*> PotentialMothers, bool Temp_bool_Variable, UENE_Jelly_Passive_Mother_C* Temp_object_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UENE_Jelly_Passive_Mother_C* CallFunc_Array_Get_Item, APawn* CallFunc_K2_GetPawn_ReturnValue, UENE_Jelly_Passive_Mother_C* K2Node_Select_Default, FVector CallFunc_K2_GetActorLocation_ReturnValue, TArray<UENE_Jelly_Passive_Mother_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue_1, UENE_Jelly_Passive_Mother_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
    void ReceiveBeginPlay();
    void OnDeath(UHealthComponentBase* HealthComponent);
    void ReceivePossess(APawn* PossessedPawn);
    void Speed Changer();
    void StartSpeedModifier();
    void ExecuteUbergraph_AIC_Shredder(int32 EntryPoint, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_RunBehaviorTree_ReturnValue, UHealthComponentBase* K2Node_CustomEvent_HealthComponent, APawn* K2Node_Event_PossessedPawn, UEnemyHealthComponent* CallFunc_GetComponentByClass_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UENE_Shredder_C* K2Node_DynamicCast_AsENE_Shredder, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEnemyAlertet_ReturnValue, int32 CallFunc_AddModifier_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, DeathSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_PercentageCheck_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
}

#endif

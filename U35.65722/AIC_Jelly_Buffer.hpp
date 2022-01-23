#ifndef UE4SS_SDK_AIC_Jelly_Buffer_HPP
#define UE4SS_SDK_AIC_Jelly_Buffer_HPP

class AAIC_Jelly_Buffer_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AENE_Jelly_Passive_Mother_C* Mother;

    class AENE_Jelly_Passive_Mother_C* FindNewMother(TArray<class AENE_Jelly_Passive_Mother_C*> PotentialMothers, bool Temp_bool_Variable, class AENE_Jelly_Passive_Mother_C* Temp_object_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AENE_Jelly_Passive_Mother_C* CallFunc_Array_Get_Item, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AENE_Jelly_Passive_Mother_C* K2Node_Select_Default, FVector CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AENE_Jelly_Passive_Mother_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue_1, class AENE_Jelly_Passive_Mother_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
    void ReceiveBeginPlay();
    void OnDeath(class UHealthComponentBase* HealthComponent);
    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_Jelly_Buffer(int32 EntryPoint, FExecuteUbergraph_AIC_Jelly_BufferK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_RunBehaviorTree_ReturnValue, class UHealthComponentBase* K2Node_CustomEvent_HealthComponent, class APawn* K2Node_Event_PossessedPawn, class UEnemyHealthComponent* CallFunc_GetComponentByClass_ReturnValue);
};

#endif

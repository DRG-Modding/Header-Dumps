#ifndef UE4SS_SDK_SER_FindAlly_HPP
#define UE4SS_SDK_SER_FindAlly_HPP

class USER_FindAlly_C : UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetKey;
    float MaxRange;
    FGameplayTagQuery AllyQuery;
    float RangeToReCheck;
    bool MustBeAlive;

    void ReceiveTickAI(UAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_SER_FindAlly(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_RandomFloat_ReturnValue, APawn* CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, UFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess, InterfaceProperty K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_1, UHealthComponentBase* CallFunc_GetHealthComponent_ReturnValue, FGameplayTagContainer CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FGameplayTagContainer Temp_struct_Variable, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
}

#endif

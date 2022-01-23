#ifndef UE4SS_SDK_BP_PassedOut_HPP
#define UE4SS_SDK_BP_PassedOut_HPP

class UBP_PassedOut_C : public UPassedOutStateComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTransform Start Transform;
    bool WakeInBed;

    void AllPassedOut(bool& AllPassedOut, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, ECharacterState CallFunc_GetCurrentState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
    void ReceiveBeginPlay();
    void BeginFadeToBlack();
    void ReceiveStateEnter();
    void ReceiveStateExit();
    void Turn Off Juke Box();
    void Remove Drinking Mugs();
    void ReceiveTeamPassedOut();
    void ExecuteUbergraph_BP_PassedOut(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetStateActive_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class AController* CallFunc_GetController_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class UAudioComponent* CallFunc_PlayPitched_ReturnValue, FHitResult CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<class ABar_Glass_Physics_Base_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABar_Glass_Physics_Base_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AFSDGameModeSpaceRig* K2Node_DynamicCast_AsFSDGame_Mode_Space_Rig, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetStateActive_ReturnValue_1, class AActor* CallFunc_GetFreeSpawnOfType_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ASpacerigStart* K2Node_DynamicCast_AsSpacerig_Start, bool K2Node_DynamicCast_bSuccess_2, const FTransform CallFunc_GetTransform_ReturnValue_1, TArray<class AActor*>& CallFunc_GetAllActorsWithInterface_OutActors, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, TScriptInterface<class IIJukebox_C> K2Node_DynamicCast_AsIJukebox, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Less_IntInt_ReturnValue_1);
};

#endif

#ifndef UE4SS_SDK_EVENT_Defense_Base_HPP
#define UE4SS_SDK_EVENT_Defense_Base_HPP

class AEVENT_Defense_Base_C : AGameEvent
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* Audio;
    UStaticMeshComponent* SphereMesh;
    USphereComponent* Sphere;
    UStaticMeshComponent* OuterSphereMesh;
    UStaticMeshComponent* InnerSphereMesh;
    float Progress;
    float Duration;
    float InitialProgress;
    TArray<APlayerCharacter*> DefendingPlayers;
    UEWC_Salvage_Defend_C* Wave;
    UHUD_Defend_Event_C* Event Widget;
    FText Event Text;
    FText Event Succeed Text;
    FText Event Failed Text;
    float Extra Defender Bonus;
    int32 Defending player count;
    UDialogDataAsset* 75p Progress Shout;
    UDialogDataAsset* 50p Progress Shout;
    UDialogDataAsset* Event Start Shout;
    UDialogDataAsset* Event Fail Warning Shout;
    FEVENT_Defense_Base_CDefendSucceded DefendSucceded;
    void DefendSucceded();
    FEVENT_Defense_Base_CDefendFailed DefendFailed;
    void DefendFailed();
    FEVENT_Defense_Base_CProgressUpdated ProgressUpdated;
    void ProgressUpdated(float NewProgress);
    FEVENT_Defense_Base_CDefenderCountUpdate DefenderCountUpdate;
    void DefenderCountUpdate(int32 DefenderCount);

    void UpdateDefenderCount(int32 Defenders, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, UPlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void GetDefenderBonus(int32 DefendingPlayerCount, float& DefenseBonus, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    void AnyPlayersDefending(bool& IsPlayersDefending, bool CallFunc_Greater_IntInt_ReturnValue);
    void OnRep_Defending player count();
    void OnRep_Progress(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void EventFailed();
    void EventSucceded();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_EVENT_Defense_Base(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, float Temp_float_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Variable, bool CallFunc_HasAuthority_ReturnValue_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_4, float K2Node_Event_DeltaSeconds, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, UHUD_Defend_Event_C* CallFunc_Create_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess_2, AHUD* CallFunc_GetHUD_ReturnValue, UBP_HUD_C* K2Node_DynamicCast_AsBP_HUD, bool K2Node_DynamicCast_bSuccess_3, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UBP_GameMode_C* K2Node_DynamicCast_AsBP_Game_Mode, bool K2Node_DynamicCast_bSuccess_4, FVector CallFunc_K2_GetActorLocation_ReturnValue, UEWC_Salvage_Defend_C* CallFunc_TriggerWave_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, bool CallFunc_IsPlayInEditor_ReturnValue, bool CallFunc_AnyPlayersDefending_IsPlayersDefending, float K2Node_Select_Default, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_AnyPlayersDefending_IsPlayersDefending_1, float CallFunc_GetDefenderBonus_DefenseBonus, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    void DefenderCountUpdate__DelegateSignature(int32 DefenderCount);
    void ProgressUpdated__DelegateSignature(float NewProgress);
    void DefendFailed__DelegateSignature();
    void DefendSucceded__DelegateSignature();
}

#endif

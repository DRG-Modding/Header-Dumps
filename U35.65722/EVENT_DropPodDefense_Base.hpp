#ifndef UE4SS_SDK_EVENT_DropPodDefense_Base_HPP
#define UE4SS_SDK_EVENT_DropPodDefense_Base_HPP

class AEVENT_DropPodDefense_Base_C : public AGameEvent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Audio;
    class UStaticMeshComponent* SphereInner1;
    class UStaticMeshComponent* SphereInner2;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* Sphere1;
    float Progress;
    float Duration;
    float InitialProgress;
    TArray<class APlayerCharacter*> DefendingPlayers;
    FEVENT_DropPodDefense_Base_CDefendSucceded DefendSucceded;
    void DefendSucceded();
    FEVENT_DropPodDefense_Base_CDefendFailed DefendFailed;
    void DefendFailed();
    FEVENT_DropPodDefense_Base_CProgressUpdated ProgressUpdated;
    void ProgressUpdated(float NewProgress);
    class UEWC_Salvage_Defend_C* Wave;
    class UHUD_Salvage_Defend_C* Event Widget;
    FText EventText;
    float ExtraDefenderBonus;
    int32 DefendingPlayerCount;
    FEVENT_DropPodDefense_Base_CDefenderCountUpdated DefenderCountUpdated;
    void DefenderCountUpdated(int32 DefenderCount);
    FText EventSuccedText;
    class UDialogDataAsset* EventStartShout;
    class UDialogDataAsset* EventFailWarningShout;
    class UDialogDataAsset* 75pProgressShout;
    class UDialogDataAsset* 50pProgressShout;

    void OnRep_DefendingPlayerCount();
    void UpdateDefenderCount(int32 Defenders, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, class APlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    float GetDefenderBonus(int32 DefendingPlayersclass AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    bool AnyPlayersDefending(int32 Defenders, bool CallFunc_Greater_IntInt_ReturnValue);
    void OnRep_Progress(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void EventSucceded();
    void EventFailed();
    void ExecuteUbergraph_EVENT_DropPodDefense_Base(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, float K2Node_Event_DeltaSeconds, float CallFunc_Subtract_FloatFloat_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UHUD_Salvage_Defend_C* CallFunc_Create_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess_2, class AHUD* CallFunc_GetHUD_ReturnValue, class ABP_HUD_C* K2Node_DynamicCast_AsBP_HUD, bool K2Node_DynamicCast_bSuccess_3, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class ABP_GameMode_C* K2Node_DynamicCast_AsBP_Game_Mode, bool K2Node_DynamicCast_bSuccess_4, bool Temp_bool_Has_Been_Initd_Variable_2, class UEWC_Salvage_Defend_C* CallFunc_TriggerWave_ReturnValue, bool CallFunc_AnyPlayersDefending_ReturnValue, float CallFunc_GetDefenderBonus_ReturnValue, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue, float K2Node_Select_Default, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_AnyPlayersDefending_ReturnValue_1, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1);
    void DefenderCountUpdated__DelegateSignature(int32 DefenderCount);
    void ProgressUpdated__DelegateSignature(float NewProgress);
    void DefendFailed__DelegateSignature();
    void DefendSucceded__DelegateSignature();
};

#endif

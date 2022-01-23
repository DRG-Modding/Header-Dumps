#ifndef UE4SS_SDK_BP_SentryGun_Moveable_HPP
#define UE4SS_SDK_BP_SentryGun_Moveable_HPP

class ABP_SentryGun_Moveable_C : public ARecallableSentryGun
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_SentryGunMovementTrail;
    class UAudioComponent* AudioMoving;
    class UChildActorComponent* SentryGunActor;
    bool ReturnOnNoAmmo;
    class ARecallableSentryGunItem* Item;
    bool ShowAllOutlines;

    void GetStateDescription(FText& Description, class ARedeployableSentryGun* Sentry, FText Temp_text_Variable, bool Temp_bool_Variable, FText Temp_text_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, class ARedeployableSentryGun* K2Node_DynamicCast_AsRedeployable_Sentry_Gun, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetAmmoLeft_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FText Temp_text_Variable_2, bool K2Node_SwitchEnum_CmpSuccess_1, bool Temp_bool_Variable_1, float CallFunc_GetDeployProgress_ReturnValue, FText K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FText K2Node_Select_Default_1);
    void SpawnAudioOnPlayer(class USoundBase* Audio, class APlayerCharacter* Player, class APawn* CallFunc_GetInstigator_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    TSubclassOf<class ASentryGun> GetSentryGunClass(TSubclassOf<class ASentryGun> K2Node_ClassDynamicCast_AsSentry_Gun, bool K2Node_ClassDynamicCast_bSuccess);
    void GetSentryOwner(class APlayerCharacter*& AsPlayer Character, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1);
    class ASentryGun* GetSentryGun(class ARedeployableSentryGun* K2Node_DynamicCast_AsRedeployable_Sentry_Gun, bool K2Node_DynamicCast_bSuccess);
    void ReceiveBeginPlay();
    void OnMoveRequested();
    void OnStateChanged_Event(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState);
    void ReceiveOnSentryReady(class ASentryGun* SentryGun, class APlayerCharacter* PlayerCharacter);
    void OnAmmoCountChanged_Event_0(int32 AmmoCount, int32 Change);
    void AudioReadyToBuild();
    void OnMoving();
    void OnMoveFinished(bool returnedHome);
    void AudioBeginMove();
    void AudioMoveFinished();
    void AudioReturnedHome();
    void ReceiveOnStateChanged();
    void Update Outline And Icon();
    void OnSentryStateChanged(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState);
    void OnToggleOutline_Event(bool Visible);
    void OnItemEquipped_Event(class AItem* Item);
    void OnSelectedItemChanged(class ARecallableSentryGun* SentryGun);
    void ExecuteUbergraph_BP_SentryGun_Moveable(int32 EntryPoint, FExecuteUbergraph_BP_SentryGun_MoveableK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_BP_SentryGun_MoveableK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasAuthority_ReturnValue, FExecuteUbergraph_BP_SentryGun_MoveableK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_HasAuthority_ReturnValue_1, class ARedeployableSentryGun* K2Node_DynamicCast_AsRedeployable_Sentry_Gun, bool K2Node_DynamicCast_bSuccess, class USoundBase* Temp_object_Variable, class APawn* CallFunc_GetInstigator_ReturnValue, class USoundBase* Temp_object_Variable_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, class ARedeployableSentryGun* K2Node_DynamicCast_AsRedeployable_Sentry_Gun_1, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_GetInstigator_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class ARedeployableSentryGun* K2Node_CustomEvent_Sender_1, ERedeployableSentryGunState K2Node_CustomEvent_newState_1, bool CallFunc_GetIsMoveRequested_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FExecuteUbergraph_BP_SentryGun_MoveableK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, class ARedeployableSentryGun* K2Node_DynamicCast_AsRedeployable_Sentry_Gun_2, bool K2Node_DynamicCast_bSuccess_3, class ASentryGun* K2Node_Event_SentryGun, class APlayerCharacter* K2Node_Event_PlayerCharacter, class ARedeployableSentryGun* K2Node_DynamicCast_AsRedeployable_Sentry_Gun_3, bool K2Node_DynamicCast_bSuccess_4, class APawn* CallFunc_GetInstigator_ReturnValue_2, FExecuteUbergraph_BP_SentryGun_MoveableK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, int32 K2Node_CustomEvent_ammoCount, int32 K2Node_CustomEvent_Change, bool CallFunc_LessEqual_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool K2Node_Event_returnedHome, ERecallableActorState Temp_byte_Variable, bool CallFunc_HasAuthority_ReturnValue_2, class ARedeployableSentryGun* K2Node_DynamicCast_AsRedeployable_Sentry_Gun_4, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_GetIsDismantled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_3, FExecuteUbergraph_BP_SentryGun_MoveableK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, class USoundBase* Temp_object_Variable_2, bool CallFunc_GetIsMovingOrMoveRequested_ReturnValue, class ARedeployableSentryGun* K2Node_CustomEvent_Sender, ERedeployableSentryGunState K2Node_CustomEvent_newState, bool CallFunc_BooleanOR_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, bool K2Node_CustomEvent_Visible, class USoundBase* K2Node_Select_Default, class AItem* K2Node_CustomEvent_Item, class APawn* CallFunc_GetInstigator_ReturnValue_3, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_6, class ARecallableSentryGun* K2Node_CustomEvent_SentryGun, bool CallFunc_IsLocallyControlled_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ARecallableSentryGunItem* K2Node_DynamicCast_AsRecallable_Sentry_Gun_Item, bool K2Node_DynamicCast_bSuccess_7);
};

#endif

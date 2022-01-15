#ifndef UE4SS_SDK_BP_SentryGun_Moveable_HPP
#define UE4SS_SDK_BP_SentryGun_Moveable_HPP

class ABP_SentryGun_Moveable_C : URecallableSentryGun
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_SentryGunMovementTrail;
    UAudioComponent* AudioMoving;
    UChildActorComponent* SentryGunActor;
    bool ReturnOnNoAmmo;
    ARecallableSentryGunItem* Item;
    bool ShowAllOutlines;

    void GetStateDescription(FText& Description, URedeployableSentryGun* Sentry, FText Temp_text_Variable, bool Temp_bool_Variable, FText Temp_text_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, URedeployableSentryGun* K2Node_DynamicCast_AsRedeployable_Sentry_Gun, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetAmmoLeft_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FText Temp_text_Variable_2, bool K2Node_SwitchEnum_CmpSuccess_1, bool Temp_bool_Variable_1, float CallFunc_GetDeployProgress_ReturnValue, FText K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FText K2Node_Select_Default_1);
    void SpawnAudioOnPlayer(USoundBase* Audio, UPlayerCharacter* Player, APawn* CallFunc_GetInstigator_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    TSubclassOf<ASentryGun> GetSentryGunClass(TSubclassOf<ASentryGun> K2Node_ClassDynamicCast_AsSentry_Gun, bool K2Node_ClassDynamicCast_bSuccess);
    void GetSentryOwner(UPlayerCharacter*& AsPlayer Character, AActor* CallFunc_GetOwner_ReturnValue, APawn* CallFunc_GetInstigator_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1);
    ASentryGun* GetSentryGun(URedeployableSentryGun* K2Node_DynamicCast_AsRedeployable_Sentry_Gun, bool K2Node_DynamicCast_bSuccess);
    void ReceiveBeginPlay();
    void OnMoveRequested();
    void OnStateChanged_Event(URedeployableSentryGun* Sender, ERedeployableSentryGunState NewState);
    void ReceiveOnSentryReady(ASentryGun* SentryGun, UPlayerCharacter* PlayerCharacter);
    void OnAmmoCountChanged_Event_0(int32 AmmoCount, int32 Change);
    void AudioReadyToBuild();
    void OnMoving();
    void OnMoveFinished(bool returnedHome);
    void AudioBeginMove();
    void AudioMoveFinished();
    void AudioReturnedHome();
    void ReceiveOnStateChanged();
    void Update Outline And Icon();
    void OnSentryStateChanged(URedeployableSentryGun* Sender, ERedeployableSentryGunState NewState);
    void OnToggleOutline_Event(bool Visible);
    void OnItemEquipped_Event(AItem* Item);
    void OnSelectedItemChanged(URecallableSentryGun* SentryGun);
    void ExecuteUbergraph_BP_SentryGun_Moveable(int32 EntryPoint, OnStateChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ItemDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasAuthority_ReturnValue, RecallableSentryGunSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_HasAuthority_ReturnValue_1, URedeployableSentryGun* K2Node_DynamicCast_AsRedeployable_Sentry_Gun, bool K2Node_DynamicCast_bSuccess, USoundBase* Temp_object_Variable, APawn* CallFunc_GetInstigator_ReturnValue, USoundBase* Temp_object_Variable_1, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, URedeployableSentryGun* K2Node_DynamicCast_AsRedeployable_Sentry_Gun_1, bool K2Node_DynamicCast_bSuccess_2, APawn* CallFunc_GetInstigator_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, URedeployableSentryGun* K2Node_CustomEvent_Sender_1, ERedeployableSentryGunState K2Node_CustomEvent_newState_1, bool CallFunc_GetIsMoveRequested_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, ToggleOutlineSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, URedeployableSentryGun* K2Node_DynamicCast_AsRedeployable_Sentry_Gun_2, bool K2Node_DynamicCast_bSuccess_3, ASentryGun* K2Node_Event_SentryGun, UPlayerCharacter* K2Node_Event_PlayerCharacter, URedeployableSentryGun* K2Node_DynamicCast_AsRedeployable_Sentry_Gun_3, bool K2Node_DynamicCast_bSuccess_4, APawn* CallFunc_GetInstigator_ReturnValue_2, OnStateChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, int32 K2Node_CustomEvent_ammoCount, int32 K2Node_CustomEvent_Change, bool CallFunc_LessEqual_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool K2Node_Event_returnedHome, ERecallableActorState Temp_byte_Variable, bool CallFunc_HasAuthority_ReturnValue_2, URedeployableSentryGun* K2Node_DynamicCast_AsRedeployable_Sentry_Gun_4, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_GetIsDismantled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_3, AmmoCountChangedEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, USoundBase* Temp_object_Variable_2, bool CallFunc_GetIsMovingOrMoveRequested_ReturnValue, URedeployableSentryGun* K2Node_CustomEvent_Sender, ERedeployableSentryGunState K2Node_CustomEvent_newState, bool CallFunc_BooleanOR_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, USoundBase* Temp_object_Variable_3, USoundBase* Temp_object_Variable_4, USoundBase* Temp_object_Variable_5, bool K2Node_CustomEvent_Visible, USoundBase* K2Node_Select_Default, AItem* K2Node_CustomEvent_Item, APawn* CallFunc_GetInstigator_ReturnValue_3, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_6, URecallableSentryGun* K2Node_CustomEvent_SentryGun, bool CallFunc_IsLocallyControlled_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, URecallableSentryGunItem* K2Node_DynamicCast_AsRecallable_Sentry_Gun_Item, bool K2Node_DynamicCast_bSuccess_7);
}

#endif

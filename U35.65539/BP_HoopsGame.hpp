#ifndef UE4SS_SDK_BP_HoopsGame_HPP
#define UE4SS_SDK_BP_HoopsGame_HPP

class ABP_HoopsGame_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* R;
    UBoxComponent* E;
    UBoxComponent* Box1;
    UWidgetComponent* Widget Previous Scores;
    UStaticMeshComponent* Mesh_ScoreBoardPrevious;
    UWidgetComponent* Widget Score;
    UStaticMeshComponent* Mesh_Scoreboard;
    USkeletalMeshComponent* Mesh_SlideAnim;
    UPointLightComponent* PointLight;
    UParticleSystemComponent* P_Hoops_Edge;
    UStaticMeshComponent* Mesh_Forcefield;
    UBoxComponent* FailCollision;
    UStaticMeshComponent* RestartButton_Mesh;
    UBoxComponent* RestartButton_Collider;
    UBillboardComponent* RestartButton;
    UBillboardComponent* DestinationRight;
    UBoxComponent* Box;
    UCapsuleComponent* Collision;
    UCapsuleComponent* Capsule5;
    UCapsuleComponent* Capsule4;
    UCapsuleComponent* Capsule3;
    UCapsuleComponent* Capsule2;
    UCapsuleComponent* Capsule1;
    UCapsuleComponent* Capsule;
    UStaticMeshComponent* HoopMesh;
    USceneComponent* Hoop;
    UInstantUsable* InstantUsable;
    UBillboardComponent* DestinationLeft;
    USceneComponent* DefaultSceneRoot;
    int32 CurrentScore;
    int32 Cycle;
    int32 CycleLastScore;
    int32 ComboMultiplier;
    int32 ComboMax;
    int32 RedBarrelScore;
    int32 BlueBarrelScore;
    int32 BarrelComboCountAchievement;
    int32 ComboInitial;
    FLinearColor Color Combo 1;
    FLinearColor Color Combo 2;
    FLinearColor Color Combo 3;
    ABP_BarrelSpawner_C* BarrelSpawner;
    TArray<int32> Scores;
    UFSDAchievement* BarrelScoreAchievement;
    UFSDAchievement* DarwinAwardAchievement;
    UFSDAchievement* BarrelKickerAchievement;
    APlayerCharacter* LastActivePlayer;
    float NextFlipTimeServer;
    bool IsMovingRightServer;
    float NextFlipTimeLocal;
    bool IsMovingRightLocal;
    FRandomStream RandomSeed;
    float MoveTime;

    void OnRep_IsMovingRightServer(bool CallFunc_NotEqual_BoolBool_ReturnValue);
    void OnRep_Scores(UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UUI_Hoop_History_C* K2Node_DynamicCast_AsUI_Hoop_History, bool K2Node_DynamicCast_bSuccess);
    void GetBarrelScoreData(UBP_Phys_Barrel01_C* Barrel, USoundCue*& Audio, UBP_Phys_Barrel01_C*& OutBarrel, int32& Points, UBP_Phys_Barrel01_Red_C* K2Node_DynamicCast_AsBP_Phys_Barrel_01_Red, bool K2Node_DynamicCast_bSuccess);
    void OnRep_ComboMultiplier(UUserWidget* Widget, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, UHoopsScore_Widget_C* K2Node_DynamicCast_AsHoops_Score_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, FSlateColor K2Node_MakeStruct_SlateColor_1, FSlateColor K2Node_MakeStruct_SlateColor_2);
    void OnRep_CurrentScore(float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UHoopsScore_Widget_C* K2Node_DynamicCast_AsHoops_Score_Widget, bool K2Node_DynamicCast_bSuccess);
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Restart();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void StoreScore(int32 NewScore);
    void BndEvt__FailCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Cheat_ToggleHoopGameMovement();
    void Set Latest Barrel kicker(UPlayerCharacter* Kicked by);
    void On Barrel In Hoop(UBP_Phys_Barrel01_C* Barrel);
    void On Barglass In Hoop(UBar_Glass_Physics_C* Glass);
    void On Player In Hoop(UPlayerCharacter* Player);
    void ReceiveTick(float DeltaSeconds);
    void OnSpaceballInHoop(int32 ScoreToAdd);
    void ExecuteUbergraph_BP_HoopsGame(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1, UBP_Spacerig_Spaceball_C* K2Node_DynamicCast_AsBP_Spacerig_Spaceball, bool K2Node_DynamicCast_bSuccess, UBP_Phys_Hammer_C* K2Node_DynamicCast_AsBP_Phys_Hammer, bool K2Node_DynamicCast_bSuccess_1, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_2, UBar_Glass_Physics_C* K2Node_DynamicCast_AsBar_Glass_Physics, bool K2Node_DynamicCast_bSuccess_3, FVector CallFunc_K2_GetActorLocation_ReturnValue, UBP_Phys_Barrel01_C* K2Node_DynamicCast_AsBP_Phys_Barrel_01, bool K2Node_DynamicCast_bSuccess_4, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_HasAuthority_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UUI_Hoop_History_C* K2Node_DynamicCast_AsUI_Hoop_History, bool K2Node_DynamicCast_bSuccess_5, int32 CallFunc_GetHistoryCount_History_Count, int32 K2Node_CustomEvent_NewScore, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UUI_Hoop_History_C* K2Node_DynamicCast_AsUI_Hoop_History_1, bool K2Node_DynamicCast_bSuccess_6, UBP_Phys_Barrel01_C* K2Node_DynamicCast_AsBP_Phys_Barrel_01_1, bool K2Node_DynamicCast_bSuccess_7, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, OnSpawnBarrelKicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_4, UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, bool CallFunc_IsValid_ReturnValue_4, UPlayerCharacter* K2Node_CustomEvent_Kicked_by, bool CallFunc_IsValid_ReturnValue_5, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, UBP_Phys_Barrel01_C* K2Node_CustomEvent_Barrel, UBar_Glass_Physics_C* K2Node_CustomEvent_Glass, bool CallFunc_IsValid_ReturnValue_6, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_8, USoundCue* CallFunc_GetBarrelScoreData_Audio, UBP_Phys_Barrel01_C* CallFunc_GetBarrelScoreData_OutBarrel, int32 CallFunc_GetBarrelScoreData_Points, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, UPlayerCharacter* K2Node_CustomEvent_player, bool CallFunc_HasAuthority_ReturnValue_5, AActor* CallFunc_GetCarriedItem_ReturnValue, UBP_Spacerig_Spaceball_C* K2Node_DynamicCast_AsBP_Spacerig_Spaceball_1, bool K2Node_DynamicCast_bSuccess_9, UCharacterStateComponent* CallFunc_GetCharacterStateComponent_ReturnValue, bool CallFunc_IsStateActive_ReturnValue, UDeadStateComponent* K2Node_DynamicCast_AsDead_State_Component, bool K2Node_DynamicCast_bSuccess_10, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue_1, UCharacterIntoxicationComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsDrunk_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, CheatEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue_2, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_2, float K2Node_Event_DeltaSeconds, UHoopsScore_Widget_C* K2Node_DynamicCast_AsHoops_Score_Widget, bool K2Node_DynamicCast_bSuccess_11, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_6, float CallFunc_FInterpTo_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, UGameStateBase* CallFunc_GetGameState_ReturnValue, UGameStateBase* CallFunc_GetGameState_ReturnValue_1, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 K2Node_CustomEvent_ScoreToAdd, int32 CallFunc_Add_IntInt_ReturnValue_6, FVector CallFunc_K2_GetComponentLocation_ReturnValue_6, int32 Temp_int_Variable, float CallFunc_Conv_IntToFloat_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_7, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, USceneComponent* K2Node_Select_Default, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue_3, FVector CallFunc_Subtract_VectorVector_ReturnValue, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess_12, FVector CallFunc_Divide_VectorFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FHitResult CallFunc_K2_AddRelativeLocation_SweepHitResult);
}

#endif

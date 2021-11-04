// Class FSD.AcceptInviteBlueprintCallProxy
// Size: 0x88 (Inherited: 0x30)
struct UAcceptInviteBlueprintCallProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	UObject* WorldContextObject; // 0x50(0x08)

	UAcceptInviteBlueprintCallProxy* AcceptInvite(UObject* WorldContextObject, FString ListName, FString UserId);
};

// Class FSD.Objective
// Size: 0x178 (Inherited: 0xb0)
struct UObjective : UActorComponent {
	FMulticastInlineDelegate OnObjectiveUpdated; // 0xb0(0x10)
	UObjectiveWidget* ObjectiveWidgetClass; // 0xc8(0x08)
	FMissionShouts MissionShouts; // 0xd0(0x38)
	FText MissionDescription; // 0x108(0x18)
	int32_t CompletionRewardInCredits; // 0x120(0x04)
	int32_t CompletionRewardInXP; // 0x124(0x04)
	bool ScaleObjectiveToMission; // 0x128(0x01)
	bool RequiredReturnObjectiveCompleted; // 0x129(0x01)
	UMissionStat* ObjectiveCompletedStat; // 0x130(0x08)
	TSoftClassPtr<UObject> OptionalObjectiveWidgetClass; // 0x138(0x28)
	int32_t IsPrimaryObjective; // 0x160(0x04)
	float MissionScale; // 0x164(0x04)
	TArray<UBiome*> BannedInBiomes; // 0x168(0x10)

	void SignalObjectiveUpdated();
	void Receive_StartTracking();
	void OnRep_IsPrimaryObjective();
	bool IsTutorialObjective();
	bool IsPrimary();
	bool IsObjectiveResource(UResourceData* InResource);
	bool IsFinalBattle();
	bool IsCompleted();
	bool HasReplicated();
	UObjectiveWidget* GetWidgetClassOrDefault(UObjectiveWidget* DefaultWidgetClass);
	int32_t GetRewardXP();
	FCreditsReward GetRewardCredits();
	UOptionalObjectiveWidget* GetOptionalMissionWidget();
	FText GetObjectiveText();
	UTexture2D* GetObjectiveIconFromClass(UObjective* objectiveClass);
	UTexture2D* GetObjectiveIcon();
	FText GetObjectiveDescriptionFromClass(UObjective* objectiveClass, float missionLength);
	FText GetObjectiveDescription(float missionLength);
	int32_t GetObjectiveAmountFromClass(UObjective* objectiveClass, float missionLength);
	int32_t GetObjectiveAmount(float missionLength);
	FObjectiveMissionIcon GetMissionIcon();
	FText GetInMissionText();
	FText GetInMissionCounterText();
	UTexture2D* GetInMissionCounterIcon();
};

// Class FSD.ActivationOjective
// Size: 0x180 (Inherited: 0x178)
struct UActivationOjective : UObjective {
	int32_t ObjectivesFound; // 0x178(0x04)
	int32_t ObjectivesToFind; // 0x17c(0x04)

	void OnRep_ObjectivesToFind(int32_t prevAmount);
	void OnRep_ObjectivesFound(int32_t prevAmount);
};

// Class FSD.ActivationObject
// Size: 0x230 (Inherited: 0x220)
struct AActivationObject : AActor {
	USingleUsableComponent* Usable; // 0x220(0x08)
	bool HasBeenUsed; // 0x228(0x01)

	void OnUsedBy(APlayerCharacter* User, enum class EInputKeys Key);
};

// Class FSD.ActivitySubSystem
// Size: 0x58 (Inherited: 0x30)
struct UActivitySubSystem : UGameInstanceSubsystem {

	void StartActivity(APlayerState* PlayerState, UGameActivityType* activity);
	void ShowPlayerReviewUI(bool ReviewActiveMatch);
	bool PlayerReviewUIAvailable(bool ReviewActiveMatch);
	void EndActivity(APlayerState* PlayerState, UGameActivityType* activity);
};

// Class FSD.GameActivitySettings
// Size: 0x40 (Inherited: 0x30)
struct UGameActivitySettings : UDataAsset {
	TArray<TSoftObjectPtr<UGameActivityType>> GameActivites; // 0x30(0x10)
};

// Class FSD.GameActivityType
// Size: 0x58 (Inherited: 0x30)
struct UGameActivityType : UDataAsset {
	FString ActivityId; // 0x30(0x10)
	enum class EActivityType ActivityType; // 0x40(0x01)
	TArray<FGameActivitySubTask> SubTasks; // 0x48(0x10)
};

// Class FSD.GameActivityAssignmentType
// Size: 0x60 (Inherited: 0x58)
struct UGameActivityAssignmentType : UGameActivityType {
};

// Class FSD.GameActivityMissionType
// Size: 0x80 (Inherited: 0x58)
struct UGameActivityMissionType : UGameActivityType {
	TSoftObjectPtr<UMissionTemplate> ActivityMission; // 0x58(0x28)
};

// Class FSD.Reward
// Size: 0x30 (Inherited: 0x30)
struct UReward : UDataAsset {
};

// Class FSD.ActivityCardReward
// Size: 0x38 (Inherited: 0x30)
struct UActivityCardReward : UReward {
	UGameActivityType* activity; // 0x30(0x08)
};

// Class FSD.ActorFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UActorFunctionLibrary : UBlueprintFunctionLibrary {

	void UnlockSpecificCharacters(UObject* WorldContextObject, TArray<APlayerCharacter*> Characters, enum class ECharacterState UnlockIf, enum class ECharacterState UnlockTo);
	void UnlockCharacters(UObject* WorldContextObject);
	float TimeSince(UObject* WorldContextObject, float Time);
	void SetScalarParameters(FName ParameterName, float Value, TArray<UMaterialInstanceDynamic*> Materials);
	void PlayCueOnClient(APlayerController* Target, USoundCue* cue);
	void PlayCueOnAll(UObject* WorldContextObject, USoundCue* cue);
	float PingPong(float Time, float Length, bool normalize);
	float MoveTowards(float current, float End, float step);
	void LockSpecificCharactersIfState(UObject* WorldContextObject, TArray<APlayerCharacter*> Characters, enum class ECharacterState stateToLock);
	void LockSpecificCharacters(UObject* WorldContextObject, TArray<APlayerCharacter*> Characters);
	bool LockSpecificCharacterIfState(UObject* WorldContextObject, APlayerCharacter* Character, enum class ECharacterState LockIf, enum class ECharacterState LockTo);
	void LockCharacters(UObject* WorldContextObject);
	UWindowWidget* LoadWindowWidgetClass(TSoftClassPtr<UObject> WidgetClass);
	UUserWidget* LoadWidgetClass(TSoftClassPtr<UObject> WidgetClass);
	UObject* LoadClass(TSoftClassPtr<UObject> softReference);
	void KillActorWithEffects(AActor* Actor, USceneComponent* visualsToHide, USoundCue* deathSound, UFXSystemAsset* deathParticles, float particleScale, UPathfinderCollisionComponent* pathColliderToDisable);
	bool IsWeakPoint(UFSDPhysicalMaterial* Material);
	bool IsSingleplayer(UObject* WorldContextObject);
	bool IsInRangeOfLocalPlayer(AActor* toActor, float MinDistance, float MaxDistance);
	bool IsCloseToLocalPlayer(AActor* toActor, float Distance);
	int32_t GetTotalHeroLevels(UObject* WorldContextObject, UPlayerCharacterID* characterID);
	FGuid GetSaveGameIDFromCharacterID(UPlayerCharacterID* characterID);
	FGuid GetSavegameID(UObject* objectClass);
	TArray<APlayerCharacter*> GetPlayersInRange(UObject* WorldContextObject, FVector Origin, float Radius, bool MustBeAlive);
	UItemID* GetItemID(AActor* itemClass);
	float GetHeroXP(UObject* WorldContextObject, UPlayerCharacterID* characterID);
	FText GetHeroSwitchToMessage(APlayerCharacter* playerClass);
	FString GetHeroSourceName(APlayerCharacter* playerClass);
	float GetHeroProgress(UObject* WorldContextObject, UPlayerCharacterID* characterID);
	FText GetHeroName(APlayerCharacter* playerClass);
	int32_t GetHeroLevel(UObject* WorldContextObject, UPlayerCharacterID* characterID);
	UInventoryList* GetHeroInventoryList(UPlayerCharacterID* characterID);
	FHeroInfo GetHeroInfo(APlayerCharacter* playerClass);
	UTexture2D* GetHeroImageSmall(APlayerCharacter* playerClass);
	UTexture2D* GetHeroImageFullSize(APlayerCharacter* playerClass);
	UTexture2D* GetHeroImage(APlayerCharacter* playerClass);
	FLinearColor GetHeroColor(APlayerCharacter* playerClass);
	UActorComponent* GetComponentFromClass(AActor* Actor, UActorComponent* ComponentClass);
	UActorComponent* GetComponentByClass(AActor* Actor, UActorComponent* ComponentClass);
	UPlayerCharacterID* GetCharacterIDFromCharacter(APlayerCharacter* Character);
	UPlayerCharacterID* GetCharacterID(APlayerCharacter* playerClass);
	TArray<APlayerCharacter*> GetAllPlayerCharacters(UObject* WorldContext);
	FVector GetActorTargetCenter(AActor* TargetActor);
	void FSDRemoveBlendable(UPostProcessComponent* PostProcessComponent, TScriptInterface<IBlendableInterface> InBlendableObject);
	void FSDRemoveAllWidgets(UObject* WorldContextObject);
	void FSDDumpCallStack(FString Msg);
	APlayerCharacter* FindNearestPlayerCharacter(UObject* WorldContextObject, FVector fromLocation, float MaxRadius, bool MustBeAlive, bool MustBeUnparalyzed, bool MustHaveLineOfSight);
	FVector FindLatejoinDroppodLocation(AFSDGameMode* GameMode);
	AActor* FindClosestEnemyFromLocation(FVector fromLocation, float range, bool LineOfSightCheck, UObject* WorldContextObject, FVector Offset);
	AActor* FindClosestEnemyFromActor(AActor* FromActor, float range, bool LineOfSightCheck, FGameplayTagQuery tagQuery, FVector Offset);
	FVector FindCharacterTeleportLocation(UObject* WorldContextObject, FVector closeToLocation, float desiredDistance);
	void FadeMaterials(UObject* WorldContextObject, UMeshComponent* Mesh, float Duration);
	float EvaluateRuntimeCurve(UObject* WorldContextObject, FRuntimeFloatCurve Curve, float Time);
	void DissolveMaterials(UObject* WorldContextObject, UMeshComponent* Mesh, float Duration);
	void DamagePlayersInArea(FVector Origin, AActor* Instigator, float Damage, float Radius, UDamageClass* DamageClass);
	UHealthComponentBase* DamageIfInRange(float MaxDistance, float Damage, AActor* Target, AActor* Attacker, UDamageClass* DamageClass);
	void DamageAllInAreaExcept(FVector Origin, AActor* Instigator, float Damage, float BlastRadius, float MaxDamageRadius, float minDamagePercent, TArray<AActor*> IgnoreActors, float friendlyFireModifier, UDamageClass* DamageClass);
	void DamageAllInArea(FVector Origin, AActor* Instigator, float Damage, float BlastRadius, float MaxDamageRadius, float minDamagePercent, float friendlyFireModifier, UDamageClass* DamageClass);
	TArray<UMaterialInstanceDynamic*> CreateDynamicMaterialInstances(UMeshComponent* Mesh);
	float AddHeroXP(UObject* WorldContextObject, UPlayerCharacterID* characterID, float Amount);
	void AddEnemyKill(APlayerCharacter* Instigator, UEnemyComponent* EnemyComponent, AFSDGameState* GameState);
	bool ActorMatchesTagQuery(FGameplayTagQuery Query, AActor* InActor);
};

// Class FSD.StatusEffectsFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UStatusEffectsFunctionLibrary : UBlueprintFunctionLibrary {

	float GetMaxResistance(UStatusEffect* StatusEffect);
	UDamageClass* GetDamageClass(UStatusEffect* StatusEffect);
	bool CanTrigger(UStatusEffect* StatusEffect, AActor* OtherActor);
};

// Class FSD.FrontendBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFrontendBlueprintLibrary : UBlueprintFunctionLibrary {

	void OpenURLInExternalBrowser(FString URL);
	bool IsShippingBuild();
	enum class EFSDTargetPlatform FSDTargetPlatform();
};

// Class FSD.ActorStateComponent
// Size: 0x100 (Inherited: 0xb0)
struct UActorStateComponent : UActorComponent {
	FMulticastInlineDelegate OnBeginState; // 0xb0(0x10)
	FMulticastInlineDelegate OnTickState; // 0xc0(0x10)
	FMulticastInlineDelegate OnEndState; // 0xd0(0x10)
	UActorStateComponent* CurrentState; // 0xe0(0x08)
	UActorStateComponent* NextState; // 0xe8(0x08)
	UActorStateComponent* MasterState; // 0xf0(0x08)
	float StateActiveTime; // 0xf8(0x04)

	void OnRep_CurrentState(UActorStateComponent* PreviousState);
	bool IsStateActive();
	void GotoState();
};

// Class FSD.FSDUserWidget
// Size: 0x250 (Inherited: 0x230)
struct UFSDUserWidget : UUserWidget {
	FMulticastInlineDelegate OnVisibilityChanged; // 0x230(0x10)
	APlayerCharacter* Character; // 0x248(0x08)

	void SetOpacity(float alpha);
	void ScaleByBaseResolution();
	void Refresh();
	void ReceiveNewVisibility(enum class ESlateVisibility NewVisibility);
	void OnCloseMenuReleased(bool Handled);
	void OnCloseMenuPressed(bool Handled);
	bool HasCharacter();
	float GetOpacity();
	AFSDPlayerState* GetFSDPlayerState();
	AItem* GetEquippedItem();
	float GetBaseResolutionScale();
	void BP_OnRefresh();
};

// Class FSD.ActorTrackingWidget
// Size: 0x278 (Inherited: 0x250)
struct UActorTrackingWidget : UFSDUserWidget {
	TWeakObjectPtr<USceneComponent> TargetComponent; // 0x250(0x08)
	float WorldHeightOffset; // 0x258(0x04)
	float ScaleBy; // 0x25c(0x04)
	FMargin ScreenMargin; // 0x260(0x10)
	int32_t WidgetZOrder; // 0x270(0x04)
	bool bTrackCenterOfMass; // 0x274(0x01)
	bool bHideWhenPlayerNearby; // 0x275(0x01)

	void SetTargetComponent(USceneComponent* Component);
	void SetTarget(AActor* Actor);
	void OnTargetSet(AActor* NewTarget);
	void OnTargetDistanceChanged(float Distance);
	void OnShow();
	void OnInViewChanged(bool inView, float Angle);
	AActor* GetTarget();
	FVector2D GetRenderTranslation();
	bool FindScreenPosition(APlayerController* PlayerController, FVector WorldLocation, FMargin Margin, FVector ScreenCord, float Angle);
	UActorTrackingWidget* CreateTrackingWidget(APlayerController* PlayerController, UActorTrackingWidget* WidgetType, USceneComponent* TargetComponent);
};

// Class FSD.ActorTrackingComponent
// Size: 0x210 (Inherited: 0x1f0)
struct UActorTrackingComponent : USceneComponent {
	UActorTrackingWidget* WidgetType; // 0x1f0(0x08)
	bool VisibleOnHoldTAB; // 0x1f8(0x01)
	bool VisibleFromStart; // 0x1f9(0x01)
	bool bIconHidden; // 0x1fa(0x01)
	TWeakObjectPtr<UActorTrackingWidget> Widget; // 0x1fc(0x08)

	void ToggleIcon(bool Visible);
	void OnHoldTAB(bool IsDown);
	bool IsIconVisible();
};

// Class FSD.AdicPuddle
// Size: 0x248 (Inherited: 0x220)
struct AAdicPuddle : AActor {
	USphereComponent* SphereTrigger; // 0x220(0x08)
	USoundBase* SpawnSound; // 0x228(0x08)
	UStatusEffect* InflictedStatusEffect; // 0x230(0x08)
	float LifeTime; // 0x240(0x04)

	void OnPuddleEndOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void OnPuddleBeginOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
};

// Class FSD.AdventureObjective
// Size: 0x178 (Inherited: 0x178)
struct UAdventureObjective : UObjective {
};

// Class FSD.AfflictionEffect
// Size: 0x28 (Inherited: 0x28)
struct UAfflictionEffect : UObject {

	bool ShouldInstantiate();
	void ReceiveEndEffect(UPawnAfflictionComponent* Target);
	void ReceiveBeginEffect(UPawnAfflictionComponent* Target);
};

// Class FSD.PawnFrozenUniqueAfflictionEffect
// Size: 0x28 (Inherited: 0x28)
struct UPawnFrozenUniqueAfflictionEffect : UAfflictionEffect {
};

// Class FSD.PawnBurningUniqueAfflictionEffect
// Size: 0x28 (Inherited: 0x28)
struct UPawnBurningUniqueAfflictionEffect : UAfflictionEffect {
};

// Class FSD.SpawnAtLocationParticleAfflictionEffect
// Size: 0x38 (Inherited: 0x28)
struct USpawnAtLocationParticleAfflictionEffect : UAfflictionEffect {
	FScaledEffect ScaledParticleEffect; // 0x28(0x10)
};

// Class FSD.AttachedParticlesAfflictionEffect
// Size: 0x48 (Inherited: 0x28)
struct UAttachedParticlesAfflictionEffect : UAfflictionEffect {
	UFXSystemAsset* ParticleEffect; // 0x28(0x08)
	TArray<UFXSystemAsset*> ParticleEffects; // 0x30(0x10)
	enum class EAfflictionSocket Socket; // 0x40(0x01)
	bool ScaleToActor; // 0x41(0x01)
	bool UseVisibilityHack; // 0x42(0x01)
};

// Class FSD.CharacterShoutAfflictionEffect
// Size: 0x30 (Inherited: 0x28)
struct UCharacterShoutAfflictionEffect : UAfflictionEffect {
	UDialogDataAsset* Shout; // 0x28(0x08)
};

// Class FSD.CameraParticleAfflictionEffect
// Size: 0x30 (Inherited: 0x28)
struct UCameraParticleAfflictionEffect : UAfflictionEffect {
	UParticleSystem* ParticleEffect; // 0x28(0x08)
};

// Class FSD.ShieldLinkedAfflictionEffect
// Size: 0x28 (Inherited: 0x28)
struct UShieldLinkedAfflictionEffect : UAfflictionEffect {
};

// Class FSD.SoundAfflictionEffect
// Size: 0x48 (Inherited: 0x28)
struct USoundAfflictionEffect : UAfflictionEffect {
	USoundCue* BeginSound; // 0x28(0x08)
	USoundCue* EndSound; // 0x30(0x08)
	bool Attach; // 0x38(0x01)
	FName AttachBone; // 0x3c(0x08)
	float FadeOnLoopEndDuration; // 0x44(0x04)
};

// Class FSD.AttachMeshesAfflictionEffect
// Size: 0x40 (Inherited: 0x28)
struct UAttachMeshesAfflictionEffect : UAfflictionEffect {
	TArray<FAttachMeshesAfflictionItem> AttachItems; // 0x28(0x10)
	UParticleSystem* OnRemoveEffect; // 0x38(0x08)
};

// Class FSD.FrozenAfflictionEffect
// Size: 0x58 (Inherited: 0x28)
struct UFrozenAfflictionEffect : UAfflictionEffect {
	TArray<FFrozenAfflictionItem> IceParts; // 0x28(0x10)
	UMaterialInterface* MaterialOverride; // 0x38(0x08)
	FName ParticleBone; // 0x40(0x08)
	TArray<UMaterialInterface*> IceMaterials; // 0x48(0x10)
};

// Class FSD.BurningAfflictionEffect
// Size: 0x30 (Inherited: 0x28)
struct UBurningAfflictionEffect : UAfflictionEffect {
	enum class EFrozenBitsSize FireParticleSize; // 0x28(0x01)
};

// Class FSD.StaggeredAfflictionEffect
// Size: 0x30 (Inherited: 0x28)
struct UStaggeredAfflictionEffect : UAfflictionEffect {
	float StaggerStrength; // 0x28(0x04)
};

// Class FSD.BoneParticlesAfflictionEffect
// Size: 0x40 (Inherited: 0x28)
struct UBoneParticlesAfflictionEffect : UAfflictionEffect {
	TArray<UParticleSystem*> Particles; // 0x28(0x10)
	USoundCue* Sound; // 0x38(0x08)
};

// Class FSD.AnimatedItemParticleAfflictionEffect
// Size: 0x40 (Inherited: 0x28)
struct UAnimatedItemParticleAfflictionEffect : UAfflictionEffect {
	enum class EItemCategory ItemCategory; // 0x28(0x01)
	UParticleSystem* ParticleEffect; // 0x30(0x08)
	FName Socket; // 0x38(0x08)
};

// Class FSD.PlayerCharacterMontageAfflictionEffect
// Size: 0x50 (Inherited: 0x28)
struct UPlayerCharacterMontageAfflictionEffect : UAfflictionEffect {
	UAnimMontage* FP_Montage; // 0x28(0x08)
	UAnimMontage* TP_Montage; // 0x30(0x08)
	float BlendOut; // 0x38(0x04)
	TArray<FName> RandomStarts; // 0x40(0x10)
};

// Class FSD.EnemySkinAfflictionEffect
// Size: 0x38 (Inherited: 0x28)
struct UEnemySkinAfflictionEffect : UAfflictionEffect {
	TArray<UMaterialInterface*> NewMaterials; // 0x28(0x10)
};

// Class FSD.EnemyScaleAfflictionEffect
// Size: 0x30 (Inherited: 0x28)
struct UEnemyScaleAfflictionEffect : UAfflictionEffect {
	float Scale; // 0x28(0x04)
	bool RevertOnEndEffect; // 0x2c(0x01)
};

// Class FSD.HeroEnemyAfflictionEffect
// Size: 0x30 (Inherited: 0x28)
struct UHeroEnemyAfflictionEffect : UAfflictionEffect {
	FGameplayTag TagToAdd; // 0x28(0x08)
};

// Class FSD.FSDPawn
// Size: 0x2f0 (Inherited: 0x280)
struct AFSDPawn : APawn {
	FMulticastInlineDelegate OnFrozenEvent; // 0x298(0x10)
	UStatusEffectsComponent* StatusEffects; // 0x2a8(0x08)
	UEnemyTemperatureComponent* Temperature; // 0x2b0(0x08)
	FGameplayTagContainer GameplayTags; // 0x2b8(0x20)
	UEnemyDescriptor* SpawnedFromDescriptor; // 0x2d8(0x08)
	bool IsFrozen; // 0x2e0(0x01)
	bool CanFlee; // 0x2e1(0x01)
	bool FleeInsteadOfBackingOff; // 0x2e2(0x01)
	bool IsFleeing; // 0x2e3(0x01)
	UPawnStatsComponent* PawnStatsInstance; // 0x2e8(0x08)

	void UnFreeze();
	void StopFleeing();
	void StartFleeing(FVector fromLocation);
	void SetAlerted(bool isAlerted);
	void Receive_Alerted();
	void OnUnFrozen();
	void OnStoppedFleeing();
	void OnStartedFleeing();
	void OnRep_IsFrozen();
	void OnFrozen(AActor* Source);
	void OnFirstHostileDamageTaken();
	void OnEnemyScaled(float newScale);
	void OnArmorShattered(FVector Location);
	void OnArmorPartsDestroyedFromRadialDamage(TArray<char> destroyedParts);
	void OnAlerted();
	void MakeRagdollMesh(USkeletalMeshComponent* Mesh);
	void MakeElite();
	bool GetIsAlerted();
	UHealthComponentBase* GetHealthComponent();
	AFSDAIController* GetFSDAIController();
	enum class EPawnAttitude GetAttitude();
	void Freeze(AActor* Source);
	void ExplodePawn();
	void BackOffFromLocation(FVector fromLocation);
	void All_ArmorPartsDestroyed(TArray<char> parts);
};

// Class FSD.DeepPathfinderCharacter
// Size: 0x380 (Inherited: 0x2f0)
struct ADeepPathfinderCharacter : AFSDPawn {
	UDeepPathfinderMovement* PathfinderMovement; // 0x300(0x08)
	USkeletalMeshComponent* Mesh; // 0x308(0x08)
	FName CenterMassSocketName; // 0x310(0x08)
	UDeepPatherFinderCharacterAfflictionComponent* Affliction; // 0x318(0x08)
	float AnimationOffset; // 0x320(0x04)
	bool CanPlayerStandOn; // 0x324(0x01)
	bool UseDormancy; // 0x325(0x01)
	float StaggerDurationMultiplier; // 0x328(0x04)
	float StaggerImunityWindow; // 0x32c(0x04)
	bool StaggerPauseLogic; // 0x330(0x01)
	bool IsHidden; // 0x331(0x01)
	bool IsStaggered; // 0x332(0x01)
	bool FrozenPauseLogic; // 0x333(0x01)
	float AttackerRadius; // 0x350(0x04)
	TArray<UMaterialInterface*> CachedMaterials; // 0x358(0x10)
	float AllowedInFormationChance; // 0x368(0x04)

	bool TryJoinFormation();
	void SetHidden(bool shouldHide);
	void OnPausedMovementElapsed();
	void OnControlledByPlayer(bool IsControlled, bool IsLocallyControlled);
	void LeaveFormation();
};

// Class FSD.EnemyDeepPathfinderCharacter
// Size: 0x3a0 (Inherited: 0x380)
struct AEnemyDeepPathfinderCharacter : ADeepPathfinderCharacter {
	UEnemyHealthComponent* HealthComponent; // 0x388(0x08)
	FQueuedMontage QueuedMontage; // 0x390(0x10)

	void OnRep_QueuedMontage();
};

// Class FSD.AFlyingBug
// Size: 0x448 (Inherited: 0x3a0)
struct AAFlyingBug : AEnemyDeepPathfinderCharacter {
	UEnemyComponent* EnemyComponent; // 0x3a0(0x08)
	UPawnStatsComponent* PawnStats; // 0x3a8(0x08)
	UOutlineComponent* outline; // 0x3b0(0x08)
	UPawnSensingComponent* Senses; // 0x3b8(0x08)
	UPawnAlertComponent* Alert; // 0x3c0(0x08)
	USphereComponent* ExplosionSphere; // 0x3c8(0x08)
	UAudioComponent* WingSoundComponent; // 0x3d0(0x08)
	UFrozenPawnImpactComponent* FrozenImpact; // 0x3d8(0x08)
	TArray<UAnimSequenceBase*> HitReactions; // 0x3e0(0x10)
	FVector_NetQuantize RagdollImpact; // 0x3f0(0x0c)
	AActor* RotateTarget; // 0x410(0x08)
	UPhysicsAsset* PhysicalAssetAfterDeath; // 0x418(0x08)
	USoundBase* ChatterSound; // 0x420(0x08)
	float FirstHitReactBlendIn; // 0x428(0x04)
	float OverrideHitReactBlendIn; // 0x42c(0x04)
	float DistanceForAttackMode; // 0x430(0x04)
	float MinChatterDelay; // 0x434(0x04)
	float MaxChatterDelay; // 0x438(0x04)
	float AttackModeRotationSpeed; // 0x43c(0x04)
	bool UsesAttackStance; // 0x440(0x01)
	bool SetLifeTime; // 0x441(0x01)
	bool AttackStance; // 0x442(0x01)
	bool LookStraight; // 0x443(0x01)
	bool UseDefaultRagdoll; // 0x444(0x01)

	void StartFizzle();
	void SetRotateTarget(AActor* aTarget);
	void SetExternallyControlled(bool isExternallyControlled);
	void SetAttackStance(bool isAttackStance);
	void Ragdoll(bool applyForce, FVector force);
	void PlayVoice();
	void OnStartFalling();
	void OnRep_RagdollImpact();
	void OnRep_AttackStance();
	void OnRagdoll();
	void OnFreezeImpact();
	void OnDamaged(float Amount);
	void OnBugDeath(UHealthComponentBase* Health);
	float GetMidZpointFromCielingAndFloor(float distanceFromCieling, float distanceFromFloor);
	bool GetIsInAttackStance();
	void AlertNearbyEnemies();
};

// Class FSD.EnemyAnimInstance
// Size: 0x2c0 (Inherited: 0x270)
struct UEnemyAnimInstance : UAnimInstance {
	FMulticastInlineDelegate OnRangedAttackNotify; // 0x268(0x10)
	FMulticastInlineDelegate OnMeleeAttackNotify; // 0x278(0x10)
	FMulticastInlineDelegate OnStopLeadingNotify; // 0x288(0x10)
	FMulticastInlineDelegate OnIsAttackingChanged; // 0x298(0x10)
	bool IsAttacking; // 0x2a8(0x01)
	bool IsAlive; // 0x2a9(0x01)
	float RandomStartPosition; // 0x2ac(0x04)
	UHealthComponentBase* HealthComponent; // 0x2b0(0x08)

	bool IsSlotPlayingAnyAnimation(FName SlotNodeName);
	USkeletalMeshComponent* GetSkeletalMesh();
};

// Class FSD.SimpleMovingEnemyAnimInstance
// Size: 0x2f0 (Inherited: 0x2c0)
struct USimpleMovingEnemyAnimInstance : UEnemyAnimInstance {
	float Speed; // 0x2b8(0x04)
	FVector Velocity; // 0x2bc(0x0c)
	float WalkCycleSpeed; // 0x2c8(0x04)
	float StartMovingSpeed; // 0x2cc(0x04)
	float StopMovingSpeed; // 0x2d0(0x04)
	float WalkCycleMinRate; // 0x2d4(0x04)
	float WalkCyclePlayRate; // 0x2d8(0x04)
	float MeshScale; // 0x2dc(0x04)
	bool IsMoving; // 0x2e0(0x01)

	void SetMeshScale(float newScale);
};

// Class FSD.FlyingBugAnimInstance
// Size: 0x2f0 (Inherited: 0x2f0)
struct UFlyingBugAnimInstance : USimpleMovingEnemyAnimInstance {
	bool IsInAttackMode; // 0x2e8(0x01)
	bool IsStaggered; // 0x2e9(0x01)
};

// Class FSD.AIFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAIFunctionLibrary : UBlueprintFunctionLibrary {

	void SetAICanSense(bool canSense);
	int32_t MakeEnemiesFleeFromArea(UObject* WorldContextObject, FVector Center, float Radius, int32_t maxEnemiesAffected);
	void MakeEnemiesBackOutOfArea(UObject* WorldContextObject, FVector Center, float Radius);
	bool IsEnemyAlertet(APawn* enemy);
	APlayerCharacter* GetPlayerTarget(AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool accountForAttackers, AActor* ignoreTarget, bool IsFlying);
	bool GetAttackableTargetsInRange(AActor* From, TArray<UAttackerPositioningComponent*> outArray, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool accountForAttackers, AActor* ignoreTarget, bool IsFlying);
	UAttackerPositioningComponent* GetAttackableTarget(AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool accountForAttackers, AActor* ignoreTarget, bool IsFlying);
	APlayerCharacter* ConsiderChangingTarget(APlayerCharacter* CurrentTarget, AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool CurrentTargetMustBeAlive, bool IsFlying);
	void AlertEnemy(APawn* enemy);
	void AlertEnemiesInRange(UObject* WorldContextObject, FVector Origin, float range, APawn* alerter);
};

// Class FSD.AIPlayerControlComponent
// Size: 0x160 (Inherited: 0xb0)
struct UAIPlayerControlComponent : UActorComponent {
	FRotator AngularAcceleration; // 0xb0(0x0c)
	FRotator AngularDampening; // 0xbc(0x0c)
	FRotator MaxAngularVelocity; // 0xc8(0x0c)
	FRotator MaxRotation; // 0xd4(0x0c)
	float SpeedTarget; // 0xe0(0x04)
	float SpeedMin; // 0xe4(0x04)
	float SpeedMax; // 0xe8(0x04)
	float AccelerationBase; // 0xec(0x04)
	float AccelerationMultiplier; // 0xf0(0x04)
	float DecelerationMultiplier; // 0xf4(0x04)
	float AccelerationOnSlopeMultiplier; // 0xf8(0x04)
	float DecelerationOnSlopeMultiplier; // 0xfc(0x04)
	float InitialConnectionBlendTime; // 0x100(0x04)
	UAnimMontage* GetOnMontageAI; // 0x108(0x08)
	UAnimMontage* GetOnMontagePlayer; // 0x110(0x08)
	UAnimMontage* LetGoMontageAI; // 0x118(0x08)
	UAnimMontage* LetGoMontagePlayer; // 0x120(0x08)
	UDialogDataAsset* GetOnShout; // 0x128(0x08)
	UDialogDataAsset* LetGoShout; // 0x130(0x08)
	UControlEnemyUsable* Usable; // 0x138(0x08)
};

// Class FSD.EnemyGroupDescriptor
// Size: 0x50 (Inherited: 0x30)
struct UEnemyGroupDescriptor : UDataAsset {
	TArray<FEnemyGroupDescriptorItem> Enemies; // 0x30(0x10)
	FRandInterval Diversity; // 0x40(0x10)
};

// Class FSD.AmberEventEnemyPool
// Size: 0x68 (Inherited: 0x50)
struct UAmberEventEnemyPool : UEnemyGroupDescriptor {
	float MaxTimeBetweenSpawn; // 0x50(0x04)
	float MinTimeBetweenSpawn; // 0x54(0x04)
	int32_t MaxEnemyCap; // 0x58(0x04)
	int32_t AmbersNeededdToComplete; // 0x5c(0x04)
	int32_t AmbersNeededOnePlayer; // 0x60(0x04)
};

// Class FSD.GameEvent
// Size: 0x358 (Inherited: 0x220)
struct AGameEvent : AActor {
	FMulticastInlineDelegate EventTriggeredDelegate; // 0x228(0x10)
	FMulticastInlineDelegate EventFinishedDelegate; // 0x238(0x10)
	FMulticastInlineDelegate StageCompleteDelegate; // 0x248(0x10)
	FMulticastInlineDelegate ProgressChangedDelegate; // 0x258(0x10)
	FMulticastInlineDelegate TimeProgressChanged; // 0x268(0x10)
	FMulticastInlineDelegate ObjectivesPerStageChanged; // 0x278(0x10)
	TArray<AEventStarterButton*> StarterObjects; // 0x288(0x10)
	bool bGameEventSetup; // 0x298(0x01)
	FText EventName; // 0x2a0(0x18)
	FText ObjectiveText; // 0x2b8(0x18)
	FName AnalyticsName; // 0x2d0(0x08)
	FGameplayTagContainer GameplayTags; // 0x2d8(0x20)
	UChildActorComponent* StartEventObject; // 0x2f8(0x08)
	UDialogDataAsset* EventTriggeredShout; // 0x300(0x08)
	UDialogDataAsset* EventFinishedShout; // 0x308(0x08)
	UDialogDataAsset* EventFailedShout; // 0x310(0x08)
	float EventTriggeredShoutDelay; // 0x318(0x04)
	float EventFinishedShoutDelay; // 0x31c(0x04)
	float StageProgress; // 0x320(0x04)
	float TimeLimit; // 0x324(0x04)
	float DelayUITime; // 0x328(0x04)
	int32_t objectivesPerStage; // 0x330(0x04)
	bool EventStartersActive; // 0x338(0x01)
	bool StopScriptedWavesWhileActive; // 0x339(0x01)
	bool StopNormalWavesWhileActive; // 0x33a(0x01)
	bool EventStarted; // 0x33b(0x01)
	bool FailedEvent; // 0x33c(0x01)
	bool ShowRemainingTimeOnHUD; // 0x33d(0x01)
	bool ShowScoreStatusOnHUD; // 0x33e(0x01)
	bool SkipEventStarters; // 0x340(0x01)
	TArray<AActor*> EventParticipants; // 0x348(0x10)

	void TrySetupGameEvent();
	void TriggerEvent();
	void StartShout();
	void StageObjectiveCompleted();
	ARessuplyPod* SpawnEventPod(ARessuplyPod* podClass, FVector aSpawnLocation, int32_t Delay);
	AActor* SpawnEventActor(AActor* eventActorClass, FTransform aSpawnLocation);
	void SetStageProgress(float Progress);
	void SetObjectivesPerStage(int32_t objectivesPerStage);
	void RemoveParticipant(AActor* participant);
	void OnStarterObjectUsed(AEventStarterButton* eventStarter);
	void OnStageProgress(float Progress);
	void OnStageComplete(int32_t Stage);
	void OnRep_StageProgress();
	void OnRep_ObjectivesPerStage();
	void OnRep_IsEventStartersActive();
	void OnRep_FailedEvent();
	void OnRep_EventStarted();
	void OnRep_EventParticipants();
	void OnEventTriggered();
	void OnEventFinished(bool eventSuccess);
	void OnEventBooted();
	bool IsEventActive();
	float GetStageProgress();
	bool GetShowTimeOnHUD();
	bool GetShowScoreOnHUD();
	FText GetObjectiveText();
	int32_t GetObjectivesPerStage();
	FText GetEventName();
	bool GetEventFailed();
	float GetDelayUITime();
	void EndShout();
	FTransform DebreePositionPoint(AProceduralSetup* setup, FVector fromLocation, float MinDistance, float desiredDistance, UDebrisPositioning* DebrisPositioning, AActor* terrainPlacement, float maxPathLength);
	void BootUpEvent();
	void AddStageProgress(float progressToAdd);
};

// Class FSD.AmberEvent
// Size: 0x3a8 (Inherited: 0x358)
struct AAmberEvent : AGameEvent {
	UDamageComponent* EndExplosionDamage; // 0x358(0x08)
	TArray<UAmberEventEnemyPool*> EnemyPools; // 0x360(0x10)
	TArray<AFSDPawn*> spawnedEnemies; // 0x370(0x10)
	TWeakObjectPtr<UAmberEventEnemyPool> CurrentPool; // 0x388(0x08)
	float InitialDelayBeforeSpawn; // 0x390(0x04)
	float MaxSpawnRange; // 0x394(0x04)

	void OnSpawnedDeath(UHealthComponentBase* spawnedHealthComponent);
	void OnEnemySpawned(APawn* Pawn);
};

// Class FSD.AmmoCountWidget
// Size: 0x250 (Inherited: 0x230)
struct UAmmoCountWidget : UUserWidget {
	APlayerCharacter* Character; // 0x230(0x08)
	AItem* Item; // 0x238(0x08)
	UItemAggregator* Aggregator; // 0x240(0x08)

	void OnVisibleChanged(bool Visible, bool showClipCount);
	void OnTotalVisibleChanged(bool Visible);
	void OnTotalChanged(int32_t Total);
	void OnItemTotalChanged(int32_t Value);
	void OnItemEquipped(AItem* NewItem);
	void OnItemAmountChanged(int32_t Value);
	void OnAmountChanged(int32_t count);
	void DoItemEquipped();
};

// Class FSD.Item
// Size: 0x338 (Inherited: 0x220)
struct AItem : AActor {
	FVector FPCameraOffset; // 0x260(0x0c)
	FAudioWithCooldown AudioFriendlyFire; // 0x270(0x10)
	bool EnableDangerousSaveGameIDEditing; // 0x280(0x01)
	FGuid SaveGameID; // 0x284(0x10)
	UItemID* ItemID; // 0x298(0x08)
	APlayerCharacter* Character; // 0x2a0(0x08)
	UUpgradableItemComponent* UpgradableItem; // 0x2a8(0x08)
	UCameraShake* CameraShake; // 0x2b0(0x08)
	bool CameraShakeOnStartUsing; // 0x2b8(0x01)
	bool CameraShakeOnEquip; // 0x2b9(0x01)
	UCurveFloat* HeatCurve; // 0x2c8(0x08)
	float ManualHeatPerUse; // 0x2d0(0x04)
	float CooldownRate; // 0x2d4(0x04)
	float ManualCooldownDelay; // 0x2d8(0x04)
	float UnjamDuration; // 0x2dc(0x04)
	float CurrentTemperature; // 0x2e4(0x04)
	USoundBase* AudioTemperature; // 0x2e8(0x08)
	float AudioTemperatureFadeout; // 0x2f0(0x04)
	FName TemperatureFloatParam; // 0x2f4(0x08)
	UAudioComponent* TemperatureAudioComponent; // 0x300(0x08)
	bool Overheated; // 0x308(0x01)
	UDialogDataAsset* ShoutOverheated; // 0x310(0x08)
	bool bAimAssistEnabled; // 0x318(0x01)
	float MovementRateWhileUsing; // 0x31c(0x04)
	bool CanPlayLedgeClimbWhileUsing; // 0x320(0x01)
	bool CanInspectItem; // 0x321(0x01)
	bool CanSprintWithItem; // 0x322(0x01)
	UItemsBarIcon* CustomIconWidget; // 0x328(0x08)
	float AdvancedVibrationSendLevel; // 0x330(0x04)
	bool IsEquipped; // 0x334(0x01)
	bool IsUsing; // 0x335(0x01)

	void UpdateSkin();
	UAudioComponent* SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, float PriorityOverride, FName AttachPointName, FVector Location, FRotator Rotation, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
	UAudioComponent* SpawnSoundAtLocation(USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
	UAudioComponent* SpawnSound2D(USoundBase* Sound, float PriorityOverride, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool SendVibration);
	void Server_StartUsing(bool IsUsing);
	void Resupply(float percentage);
	void RemovedFromInventory(ACharacter* oldCharacter);
	void RecieveUnequipped();
	void RecieveStopUsing();
	void RecieveStartUsing();
	void RecieveEquipped();
	void RecieveCycledItem();
	void Recieve_UpdateMeshses(bool IsFirstPerson);
	void ReceiveResupply(float percentage);
	void Receive_Overheated();
	UStaticMeshComponent* Receive_GetTPAnimationEventMesh();
	UFirstPersonStaticMeshComponent* Receive_GetFPAnimationEventMesh();
	void OnTemperatureChanged(float Temperature, bool Overheated);
	void OnSkinChanged(USkinEffect* Skin);
	void OnRep_IsUsing(bool OldValue);
	void OnOwnerDestroyed(AActor* owningActor);
	bool IsLocallyControlled();
	bool IsFirstPerson();
	AActor* GetWeaponViewClass();
	FItemLoadoutAnimations GetLoadoutAnimations();
	FText GetItemName();
	UTexture2D* GetItemIconLine();
	UTexture2D* GetItemIconBG();
	AItem* GetItemDefaultObject(AItem* itemClass);
	FText GetItemCategory();
	USceneComponent* GetHeatingAudioSceneComponent();
	UItemCharacterAnimationSet* GetCharacterAnimationSet();
	FString GetAnalyticsItemName();
	FString GetAnalyticsItemCategory();
	void AddedToInventory(APlayerCharacter* ItemOwner);
};

// Class FSD.AnimatedItem
// Size: 0x388 (Inherited: 0x338)
struct AAnimatedItem : AItem {
	USkinnableComponent* Skinnable; // 0x338(0x08)
	UPlayerAnimInstance* FPAnimInstance; // 0x340(0x08)
	UPlayerAnimInstance* TPAnimInstance; // 0x348(0x08)
	USkeletalMeshComponent* FPMesh; // 0x350(0x08)
	USkeletalMeshComponent* TPMesh; // 0x358(0x08)
	UAnimMontage* FP_EquipAnimation; // 0x360(0x08)
	UAnimMontage* TP_EquipAnimation; // 0x368(0x08)
	float EquipDuration; // 0x370(0x04)
	UItemCharacterAnimationSet* CharacterAnimationSet; // 0x378(0x08)

	void OnReceiveEquippedFinished();
	FTransform GetMuzzle();
	USkeletalMeshComponent* GetItemMesh();
};

// Class FSD.AmmoDrivenWeapon
// Size: 0x6d8 (Inherited: 0x388)
struct AAmmoDrivenWeapon : AAnimatedItem {
	FMulticastInlineDelegate OnClipCountChanged; // 0x3a8(0x10)
	FMulticastInlineDelegate OnTryReloadEvent; // 0x3b8(0x10)
	FMulticastInlineDelegate OnReloadingEvent; // 0x3c8(0x10)
	FMulticastInlineDelegate OnShotFiredEvent; // 0x3d8(0x10)
	FMulticastInlineDelegate OnStoppedUsingEvent; // 0x3e8(0x10)
	UWeaponFireComponent* WeaponFire; // 0x408(0x08)
	UAmmoDriveWeaponAggregator* Aggregator; // 0x410(0x08)
	bool LoopFireAnimation; // 0x418(0x01)
	float LoopFireAnimationBlendoutTime; // 0x41c(0x04)
	UAnimMontage* FP_FireAnimation; // 0x420(0x08)
	UAnimMontage* TP_FireAnimation; // 0x428(0x08)
	UAnimMontage* FP_ReloadAnimation; // 0x430(0x08)
	FItemAnimationItem OverheatAnimation; // 0x438(0x18)
	TArray<FItemAnimationItem> GunslingAnimations; // 0x450(0x10)
	UAnimMontage* TP_ReloadAnimation; // 0x460(0x08)
	UAnimMontage* WPN_Fire; // 0x468(0x08)
	UAnimMontage* WPN_FireLastBullet; // 0x470(0x08)
	UAnimMontage* WPN_Reload; // 0x478(0x08)
	UAnimMontage* WPN_Reload_TP; // 0x480(0x08)
	UFXSystemAsset* MuzzleParticles; // 0x488(0x08)
	UFXSystemAsset* TPMuzzleParticles; // 0x490(0x08)
	bool UseTriggeredMuzzleParticles; // 0x498(0x01)
	FTracerData Tracer; // 0x4a8(0x30)
	UParticleSystem* TracerParticles; // 0x4d8(0x08)
	UParticleSystem* TrailParticles; // 0x4e0(0x08)
	float MinTracerDistance; // 0x4e8(0x04)
	float TracerSpeed; // 0x4ec(0x04)
	float TracerOffset; // 0x4f0(0x04)
	UFXSystemAsset* CasingParticles; // 0x4f8(0x08)
	bool UseTriggeredCasingParticleSystem; // 0x500(0x01)
	ULightComponent* MuzzleFlashLight; // 0x510(0x08)
	FRuntimeFloatCurve MuzzleFlashLightCurve; // 0x518(0x88)
	USoundCue* FireSound; // 0x5a8(0x08)
	USoundCue* RicochetSound; // 0x5b0(0x08)
	UFXSystemAsset* RicochetParticle; // 0x5b8(0x08)
	float FireSoundDelayToTail; // 0x5c0(0x04)
	USoundCue* FireSoundTail; // 0x5d0(0x08)
	bool IsFireSoundTail2D; // 0x5d8(0x01)
	UForceFeedbackEffect* FireForceFeedbackEffect; // 0x5e0(0x08)
	TWeakObjectPtr<UAudioComponent> FireSoundInstance; // 0x5e8(0x08)
	float FireSoundFadeDuration; // 0x5f0(0x04)
	USoundCue* ReloadSound; // 0x5f8(0x08)
	int32_t BulletsRemainingForNearEmptySound; // 0x600(0x04)
	USoundCue* NearEmptySound; // 0x608(0x08)
	USoundCue* WeaponEmptySound; // 0x610(0x08)
	UDialogDataAsset* ShoutShotFired; // 0x618(0x08)
	UDialogDataAsset* ShoutOutOfAmmo; // 0x620(0x08)
	UDialogDataAsset* ShoutReloading; // 0x628(0x08)
	int32_t MaxAmmo; // 0x630(0x04)
	int32_t ClipSize; // 0x634(0x04)
	int32_t ShotCost; // 0x638(0x04)
	float RateOfFire; // 0x63c(0x04)
	int32_t BurstCount; // 0x640(0x04)
	float BurstCycleTime; // 0x644(0x04)
	float ReloadDuration; // 0x648(0x04)
	int32_t AmmoCount; // 0x64c(0x04)
	int32_t ClipCount; // 0x650(0x04)
	float AutoReloadDuration; // 0x654(0x04)
	USoundCue* AutoReloadCompleteCue; // 0x658(0x08)
	FMulticastInlineDelegate OnItemAutoReloaded; // 0x660(0x10)
	float SupplyStatusWeight; // 0x674(0x04)
	float CycleTimeLeft; // 0x678(0x04)
	float ReloadTimeLeft; // 0x680(0x04)
	bool AutomaticReload; // 0x684(0x01)
	bool CanReload; // 0x685(0x01)
	FRecoilSettings RecoilSettings; // 0x688(0x28)
	bool HasAutomaticFire; // 0x6b0(0x01)
	bool IsFiring; // 0x6b1(0x01)
	enum class EAmmoWeaponState WeaponState; // 0x6ca(0x01)

	void Upgraded_Blueprint_Implementation(TArray<UItemUpgrade*> upgrades);
	void Server_StopReload();
	void Server_ReloadWeapon();
	void Server_PlayBurstFire(char shotCount);
	void Server_Gunsling(char Index);
	void ResupplyAmmo(int32_t Amount);
	void RecieveFiredWeapon();
	void Receive_ReloadEnd();
	void Receive_ReloadBegin();
	void Receive_IsFiringChanged(bool NewValue);
	void OnWeaponFireEnded();
	void OnWeaponFired(FVector Location);
	void OnRicochet(FVector Origin, FVector Location, FVector Normal);
	void OnRep_IsFiring();
	bool IsClipFull();
	void InstantlyReload();
	void CustomEvent1(UItemUpgrade* Event);
	void Client_RefillAmmo(float percentage);
	void All_StopReload();
	void All_StartReload();
	void All_PlayBurstFire(char shotCount);
	void All_Gunsling(char Index);
};

// Class FSD.ItemAggregator
// Size: 0xc8 (Inherited: 0xb0)
struct UItemAggregator : UActorComponent {
	FText CounterText; // 0xb0(0x18)

	void UnbindAllEvents();
};

// Class FSD.ClipBasedItemAggregator
// Size: 0x140 (Inherited: 0xc8)
struct UClipBasedItemAggregator : UItemAggregator {
	FMulticastInlineDelegate OnClipAmountChanged; // 0xc8(0x10)
	FMulticastInlineDelegate OnTotalAmountChanged; // 0xd8(0x10)
	FMulticastInlineDelegate OnClipAndTotalChanged; // 0xe8(0x10)
	FMulticastInlineDelegate OnReloadTimeChanged; // 0xf8(0x10)
	FMulticastInlineDelegate OnReloadComplete; // 0x108(0x10)
	FMulticastInlineDelegate OnReloadStarted; // 0x118(0x10)
	FMulticastInlineDelegate OnMaxAmmoCapacityChanged; // 0x128(0x10)
	bool ShowTotalAmount; // 0x138(0x01)

	void ReloadStarted();
	void ReloadComplete();
	int32_t GetTotalAmount();
	int32_t GetClipAmount();
};

// Class FSD.AmmoDriveWeaponAggregator
// Size: 0x148 (Inherited: 0x140)
struct UAmmoDriveWeaponAggregator : UClipBasedItemAggregator {
	AAmmoDrivenWeapon* Weapon; // 0x140(0x08)
};

// Class FSD.AmmoDrivenWeaponAnimInstance
// Size: 0x280 (Inherited: 0x270)
struct UAmmoDrivenWeaponAnimInstance : UAnimInstance {
	AAmmoDrivenWeapon* Weapon; // 0x268(0x08)
	bool IsFiring; // 0x270(0x01)
	float ClipFullPercentage; // 0x274(0x04)
	bool Overheated; // 0x278(0x01)

	bool IsFull();
	bool isEmpty();
};

// Class FSD.PlatformGunAnimInstance
// Size: 0x290 (Inherited: 0x280)
struct UPlatformGunAnimInstance : UAmmoDrivenWeaponAnimInstance {
	float SpinRate; // 0x280(0x04)
	float NormalSpinRate; // 0x284(0x04)
	float LerpSpeed; // 0x288(0x04)
	float FiredSpinRate; // 0x28c(0x04)

	void WeaponFired();
};

// Class FSD.AnchorTurner
// Size: 0x2c0 (Inherited: 0x220)
struct AAnchorTurner : AActor {
	USceneComponent* Root; // 0x220(0x08)
	USkeletalMeshComponent* Mesh; // 0x228(0x08)
	USphereComponent* PushCollider1; // 0x230(0x08)
	USphereComponent* PushCollider2; // 0x238(0x08)
	USphereComponent* PushCollider3; // 0x240(0x08)
	USphereComponent* PushCollider4; // 0x248(0x08)
	FMulticastInlineDelegate OnSpunUp; // 0x250(0x10)
	FVector AttatchmentOffset; // 0x280(0x0c)
	TArray<FName> AttachmentPoints; // 0x290(0x10)
	float PerPlayerMultiplier; // 0x2a0(0x04)
	float TurnSpeed; // 0x2a4(0x04)
	float Progress; // 0x2a8(0x04)
	float MaxProgress; // 0x2ac(0x04)
	bool Finished; // 0x2b4(0x01)
	float DecaySpeed; // 0x2b8(0x04)

	void OnRep_Finished();
	void OnLeftPushpoint(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void OnEnteredPushpoint(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void GeneratorSpunUp();
};

// Class FSD.AnchorTurnerAnimInstance
// Size: 0x280 (Inherited: 0x270)
struct UAnchorTurnerAnimInstance : UAnimInstance {
	float ModuleRotation; // 0x268(0x04)
	float Percent; // 0x26c(0x04)
	float TurnSpeed; // 0x270(0x04)
	bool IsFinished; // 0x274(0x01)
};

// Class FSD.BaseArmorDamageComponent
// Size: 0x100 (Inherited: 0xb0)
struct UBaseArmorDamageComponent : UActorComponent {
	bool ArmorDamageEnabled; // 0xb0(0x01)
	FMulticastInlineDelegate OnArmorShatteredEvent; // 0xb8(0x10)
	TArray<UParticleSystem*> ArmorBreakParticles; // 0xc8(0x10)
	TArray<UParticleSystem*> ArmorDisolveParticles; // 0xd8(0x10)
	TArray<UFSDPhysicalMaterial*> ArmorPhysMats; // 0xe8(0x10)
	USkeletalMeshComponent* Mesh; // 0xf8(0x08)
};

// Class FSD.SimpleArmorDamageComponent
// Size: 0x168 (Inherited: 0x100)
struct USimpleArmorDamageComponent : UBaseArmorDamageComponent {
	FMulticastInlineDelegate OnRadialArmorPartsDestroyedEvent; // 0x100(0x10)
	float ArmorStrength; // 0x110(0x04)
	TMap<FName, FDestructableBodypartItem> PhysBoneToArmor; // 0x118(0x50)

	void DamageArmor_All(TArray<char> parts);
	void All_DisolveBones(int32_t BoneIndices);
};

// Class FSD.ArmorHealthDamageComponent
// Size: 0x178 (Inherited: 0x100)
struct UArmorHealthDamageComponent : UBaseArmorDamageComponent {
	FMulticastInlineDelegate OnArmorPartDestroyedEvent; // 0x100(0x10)
	FMulticastInlineDelegate OnArmorPartDamagedEvent; // 0x110(0x10)
	TMap<FName, FArmorHealthItem> PhysBoneToArmor; // 0x120(0x50)
	uint32_t ArmorDamageIndex; // 0x170(0x04)
	bool AffectedByAmorBreak; // 0x174(0x01)

	bool SetHealthOnBodypartItem(FName BoneName, float newHealth);
	void SetHealthOnAllItems(float newHealth);
	void RegrowAllArmor(float baseHealth);
	void OnRep_ArmorDamageIndex(uint32_t OldValue);
};

// Class FSD.CompositeArmorComponent
// Size: 0x148 (Inherited: 0x100)
struct UCompositeArmorComponent : UBaseArmorDamageComponent {
	FMulticastInlineDelegate OnArmorPartDestroyedEvent; // 0x100(0x10)
	FMulticastInlineDelegate OnArmorPartDamagedEvent; // 0x110(0x10)
	UFXSystemAsset* BreakParticle; // 0x120(0x08)
	bool AffectedByAmorBreak; // 0x128(0x01)
	TArray<FCompositeArmorItem> ArmorItems; // 0x130(0x10)
	uint32_t ArmorDamageIndex; // 0x140(0x04)

	void OnRep_ArmorDamageIndex(uint32_t OldValue);
	void AddArmorPart(UPrimitiveComponent* Primitive, float Health);
};

// Class FSD.ArmorPiece
// Size: 0x2a8 (Inherited: 0x220)
struct AArmorPiece : AActor {
	UUpgradableGearComponent* Upgradable; // 0x238(0x08)
	TMap<UPawnStat*, float> StatModifiers; // 0x240(0x50)
	ALoadoutItemProxy* LoadoutProxy; // 0x290(0x08)
	UItemID* ItemID; // 0x298(0x08)
	AActor* WeaponPreviewClass; // 0x2a0(0x08)

	AActor* GetWeaponViewClass();
	AArmorPiece* GetArmorPieceDefaultObject(AArmorPiece* armorPieceClass);
};

// Class FSD.AsyncLevelPersistanceActor
// Size: 0x240 (Inherited: 0x220)
struct AAsyncLevelPersistanceActor : AActor {
	TArray<UObject*> References; // 0x220(0x10)
};

// Class FSD.AsyncManager
// Size: 0x58 (Inherited: 0x30)
struct UAsyncManager : UGameInstanceSubsystem {
	TArray<UObject*> PermanentReferences; // 0x30(0x10)

	void ReleaseAllHandles();
	void AsyncLoadSoftObjects(TArray<TSoftObjectPtr<UObject>> Items, enum class EAsyncPersistence persistence, FDelegate OnLoadComplete, enum class EAsyncLoadPriority Priority);
	void AsyncLoadSoftObject(TSoftObjectPtr<UObject> Item, enum class EAsyncPersistence persistence, FDelegate OnLoadComplete, enum class EAsyncLoadPriority Priority);
	void AsyncLoadSoftClass(TSoftClassPtr<UObject> Item, enum class EAsyncPersistence persistence, FDelegate OnLoadComplete, enum class EAsyncLoadPriority Priority);
	void AsyncLoadAssets(TArray<FSoftObjectPath> Items, enum class EAsyncPersistence persistence, FDelegate OnLoadComplete, enum class EAsyncLoadPriority Priority);
	void AsyncLoadAsset(FSoftObjectPath Item, enum class EAsyncPersistence persistence, FDelegate OnLoadComplete, enum class EAsyncLoadPriority Priority);
};

// Class FSD.AttackBaseComponent
// Size: 0xf0 (Inherited: 0xb0)
struct UAttackBaseComponent : UActorComponent {
	FName AttackName; // 0xc0(0x08)
	float MaxSurfaceAngle; // 0xc8(0x04)
	FFloatInterval range; // 0xcc(0x08)
	float MinRange; // 0xd4(0x04)
	float MaxRange; // 0xd8(0x04)

	UAttackBaseComponent* ReplaceAttackComponent(UAttackBaseComponent* componentToReplace, UAttackBaseComponent* newComponentClass);
	void ReceiveCompleteAttack();
	void ReceiveAttackTarget(AActor* Target);
	void ReceiveAbortAttack();
	void CompleteAttack(bool success);
	void AttackTarget(AActor* Target);
	void AbortAttack();
};

// Class FSD.AttackEffect
// Size: 0x28 (Inherited: 0x28)
struct UAttackEffect : UObject {
};

// Class FSD.AttackCooldownComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UAttackCooldownComponent : UActorComponent {
	TArray<FAttackCooldown> AttackCooldowns; // 0xb0(0x10)

	void SetCooldown(FName AttackName, float cooldownSeconds);
	bool IsAttackOffCooldown(FName AttackName);
	bool IsAnyAttackOffCooldown();
	void AttackUsed(FName Name);
};

// Class FSD.AttackerManagerComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UAttackerManagerComponent : UActorComponent {
	TArray<UAttackerPositioningComponent*> Components; // 0xb0(0x10)
};

// Class FSD.AttackerPositioningComponent
// Size: 0x108 (Inherited: 0xb0)
struct UAttackerPositioningComponent : UActorComponent {
	bool DebugPositions; // 0xb0(0x01)
	int32_t MaxAttackers; // 0xb4(0x04)
	TArray<FAttackerInfo> Attackers; // 0xb8(0x10)
	TArray<int32_t> FreePositions; // 0xc8(0x10)
	TArray<FAttackerInfo> FlyingAttackers; // 0xd8(0x10)
	TArray<int32_t> FlyingFreePositions; // 0xe8(0x10)
	float CharacterPersonalSphere; // 0xf8(0x04)
	float CharacterHalfHeight; // 0xfc(0x04)
	float CostModifier; // 0x100(0x04)

	void UnregisterAttacker(AActor* Attacker, bool IsFlying);
	void RegisterAttacker(AActor* Attacker, bool IsFlying);
	void OnFlyingAttackerDeath(UHealthComponentBase* HealthComponent);
	void OnAttackerDeath(UHealthComponentBase* HealthComponent);
	FVector GetFlyingAttackerPosition(AActor* Attacker, float AttackerRadius);
	FVector GetAttackerPosition(AActor* Attacker, float AttackerRadius);
};

// Class FSD.PlayerAttackPositionComponent
// Size: 0x110 (Inherited: 0x108)
struct UPlayerAttackPositionComponent : UAttackerPositioningComponent {
	float OnZiplineFlyingModifier; // 0x108(0x04)
	float OnZiplineWalkingModifier; // 0x10c(0x04)
};

// Class FSD.ObjectAttackerPositioning
// Size: 0x110 (Inherited: 0x108)
struct UObjectAttackerPositioning : UAttackerPositioningComponent {
	UHealthComponentBase* Health; // 0x108(0x08)
};

// Class FSD.CustomObjectAttackerPositioning
// Size: 0x120 (Inherited: 0x108)
struct UCustomObjectAttackerPositioning : UAttackerPositioningComponent {
	UHealthComponentBase* Health; // 0x108(0x08)
	TArray<FVector> AttackerPositions; // 0x110(0x10)
};

// Class FSD.EnemyAttackerPositioningComponent
// Size: 0x108 (Inherited: 0x108)
struct UEnemyAttackerPositioningComponent : UAttackerPositioningComponent {
};

// Class FSD.EscortMuleAttackerPositioning
// Size: 0x120 (Inherited: 0x108)
struct UEscortMuleAttackerPositioning : UAttackerPositioningComponent {
	UHealthComponentBase* Health; // 0x108(0x08)
	TArray<FVector> AttackerPositions; // 0x110(0x10)

	void SetNewMaxAttackers(int32_t newMaxAttackers);
	void SetCostModifier(float newModifier);
};

// Class FSD.AttackingPointInterface
// Size: 0x28 (Inherited: 0x28)
struct UAttackingPointInterface : UInterface {
};

// Class FSD.AudioFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAudioFunctionLibrary : UBlueprintFunctionLibrary {

	float SetSoundClassVolume(USoundClass* SoundClass, float Volume);
	void PushTimedSoundMix(UObject* contextObject, USoundMix* mix, float Duration);
	float GetSoundClassVolume(USoundClass* SoundClass);
};

// Class FSD.SoundClassWidget
// Size: 0x230 (Inherited: 0x230)
struct USoundClassWidget : UUserWidget {
};

// Class FSD.AutoCannon
// Size: 0x7a0 (Inherited: 0x6d8)
struct AAutoCannon : AAmmoDrivenWeapon {
	float StartingFireRate; // 0x6d8(0x04)
	float MaxFireRate; // 0x6dc(0x04)
	FRuntimeFloatCurve FireRateCurve; // 0x6e0(0x88)
	float FireTimeReductionScale; // 0x768(0x04)
	float FireTimeIncreaseScale; // 0x76c(0x04)
	float MaxFireTimeCap; // 0x770(0x04)
	float DamageBonusAtFullROF; // 0x774(0x04)
	bool StatusEffectAtFullROF; // 0x778(0x01)
	float FireTimeOffsetForMaxRateOfFireBonus; // 0x77c(0x04)
	float StartLoopingSoundAt; // 0x780(0x04)
	UStatusEffect* StatusAtFullROF; // 0x788(0x08)
	UAnimMontage* WPN_Fire_3; // 0x790(0x08)
	float CurrentFireTime; // 0x798(0x04)

	void Server_SetStatusActive(bool IsActive);
};

// Class FSD.AutoCannonAnimInstance
// Size: 0x270 (Inherited: 0x270)
struct UAutoCannonAnimInstance : UAnimInstance {
};

// Class FSD.AutoCarverComponent
// Size: 0x4c0 (Inherited: 0x480)
struct UAutoCarverComponent : UStaticMeshComponent {
	UTerrainMaterialBase* TerrainMaterial; // 0x480(0x08)
	float Frequency; // 0x488(0x04)
	float ExpensiveNoise; // 0x48c(0x04)
	float MinDistanceMoved; // 0x490(0x04)
	enum class ECarveFilterType Filter; // 0x494(0x01)
	FMulticastInlineDelegate OnCarveDoneEvent; // 0x498(0x10)

	void ForceCarve();
};

// Class FSD.STLMeshCarverComponent
// Size: 0x410 (Inherited: 0x3f0)
struct USTLMeshCarverComponent : UPrimitiveComponent {
	UTerrainMaterialBase* TerrainMaterial; // 0x3f0(0x08)
	USTLMeshCarver* MeshCarver; // 0x3f8(0x08)
	enum class ECarveFilterType Filter; // 0x400(0x01)
	bool PreviewEnabled; // 0x401(0x01)
};

// Class FSD.MeshCarverComponent
// Size: 0x4a0 (Inherited: 0x480)
struct UMeshCarverComponent : UStaticMeshComponent {
	UTerrainMaterialBase* TerrainMaterial; // 0x480(0x08)
	enum class ECarveFilterType Filter; // 0x488(0x01)
	float ExpensiveNoise; // 0x48c(0x04)
	enum class CarveOptionsCellSize CarverSize; // 0x490(0x01)

	void Carve();
};

// Class FSD.LevelGenerationCarverComponent
// Size: 0x420 (Inherited: 0x3f0)
struct ULevelGenerationCarverComponent : UPrimitiveComponent {
	USTLMeshCarver* MeshCarver; // 0x3f0(0x08)
	UStaticMesh* ConvexCarver; // 0x3f8(0x08)
	UStaticMeshCarver* StaticMeshCarver; // 0x400(0x08)
	UTerrainMaterialBase* TerrainMaterial; // 0x408(0x08)
	enum class ECarveFilterType Filter; // 0x410(0x01)
	float ConvexExpensiveNoise; // 0x414(0x04)
	enum class CarveOptionsCellSize CarveCellSize; // 0x418(0x01)
	bool PreviewEnabled; // 0x419(0x01)
	bool CarvingDisabled; // 0x41a(0x01)
	bool SelfActivate; // 0x41b(0x01)
};

// Class FSD.RandomizedInstantMeshCarver
// Size: 0x268 (Inherited: 0x220)
struct ARandomizedInstantMeshCarver : AActor {
	TArray<UStaticMesh*> CarvingMeshes; // 0x220(0x10)
	TArray<USTLMeshCarver*> STLCarvingMeshes; // 0x230(0x10)
	TArray<UStaticMeshCarver*> StaticMeshCarvers; // 0x240(0x10)
	FRandRange RandomScale; // 0x250(0x08)
	UTerrainMaterialBase* TerrainMaterial; // 0x258(0x08)
	enum class ECarveFilterType Filter; // 0x260(0x01)
};

// Class FSD.LevelGenerationCarverComponent2
// Size: 0x550 (Inherited: 0x3f0)
struct ULevelGenerationCarverComponent2 : UPrimitiveComponent {
	ACSGBuilder* Carver; // 0x3f0(0x08)
	bool CarvingDisabled; // 0x3f8(0x01)
	int32_t PreviewSeed; // 0x3fc(0x04)
	FBakeSettings CarverSettings; // 0x400(0x140)
	bool SelfActivate; // 0x540(0x01)
	UCSGPreviewComponent* PreviewComponent; // 0x548(0x08)
};

// Class FSD.Ball
// Size: 0xb0 (Inherited: 0xb0)
struct UBall : UActorComponent {
};

// Class FSD.WindowWidget
// Size: 0x270 (Inherited: 0x230)
struct UWindowWidget : UUserWidget {
	FMulticastInlineDelegate OnWindowClosed; // 0x230(0x10)
	bool bHandleCloseCommand; // 0x268(0x01)
	bool bResolutionDownscaleWhenOpen; // 0x269(0x01)

	void WindowDelegate__DelegateSignature(UWindowWidget* Window);
	void ReceiveSelectPreviousCommand();
	void ReceiveSelectNextCommand();
	void ReceiveSelectCharacterCommand();
	void ReceiveOkCommand();
	void ReceiveCloseCommand();
	void OnShown();
	void OnNewTopWindow();
	void OnClosed();
	void ConsumeCommand();
	void CloseThisWindow();
};

// Class FSD.BarMenuWidget
// Size: 0x278 (Inherited: 0x270)
struct UBarMenuWidget : UWindowWidget {
	TWeakObjectPtr<ASpaceRigBar> SpaceRigBar; // 0x270(0x08)
};

// Class FSD.BarrierProjectile
// Size: 0x220 (Inherited: 0x220)
struct ABarrierProjectile : AActor {
};

// Class FSD.WeaponFireComponent
// Size: 0x110 (Inherited: 0xb0)
struct UWeaponFireComponent : UActorComponent {
	FMulticastInlineDelegate OnWeaponFired; // 0xb8(0x10)
	FMulticastInlineDelegate OnWeaponFireEnded; // 0xc8(0x10)
	FMulticastInlineDelegate OnRicochetEvent; // 0xd8(0x10)
	TScriptInterface<IWeaponFireOwner> Weapon; // 0xf8(0x10)

	void StopFire();
	void Server_SetShotPower(float shotPower);
	void Fire(FVector Origin, FVector_NetQuantizeNormal Direction);
};

// Class FSD.BasicWeaponFireComponent
// Size: 0x110 (Inherited: 0x110)
struct UBasicWeaponFireComponent : UWeaponFireComponent {

	void Server_FireWeapon();
	void Server_EndFire();
	void All_WeaponFired();
};

// Class FSD.BeltDrivenWeapon
// Size: 0x708 (Inherited: 0x6d8)
struct ABeltDrivenWeapon : AAmmoDrivenWeapon {
	UAudioComponent* BarrelAudio; // 0x6d8(0x08)
	USoundCue* BarrelSound; // 0x6e0(0x08)
	float BarrelFadeIn; // 0x6e8(0x04)
	float BarrelFadeOut; // 0x6ec(0x04)
	UCurveFloat* BarrelPitchCurve; // 0x6f0(0x08)
	float BarrelSpinUpTime; // 0x6f8(0x04)
	float BarrelSpinDownTime; // 0x6fc(0x04)
	float CurrentSpinRate; // 0x700(0x04)
	bool Simulate_SpinBarrel; // 0x704(0x01)

	void Server_StopBarrel();
	void Server_StartBarrel();
};

// Class FSD.GatlingGun
// Size: 0x768 (Inherited: 0x708)
struct AGatlingGun : ABeltDrivenWeapon {
	bool BarrelProximityDamageEnabled; // 0x708(0x01)
	float BarrelProximityDamageDistance; // 0x70c(0x04)
	float BarrelProximityDamageRadius; // 0x710(0x04)
	float BarrelProximityDamageLength; // 0x714(0x04)
	float TimeBetweenProximityDamageTicks; // 0x718(0x04)
	float DamageMultiplierAtMaxStabilization; // 0x730(0x04)
	UFXSystemAsset* HotShellsTracerParticles; // 0x738(0x08)
	float HeatRemovedOnKill; // 0x748(0x04)
	bool CriticalOverheatEnabled; // 0x74c(0x01)
	bool HotShellsOn; // 0x74d(0x01)
	float HotShellsTemperatureRequired; // 0x750(0x04)
	UDamageComponent* DamageComponent; // 0x758(0x08)
	UDamageComponent* BarrelProximityDamageComponent; // 0x760(0x08)

	void Server_SetHotShellsOn(bool hotShellsIsOn);
	void OnRep_HotShellsTracerOn();
	void OnGatlingTemperatureChanged(float Temperature, bool isOverheated);
	void OnEnemyKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat);
	void Client_RemoveHeat();
};

// Class FSD.BeltDrivenAnimInstance
// Size: 0x2b0 (Inherited: 0x280)
struct UBeltDrivenAnimInstance : UAmmoDrivenWeaponAnimInstance {
	float BarrelSpinRate; // 0x280(0x04)
	float CurrentBarrelSpinRate; // 0x284(0x04)
	FVector ExternalForce; // 0x288(0x0c)
	float ExternalForceScale; // 0x294(0x04)
	FName ExternalForceBoneName; // 0x298(0x08)
};

// Class FSD.Biome
// Size: 0x420 (Inherited: 0x30)
struct UBiome : UDataAsset {
	FText BiomeName; // 0x30(0x18)
	FText BiomeShortName; // 0x48(0x18)
	FText BiomeDescription; // 0x60(0x18)
	FColor BiomeColor; // 0x78(0x04)
	int32_t BiomeIndex; // 0x7c(0x04)
	FString BiomeAnalyticsIndex; // 0x80(0x10)
	TSoftObjectPtr<UFileMediaSource> BiomeMovie; // 0x90(0x28)
	TSoftObjectPtr<UTexture2D> BiomePicture; // 0xb8(0x28)
	TSoftObjectPtr<UTexture2D> BiomeIcon; // 0xe0(0x28)
	TSoftObjectPtr<UTexture2D> BiomeLargeImage; // 0x108(0x28)
	TSoftObjectPtr<UTexture2D> BiomeWorldMap; // 0x130(0x28)
	TSoftObjectPtr<UTexture2D> BiomeMissionBar; // 0x158(0x28)
	TSoftClassPtr<UObject> BiomeMapWidget; // 0x180(0x28)
	FHeatSource BiomeHeatSource; // 0x1a8(0x08)
	FRandRange DepthRange; // 0x1b0(0x08)
	TSoftObjectPtr<UParticleSystem> AtmosphericParticles; // 0x1b8(0x28)
	TArray<TSoftClassPtr<UObject>> CaveScriptComponents; // 0x1e0(0x10)
	float ExtraCaveSize; // 0x1f0(0x04)
	TArray<UDebrisSet*> Debris; // 0x1f8(0x10)
	TSoftClassPtr<UObject> DebrisActor; // 0x208(0x28)
	TSoftClassPtr<UObject> PostProcessActorClass; // 0x230(0x28)
	UTerrainMaterial* RockMaterial; // 0x258(0x08)
	UTerrainMaterial* DirtMaterial; // 0x260(0x08)
	UTerrainMaterial* BurnedMaterialOverride; // 0x268(0x08)
	TArray<FBiomeNoiseItem> RoomNoises; // 0x270(0x10)
	UMissionStat* MissionCompleted; // 0x280(0x08)
	UFloodFillSettings* CeilingNoise; // 0x288(0x08)
	UDetailNoise* CeilingDetailNoise; // 0x290(0x08)
	UFloodFillSettings* WallNoise; // 0x298(0x08)
	UDetailNoise* WallDetailNoise; // 0x2a0(0x08)
	UFloodFillSettings* FloorNoise; // 0x2a8(0x08)
	UDetailNoise* FloorDetailNoise; // 0x2b0(0x08)
	UFloodFillSettings* PillarNoise; // 0x2b8(0x08)
	UDetailNoise* PillarDetailNoise; // 0x2c0(0x08)
	UPillarSettings* PillarSettings; // 0x2c8(0x08)
	TArray<UTunnelSetting*> TunnelSettings; // 0x2d0(0x10)
	UFloodFillSettings* TunnelCeilingNoise; // 0x2e0(0x08)
	UFloodFillSettings* TunnelWallNoise; // 0x2e8(0x08)
	UFloodFillSettings* TunnelFloorNoise; // 0x2f0(0x08)
	TArray<FResourceSpawner> Resources; // 0x2f8(0x10)
	TArray<FBiomeEnemyEntry> Enemies; // 0x308(0x10)
	TArray<UEnemyDescriptor*> BannedEnemies; // 0x318(0x10)
	TArray<UEnemyDescriptor*> StationaryEnemies; // 0x328(0x10)
	TArray<UCritterDescriptor*> Critters; // 0x338(0x10)
	TSoftObjectPtr<USoundCue> AmbientSounds; // 0x348(0x28)
	bool Use3DAmbient; // 0x370(0x01)
	FReverbSettings ReverbSettings; // 0x378(0x20)
	float SmallCaveReverbVolume; // 0x398(0x04)
	UReverbEffect* SmallCaveReverb; // 0x3a0(0x08)
	float MediumCaveReverbVolume; // 0x3a8(0x04)
	UReverbEffect* MediumCaveReverb; // 0x3b0(0x08)
	float LargeCaveReverbVolume; // 0x3b8(0x04)
	UReverbEffect* LargeCaveReverb; // 0x3c0(0x08)
	USoundCue* TunnelAmbience; // 0x3c8(0x08)
	TSoftObjectPtr<ULevelSequence> BiomeLoaderLevelSequence; // 0x3d0(0x28)
	FString BiomeLoaderLevelName; // 0x3f8(0x10)
	TArray<FText> Quotes; // 0x408(0x10)
	float PlanetZoneSelectionWeight; // 0x418(0x04)

	UTerrainMaterial* GetRockMaterial();
	TSoftClassPtr<UObject> GetPostProcessActorClass_Soft();
	UTerrainMaterial* GetDirtMaterial();
	TSoftClassPtr<UObject> GetDebrisActorSoftClass();
	UTexture2D* GetBiomeWorldMap();
	UTexture2D* GetBiomePicture();
	FText GetBiomeName();
	UTexture2D* GetBiomeMissionBar();
	UUserWidget* GetBiomeMapWidget();
	TArray<FSoftObjectPath> GetBiomeMapAssetList();
	UTexture2D* GetBiomeLargeImage();
	int32_t GetBiomeIndex();
	UTexture2D* GetBiomeIcon();
	FString GetBiomeAnalyticsIndex();
	UParticleSystem* GetAtmosphericParticles();
	USoundCue* GetAmbientSounds();
};

// Class FSD.BobbingComponent
// Size: 0x220 (Inherited: 0x1f0)
struct UBobbingComponent : USceneComponent {
	FMulticastInlineDelegate OnMovedIntoSomethingEvent; // 0x1f0(0x10)
	AActor* OwnerActor; // 0x200(0x08)
	bool DoOrientationChecks; // 0x208(0x01)
	float BobSpeed; // 0x20c(0x04)
	float BobSize; // 0x210(0x04)
	float OrentationChecksPerSecond; // 0x214(0x04)

	void SetOwner(AActor* AActor);
};

// Class FSD.BoltActionWeapon
// Size: 0x808 (Inherited: 0x6d8)
struct ABoltActionWeapon : AAmmoDrivenWeapon {
	FMulticastInlineDelegate FullyFocusedEvent; // 0x6d8(0x10)
	FMulticastInlineDelegate FocusLostEvent; // 0x6e8(0x10)
	UDamageComponent* DamageComponent; // 0x6f8(0x08)
	UHitscanBaseComponent* HitscanComponent; // 0x700(0x08)
	UStatusEffect* FocusedHitSTE; // 0x708(0x08)
	bool RequireWeakspotForFocusedHitSTE; // 0x710(0x01)
	bool IsNoGravityOnFocusEnabled; // 0x711(0x01)
	float NoGravityOnFocusDuration; // 0x714(0x04)
	float NoGravityFocusFallFriction; // 0x718(0x04)
	float NoGravityFocusGravityScale; // 0x71c(0x04)
	float ZoomSpreadAmount; // 0x724(0x04)
	float ZoomMinSpreadWhileMoving; // 0x728(0x04)
	float ChargeSpeed; // 0x730(0x04)
	float ChargeAmmoCost; // 0x734(0x04)
	float ChargeRecoilMult; // 0x738(0x04)
	USoundCue* ZoomedInAudio; // 0x750(0x08)
	UParticleSystem* ChargedShotTrailParticles; // 0x758(0x08)
	FTracerData ChargedShotTracer; // 0x760(0x30)
	USoundCue* ButtonDownFireSound; // 0x790(0x08)
	USoundCue* ChargedShotFireSound; // 0x798(0x08)
	float ChargedFoVChange; // 0x7a0(0x04)
	float ChargedFoVFadeSpeed; // 0x7a4(0x04)
	float MinCharge; // 0x7a8(0x04)
	float SlowMovementAtCharge; // 0x7ac(0x04)
	float FullChargeDamageBonus; // 0x7b0(0x04)
	float AimedShotStaggerChance; // 0x7b4(0x04)
	float AimedWeakspotKilLRange; // 0x7b8(0x04)
	float TargetKilledReloadTimeBoost; // 0x7c0(0x04)
	float TargetKilledReloadTimeBoostDuration; // 0x7c4(0x04)
	bool LastShotWasAimed; // 0x7da(0x01)
	bool IsMovementSlowed; // 0x7e8(0x01)
	bool ChargeAffectsDamage; // 0x800(0x01)
	bool Charging; // 0x801(0x01)
	float ChargeProgress; // 0x804(0x04)

	void SetOverheated(bool isOverheated);
	void Server_SetIsMovementSlowed(bool bisMovementSlowed);
	void Server_SetIsLatestShotFocused(bool bisShotFocused);
	void Server_SetIsChargingShot(bool bisCharging);
	void OnTimerElapsed();
	void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysicalMaterial);
	void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UFSDPhysicalMaterial* PhysicalMaterial);
	void OnShotPowerSet();
	void OnMovementSlowed(bool isSlowed);
	void Client_OnTargetKilled(bool BoostReloadTime);
};

// Class FSD.BoltActionWeaponAnimInstance
// Size: 0x270 (Inherited: 0x270)
struct UBoltActionWeaponAnimInstance : UAnimInstance {
};

// Class FSD.Bomber
// Size: 0x520 (Inherited: 0x448)
struct ABomber : AAFlyingBug {
	UAudioComponent* GooSoundComponent; // 0x448(0x08)
	UParticleSystemComponent* AcidEmitterLeft; // 0x450(0x08)
	UParticleSystemComponent* AcidEmitterRight; // 0x458(0x08)
	AProjectile* AcidProjectile; // 0x488(0x08)
	UParticleSystem* deathParticles; // 0x490(0x08)
	USoundBase* deathSound; // 0x498(0x08)
	USoundBase* DeathPanicSound; // 0x4a0(0x08)
	UParticleSystem* BleedParticles; // 0x4a8(0x08)
	USoundBase* BladderDestroyedNoise; // 0x4b0(0x08)
	TWeakObjectPtr<UParticleSystemComponent> BleedParticlesComponent; // 0x4b8(0x08)
	TWeakObjectPtr<UAudioComponent> PanicAudioComponent; // 0x4c0(0x08)
	float RagdollForceModifier; // 0x4c8(0x04)
	float DeathYRotationSpeed; // 0x4cc(0x04)
	float DeathXRotationSpeed; // 0x4d0(0x04)
	float SearchRange; // 0x4d4(0x04)
	float NewPointMax; // 0x4d8(0x04)
	float NewPointMin; // 0x4dc(0x04)
	float DeathSpeed; // 0x4e0(0x04)
	float DeathAcceleration; // 0x4e4(0x04)
	float AcidRate; // 0x4e8(0x04)
	float PostDeathAcidTime; // 0x4ec(0x04)
	bool HasDied; // 0x508(0x01)
	bool IsRightDestroyed; // 0x509(0x01)
	bool IsLeftDestroyed; // 0x50a(0x01)
	bool dropAcid; // 0x50b(0x01)

	void StopSpinAndDie();
	void SetDropAcid(bool dropAcid);
	void OnStartDeathPanic();
	void OnRep_DropAcid();
	void OnRep_Death();
	void OnRagdollHitGround(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void OnBladderDamage(float Amount);
	void OnArmorDestroyed(FName Name);
	void HideMesh();
	bool GetDropAcid();
	bool AreBladdersDestroyed();
};

// Class FSD.BomberAnimInstance
// Size: 0x300 (Inherited: 0x2f0)
struct UBomberAnimInstance : UFlyingBugAnimInstance {
	bool IsBombing; // 0x2f0(0x01)
	bool IsSpiraling; // 0x2f1(0x01)
};

// Class FSD.BoolUserSettingAsset
// Size: 0x58 (Inherited: 0x30)
struct UBoolUserSettingAsset : UDataAsset {
	FText SettingDisplayTitle; // 0x30(0x18)
	FName SettingID; // 0x48(0x08)
	bool SettingDefaultValue; // 0x50(0x01)

	void SetValue(bool InValue);
	bool GetValue();
};

// Class FSD.BoscoAbillity
// Size: 0x68 (Inherited: 0x30)
struct UBoscoAbillity : UDataAsset {
	FName AbillityName; // 0x30(0x08)
	UAnimSequenceBase* AbillityAnimation; // 0x38(0x08)
	USoundBase* VoiceOnUse; // 0x40(0x08)
	enum class EBoscoAbillityTargetPreference TargetType; // 0x48(0x01)
	float CoolDown; // 0x4c(0x04)
	float WindUp; // 0x50(0x04)
	float Duration; // 0x54(0x04)
	float range; // 0x58(0x04)
	float RechargeTime; // 0x5c(0x04)
	int32_t MaxCharges; // 0x60(0x04)
	bool TargetActorIfValid; // 0x64(0x01)
	bool RotateTowardsTarget; // 0x65(0x01)
};

// Class FSD.BoscoSpawnActorAbillity
// Size: 0x70 (Inherited: 0x68)
struct UBoscoSpawnActorAbillity : UBoscoAbillity {
	AActor* SpawnedActorClass; // 0x68(0x08)
};

// Class FSD.BoscoProjectileAbillity
// Size: 0x70 (Inherited: 0x68)
struct UBoscoProjectileAbillity : UBoscoAbillity {
	AProjectile* projectileClass; // 0x68(0x08)
};

// Class FSD.Bosco
// Size: 0x6b8 (Inherited: 0x380)
struct ABosco : ADeepPathfinderCharacter {
	UHealthComponent* HealthComponent; // 0x3b8(0x08)
	UBoscoAbillityComponent* AbillityComponent; // 0x3c0(0x08)
	UDamageComponent* Damage; // 0x3c8(0x08)
	UPawnSensingComponent* Senses; // 0x3d0(0x08)
	UDroneMiningToolBase* MiningTool; // 0x3d8(0x08)
	UBobbingComponent* BobbingComponent; // 0x3e0(0x08)
	USkeletalMeshComponent* BoscoMesh; // 0x3e8(0x08)
	UHitscanComponent* DroneHitScan; // 0x3f0(0x08)
	USpotLightComponent* SpotLightComponent; // 0x3f8(0x08)
	UPointLightComponent* PointLightComponent; // 0x400(0x08)
	UParticleSystemComponent* LTrail; // 0x408(0x08)
	UParticleSystemComponent* RTrail; // 0x410(0x08)
	UAudioComponent* MomentumSound; // 0x418(0x08)
	UDialogDataAsset* DefendDrilldozerShout; // 0x420(0x08)
	UDialogDataAsset* MineOrderShout; // 0x428(0x08)
	UDialogDataAsset* KillOrderShout; // 0x430(0x08)
	UDialogDataAsset* GoToOrderShout; // 0x438(0x08)
	UDialogDataAsset* ReviveOrderShout; // 0x440(0x08)
	UDialogDataAsset* PickupGemShout; // 0x448(0x08)
	UDialogDataAsset* ReviveThankShout; // 0x450(0x08)
	UDialogDataAsset* GeneralCallShout; // 0x458(0x08)
	UDialogDataAsset* RocketAbillityShout; // 0x460(0x08)
	UDialogDataAsset* CryoGrenadeAbillityShout; // 0x468(0x08)
	USoundBase* MineResponse; // 0x470(0x08)
	USoundBase* CombatResponse; // 0x478(0x08)
	USoundBase* LightResponse; // 0x480(0x08)
	USoundBase* ReviveResponse; // 0x488(0x08)
	USoundBase* AbillityResponse; // 0x490(0x08)
	USoundBase* CurrentResponse; // 0x498(0x08)
	float ResponseTime; // 0x4a0(0x04)
	FMulticastInlineDelegate OnReviveused; // 0x4a8(0x10)
	FMulticastInlineDelegate OnStateChanged; // 0x4b8(0x10)
	FGameplayTagContainer LosMatchTags; // 0x4e8(0x20)
	float SeeTargetTime; // 0x508(0x04)
	USoundBase* AbillityErrorSound; // 0x510(0x08)
	float INcreasedMiningArea; // 0x518(0x04)
	float TimeToResetMiningBoost; // 0x51c(0x04)
	float MiningBoosMultiplier; // 0x520(0x04)
	TArray<UItemUpgrade*> upgrades; // 0x528(0x10)
	UBoscoProjectileAbillity* RocketAbillity; // 0x538(0x08)
	UBoscoProjectileAbillity* CryoGrenadeAbillity; // 0x540(0x08)
	FGuid SaveGameID; // 0x548(0x10)
	UItemID* ItemID; // 0x558(0x08)
	UUpgradableBoscoComponent* Upgradable; // 0x560(0x08)
	UAnimSequenceBase* SaluteAnimation; // 0x568(0x08)
	UAnimSequenceBase* PickupGemAnimation; // 0x570(0x08)
	UAnimSequenceBase* DropGemAnimation; // 0x578(0x08)
	TArray<UAnimSequenceBase*> HitReaction; // 0x580(0x10)
	float SaluteDuration; // 0x590(0x04)
	UDroneSkinnableComponent* Skinnable; // 0x598(0x08)
	TArray<FBoscoLightSetting> LightSettings; // 0x5a0(0x10)
	int32_t TargetLightSetting; // 0x5b0(0x04)
	TArray<UBoscoAbillity*> CombatAbillities; // 0x5b8(0x10)
	AActor* RotateTarget; // 0x5c8(0x08)
	FVector LookAtLocation; // 0x5d0(0x0c)
	USoundCue* ShootSound; // 0x5e0(0x08)
	float ShootSoundFadeout; // 0x5e8(0x04)
	USoundCue* ShootSoundTail; // 0x5f0(0x08)
	UAudioComponent* ShootSoundInstance; // 0x5f8(0x08)
	UParticleSystem* MuzzleEffect; // 0x600(0x08)
	UParticleSystem* TracerEffect; // 0x608(0x08)
	float FireRate; // 0x610(0x04)
	int32_t MinShotsInBurst; // 0x614(0x04)
	int32_t MaxShotsInBurst; // 0x618(0x04)
	float MaxRandomBurstCooldown; // 0x61c(0x04)
	float MinRandomBurstCooldown; // 0x620(0x04)
	float MaxFiringAngle; // 0x624(0x04)
	float MaxEngagementRange; // 0x628(0x04)
	float MinTracerDistance; // 0x62c(0x04)
	float TracerSpeed; // 0x630(0x04)
	USoundBase* ReviveSirens; // 0x638(0x08)
	TWeakObjectPtr<UAudioComponent> ReviveSirensComponent; // 0x640(0x08)
	float DistanceToFacePlayer; // 0x648(0x04)
	float RotationSpeed; // 0x64c(0x04)
	float PrepareToMineRange; // 0x650(0x04)
	float MiningRange; // 0x654(0x04)
	int32_t MaxRevives; // 0x680(0x04)
	bool IsFiring; // 0x694(0x01)
	bool IsInRangeToMine; // 0x695(0x01)
	bool IsPreparedToMine; // 0x696(0x01)
	bool IsMining; // 0x697(0x01)
	bool IsReviving; // 0x698(0x01)
	bool IsRotateMode; // 0x699(0x01)
	ABoscoController* DroneController; // 0x6a8(0x08)
	enum class EDroneAIState CurrentState; // 0x6b0(0x01)

	void UseABillity();
	void StopShootingSound();
	void StateChanged(enum class EDroneAIState aCurrentState);
	void StartSelfDestruct();
	void SetIsReviving(bool aIsReviving);
	void SetIsRepairing(bool isRepairing);
	void SelfDestruct();
	void ReviveCounterChanged(int32_t remainingCharges);
	void Respond();
	void PlaySalute();
	void OnWeaponFired(FVector Location);
	void OnTargetBurrowChange(bool burrowed);
	void OnRep_State(enum class EDroneAIState prevState);
	void OnReadyToShoot();
	void OnNotReadyToShoot();
	void OnHit(float Amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, FName BoneName);
	void OnGrabbedGem();
	void MineEffects(UTerrainMaterial* aTerrainMaterial, FVector_NetQuantize aLocation, FRotator aRotation);
	UUpgradableBoscoComponent* GetUpgradeComponent();
	int32_t GetReviveCharges();
	UBoscoAbillityComponent* GetPlayerAbillity();
	enum class EDroneAIState GetCurrentState();
	bool GetCarryInterrupted();
	bool DoPickupGemAnimation();
	void All_OnSelfDestruct();
};

// Class FSD.BoscoAnimInstance
// Size: 0x2a0 (Inherited: 0x270)
struct UBoscoAnimInstance : UAnimInstance {
	FMulticastInlineDelegate OnWeaponsReady; // 0x268(0x10)
	FMulticastInlineDelegate OnWeaponsNotReady; // 0x278(0x10)
	float DigAnimPlayRate; // 0x288(0x04)
	enum class EDroneAIState CurrentState; // 0x28c(0x01)
	bool IsReadyToMine; // 0x28d(0x01)
	bool IsMining; // 0x28e(0x01)
	bool IsFiring; // 0x28f(0x01)
	bool IsReviving; // 0x290(0x01)
	bool IsCarryingGem; // 0x291(0x01)
};

// Class FSD.BoscoWeaponsFoldedOutNotify
// Size: 0x38 (Inherited: 0x38)
struct UBoscoWeaponsFoldedOutNotify : UAnimNotify {
};

// Class FSD.BoscoWeaponsFoldedInNotify
// Size: 0x38 (Inherited: 0x38)
struct UBoscoWeaponsFoldedInNotify : UAnimNotify {
};

// Class FSD.BoscoAbillityComponent
// Size: 0x150 (Inherited: 0xb0)
struct UBoscoAbillityComponent : UActorComponent {
	FMulticastInlineDelegate OnAbillityChargeProgress; // 0xb0(0x10)
	FMulticastInlineDelegate OnAbillityChargeUsed; // 0xc0(0x10)
	TArray<UItemUpgrade*> upgrades; // 0xd0(0x10)
	AProjectileBase* projectileClass; // 0xf0(0x08)
	UAnimSequenceBase* Animation; // 0xf8(0x08)
	USoundBase* VoiceOnUse; // 0x100(0x08)
	TWeakObjectPtr<AActor> Target; // 0x108(0x08)
	TWeakObjectPtr<ABosco> AbillityOwner; // 0x110(0x08)

	int32_t GetMaxCharges();
	int32_t GetCharges();
};

// Class FSD.FSDAIController
// Size: 0x358 (Inherited: 0x328)
struct AFSDAIController : AAIController {
	FMulticastInlineDelegate OnMessageBehaviorTreeEvent; // 0x328(0x10)
	FMulticastInlineDelegate OnAlertedEvent; // 0x338(0x10)
	enum class ECollisionChannel LOSTraceChannel; // 0x348(0x01)
	TWeakObjectPtr<APlayerCharacter> TargetedPlayer; // 0x34c(0x08)

	void SetAlerted(bool isAlerted);
	void ResumeLogic();
	void RegisterBlackboardChanges(FName Key);
	void Recieve_BlackboardValueChanged(FName KeyName);
	void PauseLogic();
	void OnAttackingChanged(bool attacking);
	bool GetIsAlerted();
};

// Class FSD.BoscoController
// Size: 0x5f0 (Inherited: 0x358)
struct ABoscoController : AFSDAIController {
	UBehaviorTree* BehaviourTree; // 0x358(0x08)
	float CheckOutOfTheWayInterval; // 0x360(0x04)
	float DistCountAsSameHit; // 0x36c(0x04)
	FMulticastInlineDelegate OnFollowTargetChangedDelegate; // 0x370(0x10)
	UTerrainMaterial* HearthstoneCrystalMaterial; // 0x428(0x08)
	float SearchForEnemiesInterval; // 0x430(0x04)
	float SaluteDelay; // 0x438(0x04)
	float SaluteCooldown; // 0x440(0x04)
	float CheckGraberInterval; // 0x448(0x04)
	float MaxThrowStrength; // 0x450(0x04)
	float MaxThrowRange; // 0x454(0x04)
	float RepairRange; // 0x458(0x04)
	float DistanceCountedAsClose; // 0x45c(0x04)
	FGameplayTagQuery TargetQuery; // 0x460(0x48)
	FGameplayTagQuery LaserPointerTargetQuery; // 0x4a8(0x48)
	FGameplayTagQuery FollowTargetTagQuery; // 0x4f0(0x48)
	FGameplayTagQuery DefendTageQuery; // 0x538(0x48)
	float ReviveHealthPercentage; // 0x580(0x04)
	UDroneUseComponent* CurrentUse; // 0x588(0x08)
	ACarriableItem* TryingToPickGem; // 0x590(0x08)

	void ReviveTarget();
	void ResetToFollowState();
	void RegisterPlayer(APlayerCharacter* APlayerCharacter);
	void PickupGem();
	void OnUseDone(int32_t TimesUsed);
	void OnSecondaryLaserPointer(AActor* aTarget, FVector aLocation);
	void OnPlayerShout(APlayerCharacter* APlayerCharacter);
	void OnPlayerSalute(APlayerCharacter* aCharacater);
	void OnPlayerLeave(AFSDPlayerState* APlayerState);
	void OnLaserPointer(FLaserPointerTarget HitInfo);
	void OnJobFinished();
	void OnEscortTargetDied(UHealthComponentBase* Health);
	FVector GetPointNearPlayers();
	AActor* GetFollowTarget();
	void GenerateRelativeLocation(AActor* aTarget, float aRange, float aHeightRestriction, float aMinRange, bool aTryToStayOutOfTheWay, bool aStayBehind);
	void GemUsed(APlayerCharacter* usedBy, enum class EInputKeys Key);
	void ConfirmPickup();
	void CarriableDrop();
};

// Class FSD.SimpleBossFight
// Size: 0x48 (Inherited: 0x28)
struct USimpleBossFight : UObject {
	FBossFight BossFight; // 0x30(0x18)
};

// Class FSD.BossFightSubSystem
// Size: 0x60 (Inherited: 0x30)
struct UBossFightSubSystem : UGameInstanceSubsystem {
	FMulticastInlineDelegate OnNewBossFight; // 0x30(0x10)
	FMulticastInlineDelegate OnBossFightRemoved; // 0x40(0x10)
	TArray<TScriptInterface<IBossFightInterface>> ActiveBossFights; // 0x50(0x10)

	void RegisterBossFight(TScriptInterface<IBossFightInterface> BossFight);
	void DeregisterBossFight(AActor* boss);
	void BossFightDelegate__DelegateSignature(TScriptInterface<IBossFightInterface> BossFight);
};

// Class FSD.BossFightInterface
// Size: 0x28 (Inherited: 0x28)
struct UBossFightInterface : UInterface {

	bool IsStillValid();
	UBossFightWidget* GetWidgetClass();
	AActor* GetBossActor();
};

// Class FSD.BossFightWidget
// Size: 0x240 (Inherited: 0x230)
struct UBossFightWidget : UUserWidget {
	TScriptInterface<IBossFightInterface> BossFight; // 0x230(0x10)
};

// Class FSD.BoxFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBoxFunctionLibrary : UBlueprintFunctionLibrary {

	FBox CreateBoxAt(FVector Location, FVector Size);
	FVector ClosestPointToBox(FVector Pos, FBox Box);
	float BoxSize(FBox Box);
	FVector BoxExtends(FBox Box);
	FVector BoxCenter(FBox Box);
};

// Class FSD.GenerationComponent
// Size: 0x3f0 (Inherited: 0x3f0)
struct UGenerationComponent : UPrimitiveComponent {
};

// Class FSD.BoxGenerationComponent
// Size: 0x410 (Inherited: 0x3f0)
struct UBoxGenerationComponent : UGenerationComponent {
	FVector Extends; // 0x3f0(0x0c)
	bool IsCarver; // 0x3fc(0x01)
	float NoiseRange; // 0x400(0x04)
	bool Visible; // 0x404(0x01)
	UFloodFillSettings* Noise; // 0x408(0x08)
};

// Class FSD.GenerationItem
// Size: 0x228 (Inherited: 0x220)
struct AGenerationItem : AActor {
	bool Visible; // 0x220(0x01)
	bool AddToLevel; // 0x221(0x01)
};

// Class FSD.BoxGenerationItem
// Size: 0x230 (Inherited: 0x228)
struct ABoxGenerationItem : AGenerationItem {
	UBoxGenerationComponent* BoxComponent; // 0x228(0x08)
};

// Class FSD.BTDecorator_AttackInRange
// Size: 0x98 (Inherited: 0x90)
struct UBTDecorator_AttackInRange : UBTDecorator_BlackboardBase {
	FName AttackName; // 0x90(0x08)
};

// Class FSD.BTDecorator_CanSeeTarget
// Size: 0xa8 (Inherited: 0x68)
struct UBTDecorator_CanSeeTarget : UBTDecorator {
	bool UseAsync; // 0x68(0x01)
	float MaxRange; // 0x6c(0x04)
	FVector EyeLocationOffset; // 0x70(0x0c)
	FBlackboardKeySelector TargetKey; // 0x80(0x28)
};

// Class FSD.BTDecorator_CheckObstruction
// Size: 0xb0 (Inherited: 0x68)
struct UBTDecorator_CheckObstruction : UBTDecorator {
	float range; // 0x68(0x04)
	bool UseOwnerCenterMass; // 0x6c(0x01)
	FVector EyeLocationOffset; // 0x70(0x0c)
	FName RangedSocket; // 0x7c(0x08)
	FBlackboardKeySelector TargetKey; // 0x88(0x28)
};

// Class FSD.BTDecorator_CheckPlayerCount
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator_CheckPlayerCount : UBTDecorator {
	int32_t playerCount; // 0x68(0x04)
	bool AllowLessThanCount; // 0x6c(0x01)
};

// Class FSD.BTDecorator_ConditionalGuard
// Size: 0x98 (Inherited: 0x68)
struct UBTDecorator_ConditionalGuard : UBTDecorator {
	FBlackboardKeySelector GuardKey; // 0x68(0x28)
	bool InvertLogic; // 0x90(0x01)
};

// Class FSD.BTDecorator_FormationGuard
// Size: 0x68 (Inherited: 0x68)
struct UBTDecorator_FormationGuard : UBTDecorator {
};

// Class FSD.BTDecorator_InRange
// Size: 0xa0 (Inherited: 0x90)
struct UBTDecorator_InRange : UBTDecorator_BlackboardBase {
	float MinRange; // 0x90(0x04)
	float MaxRange; // 0x94(0x04)
	enum class FAIDistanceType GeometricDistanceType; // 0x98(0x01)
};

// Class FSD.BTDecorator_InRangeBB
// Size: 0xe8 (Inherited: 0x90)
struct UBTDecorator_InRangeBB : UBTDecorator_BlackboardBase {
	FBlackboardKeySelector MinRangeKey; // 0x90(0x28)
	FBlackboardKeySelector MaxRangeKey; // 0xb8(0x28)
	enum class FAIDistanceType GeometricDistanceType; // 0xe0(0x01)
};

// Class FSD.BTDecorator_InRangeEx
// Size: 0xa0 (Inherited: 0x90)
struct UBTDecorator_InRangeEx : UBTDecorator_BlackboardBase {
	float MinRange; // 0x90(0x04)
	float MaxRange; // 0x94(0x04)
	enum class FAIDistanceType GeometricDistanceType; // 0x98(0x01)
};

// Class FSD.BTDecorator_InRangeOfTarget
// Size: 0x98 (Inherited: 0x90)
struct UBTDecorator_InRangeOfTarget : UBTDecorator_BlackboardBase {
	float MinRange; // 0x90(0x04)
	float MaxRange; // 0x94(0x04)
};

// Class FSD.BTDecorator_IsFacing
// Size: 0x98 (Inherited: 0x90)
struct UBTDecorator_IsFacing : UBTDecorator_BlackboardBase {
	float MaxAngle; // 0x90(0x04)
};

// Class FSD.BTDecorator_LockRotation
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator_LockRotation : UBTDecorator {
};

// Class FSD.BTDecorator_MessageAI
// Size: 0x78 (Inherited: 0x68)
struct UBTDecorator_MessageAI : UBTDecorator {
	FName ActivationMessage; // 0x68(0x08)
	FName DeactivationMessage; // 0x70(0x08)
};

// Class FSD.BTDecorator_ModifySpeed
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator_ModifySpeed : UBTDecorator {
	float SpeedModifier; // 0x68(0x04)
};

// Class FSD.BTDecorator_RandomChance
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator_RandomChance : UBTDecorator {
	float Chance; // 0x68(0x04)
};

// Class FSD.BTDecorator_RandomCooldown
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator_RandomCooldown : UBTDecorator {
	FRandRange CoolDownTime; // 0x68(0x08)
};

// Class FSD.BTDecorator_SetTagRandomCooldown
// Size: 0x80 (Inherited: 0x68)
struct UBTDecorator_SetTagRandomCooldown : UBTDecorator {
	FGameplayTag CooldownTag; // 0x68(0x08)
	FRandRange CooldownDuration; // 0x70(0x08)
	bool bAddToExistingDuration; // 0x78(0x01)
	bool TriggerOnActivation; // 0x79(0x01)
};

// Class FSD.BTDecorator_TagRandomCooldown
// Size: 0x80 (Inherited: 0x68)
struct UBTDecorator_TagRandomCooldown : UBTDecorator {
	FGameplayTag CooldownTag; // 0x68(0x08)
	FRandRange CooldownDuration; // 0x70(0x08)
	bool bAddToExistingDuration; // 0x78(0x01)
	bool bActivatesCooldown; // 0x79(0x01)
};

// Class FSD.BTDecorator_RandomLoop
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator_RandomLoop : UBTDecorator {
	float Chance; // 0x68(0x04)
};

// Class FSD.BTDecorator_VariableLoop
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator_VariableLoop : UBTDecorator {
	FIRandRange NumLoops; // 0x68(0x08)
};

// Class FSD.BTDecorator_SharedCooldown
// Size: 0x98 (Inherited: 0x68)
struct UBTDecorator_SharedCooldown : UBTDecorator {
	FRandRange CoolDownTime; // 0x68(0x08)
	FBlackboardKeySelector CooldownKey; // 0x70(0x28)
};

// Class FSD.BTDecorator_SharedAttackCooldown
// Size: 0x98 (Inherited: 0x68)
struct UBTDecorator_SharedAttackCooldown : UBTDecorator {
	FRandRange CoolDownTime; // 0x68(0x08)
	FBlackboardKeySelector CooldownKey; // 0x70(0x28)
};

// Class FSD.BTServer_ChaseTarget
// Size: 0x100 (Inherited: 0x70)
struct UBTServer_ChaseTarget : UBTService {
	FBlackboardKeySelector TargetKey; // 0x70(0x28)
	bool MustBeAlive; // 0x98(0x01)
	FGameplayTag SwitchTargetCooldownTag; // 0x9c(0x08)
	FGameplayTagQuery TargetingQuery; // 0xa8(0x48)
	bool IsFlying; // 0xf0(0x01)
	bool CanShoot; // 0xf1(0x01)
	float TargetingRange; // 0xf4(0x04)
	float SwitchTargetTime; // 0xf8(0x04)
	float SwitchTargetDeviation; // 0xfc(0x04)
};

// Class FSD.BTService_FindPlayer
// Size: 0xa8 (Inherited: 0x70)
struct UBTService_FindPlayer : UBTService {
	FBlackboardKeySelector TargetKey; // 0x70(0x28)
	bool MustBeAlive; // 0x98(0x01)
	bool SwithToBetterTargets; // 0x99(0x01)
	bool RegisterForPositioning; // 0x9a(0x01)
	bool IsFlying; // 0x9b(0x01)
	bool CanShoot; // 0x9c(0x01)
	float TargetingRange; // 0xa0(0x04)
};

// Class FSD.BTService_FindAttackable
// Size: 0xf0 (Inherited: 0x70)
struct UBTService_FindAttackable : UBTService {
	FBlackboardKeySelector TargetKey; // 0x70(0x28)
	bool MustBeAlive; // 0x98(0x01)
	bool SwithToBetterTargets; // 0x99(0x01)
	bool RegisterForPositioning; // 0x9a(0x01)
	bool IsFlying; // 0x9b(0x01)
	bool CanShoot; // 0x9c(0x01)
	float TargetingRange; // 0xa0(0x04)
	FGameplayTagQuery TargetQuery; // 0xa8(0x48)
};

// Class FSD.BTService_SetStance
// Size: 0xa0 (Inherited: 0x70)
struct UBTService_SetStance : UBTService {
	FBlackboardKeySelector TargetLocationKey; // 0x70(0x28)
	float Distance; // 0x98(0x04)
};

// Class FSD.BTService_CheckPathToTarget
// Size: 0xc0 (Inherited: 0x70)
struct UBTService_CheckPathToTarget : UBTService {
	FBlackboardKeySelector TargetKey; // 0x70(0x28)
	FBlackboardKeySelector ResultKey; // 0x98(0x28)
};

// Class FSD.BTService_UpdateMoveToTarget
// Size: 0xc8 (Inherited: 0x70)
struct UBTService_UpdateMoveToTarget : UBTService {
	FBlackboardKeySelector TargetKey; // 0x70(0x28)
	FBlackboardKeySelector TargetLocationKey; // 0x98(0x28)
	float LookAheadTime; // 0xc0(0x04)
	float VerticalOffset; // 0xc4(0x04)
};

// Class FSD.BTService_UpdateFlyingMoveToTarget
// Size: 0xc8 (Inherited: 0x70)
struct UBTService_UpdateFlyingMoveToTarget : UBTService {
	FBlackboardKeySelector TargetKey; // 0x70(0x28)
	FBlackboardKeySelector TargetLocationKey; // 0x98(0x28)
	float LookAheadTime; // 0xc0(0x04)
};

// Class FSD.BTService_UpdateMoveInFormation
// Size: 0xa8 (Inherited: 0x70)
struct UBTService_UpdateMoveInFormation : UBTService {
	float LookAheadTime; // 0x70(0x04)
	FBlackboardKeySelector TargetLocationKey; // 0x78(0x28)
	float AttackerRadius; // 0xa0(0x04)
};

// Class FSD.BTTask_Attack
// Size: 0xa0 (Inherited: 0x70)
struct UBTTask_Attack : UBTTaskNode {
	FBlackboardKeySelector TargetKey; // 0x70(0x28)
	FName AttackName; // 0x98(0x08)

	void OnAttackCompleted(UBehaviorTreeComponent* btComponent);
};

// Class FSD.BTTask_FakePhysicsMove
// Size: 0xc8 (Inherited: 0x98)
struct UBTTask_FakePhysicsMove : UBTTask_BlackboardBase {
	float MinTime; // 0x98(0x04)
	float EndMaxSpeed; // 0x9c(0x04)
	FVector InitialLocalVelocity; // 0xa0(0x0c)
	FVector InitialGlobalVelocity; // 0xac(0x0c)
	bool EndRequireSolidGround; // 0xb8(0x01)
	UFakeMoverSettings* MoveSettings; // 0xc0(0x08)
};

// Class FSD.BTTask_FindPointNearCeiling
// Size: 0xa8 (Inherited: 0x98)
struct UBTTask_FindPointNearCeiling : UBTTask_BlackboardBase {
	float CloseToCeilingBias; // 0x98(0x04)
	float LookForCeilingLength; // 0x9c(0x04)
	float SearchRadius; // 0xa0(0x04)
};

// Class FSD.BTTask_MoveToTarget
// Size: 0xa0 (Inherited: 0x98)
struct UBTTask_MoveToTarget : UBTTask_BlackboardBase {
	float AcceptableRadius; // 0x98(0x04)
	bool EnterAttackStanceOnMoveFinished; // 0x9c(0x01)
};

// Class FSD.BTTask_MoveToSlot
// Size: 0xa8 (Inherited: 0x98)
struct UBTTask_MoveToSlot : UBTTask_BlackboardBase {
	float AcceptableRadius; // 0x98(0x04)
	float LookAheadTime; // 0x9c(0x04)
	float VerticalOffset; // 0xa0(0x04)
	float UpdateRate; // 0xa4(0x04)
};

// Class FSD.BTTask_SetAttacking
// Size: 0x98 (Inherited: 0x70)
struct UBTTask_SetAttacking : UBTTaskNode {
	FBlackboardKeySelector TargetKey; // 0x70(0x28)
};

// Class FSD.BTTask_TriggerAI
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_TriggerAI : UBTTaskNode {
	FName TriggerName; // 0x70(0x08)
};

// Class FSD.BTTask_MessageAI
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_MessageAI : UBTTaskNode {
	FName MessageName; // 0x70(0x08)
};

// Class FSD.BTTask_SetCondition
// Size: 0xa0 (Inherited: 0x70)
struct UBTTask_SetCondition : UBTTaskNode {
	FBlackboardKeySelector ConditionalKey; // 0x70(0x28)
	bool Value; // 0x98(0x01)
};

// Class FSD.BuildRestriction
// Size: 0x38 (Inherited: 0x30)
struct UBuildRestriction : UDataAsset {
	int32_t BuildType; // 0x30(0x04)
	int32_t Platform; // 0x34(0x04)
};

// Class FSD.BurrowComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UBurrowComponent : UActorComponent {

	void Unburrow(UAnimMontage* customMontage);
	void CallBurrow(bool isBurrowing, UAnimMontage* customMontage);
	void Burrow(UAnimMontage* customMontage);
};

// Class FSD.CalldownItem
// Size: 0x3e8 (Inherited: 0x388)
struct ACalldownItem : AAnimatedItem {
	UItemPlacerAggregator* ItemPlacerClass; // 0x388(0x08)
	ARessuplyPod* SupplyPodClass; // 0x390(0x08)
	UResourceData* ResouceRequired; // 0x398(0x08)
	FText OrderDescription; // 0x3a0(0x18)
	FText LogText; // 0x3b8(0x18)
	AActor* ResupplyBeacon; // 0x3d0(0x08)
	UItemPlacerAggregator* ItemPlacerInstance; // 0x3d8(0x08)
	float CoolDown; // 0x3e0(0x04)
	float CooldownRemaining; // 0x3e4(0x04)

	void Server_Call_Resupply(FVector Location);
};

// Class FSD.CampaignManager
// Size: 0xb8 (Inherited: 0x28)
struct UCampaignManager : UObject {
	FMulticastInlineDelegate OnCampaignCompleted; // 0x28(0x10)
	FMulticastInlineDelegate OnCampaignChanged; // 0x38(0x10)
	UCampaign* MainCampaign; // 0x48(0x08)
	TArray<UCampaign*> WeeklyCampaigns; // 0x50(0x10)
	TArray<UCampaign*> MatrixCoreHuntCampaigns; // 0x60(0x10)
	TArray<UCampaign*> SideCampaigns; // 0x70(0x10)
	TArray<UCampaign*> EventCampaigns; // 0x80(0x10)
	UCampaign* ActiveCampaign; // 0x90(0x08)
	int32_t NumFailedRequests; // 0x98(0x04)
	bool WeeklyBackendDataValid; // 0x9c(0x01)
	int32_t WeeklyBackendSeed; // 0xa0(0x04)
	FDateTime WeeklyBackendExpirationTime; // 0xa8(0x08)
	FDateTime LastRequestTime; // 0xb0(0x08)

	void StartNewCampaign(UCampaign* campaignClass, UFSDSaveGame* SaveGame);
	void SkipMainCampaign(UObject* WorldContextObject);
	void OnEventsRefreshed();
	bool IsWeeklyCampaignCompleted(UObject* WorldContext, enum class ECampaignType campaigntype);
	bool IsInCampaignMission(AFSDPlayerController* Player);
	bool IsCampaignRestrictionsMet(UObject* WorldContextObject, UGeneratedMission* mission, UDifficultySetting* optionalDifficulty);
	bool IsCampaignMission(UObject* WorldContextObject, UGeneratedMission* mission);
	bool IsActiveCampaign(UCampaign* Campaign);
	TArray<UCampaign*> GetUncompletedCampaigns(AFSDPlayerController* Player);
	UGeneratedMission* GetCampaingMissionFromSeeds(UObject* WorldContextObject, int32_t GlobalSeed, int32_t MissionSeed);
	UGeneratedMission* GetCampaingMission(TArray<UGeneratedMission*> missions, int32_t MissionSeed);
	void CampaignCompletedDelegate__DelegateSignature();
	void AbortActiveCampaign(UFSDSaveGame* SaveGame);
};

// Class FSD.Campaign
// Size: 0x168 (Inherited: 0x28)
struct UCampaign : UObject {
	TArray<UCampaignMission*> missions; // 0x28(0x10)
	TArray<UCampaignRequirement*> Requirements; // 0x38(0x10)
	TArray<UCampaignRequirement*> VisibilityRequirements; // 0x48(0x10)
	UPlayerCharacterID* RequiredCharacterID; // 0x58(0x08)
	TArray<UDifficultySetting*> RestrictedToDifficulties; // 0x60(0x10)
	int32_t Progress; // 0x70(0x04)
	FGuid SaveGameID; // 0x74(0x10)
	bool CanAbort; // 0x84(0x01)
	bool CanSkip; // 0x85(0x01)
	enum class ECampaignMutators Mutators; // 0x88(0x04)
	FText TitlePrefix; // 0x90(0x18)
	FText Title; // 0xa8(0x18)
	FText DescriptionHeader; // 0xc0(0x18)
	FText Description; // 0xd8(0x18)
	FText RewardText; // 0xf0(0x18)
	FText RewardFlavorText; // 0x108(0x18)
	UTexture2D* Icon; // 0x120(0x08)
	TSoftObjectPtr<UTexture2D> Picture; // 0x128(0x28)
	enum class ECampaignType campaigntype; // 0x150(0x01)
	UMissionStat* CampaignCompletedMissionStat; // 0x158(0x08)
	UGameActivityAssignmentType* CampaignActivity; // 0x160(0x08)

	bool IsComplete();
	bool IsCampaignComplete(UObject* WorldContext, UCampaign* Campaign);
	UCampaign* GetReference(UCampaign* Campaign);
	UCampaignMission* GetPreviousMission();
	UTexture2D* GetPicture();
	FText GetCampaignTitle(UCampaign* Campaign);
	UCampaignMission* GetActiveMission();
	bool CanStartCampaign(AFSDPlayerController* Player);
	bool CanSeeCampaign(APlayerController* PlayerController);
	bool AreRestrictionsMet(AFSDPlayerController* Player, UDifficultySetting* optionalDifficulty);
};

// Class FSD.CampaignMission
// Size: 0x68 (Inherited: 0x30)
struct UCampaignMission : UDataAsset {
	UPlanetZone* PlanetZone; // 0x30(0x08)
	FRequiredMissionItem mission; // 0x38(0x18)
	TArray<UReward*> Rewards; // 0x50(0x10)
	UDialogDataAsset* MissionCompleteShout; // 0x60(0x08)

	UMissionTemplate* GetMissionTemplate();
};

// Class FSD.CampaignRequirement
// Size: 0x28 (Inherited: 0x28)
struct UCampaignRequirement : UObject {

	bool IsRequirementMet(AFSDPlayerController* Player, UCampaign* Campaign);
};

// Class FSD.ValidWeeklySeedCampaignRequirement
// Size: 0x28 (Inherited: 0x28)
struct UValidWeeklySeedCampaignRequirement : UCampaignRequirement {
};

// Class FSD.CaracterLevelCampaignRequirement
// Size: 0x38 (Inherited: 0x28)
struct UCaracterLevelCampaignRequirement : UCampaignRequirement {
	UPlayerCharacterID* characterID; // 0x28(0x08)
	int32_t LevelRequirement; // 0x30(0x04)
};

// Class FSD.PlayerRankCampaignRequirement
// Size: 0x30 (Inherited: 0x28)
struct UPlayerRankCampaignRequirement : UCampaignRequirement {
	int32_t RankRequirement; // 0x28(0x04)
};

// Class FSD.RetirementCampaignRequirement
// Size: 0x38 (Inherited: 0x28)
struct URetirementCampaignRequirement : UCampaignRequirement {
	UPlayerCharacterID* characterID; // 0x28(0x08)
	int32_t LevelRequirement; // 0x30(0x04)
};

// Class FSD.WeeklyTimerCampaignRequirement
// Size: 0x28 (Inherited: 0x28)
struct UWeeklyTimerCampaignRequirement : UCampaignRequirement {

	FTimespan GetWeeklyTimeLeft(AFSDPlayerController* Player);
	FTimespan GetTimeUntillNewCampaign(AFSDPlayerController* Player);
	bool GetHasCompleted(UCampaign* Campaign, AFSDPlayerController* Player);
};

// Class FSD.AnyRetiredCampaignRequirement
// Size: 0x28 (Inherited: 0x28)
struct UAnyRetiredCampaignRequirement : UCampaignRequirement {
};

// Class FSD.CamapaignCompletedRequirement
// Size: 0x30 (Inherited: 0x28)
struct UCamapaignCompletedRequirement : UCampaignRequirement {
	UCampaign* Campaign; // 0x28(0x08)
};

// Class FSD.CapacityBasedItemAggregator
// Size: 0x140 (Inherited: 0xc8)
struct UCapacityBasedItemAggregator : UItemAggregator {
	FMulticastInlineDelegate OnCurrentAmountChanged; // 0xc8(0x10)
	FMulticastInlineDelegate OnMaxAmountChanged; // 0xd8(0x10)
	FMulticastInlineDelegate OnClipAndTotalChanged; // 0xe8(0x10)
	FMulticastInlineDelegate OnReloadTimeChanged; // 0xf8(0x10)
	FMulticastInlineDelegate OnReloadComplete; // 0x108(0x10)
	FMulticastInlineDelegate OnReloadStarted; // 0x118(0x10)
	FMulticastInlineDelegate OnMaxAmmoCapacityChanged; // 0x128(0x10)
	bool showClipCount; // 0x138(0x01)

	void ReloadStarted();
	void ReloadComplete();
	int32_t GetMaxAmount();
	int32_t GetCurrentAmount();
};

// Class FSD.CapacityHoldingItemAggregator
// Size: 0x160 (Inherited: 0x140)
struct UCapacityHoldingItemAggregator : UCapacityBasedItemAggregator {
	int32_t MaxAmmo; // 0x150(0x04)
	int32_t AmmoCount; // 0x154(0x04)
	bool UseRejoin; // 0x158(0x01)

	void UseAmmo(int32_t count);
	void SetMaxAmmo(int32_t InMaxAmmo, bool InChangeCurrentAmount);
	void Resupply(float percentage);
	void OnRep_MaxAmmo();
	void OnRep_AmmoCount();
	void AddAmmo(int32_t Amount);
};

// Class FSD.CappedResource
// Size: 0x78 (Inherited: 0x28)
struct UCappedResource : UObject {
	FMulticastInlineDelegate OnChanged; // 0x28(0x10)
	FMulticastInlineDelegate OnIncreased; // 0x38(0x10)
	FMulticastInlineDelegate OnFull; // 0x48(0x10)
	UResourceData* Data; // 0x58(0x08)
	float currentAmount; // 0x60(0x04)
	float MaxAmount; // 0x64(0x04)
	float TotalCollected; // 0x68(0x04)
	int32_t FullFlag; // 0x6c(0x04)

	float TransferAll(UCappedResource* Receiver);
	float Transfer(float Amount, UCappedResource* Receiver);
	void OnRep_FullFlag(int32_t OldValue);
	void OnRep_CurrentAmount(float OldAmount);
	bool IsObjectiveResource(UObject* WorldContext, bool IsCompleted);
	bool IsFull();
	bool isEmpty();
	bool IsCraftingResource();
	FText GetTitle();
	FColor GetColor();
	float GetCapacityPct();
	float Deduct(float Amount);
	float Add(float Amount);
};

// Class FSD.Caretaker
// Size: 0x398 (Inherited: 0x2f0)
struct ACaretaker : AFSDPawn {
	USceneComponent* Root; // 0x2f0(0x08)
	USkeletalMeshComponent* Body; // 0x2f8(0x08)
	TArray<USkeletalMeshComponent*> Eyes; // 0x300(0x10)
	TArray<UPassthroughSubHealthComponent*> subHealth; // 0x310(0x10)
	UHealthDamageTracker* DamageTracker; // 0x320(0x08)
	UEnemyHealthComponent* Health; // 0x328(0x08)
	TArray<UCaretakerActionComponent*> Actions; // 0x330(0x10)
	UCaretakerActionComponent* CurrentAction; // 0x340(0x08)
	TArray<UAnimSequenceBase*> HitReactions; // 0x348(0x10)
	int32_t CurrentStage; // 0x358(0x04)
	TArray<float> RotationRates; // 0x368(0x10)
	float Server_Rotation; // 0x378(0x04)
	bool IsInStageCooldown; // 0x37c(0x01)
	bool IsWeakpointAVisible; // 0x37d(0x01)
	bool IsWeakpointBVisible; // 0x37e(0x01)
	bool IsWeakpointCVisible; // 0x37f(0x01)
	bool IsWeakpointDVisible; // 0x380(0x01)
	enum class ECaretakerSpawnType ActiveSpawnType; // 0x381(0x01)
	int32_t AoEStage; // 0x384(0x04)
	int8_t OpenEye; // 0x395(0x01)

	void WakeUp();
	void SetTargetRotationRate(int32_t rateIndex);
	void OpenRandomEye(bool forbidLastEye);
	void OnStartHideFromDamage();
	void OnRep_OpenEye();
	void OnRep_CurrentStage();
	void OnRep_CurrentRotation();
	void OnNewStage(int32_t stageIndex);
	void OnEyeOpened(USkeletalMeshComponent* eye);
	void OnEyeClosed(USkeletalMeshComponent* eye);
	void OnDamageTaken(float Amount);
	bool IsAwake();
	bool IsAnyEyeOpen();
	void InitiateNextStage();
	void InitCaretakerActions(TArray<UCaretakerActionComponent*> carettakeractions);
	void CloseAllEyes();
};

// Class FSD.CaretagerBodyAnimInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct UCaretagerBodyAnimInstance : UEnemyAnimInstance {
	bool CoolingOff; // 0x2b8(0x01)
	bool IsWeakpointAVisible; // 0x2b9(0x01)
	bool IsWeakpointBVisible; // 0x2ba(0x01)
	bool IsWeakpointCVisible; // 0x2bb(0x01)
	bool IsWeakpointDVisible; // 0x2bc(0x01)
	float RotationAngle; // 0x2c0(0x04)
	int32_t AoEStage; // 0x2c4(0x04)
	bool IsSpawningDrones; // 0x2c8(0x01)
	bool IsSpawningBombs; // 0x2c9(0x01)
	bool IsSpawningShredders; // 0x2ca(0x01)
	bool IsSpawningTurrets; // 0x2cb(0x01)
};

// Class FSD.CaretakerEyeAnimInstance
// Size: 0x2c0 (Inherited: 0x2c0)
struct UCaretakerEyeAnimInstance : UEnemyAnimInstance {
	bool IsOpen; // 0x2b8(0x01)
};

// Class FSD.CaretakerActionComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UCaretakerActionComponent : UActorComponent {
	bool StartTickOnUse; // 0xb0(0x01)
	bool IsUsing; // 0xb1(0x01)

	void UseAction();
	void TriggerAction();
	void StopUsing();
	void OnTriggered();
	void OnStopped();
	void OnStarted();
	void OnRep_IsUsing();
	ACaretaker* GetCaretaker();
	bool CanUse();
};

// Class FSD.UsableComponentBase
// Size: 0xf0 (Inherited: 0xb0)
struct UUsableComponentBase : UActorComponent {
	FMulticastInlineDelegate OnClientBeginUse; // 0xb0(0x10)
	int32_t CallbackKeys; // 0xc0(0x04)
	float UseCooldown; // 0xc4(0x04)
	bool MustBeGroundedToUse; // 0xc8(0x01)
	bool CanUseStrict; // 0xc9(0x01)
	bool StrictOnlyAfterPickup; // 0xca(0x01)
	UUseAnimationSetting* AnimationSettings; // 0xd0(0x08)
	int32_t Priority; // 0xd8(0x04)
	bool UseableByOwnerOnly; // 0xdc(0x01)
	USceneComponent* RestrictToCollider; // 0xe0(0x08)
	enum class EUseRestriction UseRestrictionAllowance; // 0xe8(0x01)
	bool IsRayTraceTriggered; // 0xe9(0x01)
	bool ResetUsingOnCompletion; // 0xea(0x01)
	bool EquipOnEndUse; // 0xeb(0x01)

	void SetRayTraceTriggered(bool rayTraceTriggered);
	FText GetUseText(APlayerCharacter* User);
	float GetUseProgressInPercent(APlayerCharacter* User);
	UTexture2D* GetUsableIcon();
	bool GetShowUsingUI();
	bool GetIsRayTraceTriggerd();
	bool GetHideProgressBar(APlayerCharacter* User);
	bool GetHideActionText(APlayerCharacter* User);
	void EndUse(APlayerCharacter* User);
	void BeginUse(APlayerCharacter* User, enum class EInputKeys Key);
};

// Class FSD.UsableComponent
// Size: 0x118 (Inherited: 0xf0)
struct UUsableComponent : UUsableComponentBase {
	UDialogDataAsset* ShoutBegin; // 0xf0(0x08)
	FText UseText; // 0xf8(0x18)
	bool ResetOnFail; // 0x110(0x01)
	bool SwitchToUsingState; // 0x111(0x01)

	void SetUseText(FText NewText);
	bool HasDuration();
};

// Class FSD.InstantUsable
// Size: 0x150 (Inherited: 0x118)
struct UInstantUsable : UUsableComponent {
	FMulticastInlineDelegate OnUsedBy; // 0x118(0x10)
	FMulticastInlineDelegate OnUsableChanged; // 0x128(0x10)
	bool bShowUsingUI; // 0x138(0x01)
	bool AllowUseWhileCarrying; // 0x139(0x01)
	USoundCue* AudioCompletedUse; // 0x140(0x08)
	bool Usable; // 0x148(0x01)
	bool TurnOffAfterUse; // 0x149(0x01)

	void SetCanUse(bool CanUse);
	void OnRep_Usable();
};

// Class FSD.CarriableInstantUsable
// Size: 0x150 (Inherited: 0x150)
struct UCarriableInstantUsable : UInstantUsable {
};

// Class FSD.CarriableComponent
// Size: 0x140 (Inherited: 0xb0)
struct UCarriableComponent : UActorComponent {
	FMulticastInlineDelegate OnPickedUp; // 0xb8(0x10)
	FMulticastInlineDelegate OnDropped; // 0xc8(0x10)
	TSoftObjectPtr<UDialogDataAsset> ShoutWhileCarrying; // 0xd8(0x28)
	APlayerCharacter* CarriedBy; // 0x100(0x08)
	enum class EUseRestriction UseRestriction; // 0x108(0x01)
	FVector Offset; // 0x10c(0x0c)

	bool PickupItem(APlayerCharacter* byCharacter);
	void OnRep_CarriedBy();
	void DropItem();
	void AttachChanged(bool Attached, FVector PrevScale);
};

// Class FSD.ResourceData
// Size: 0xf0 (Inherited: 0x30)
struct UResourceData : UDataAsset {
	FText Title; // 0x38(0x18)
	FText TitlePlural; // 0x50(0x18)
	FText Description; // 0x68(0x18)
	FColor Color; // 0x80(0x04)
	UTexture2D* Icon; // 0x88(0x08)
	int32_t BuyingPrice; // 0x90(0x04)
	int32_t SellingPrice; // 0x94(0x04)
	UMissionStat* MinedMissionStat; // 0x98(0x08)
	bool IsCraftingMaterial; // 0xa0(0x01)
	bool ForceShowOnEndScreen; // 0xa1(0x01)
	bool AffectedByMutators; // 0xa2(0x01)
	bool ScaleToMissionLength; // 0xa3(0x01)
	bool ScaleToHazardLevel; // 0xa4(0x01)
	bool ShowSeparatelyInEndScreen; // 0xa5(0x01)
	TSoftClassPtr<UObject> Spawnable; // 0xa8(0x28)
	bool IsWholeNumberResource; // 0xd0(0x01)
	int32_t CreditValue; // 0xd4(0x04)
	int32_t XPValue; // 0xd8(0x04)
	FGuid SaveGameID; // 0xdc(0x10)

	float GetOwnedAmount(UObject* WorldContextObject);
};

// Class FSD.CarvedResourceData
// Size: 0x120 (Inherited: 0xf0)
struct UCarvedResourceData : UResourceData {
	TSoftObjectPtr<UCarvedResourceCreator> CarvedResourceCreator; // 0xf0(0x28)
	float UnitsPerCarver; // 0x118(0x04)

	UCarvedResourceCreator* LoadResourceCreator();
};

// Class FSD.CaveEntranceComponent
// Size: 0x400 (Inherited: 0x3f0)
struct UCaveEntranceComponent : UPrimitiveComponent {
	enum class ECaveEntranceType Direction; // 0x3f0(0x01)
	enum class ECaveEntrancePriority Priority; // 0x3f1(0x01)
};

// Class FSD.CaveEntrance
// Size: 0x238 (Inherited: 0x228)
struct ACaveEntrance : AGenerationItem {
	UCaveEntranceComponent* CaveEntranceComponent; // 0x228(0x08)
	enum class ECaveEntranceType EntranceType; // 0x230(0x01)
	bool HasBeenConverted; // 0x231(0x01)
};

// Class FSD.SpawnResourceGenerationItem
// Size: 0x240 (Inherited: 0x228)
struct ASpawnResourceGenerationItem : AGenerationItem {
	UResourceData* Resource; // 0x228(0x08)
	float BaseAmount; // 0x230(0x04)
	USphereComponent* Sphere; // 0x238(0x08)
};

// Class FSD.SpawnActorGenerationItem
// Size: 0x238 (Inherited: 0x228)
struct ASpawnActorGenerationItem : AGenerationItem {
	AActor* ActorToSpawn; // 0x228(0x08)
	UBoxComponent* Box; // 0x230(0x08)
};

// Class FSD.SpawnTriggerItem
// Size: 0x238 (Inherited: 0x228)
struct ASpawnTriggerItem : AGenerationItem {
	AActor* Trigger; // 0x228(0x08)
	FName Message; // 0x230(0x08)
};

// Class FSD.SubRoomItem
// Size: 0x238 (Inherited: 0x228)
struct ASubRoomItem : AGenerationItem {
	URoomGenerator* RoomGenerator; // 0x228(0x08)
	int32_t Layer; // 0x230(0x04)
};

// Class FSD.RandomSubRoomItem
// Size: 0x280 (Inherited: 0x228)
struct ARandomSubRoomItem : AGenerationItem {
	URoomGeneratorGroup* RoomGroup; // 0x228(0x08)
	FGameplayTagQuery tagQuery; // 0x230(0x48)
	int32_t Layer; // 0x278(0x04)
};

// Class FSD.DropPodCalldownLocationItem
// Size: 0x230 (Inherited: 0x228)
struct ADropPodCalldownLocationItem : AGenerationItem {
	AActor* CalldownClass; // 0x228(0x08)
};

// Class FSD.ProceduralSetup
// Size: 0x4a8 (Inherited: 0x220)
struct AProceduralSetup : AActor {
	bool ShowItemNoisePattern; // 0x220(0x01)
	int32_t Seed; // 0x224(0x04)
	bool UseRandomSeed; // 0x228(0x01)
	FRandomStream RandomStream; // 0x230(0x08)
	FRandomStream RandomStreamServer; // 0x238(0x08)
	FRandomStream RandomStreamAsync; // 0x240(0x08)
	FRandomStream RandomStreamAsyncServer; // 0x248(0x08)
	FMulticastInlineDelegate OnEncounterSpawnedEvent; // 0x250(0x10)
	TArray<FEncounterSpecialItem> SpecialEncountersToSpawn; // 0x260(0x10)
	USpecialEvent* ForcedSpecialEvent; // 0x288(0x08)
	USpecialEvent* ForcedTreasure; // 0x290(0x08)
	UNoisyPathfinderComponent* NoisyPathfinder; // 0x2b0(0x08)
	UProceduralTunnelComponent* ProceduralTunnel; // 0x2b8(0x08)
	UProceduralObjectColliders* ObjectColliders; // 0x2c0(0x08)
	ADeepCSGWorld* CSGWorld; // 0x2c8(0x08)
	UFloodFillSettings* PathfinderNoise; // 0x2d0(0x08)
	TArray<FVeinResource> VeinResources; // 0x2d8(0x10)
	TArray<FCarvedResource> CarvedResources; // 0x2e8(0x10)
	UMissionDNA* MissionDNA; // 0x2f8(0x08)
	TArray<FGemResourceAmount> GemResourcesToGenerate; // 0x300(0x10)
	TArray<FCollectableSpawnableItem> CollectablesToGenerate; // 0x318(0x10)
	enum class ESpawnSettings SpawnSettings; // 0x328(0x01)
	bool CanSpawnSpecialEvents; // 0x329(0x01)
	bool ShouldCarveTunnels; // 0x32a(0x01)
	TArray<FRoomNode> Rooms; // 0x330(0x10)
	TArray<FRoomNode> RoomsInitialState; // 0x340(0x10)
	TArray<FTunnelNode> Tunnels; // 0x350(0x10)
	FGeneratedInfluenceSets GeneratedInfluenceSets; // 0x360(0x18)
	FGeneratedInstantCarvers GeneratedInstantCarvers; // 0x380(0x10)
	FGeneratedDebris GeneratedDebris; // 0x390(0x58)
	UBiome* Biome; // 0x3e8(0x08)
	float missionLength; // 0x3f0(0x04)
	TArray<FPathObstacle> PathObstacles; // 0x3f8(0x10)
	FInfluenceMap InfluenceMap; // 0x408(0x50)
	TArray<UResourceData*> SpawnedResources; // 0x458(0x10)
	float CaveDepth; // 0x468(0x04)
	AActor* PostProcessActor; // 0x470(0x08)
	USpecialEvent* SpecialEvent; // 0x478(0x08)
	bool IsInitialized; // 0x480(0x01)
	int32_t CurrentRoomPass; // 0x484(0x04)
	bool Pass1Completed; // 0x488(0x01)
	bool UsePerLevelCritterSpawning; // 0x489(0x01)

	void StartGenerationOnClient(AFSDPlayerController* client);
	void SpawnSpecialEvents();
	void SpawnObjectiveEncounter();
	void SpawnObjectiveCriticalItems();
	void SpawnItems_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo);
	void SpawnItems();
	void SpawnEncounters();
	void SpawnDebrisItems_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo, enum class EDebrisItemPass pass, int32_t Depth);
	void SpawnDebrisItems(enum class EDebrisItemPass pass);
	void SetSeed(int32_t Seed);
	void SetObjectivesCompleted();
	void ResetData();
	void RemoveBLockedEntrances();
	void OnPLSDataRecieved();
	void OnObjectivesCompleted();
	void OnCarverDataRecieved(enum class EDebrisItemPass pass);
	bool IsGeneratedDataReady();
	bool IsCarverDataReady(enum class EDebrisItemPass pass);
	void InitializeObjectives();
	UMissionDNA* GetMissionDNA();
	TMap<FString, float> GetGemsResourceAmounts();
	ADeepCSGWorld* GetCSGWorld();
	TMap<FString, float> GetCollectablesResourceAmounts();
	void GenerateRoomsFromGraph_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo, int32_t CarvePass);
	void GenerateRoomsFromGraph(int32_t CarvePass);
	void GenerateResourceVeins_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo);
	void GenerateResourceVeins();
	void GeneratePostCarveRooms_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo);
	void GeneratePostCarveRooms();
	void GenerateLandscapeFromData(int32_t Seed, TArray<FRoomNode> Rooms, TArray<FPathObstacle> obstacles);
	void GenerateLandscape();
	void GenerateDebrisVeins_Async(AProceduralSetup* setup, enum class EDebrisCarvedType carverType, FLatentActionInfo LatentInfo);
	void GenerateDebrisVeins(enum class EDebrisCarvedType carverType);
	FVector FindLocationInDirection(FVector Origin, FVector Direction, float horizontalDeviation, float verticalDeviation, FRandRange Distance, float additionalDistance);
	void FindEntrancesForAllConnections();
	void FillTunnels_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo);
	void FillTunnels();
	void DoneCarving();
	bool DoAsyncThreadGeneration();
	void CreateTunnelPaths();
	int32_t CreateItemDepths();
	void CreateGeneratedInfluenceSet();
	void CreateAdditionalRooms();
	int32_t ConnectRooms(FRoomNode From, FRoomNode to, bool hasDirt, UTunnelParameters* tunnelParameterOverride);
	int32_t ConnectRoomIds(int32_t fromID, int32_t toID, bool hasDirt, UTunnelParameters* tunnelParameterOverride);
	void CommitCarving(bool finalCommit, bool generateMesh);
	void CarveWithGeneratedInstantCarvers();
	void CarveTunnels();
	void BeginLiveGeneration();
	void BeginGenerating();
	void AddRoomToInitialState(FRoomNode RoomNode);
	int32_t AddRoom(FVector Location, bool CanHaveEnemies, URoomGeneratorBase* RoomGenerator, bool canBeRotated, FVector outCenter, FRoomNode outRoom, float ResourceMultiplier);
	void AddInfluenceToTunnelEntrances(UCaveInfluencer* Influencer, float range);
	void AddImportantLocation(FVector Location, float Radius);
	void AddEnemyDebris();
	int32_t AddDebrisCollider(FDebrisCapsule Capsule);
	void AddCaveInfluence(UCaveInfluencer* Influencer, FVector Location, float range);
	int32_t AddAirParticlesCollider(FDebrisCapsule Capsule);
};

// Class FSD.CaveBurner
// Size: 0x4e0 (Inherited: 0x4a8)
struct ACaveBurner : AProceduralSetup {
	float RoomRadius; // 0x4a8(0x04)
	FGameplayTagContainer RoomTags; // 0x4b0(0x20)
	bool CanOnlyBeUsedOnce; // 0x4d0(0x01)
	URoomGenerator* RoomGenerator; // 0x4d8(0x08)
};

// Class FSD.RoomBurner
// Size: 0x2e0 (Inherited: 0x220)
struct ARoomBurner : AActor {
	bool LiveUpdateEditor; // 0x220(0x01)
	enum class ERoomMirror MirrorTest; // 0x221(0x01)
	URoomGenerator* RoomGenerator; // 0x228(0x08)
	float RoomRadius; // 0x230(0x04)
	enum class ERoomMirroringSupport MirrorSupport; // 0x234(0x01)
	bool ShowRoomCollider; // 0x235(0x01)
	FGameplayTagContainer RoomTags; // 0x238(0x20)
	int32_t Seed; // 0x258(0x04)
	UBiome* Biome; // 0x260(0x08)
	UDifficultySetting* Difficulty; // 0x268(0x08)
	int32_t ForcePlayerCount; // 0x270(0x04)
	bool GenerateDebris; // 0x274(0x01)
	bool GenerateItems; // 0x275(0x01)
	bool GenerateResources; // 0x276(0x01)
	bool SpawnEncounters; // 0x277(0x01)
	UEnemyDescriptor* TestEnemy; // 0x278(0x08)
	int32_t TestEnemyCount; // 0x280(0x04)
	UMissionMutator* TestMutator; // 0x288(0x08)
	TArray<UMissionWarning*> TestWarnings; // 0x290(0x10)
	USpecialEvent* TestSpecialEvent; // 0x2a0(0x08)
	USpecialEvent* TestTreasure; // 0x2a8(0x08)
	UMissionTemplate* MissionTemplate; // 0x2b0(0x08)
	UMissionTemplate* CustomMissionTemplate; // 0x2b8(0x08)
	ADeepCSGWorld* CSGWorld; // 0x2c0(0x08)
	AProceduralSetup* PLSLiveEditor; // 0x2c8(0x08)
	URoomGenerator* LiveEditRoomGenerator; // 0x2d8(0x08)

	void SpawnEncounter(AProceduralSetup* setup);
	URoomGenerator* GetRoomGenerator();
};

// Class FSD.InfluenceTester
// Size: 0x230 (Inherited: 0x220)
struct AInfluenceTester : AActor {
	UCaveInfluencer* Influencer; // 0x220(0x08)
	USphereComponent* Sphere; // 0x228(0x08)
};

// Class FSD.EnemyPawn
// Size: 0x340 (Inherited: 0x2f0)
struct AEnemyPawn : AFSDPawn {
	UEnemyHealthComponent* Health; // 0x2f8(0x08)
	UPawnStatsComponent* Stats; // 0x300(0x08)
	UEnemyPawnAfflictionComponent* Affliction; // 0x308(0x08)
	UEnemyComponent* enemy; // 0x310(0x08)
	FName CenterMassSocketName; // 0x318(0x08)
	FQueuedMontage QueuedMontage; // 0x320(0x10)
	TArray<UMaterialInterface*> CachedMaterials; // 0x330(0x10)

	UMeshComponent* Receive_GetMeshComponent();
	void OnRep_QueuedMontage();
	USkeletalMeshComponent* GetMesh();
};

// Class FSD.CaveLeech
// Size: 0x3f8 (Inherited: 0x340)
struct ACaveLeech : AEnemyPawn {
	USkeletalMeshComponent* SkeletalMesh; // 0x348(0x08)
	UGrabberComponent* GrabberComponent; // 0x350(0x08)
	float BiteDamage; // 0x358(0x04)
	float BitesPerSecond; // 0x35c(0x04)
	float MaxDistanceXY; // 0x360(0x04)
	float GrapDistance; // 0x364(0x04)
	float GrapDelay; // 0x368(0x04)
	float TentacleSpeed; // 0x36c(0x04)
	float TentacleRetractSpeed; // 0x370(0x04)
	float RetractDuration; // 0x374(0x04)
	float TentaclePullSpeed; // 0x378(0x04)
	float TentacleDropPlayerSpeed; // 0x37c(0x04)
	float TentacleDropGroundDistance; // 0x380(0x04)
	float MaxDropPlayerDuration; // 0x384(0x04)
	float HeadInterpSpeed; // 0x388(0x04)
	float TentacleAttachOffset; // 0x38c(0x04)
	float BiteDistance; // 0x390(0x04)
	float RevivedGracePeriod; // 0x394(0x04)
	UPawnAffliction* CaveLeechSenseAffliction; // 0x398(0x08)
	float StateTime; // 0x3a8(0x04)
	enum class ECaveLeechState State; // 0x3ac(0x01)
	FVector_NetQuantize TentacleLocation; // 0x3b0(0x0c)
	FVector_NetQuantize TentacleVelocity; // 0x3bc(0x0c)
	TWeakObjectPtr<AActor> Target; // 0x3c8(0x08)
	UHealthComponent* HealthTarget; // 0x3d0(0x08)
	USceneComponent* TentacleHead; // 0x3d8(0x08)

	void OnRep_State();
	FVector GetTentacleTargetLocation();
	FVector GetMouthLocation();
	AActor* GetCurrentTarget();
	void Died(UHealthComponentBase* HealthComponent);
	void Damaged(float Amount);
	void BP_OnStateChanged(enum class ECaveLeechState NewState);
	void BP_OnBite(UHealthComponent* TargetHealth);
};

// Class FSD.CaveLeechAnimInstance
// Size: 0x2b0 (Inherited: 0x270)
struct UCaveLeechAnimInstance : UAnimInstance {
	float HeadOffset; // 0x268(0x04)
	ACaveLeech* CaveLeech; // 0x270(0x08)
	USceneComponent* CaveLeechHead; // 0x278(0x08)
	FRotator BaseRotation; // 0x280(0x0c)
	FVector HeadLocation; // 0x28c(0x0c)
	FRotator HeadRotation; // 0x298(0x0c)
	bool bIdle; // 0x2a4(0x01)
	bool bTracking; // 0x2a5(0x01)
	bool bPulling; // 0x2a6(0x01)
	bool bRetracting; // 0x2a7(0x01)
	bool bDying; // 0x2a8(0x01)
	bool bDead; // 0x2a9(0x01)
	bool bFrozen; // 0x2aa(0x01)
	bool bBiting; // 0x2ab(0x01)
};

// Class FSD.CaveObject
// Size: 0x228 (Inherited: 0x220)
struct ACaveObject : AActor {
	bool CanCharacterStandOn; // 0x220(0x01)

	void TriggerNetworkUpdate();
	void ResumeNetworkUpdates();
	void Recieve_OnGameStarted();
	void PauseNetworkUpdates();
};

// Class FSD.CaveScriptComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UCaveScriptComponent : UActorComponent {
};

// Class FSD.CaveVine
// Size: 0x288 (Inherited: 0x220)
struct ACaveVine : AActor {
	enum class ECollisionChannel GroundCollisionChannel; // 0x220(0x01)
	float IdleSwingSpeed; // 0x224(0x04)
	float ChaseSpeed; // 0x228(0x04)
	float MaxReach; // 0x22c(0x04)
	float GroundOffset; // 0x230(0x04)
	float NoiseRadius; // 0x234(0x04)
	float NoiseSpeed; // 0x238(0x04)
	USplineMeshComponent* SplineMeshComponent; // 0x240(0x08)
	USceneComponent* VineHead; // 0x248(0x08)
	FVector VineVelocity; // 0x250(0x0c)
	FVector VineLocation; // 0x25c(0x0c)
	FVector VineStartLocation; // 0x268(0x0c)
	TWeakObjectPtr<UHealthComponent> Target; // 0x274(0x08)

	void BP_OnTargetChanged(UHealthComponent* NewTarget);
	void BP_OnInitialized();
};

// Class FSD.CaveWorm
// Size: 0x3a0 (Inherited: 0x380)
struct ACaveWorm : ADeepPathfinderCharacter {
	USimpleHealthComponent* Health; // 0x390(0x08)
	float SearchChunksRadius; // 0x398(0x04)
	float SearchChunksInterval; // 0x39c(0x04)

	AResourceChunk* SpawnResource(UObject* WorldContext, UResourceData* Data, float Size, FTransform Transform, FVector Impulse, FVector DropOffset);
	void Search();
	void IncrementKillCount(UHealthComponentBase* HealthComponent);
	void DropResource(UResourceData* Data, float Size, FVector Impulse, FVector DropOffset);
};

// Class FSD.Maggot
// Size: 0x388 (Inherited: 0x380)
struct AMaggot : ADeepPathfinderCharacter {
	USimpleHealthComponent* HealthComponent; // 0x380(0x08)
};

// Class FSD.CellIdFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UCellIdFunctionLibrary : UBlueprintFunctionLibrary {
};

// Class FSD.Test
// Size: 0x270 (Inherited: 0x270)
struct UTest : UAnimInstance {
};

// Class FSD.CharacterCameraController
// Size: 0xd0 (Inherited: 0xb0)
struct UCharacterCameraController : UActorComponent {
	float StartFOV; // 0xb0(0x04)
	float targetFov; // 0xb4(0x04)
	float TargetFOVSpeed; // 0xb8(0x04)
	APlayerCharacter* Character; // 0xc0(0x08)
	UCameraComponent* Camera; // 0xc8(0x08)

	void ResetFOV(float FadeSpeed);
	void FOVChanged(float NewFOV);
	void FadeToFOVRelative(float targetFov, float FadeSpeed);
	void FadeToFOV(float targetFov, float FadeSpeed);
};

// Class FSD.CharacterIntoxicationComponent
// Size: 0x100 (Inherited: 0xb0)
struct UCharacterIntoxicationComponent : UActorComponent {
	FMulticastInlineDelegate OnIntoxicationChanged; // 0xb0(0x10)
	FMulticastInlineDelegate OnPassOutDrunk; // 0xc0(0x10)
	APlayerCharacter* Character; // 0xd0(0x08)
	enum class EIntoxicationState CurrentState; // 0xd8(0x01)
	FLerpingPercent IntoxicationPercent; // 0xdc(0x08)
	float IntoxicationLerpSpeed; // 0xe4(0x04)
	float TimeDrunk; // 0xe8(0x04)
	FCountDownFloat SoberingUpCoolDown; // 0xec(0x0c)
	char SoberingPercent; // 0xf8(0x01)

	void ReceiveStateChange(enum class EIntoxicationState NewState);
	void ReceivePassOutDrunk();
	void ReceiveDrunkTick(float DeltaTime, float DrunkTime);
	void ReceiveDrunkEnd();
	void ReceiveDrunkBegin();
	void PassOutDrunkSignature__DelegateSignature(APlayerCharacter* Player);
	bool IsPassOutDrunk();
	bool IsOnSpaceRig();
	bool IsLocallyControlled();
	bool IsDrunk();
	void IntoxicationProgressSignature__DelegateSignature(APlayerCharacter* Player, float Progress);
	bool HasAuthority();
	float GetSoberingUpCoolDown();
	float GetIntoxicationProgressMapped(UCurveFloat* Curve);
	float GetIntoxicationProgress();
	int32_t GetAlcoholPct(enum class EDrinkableAlcoholStrength Strength);
	void Consume(UDrinkableDataAsset* Drinkable);
	void ClearIntoxication();
};

// Class FSD.CharacterRecoilComponent
// Size: 0xe0 (Inherited: 0xb0)
struct UCharacterRecoilComponent : UActorComponent {
	FVector Recoil; // 0xb0(0x0c)
	FVector RecoilVelocity; // 0xbc(0x0c)
	FVector PrevError; // 0xc8(0x0c)
};

// Class FSD.CharacterSettings
// Size: 0x190 (Inherited: 0x30)
struct UCharacterSettings : UDataAsset {
	TArray<TSoftClassPtr<UObject>> RankedHeroClasses; // 0x30(0x10)
	TArray<APlayerCharacter*> LoadedClasses; // 0x40(0x10)
	TArray<FText> PlayerRankNames; // 0x50(0x10)
	TArray<int32_t> CharacterXPLevels; // 0x60(0x10)
	TMap<FGuid, UPlayerCharacterID*> PlayerCharacterIDMap; // 0x70(0x50)
	TArray<UPlayerCharacterID*> PlayerCharacterIDs; // 0xc0(0x10)
	UPlayerCharacterID* BoscoID; // 0xd0(0x08)
	USkeletalMesh* NoHead; // 0xd8(0x08)
	USkeletalMesh* DefaultHead; // 0xe0(0x08)
	USkeletalMesh* ThickNeck; // 0xe8(0x08)
	USkeletalMesh* ThinNeck; // 0xf0(0x08)
	TSoftClassPtr<UObject> CarriableBagClass; // 0xf8(0x28)
	UUseAnimationSetting* ThrowItemAnimSettings; // 0x120(0x08)
	TMap<UPlayerCharacterID*, UCharacterVanityItems*> CharacterVanityItems; // 0x128(0x50)
	UDialogDataAsset* AutoReloadShout; // 0x178(0x08)
	UDebrisPositioning* TeleportPositioning; // 0x180(0x08)
	UTerrainPlacementComponent* TeleportPlacement; // 0x188(0x08)

	void PreloadAllInventories(UAsyncManager* AsyncManager);
	UPlayerCharacterID* GetPlayerCharacterID(FGuid ID);
};

// Class FSD.CharacterSightComponent
// Size: 0x158 (Inherited: 0xb0)
struct UCharacterSightComponent : UActorComponent {
	FMulticastInlineDelegate OnTargetChanged; // 0xb0(0x10)
	float TargetMaxDistance; // 0xc0(0x04)
	enum class ECollisionChannel TraceChannel; // 0xc4(0x01)
	TArray<TWeakObjectPtr<AActor>> IgnoredActors; // 0xc8(0x10)
	APlayerCharacter* Character; // 0xd8(0x08)
	TWeakObjectPtr<AActor> TargetActor; // 0xe0(0x08)
	TWeakObjectPtr<UPrimitiveComponent> TargetPrimitive; // 0xe8(0x08)
	TWeakObjectPtr<USimpleObjectInfoComponent> TargetInfo; // 0xf0(0x08)
	TWeakObjectPtr<UTemperatureComponent> TargetTemperature; // 0xf8(0x08)
	TWeakObjectPtr<UPawnAfflictionComponent> TargetAfflictions; // 0x100(0x08)
	TScriptInterface<IHealth> TargetHealth; // 0x108(0x10)
	TScriptInterface<ITargetable> TargetTargetable; // 0x118(0x10)
	float TargetTime; // 0x128(0x04)
	FReplicatedCharacterData ReplicatedData; // 0x12c(0x18)

	void TargetChangedSignature__DelegateSignature(AActor* NewTarget, UPrimitiveComponent* NewPrimitive);
	void Server_UpdateTarget(AActor* NewActor, UPrimitiveComponent* NewPrimitive);
	void RemoveIgnoreActor(AActor* InActor);
	void ReceiveTargetInSightTick(float DeltaTime);
	void ReceiveTargetChanged();
	void GetSightStartAndEnd(float InMaxDistance, FVector OutStartLocation, FVector OutEndLocation);
	void AddIgnoreActor(AActor* InActor);
};

// Class FSD.CharacterStateComponent
// Size: 0x100 (Inherited: 0xb0)
struct UCharacterStateComponent : UActorComponent {
	char StateId; // 0xb8(0x01)
	APlayerCharacter* Character; // 0xc0(0x08)
	UDialogDataAsset* EnterStateShout; // 0xc8(0x08)
	UDialogDataAsset* ExitStateShout; // 0xd0(0x08)
	UDialogDataAsset* AttentionShout; // 0xd8(0x08)
	UPlayerMovementComponent* PlayerMovement; // 0xe0(0x08)

	void ReceiveStateTick(float DeltaTime);
	void ReceiveStateExit();
	void ReceiveStateEnter();
	bool IsLocallyControlled();
	bool HasAuthority();
	float GetStateTime();
	char GetStateID();
	bool GetStateActive();
	UPlayerMovementComponent* GetCharacterMovement();
};

// Class FSD.CharacterUseComponent
// Size: 0x200 (Inherited: 0xb0)
struct UCharacterUseComponent : UActorComponent {
	FMulticastInlineDelegate OnDepositingBegin; // 0xb0(0x10)
	FMulticastInlineDelegate OnDepositingEnd; // 0xc0(0x10)
	FMulticastInlineDelegate OnBeginHoveringEvent; // 0xd0(0x10)
	FMulticastInlineDelegate OnEndHoveringEvent; // 0xe0(0x10)
	FMulticastInlineDelegate OnBeginUsingEvent; // 0xf0(0x10)
	FMulticastInlineDelegate OnEndUsingEvent; // 0x100(0x10)
	FMulticastInlineDelegate OnBeginUseNoUsable; // 0x110(0x10)
	FMulticastInlineDelegate OnEndUseNoUsable; // 0x120(0x10)
	FUsableRepliactional ActiveUsablee; // 0x130(0x10)
	UUsableComponentBase* HoveringUsable; // 0x140(0x08)
	USceneComponent* HoveringUsableCollider; // 0x148(0x08)
	USceneComponent* ActiveUsableCollider; // 0x150(0x08)
	USphereComponent* UseCollider; // 0x158(0x08)
	USoundBase* AudioBeginDepositing; // 0x160(0x08)
	USoundBase* AudioEndDepositing; // 0x168(0x08)
	float UseDistance; // 0x170(0x04)
	enum class EUseRestriction UseRestriction; // 0x175(0x01)
	APlayerCharacter* Character; // 0x178(0x08)
	TMap<UUsableComponentBase*, float> UseCooldownTracker; // 0x1b0(0x50)

	void Server_SetCanUse(enum class EUseRestriction UseRestriction);
	void Server_EndUse();
	void Server_BeginUse(char Key, UUsableComponentBase* Usable, USceneComponent* UsableCollider);
	void OnRep_ActiveUsablee(FUsableRepliactional lastUsable);
	void OnCharacterStateChanged(enum class ECharacterState NewState);
	bool IsLookingAtUsable();
	bool IsLookingAtDepositable();
	float GetUseProgress();
	AActor* GetLookingAtActor();
	bool GetIsUsing();
	bool GetIsDepositing();
	void All_PlaySingleUse(char Key, UUsableComponentBase* Usable);
	void AddCustomUsableComponent(UUsableComponentBase* Usable, enum class ECustomUsableType eType);
};

// Class FSD.CharacterVanityComponent
// Size: 0x1d8 (Inherited: 0xb0)
struct UCharacterVanityComponent : UActorComponent {
	UCharacterVanityItems* AvailableVanityItems; // 0xc0(0x08)
	UBeardColorVanityItem* ShownBeardColor; // 0xc8(0x08)
	UMaterialInterface* ArmorMaterial; // 0xd0(0x08)
	UMaterialInstanceDynamic* DynamicSkinMaterial; // 0xd8(0x08)
	enum class EHeadVanityType HeadVanityType; // 0xe0(0x01)
	TArray<UVanityItem*> EquippedVanity; // 0xe8(0x10)
	UMaterialInterface* SkinMaterial; // 0xf8(0x08)
	TArray<FTattooArmorItem> Tattoos; // 0x100(0x10)
	TArray<UMaterialInterface*> CachedMaterials; // 0x110(0x10)
	TMap<enum class EVanitySlot, USkeletalMeshComponent*> VanityMeshes; // 0x178(0x50)

	void UpdateMeshes();
	void UpdateEquippedVanity(bool applyItems);
	void SetEquippedVanityInViewer(TArray<UVanityItem*> Vanity);
	void Server_SetEquippedVanity(TArray<UVanityItem*> equippedItems);
	UVanityItem* Receive_GetEquippedVanityItem(UObject* WorldContextObject, UPlayerCharacterID* Character, enum class EVanitySlot Slot);
	void OnRep_EquippedVanity();
	UVanityItem* GetEquippedVanityItem(enum class EVanitySlot Slot);
	UCharacterVanityItems* GetAvailableVanityItems();
	void EnforceValidPaintjob();
	void CreateEquippedGear();
};

// Class FSD.CharacterVanityItems
// Size: 0x1a8 (Inherited: 0x30)
struct UCharacterVanityItems : UDataAsset {
	TArray<UHeadVanityItem*> HeadItems; // 0x30(0x10)
	UVanitySchematicBank* HeadSchematicBank; // 0x40(0x08)
	TArray<UBeardVanityItem*> BeardItems; // 0x48(0x10)
	UVanitySchematicBank* BeardSchematicBank; // 0x58(0x08)
	TArray<UArmorVanityItem*> ArmorItems; // 0x60(0x10)
	TArray<UArmorMaterialVanityItem*> ArmorMaterialItems; // 0x70(0x10)
	TArray<UArmorMaterialVanityItem*> ArmorMaterialItemsInTreassures; // 0x80(0x10)
	TArray<UEyeBrowsVanityItem*> EyebrowsItems; // 0x90(0x10)
	UVanitySchematicBank* EyebrowSchematicBank; // 0xa0(0x08)
	TArray<UMoustacheVanityItem*> MoustacheItems; // 0xa8(0x10)
	UVanitySchematicBank* MoustacheSchematicBank; // 0xb8(0x08)
	TArray<USideburnsVanityItem*> SideburnItems; // 0xc0(0x10)
	UVanitySchematicBank* SideburnSchematicBank; // 0xd0(0x08)
	TArray<UBeardColorVanityItem*> BeardMaterialItems; // 0xd8(0x10)
	UVanitySchematicBank* BeardMaterialSchematicBank; // 0xe8(0x08)
	TArray<USkinColorVanityItem*> SkinMaterialItems; // 0xf0(0x10)
	UVanitySchematicBank* SkinMaterialSchematicBank; // 0x100(0x08)
	TMap<FGuid, UVanityItem*> VanityMap; // 0x108(0x50)
	TMap<enum class EVanitySlot, UVanityItem*> DefaultItems; // 0x158(0x50)

	void SortVanityItems(UObject* WorldContextObject, UPlayerCharacterID* characterID, TArray<UVanityItem*> vanityItems);
	TArray<UVanityItem*> GetVanityItems(UObject* WorldContextObject, enum class EVanitySlot Slot, bool onlyStoreItems, UPlayerCharacterID* characterID);
	UVanityItem* GetVanityItem(FGuid VanityID);
	TArray<UVanityItem*> GetUnLockedVanityItems(UObject* WorldContextObject, enum class EVanitySlot Slot, bool onlyStoreItems, UPlayerCharacterID* characterID);
	TArray<UVanityItem*> GetLockedVanityItems(UObject* WorldContextObject, enum class EVanitySlot Slot, UPlayerCharacterID* characterID);
	TArray<UVanityItem*> GetItems(enum class EVanitySlot Slot, bool onlyStoreItems);
	UVanityItem* GetDefaultVanityItem(UObject* WorldContext, enum class EVanitySlot Slot, UPlayerCharacterID* characterID);
	void Clean();
};

// Class FSD.CharacterSelectionSwitcher
// Size: 0x220 (Inherited: 0x220)
struct ACharacterSelectionSwitcher : AActor {

	void OnVictoryPoseChanged(UVictoryPose* VictoryPose);
	void OnVanityItemEquipped(enum class EVanitySlot Slot);
	void Hide();
	AActor* GetViewerActor();
	APlayerCharacter* GetActiveCharacter();
};

// Class FSD.ChargedWeapon
// Size: 0x770 (Inherited: 0x6d8)
struct AChargedWeapon : AAmmoDrivenWeapon {
	FMulticastInlineDelegate OnChargeChanged; // 0x6d8(0x10)
	FMulticastInlineDelegate OnHeatChanged; // 0x6e8(0x10)
	UAnimMontage* FP_OverheatAnim; // 0x700(0x08)
	UAnimMontage* FP_ChargeupMontage; // 0x708(0x08)
	UFXSystemAsset* ChargeupParticles; // 0x710(0x08)
	UFXSystemComponent* ChargeupParticleInstance; // 0x718(0x08)
	UFXSystemAsset* ChargeupFireMuzzleFlash; // 0x720(0x08)
	USoundCue* NormalFiresound; // 0x728(0x08)
	USoundCue* FullyChargedFireSound; // 0x730(0x08)
	float ChargeSpeed; // 0x738(0x04)
	bool Charging; // 0x73c(0x01)
	float ChargeProgress; // 0x740(0x04)
	int32_t ShotCostAtBelowFullCharge; // 0x744(0x04)
	int32_t ShotCostAtFullCharge; // 0x748(0x04)
	bool ChargedShotsOnly; // 0x74c(0x01)
	bool AutoFireWhenOverheated; // 0x74d(0x01)
	float TotalHeat; // 0x750(0x04)
	float CoolingRate; // 0x758(0x04)
	float HeatPerSecondWhileCharging; // 0x75c(0x04)
	float HeatPerSecondWhenCharged; // 0x760(0x04)
	float HeatPerNormalShot; // 0x764(0x04)
	float HeatPerChargedShot; // 0x768(0x04)

	void SetOverheated(bool isOverheated);
	void Server_SetIsCharging(bool isChargingValue);
	void RecieveChargeProgressChanged(float NewChargeProgress);
	void ReceiveOverheatedChanged(bool isOverheated);
	bool GetIsCharging();
};

// Class FSD.ChargedWeaponAnimInstance
// Size: 0x290 (Inherited: 0x270)
struct UChargedWeaponAnimInstance : UAnimInstance {
	bool isCharging; // 0x268(0x01)
	float ChargeupPlayRate; // 0x26c(0x04)
	float ChargeupPlayRateSpeedChange; // 0x270(0x04)
	float ChargedownPlayRateSpeedChange; // 0x274(0x04)
	float MaxChargeupPlayRate; // 0x278(0x04)
	AChargedWeapon* Weapon; // 0x280(0x08)
};

// Class FSD.ProjectileBase
// Size: 0x2e8 (Inherited: 0x220)
struct AProjectileBase : AActor {
	FProjectileImpact ProjectileImpact; // 0x220(0x30)
	bool Exploded; // 0x250(0x01)
	bool DoOnImpact; // 0x251(0x01)
	bool DoOnImpact2; // 0x252(0x01)
	bool DoOnImpact3; // 0x253(0x01)
	bool DoOnSpawnVar; // 0x254(0x01)
	bool IsDorment; // 0x268(0x01)
	USphereComponent* CollisionComponent; // 0x270(0x08)
	float LifeSpan; // 0x27c(0x04)
	float VelocityMultiplier; // 0x280(0x04)
	float GravityMultiplier; // 0x284(0x04)
	bool AffectedByDifficultySpeedModifier; // 0x288(0x01)
	bool SetInitialSpeedToMaxSpeed; // 0x289(0x01)
	bool AutoDisableCollisionOnImpact; // 0x28a(0x01)
	USoundCue* WhizbySound; // 0x290(0x08)
	float WhizByCooldown; // 0x298(0x04)
	float WhizByStartDistance; // 0x29c(0x04)
	enum class EOnProjectileImpactBehaviourEnum EOnImpactBehaviour; // 0x2a8(0x04)

	UTerrainMaterial* TryGetTerrainMaterial();
	void StopMovement();
	void Server_SetState(FVector_NetQuantize Position, FVector_NetQuantize Velocity);
	void Server_Penetrated(FProjectileImpact Impact);
	void Server_Impacted(FProjectileImpact Impact);
	void OnUpgradeElementAdded(UProjectileUpgradeElement* element);
	void OnRep_ProjectileImpact();
	void OnRep_IsDorment(bool wasDorment);
	void OnPenetrated(bool PredictedPenetration, FHitResult HitResult);
	void OnInitialized();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void MakeBouncy();
	void InitState(FVector ShootDirection, FVector initialBonusVelocity);
	void InitComponents();
	void IgnoreCollision(UPrimitiveComponent* otherCollider);
	float GetGameTimeSinceActivation();
	int32_t GetBoneIndex();
	void DoOnSpawn();
	void DisableProjectileCollision(AProjectileBase* projectileA, AProjectileBase* projectileB);
	void DisableAndDestroy();
	void CustomEvent(UItemUpgrade* Event);
	void Client_DrawServersDebugPath(FVector Location);
	void Activate(AActor* owningActor, FVector Origin, FVector_NetQuantizeNormal Direction, FVector_NetQuantizeNormal initialBonusVelocity);
};

// Class FSD.Projectile
// Size: 0x338 (Inherited: 0x2e8)
struct AProjectile : AProjectileBase {
	FProjectileState State; // 0x2e8(0x28)
	bool UseArmorDamageBoneCheck; // 0x318(0x01)
	TArray<AActor*> IgnoreActorClasses; // 0x320(0x10)
	UFSDProjectileMovementComponent* MovementComponent; // 0x330(0x08)

	AProjectileBase* SpawnProjectileFromSelf(UObject* WorldContextObject, AProjectileBase* projectileClass, FVector Origin, FRotator velocityDirection);
	AProjectileBase* SpawnProjectile(UObject* WorldContextObject, AProjectileBase* projectileClass, APawn* projectileOwner, FVector Origin, FRotator velocityDirection);
	AProjectileBase* SpawnBallisticProjectile(UObject* WorldContextObject, AProjectile* projectileClass, APawn* projectileOwner, FVector Origin, FVector Velocity);
	void SetHomingTargetComponent(USceneComponent* HomingTargetComponent, float Delay);
	void Server_DisableHoming();
	void OnRep_State(FProjectileState oldState);
	void OnPenetration(FHitResult HitResult);
	void OnImpact(FHitResult HitResult);
	void OnBounce(FHitResult ImpactResult, FVector ImpactVelocity);
	UFSDPhysicalMaterial* FindBoneIndexFromArmor(FHitResult HitResult, int32_t outBoneIndex);
};

// Class FSD.ChargedProjectile
// Size: 0x340 (Inherited: 0x338)
struct AChargedProjectile : AProjectile {
	bool ExplodesWhenDead; // 0x338(0x01)
	bool PersistentExplosion; // 0x339(0x01)
	bool AoEDamageInFlight; // 0x33a(0x01)
	float DirectDamageReduction; // 0x33c(0x04)

	void OnAoEDamageEnabled();
};

// Class FSD.ClaimableRewardEntryWidget
// Size: 0x298 (Inherited: 0x230)
struct UClaimableRewardEntryWidget : UUserWidget {
	FMulticastInlineDelegate OnRewardClaimed; // 0x230(0x10)
	FClaimableRewardEntry Data; // 0x240(0x58)

	void WidgetDelegate__DelegateSignature(UClaimableRewardEntryWidget* EntryWidget);
	void SignalRewardClaimed();
	void SetData(FClaimableRewardEntry InData);
	void ReceiveDataChanged();
};

// Class FSD.ClaimableRewardViewWidget
// Size: 0x2a0 (Inherited: 0x230)
struct UClaimableRewardViewWidget : UUserWidget {
	FClaimableRewardView Data; // 0x230(0x70)

	void ReceiveEndFlow();
	void ReceiveDataChanged();
	void ReceiveBeginFlow();
	void EndRewardFlow();
	void BeginRewardFlow(FClaimableRewardView InViewData);
};

// Class FSD.ExampleActor
// Size: 0x240 (Inherited: 0x220)
struct AExampleActor : AActor {
	FMulticastInlineDelegate OnExampleUpdatedEvent; // 0x220(0x10)
	float Field; // 0x230(0x04)

	void Server_ExampleFunction();
	void Client_ExampleFunction();
	void All_ExampleFunction();
};

// Class FSD.CollectableResourceData
// Size: 0x138 (Inherited: 0xf0)
struct UCollectableResourceData : UResourceData {
	UDebrisPositioning* Positioning; // 0xf0(0x08)
	float Rarity; // 0xf8(0x04)
	float InfluenceRadius; // 0xfc(0x04)
	TArray<TSoftObjectPtr<UDebrisBase>> Debris; // 0x100(0x10)
	bool UseTerrainPlacement; // 0x110(0x01)
	TArray<TSoftClassPtr<UObject>> CollectableClasses; // 0x118(0x10)
	TArray<AActor*> CollectableClassesLoaded; // 0x128(0x10)
};

// Class FSD.CharacterShoutsData
// Size: 0xe8 (Inherited: 0x30)
struct UCharacterShoutsData : UDataAsset {
	FCharacterShouts Shouts; // 0x30(0xb8)
};

// Class FSD.ShoutWidget
// Size: 0x258 (Inherited: 0x230)
struct UShoutWidget : UUserWidget {
	TWeakObjectPtr<APlayerCharacter> Sender; // 0x230(0x08)
	FText Text; // 0x238(0x18)
	float Duration; // 0x250(0x04)
	bool IsSubtitle; // 0x254(0x01)

	void OnShout();
	FString GetTimeString(int32_t Seconds);
	void GetSplitTimeString(int32_t Seconds, FString MinutesString, FString SecondsString);
	FString GetCountDownString(int32_t Seconds);
};

// Class FSD.CommunicationComponent
// Size: 0x288 (Inherited: 0xb0)
struct UCommunicationComponent : UActorComponent {
	FMulticastInlineDelegate OnMissionShout; // 0xb0(0x10)
	FMulticastInlineDelegate OnMissionShoutEnd; // 0xc0(0x10)
	FMulticastInlineDelegate OnMixerAnnouncement; // 0xd0(0x10)
	FMulticastInlineDelegate OnPlayerShouted; // 0xe0(0x10)
	FMulticastInlineDelegate OnMissionControlFinished; // 0xf0(0x10)
	bool ShoutingEnabled; // 0x100(0x01)
	UShoutWidget* ShoutWidgetType; // 0x108(0x08)
	UCharacterShoutsData* CharacterShouts; // 0x110(0x08)
	float PitchMultiplier; // 0x118(0x04)
	float MinShoutDelay; // 0x11c(0x04)
	float CloseRangeShoutDistance; // 0x120(0x04)
	TMap<UDialogDataAsset*, float> DelayedShouts; // 0x128(0x50)
	FGameplayTagContainer KillShoutAllowedTags; // 0x178(0x20)
	bool bMissionControlPaused; // 0x198(0x01)
	UAudioComponent* MissionControlAudioComponent; // 0x1a0(0x08)
	TMap<APlayerCharacter*, UShoutWidget*> ActiveShouts; // 0x1a8(0x50)
	TArray<FActiveOutline> ActiveOutlines; // 0x1f8(0x10)
	APlayerCharacter* Character; // 0x208(0x08)
	UDialogDataAsset* LastShout; // 0x210(0x08)
	UAudioComponent* ShoutAudioComponent; // 0x218(0x08)
	TMap<UDialogDataAsset*, float> ShoutHistory; // 0x220(0x50)
	TArray<FMissionShoutQueueItem> MissionShoutQueue; // 0x278(0x10)

	void ShoutCustomOrDefault(UDialogDataAsset* CustomShout, enum class EShoutType DefaultShout);
	void ShoutCustomLocalOnly(UDialogDataAsset* Shout);
	void ShoutCustomClosestDwarf(UObject* WorldContext, UDialogDataAsset* Shout, FVector TargetLocation);
	void ShoutCustom(UDialogDataAsset* Shout);
	void Shout(enum class EShoutType Shout);
	void SetMissionControlPaused(bool IsPaused);
	void ServerShout(UDialogDataAsset* Shout);
	void ServerMixerAnnouncement(FMixerAnnouncement Announcement);
	void ServerMissionShout(UDialogDataAsset* Shout, int32_t Index, bool bPriority);
	UAudioComponent* PlayPitchedByClass(UObject* WorldContextObject, APlayerCharacter* CharacterClass, USoundBase* Sound, UDialogDataAsset* Shout, enum class EShoutType ShoutType, UAudioComponent* AudioComponent);
	void PlayPitchedAsync(UDialogDataAsset* Shout, enum class EShoutType ShoutType, bool IgnoreCoolDown, UAudioComponent* AudioComponent, UObject* WorldContextObject, float shoutVolumeMultiplier);
	UAudioComponent* PlayPitched(USoundBase* Sound, UDialogDataAsset* Shout, enum class EShoutType ShoutType, bool IgnoreCoolDown, UAudioComponent* AudioComponent, UObject* WorldContextObject);
	void MixerAnnouncementLocalOnly(UObject* WorldContext, FMixerAnnouncement Announcement);
	void MixerAnnouncement(UObject* WorldContext, FMixerAnnouncement Announcement);
	int32_t MissionShoutLocally(UObject* WorldContext, UDialogDataAsset* Shout);
	void MissionShout(UObject* WorldContext, UDialogDataAsset* Shout, bool bPriority);
	bool IsMissionControlSpeaking();
	void ClientShout(APlayerCharacter* Sender, UDialogDataAsset* Shout, int32_t Index);
	void ClientMixerAnnouncement(FMixerAnnouncement Announcement);
	void ClientMissionShout(UDialogDataAsset* Shout, int32_t Index, bool bPriority);
};

// Class FSD.CommnuityRewardBundle
// Size: 0x40 (Inherited: 0x30)
struct UCommnuityRewardBundle : UDataAsset {
	TArray<FCommunityReward> Rewards; // 0x30(0x10)

	void AwardRewards(UObject* WorldContext);
};

// Class FSD.CommnuityRewardSetup
// Size: 0x40 (Inherited: 0x30)
struct UCommnuityRewardSetup : UDataAsset {
	TArray<UCommnuityRewardBundle*> TierRewards; // 0x30(0x10)

	TMap<UResourceData*, int32_t> GetResourcesTierOnlyReward(int32_t Tier);
	TMap<UResourceData*, int32_t> GetResourcesReward(int32_t Tier);
	void AwardTierRewards(UObject* WorldContext, int32_t Tier);
};

// Class FSD.CommunityGoalCategory
// Size: 0x48 (Inherited: 0x30)
struct UCommunityGoalCategory : UDataAsset {
	FText Title; // 0x30(0x18)
};

// Class FSD.CommunityGoalFaction
// Size: 0xe8 (Inherited: 0x30)
struct UCommunityGoalFaction : UDataAsset {
	FText Title; // 0x30(0x18)
	FText Description; // 0x48(0x18)
	FText ShortDescription; // 0x60(0x18)
	FText JoinHeader; // 0x78(0x18)
	FText JoinBody; // 0x90(0x18)
	UTexture2D* Icon; // 0xa8(0x08)
	UTexture2D* Frame; // 0xb0(0x08)
	FSlateColor Color; // 0xb8(0x28)
	enum class EFSDFaction FactionID; // 0xe0(0x01)
};

// Class FSD.CommunityGoal
// Size: 0x98 (Inherited: 0x30)
struct UCommunityGoal : UDataAsset {
	bool TierValuesAreInitialized; // 0x30(0x01)
	FGuid SaveGameID; // 0x34(0x10)
	bool Active; // 0x44(0x01)
	FText Title; // 0x48(0x18)
	FText MetaDescription; // 0x60(0x18)
	UCommunityGoalCategory* Category; // 0x78(0x08)
	enum class ECommunityGoalType CommunityGoalType; // 0x80(0x01)
	float GoalPerMemberTier1; // 0x84(0x04)
	float GoalPerMemberTier2; // 0x88(0x04)
	float GoalPerMemberTier3; // 0x8c(0x04)
	UCommnuityRewardSetup* RewardSetup; // 0x90(0x08)

	float TotalTierProgress(float Value, int32_t Members);
	float TierValue(enum class ECommunityGoalTier Tier, float Value, int32_t Members);
	float TierProgress(enum class ECommunityGoalTier Tier, float Value, int32_t Members);
	float TierGoal(enum class ECommunityGoalTier Tier, int32_t Members);
	int32_t RewardTier(float Value, int32_t Members);
	void IncrementGoal(UObject* WorldContext, float Value);
	FText GoalToText(enum class ECommunityGoalType StatType, float Value);
	FText GetCategoryTitle();
	bool AreTiersInitialized();
};

// Class FSD.CommunityGoalWrapper
// Size: 0x140 (Inherited: 0x28)
struct UCommunityGoalWrapper : UObject {
	bool HasCGS; // 0x28(0x01)
	FCommunityGoalStateData CGSData; // 0x2c(0x10)
	int32_t LastCollectedRewardID; // 0x3c(0x04)
	FCommunityFactionData FactionData; // 0x48(0x38)
	bool FreeBeerRewardActive; // 0x80(0x01)
	FMulticastInlineDelegate OnFreeBeerRewardChanged; // 0x88(0x10)
	FString SteamTicket; // 0xb8(0x10)
	FString SteamBranch; // 0xc8(0x10)
	FMulticastInlineDelegate OnFactionsDataReceived; // 0xd8(0x10)
	FMulticastInlineDelegate OnDiscordCGSDataEvent; // 0xe8(0x10)
	FMulticastInlineDelegate UICheck; // 0xf8(0x10)
	FMulticastInlineDelegate OnGoalsInitializedDelegate; // 0x108(0x10)
	bool AreAllGoalsInitialized; // 0x138(0x01)

	void UpdateAllGoalsInitialized();
	bool RewardReceived();
	void RequestGoalStateData();
	void RequestFactionsData();
	void NextPeriod();
	void InitializeGoalTierTargetValues(UCommunityGoal* goalToInitialize);
	UCommunityGoalFaction* GetPlayerCurrentFaction(UObject* WorldContext);
	void ClaimRewardMessage(UObject* WorldContext, FCommunityRewardNotification rewardNotification);
	void ClaimReward();
	void CheckUI();
};

// Class FSD.ControllerIconSettings
// Size: 0xc8 (Inherited: 0x38)
struct UControllerIconSettings : UDeveloperSettings {
	FInputTranslationTable InputTranslationTable; // 0x38(0x50)
	TArray<FActionIconMapping> Xbox_KeyIcons; // 0x88(0x10)
	TArray<FActionIconMapping> Playstation_KeyIcons; // 0x98(0x10)
	TArray<FActionIconMapping> Playstation5_KeyIcons; // 0xa8(0x10)
	TArray<FActionIconMapping> MouseKeyboard_KeyIcons; // 0xb8(0x10)

	bool FindMouseKeyboardKeyIcon(FKey Key, FActionIconMapping KeyIcon);
	bool FindKeyIcon(FKey Key, FActionIconMapping KeyIcon);
	bool FindControllerKeyIcon(FKey Key, FActionIconMapping KeyIcon);
};

// Class FSD.ConvertedRobot
// Size: 0x6c0 (Inherited: 0x3a0)
struct AConvertedRobot : AEnemyDeepPathfinderCharacter {
	UEnemyComponent* EnemyComponent; // 0x3a8(0x08)
	UPawnStatsComponent* PawnStats; // 0x3b0(0x08)
	UOutlineComponent* outline; // 0x3b8(0x08)
	UHitscanComponent* HitScan; // 0x3c0(0x08)
	USingleUsableComponent* Usable; // 0x3c8(0x08)
	USceneComponent* TurretRoot; // 0x3d0(0x08)
	USkeletalMeshComponent* TurretMesh; // 0x3d8(0x08)
	UPointLightComponent* MuzzleFlash; // 0x3e0(0x08)
	USpotLightComponent* SpotLight; // 0x3e8(0x08)
	UStaticMeshComponent* LightCone; // 0x3f0(0x08)
	UStaticMeshComponent* LaserBeam; // 0x3f8(0x08)
	USceneComponent* ShieldRoot; // 0x400(0x08)
	UStaticMeshComponent* InnerShield; // 0x408(0x08)
	UStaticMeshComponent* OuterShield; // 0x410(0x08)
	UAudioComponent* PulsatingSoundComp; // 0x418(0x08)
	UAudioComponent* LaserWarningSound; // 0x420(0x08)
	UDamageComponent* Damage; // 0x428(0x08)
	FMulticastInlineDelegate OnStateChanged; // 0x430(0x10)
	FMulticastInlineDelegate OnShieldChanged; // 0x440(0x10)
	FMulticastInlineDelegate OnIntroductionStart; // 0x450(0x10)
	bool ForceSit; // 0x470(0x01)
	USoundBase* LaserSound; // 0x478(0x08)
	USoundBase* LastPowerDownSound; // 0x480(0x08)
	USoundBase* PowerUpSound; // 0x488(0x08)
	TWeakObjectPtr<UAudioComponent> LaserSoundComp; // 0x490(0x08)
	float IntroductionTime; // 0x4b0(0x04)
	bool IsIntroducing; // 0x4b4(0x01)
	bool IntroductionDone; // 0x4b5(0x01)
	bool IsGrowingShield; // 0x4b6(0x01)
	float AimDownwardsOffset; // 0x4b8(0x04)
	float BigShieldScale; // 0x4bc(0x04)
	float SmallShieldScale; // 0x4c0(0x04)
	float ShieldGrowthRate; // 0x4c4(0x04)
	float LerpExp; // 0x4c8(0x04)
	float MinimumShieldSize; // 0x4cc(0x04)
	float TargetShieldSize; // 0x4d0(0x04)
	float IdleRotationSpeed; // 0x4d4(0x04)
	float LaserScaleRate; // 0x4d8(0x04)
	float MaxSearchAngle; // 0x4e0(0x04)
	bool DoSpecialWhenEnemy; // 0x500(0x01)
	bool DoSpecialWhenFriendly; // 0x501(0x01)
	bool PerfectTrackingWhenEnemy; // 0x502(0x01)
	bool PerfectTrackingWhenFriendly; // 0x503(0x01)
	bool ReplaceBurstAttack; // 0x506(0x01)
	USoundBase* GrenadeFireSound; // 0x508(0x08)
	UParticleSystem* GrenadeFireParticle; // 0x510(0x08)
	bool IsFiring; // 0x518(0x01)
	float TurretSpinSpeed; // 0x51c(0x04)
	TArray<AActor*> Parasites; // 0x520(0x10)
	int32_t SpawnParasiteNumer; // 0x530(0x04)
	int32_t MaxParasiteSlots; // 0x534(0x04)
	float ChanceToSpawnParasite; // 0x538(0x04)
	AParasiteEnemy* ParasiteClass; // 0x540(0x08)
	bool SpinTurret; // 0x54e(0x01)
	AProjectile* SpecialAttackProjectile; // 0x560(0x08)
	AProjectile* FriendlyProjectile; // 0x568(0x08)
	bool HasLockedOn; // 0x57c(0x01)
	USoundBase* TargetingSound; // 0x580(0x08)
	UAnimSequenceBase* GrenadeShotAnimation; // 0x588(0x08)
	float LockOnTime; // 0x590(0x04)
	USoundCue* ShootSound; // 0x598(0x08)
	float ShootSoundFadeout; // 0x5a0(0x04)
	UAudioComponent* ShootSoundInstance; // 0x5a8(0x08)
	USoundCue* ShootSoundTail; // 0x5b0(0x08)
	UParticleSystem* MuzzleEffect; // 0x5b8(0x08)
	UParticleSystem* TracerEffect; // 0x5c0(0x08)
	FRuntimeFloatCurve MuzzleLightCurve; // 0x5c8(0x88)
	float GunRange; // 0x658(0x04)
	float FireRate; // 0x65c(0x04)
	float GrenadeFireRate; // 0x660(0x04)
	float BurstCooldown; // 0x668(0x04)
	int32_t MinBurst; // 0x670(0x04)
	int32_t MaxBurst; // 0x674(0x04)
	float TurretLerpSpeed; // 0x678(0x04)
	float DamageWhenFriendly; // 0x67c(0x04)
	float FriendlyFriendlyFireMultiplier; // 0x680(0x04)
	bool StartedSpecialAttack; // 0x688(0x01)
	enum class ERobotState TeamState; // 0x689(0x01)
	bool IsWalking; // 0x698(0x01)
	bool IsDoingSpecialAttack; // 0x699(0x01)
	UStaticMeshComponent* TurretRotation; // 0x6a0(0x08)
	AActor* CurrentTarget; // 0x6b0(0x08)

	void UpdateGunsInsideTerrain();
	void StartBossFight();
	void ParasiteDamaged(float aDamage);
	void OnWeaponsFired(FVector aHitResult);
	void OnUsed(APlayerCharacter* aUser, enum class EInputKeys Key);
	void OnSeePawn(APawn* APawn);
	void OnRep_TeamState();
	void OnRep_Target();
	void OnRep_SpinTurret();
	void OnRep_IsIntroducting();
	void OnRep_IsFiring();
	void OnRep_IsDoingSpecialAttack();
	void OnParasiteDeath(AActor* AParasiteEnemy);
	enum class ERobotState GetTeamState();
	FVector GetPlayerMediumPoint();
	TArray<AActor*> GetParasites();
	bool GetHasPoweredDown();
	void DestroyAttatchPoint(USceneComponent* aComponent);
	void CannonEffects();
	void BP_OnStateChanged(enum class ERobotState TeamState);
	void BP_OnShieldChanged(bool isGrowing);
	void BP_OnInstroduce();
};

// Class FSD.ConvertedRobotAnimInstance
// Size: 0x280 (Inherited: 0x270)
struct UConvertedRobotAnimInstance : UAnimInstance {
	bool HasIntroduced; // 0x26c(0x01)
	bool IsWalking; // 0x26d(0x01)
	bool IsIntroducing; // 0x26e(0x01)
	bool ShouldSit; // 0x26f(0x01)
	bool StopSit; // 0x270(0x01)
	bool ShouldCollapse; // 0x271(0x01)
	bool IsPoweredDown; // 0x272(0x01)
	float WalkingRate; // 0x274(0x04)
	float NormalWalkSpeed; // 0x278(0x04)
};

// Class FSD.ConvertedRobotTurretAnimInstance
// Size: 0x270 (Inherited: 0x270)
struct UConvertedRobotTurretAnimInstance : UAnimInstance {
	bool ReplaceBurstAttack; // 0x268(0x01)
	bool IsFiringGrenades; // 0x269(0x01)
	bool IsDoingSpecialAttack; // 0x26a(0x01)
	bool ShouldFireBullets; // 0x26b(0x01)
	bool StopFiringBullets; // 0x26c(0x01)
	bool ShouldCannonDeploy; // 0x26d(0x01)
};

// Class FSD.EnemyAIController
// Size: 0x358 (Inherited: 0x358)
struct AEnemyAIController : AFSDAIController {
};

// Class FSD.ConvertedRobotController
// Size: 0x428 (Inherited: 0x358)
struct AConvertedRobotController : AEnemyAIController {
	float CheckRangeInterval; // 0x358(0x04)
	float MaxTimeInRange; // 0x35c(0x04)
	float PersonalSpaceRange; // 0x364(0x04)
	FGameplayTagQuery FriendlyTargetingQuery; // 0x378(0x48)
	float SpecialAttackRange; // 0x3c0(0x04)
	float SpecialAttackFireRate; // 0x3c4(0x04)
	float WaitBeforeSpecial; // 0x3e8(0x04)
	float WaitAfterSpecial; // 0x3f0(0x04)
	float MinSpecialAttackCooldown; // 0x3fc(0x04)
	float MaxSpecialAttackCooldown; // 0x400(0x04)
	UBehaviorTree* BehaviourTree; // 0x408(0x08)
	float UpdateTargetInterval; // 0x410(0x04)
	float PowerDownAfterSeconds; // 0x418(0x04)

	void ResetCloseTimer();
};

// Class FSD.CoolDownItemAggregator
// Size: 0xe8 (Inherited: 0xc8)
struct UCoolDownItemAggregator : UItemAggregator {
	float CooldownDuration; // 0xc8(0x04)
	USoundBase* AudioCoolDownFinished; // 0xd0(0x08)
	float CooldownRemaining; // 0xd8(0x04)
	bool CoolDownIsPaused; // 0xdc(0x01)
	AItem* Item; // 0xe0(0x08)

	void SetPaused(bool IsPaused);
	bool IsCoolingDown();
	float GetCoolDownProgress();
	void ActivateCoolDown(bool startPaused);
};

// Class FSD.CoolDownProgressWidget
// Size: 0x280 (Inherited: 0x230)
struct UCoolDownProgressWidget : UUserWidget {
	FCoolDownProgressStyle Style; // 0x230(0x40)
	TWeakObjectPtr<UObject> CoolDownObject; // 0x270(0x08)
	bool bIsFinished; // 0x278(0x01)

	void UpdateProgress(float Progress);
	void ReceiveUpdateProgress(float InProgress);
	void ReceiveInitWidget();
	void Init(UObject* InCoolDownObject, FCoolDownProgressStyle InStyle);
};

// Class FSD.PricingTier
// Size: 0x40 (Inherited: 0x30)
struct UPricingTier : UDataAsset {
	FString PriceKey; // 0x30(0x10)
};

// Class FSD.SchematicPricingTier
// Size: 0x40 (Inherited: 0x40)
struct USchematicPricingTier : UPricingTier {
};

// Class FSD.CreditsResourceData
// Size: 0xf0 (Inherited: 0xf0)
struct UCreditsResourceData : UResourceData {
};

// Class FSD.CritterManager
// Size: 0xf8 (Inherited: 0xb0)
struct UCritterManager : UActorComponent {
	bool DisableCritters; // 0xb0(0x01)
	float ActivationRange; // 0xb4(0x04)
};

// Class FSD.CrosshairWidget
// Size: 0x230 (Inherited: 0x230)
struct UCrosshairWidget : UUserWidget {

	void SetData(AItem* Item);
	void OnUpgraded(AItem* Item);
};

// Class FSD.CrosshairAggregator
// Size: 0xf0 (Inherited: 0xc8)
struct UCrosshairAggregator : UItemAggregator {
	FMulticastInlineDelegate OnCrosshairCreated; // 0xd0(0x10)
	UUserWidget* CrosshairWidget; // 0xe0(0x08)
	UUserWidget* CrossHairType; // 0xe8(0x08)

	void SetCrosshair(UUserWidget* Widget);
	UUserWidget* GetOrCreateCrosshair();
};

// Class FSD.CryosprayItem
// Size: 0x860 (Inherited: 0x6d8)
struct ACryosprayItem : AAmmoDrivenWeapon {
	UProjectileLauncherComponent* ProjectileLauncher; // 0x6d8(0x08)
	UDamageComponent* DamageComponent; // 0x6e0(0x08)
	UStickyFlameSpawner* StickyFlames; // 0x6e8(0x08)
	UDamageComponent* AoEColdDamageComponent; // 0x6f0(0x08)
	UMotionAudioController* VelocityAudio; // 0x6f8(0x08)
	UParticleSystemComponent* FlameParticleComponent; // 0x700(0x08)
	bool PressurizedProjectileEnabled; // 0x708(0x01)
	float PressurizedProjectileDelay; // 0x70c(0x04)
	int32_t PressurizeProjectileFullCost; // 0x710(0x04)
	UParticleSystem* ChargeupParticles; // 0x720(0x08)
	UParticleSystemComponent* ChargeupParticleInstance; // 0x728(0x08)
	FDecalData ImpactDecal; // 0x730(0x18)
	float DecalDelay; // 0x748(0x04)
	UParticleSystem* ImpactParticles; // 0x750(0x08)
	UParticleSystemComponent* ImpactParticleInstance; // 0x758(0x08)
	TArray<FName> FlameParameterNames; // 0x760(0x10)
	float DamageSphereRadius; // 0x770(0x04)
	float MaxFlameDistance; // 0x774(0x04)
	float FlameGrowthPerSecond; // 0x778(0x04)
	float friendlyFireModifier; // 0x77c(0x04)
	float ChargeupTime; // 0x780(0x04)
	float ChargeDownTime; // 0x784(0x04)
	bool isCharging; // 0x789(0x01)
	float ChargeProgress; // 0x78c(0x04)
	bool bRepressurerising; // 0x790(0x01)
	float RepressurerisingDoneAtPct; // 0x794(0x04)
	float ChargeUpFadeOutTime; // 0x798(0x04)
	UFSDAudioComponent* ChargeUpAudioComponent; // 0x7a0(0x08)
	float PressureTime; // 0x7a8(0x04)
	float PressureDropMultiplier; // 0x7ac(0x04)
	float PressureGainMultiplier; // 0x7b0(0x04)
	float CurrentPressure; // 0x7b4(0x04)
	float RePressureDuration; // 0x7b8(0x04)
	float RePressureProgress; // 0x7bc(0x04)
	TArray<UItemUpgrade*> upgrades; // 0x7c0(0x10)
	bool LongReachEnabled; // 0x7d0(0x01)
	bool AoEColdEnabled; // 0x7e0(0x01)

	void ServerDoDamage(FVector_NetQuantize Start, FVector_NetQuantize End, char Power);
	void Server_TriggerAoECold();
	void Server_PreLaunchProjectile();
	void ReceiveRepressurisingChanged(bool Value);
	void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UFSDPhysicalMaterial* PhysicalMaterial);
	void OnRep_IsCharging(bool OldValue);
	void OnProjectileSpawned(AProjectileBase* Projectile);
	void OnProjectileLaunched(FVector Location);
	void OnPressurizedPartileShoot();
	void OnPreProjectileLaunch();
	void All_PreLaunchProjectile();
};

// Class FSD.CryoSprayAnimInstance
// Size: 0x290 (Inherited: 0x270)
struct UCryoSprayAnimInstance : UAnimInstance {
	ACryosprayItem* Weapon; // 0x268(0x08)
	bool IsFiring; // 0x270(0x01)
	float ChargeProgress; // 0x274(0x04)
	FRotator ChargeRotation; // 0x278(0x0c)
	float ChargeBlend; // 0x284(0x04)
	float Pressure; // 0x288(0x04)
};

// Class FSD.CustomKeyBindingLibrary
// Size: 0x28 (Inherited: 0x28)
struct UCustomKeyBindingLibrary : UBlueprintFunctionLibrary {
};

// Class FSD.KeyBindingSettings
// Size: 0x50 (Inherited: 0x30)
struct UKeyBindingSettings : UDataAsset {
	TArray<FCustomKeySetting> KeyboardMouseButtons; // 0x30(0x10)
	TArray<FCustomKeySetting> ControllerButtons; // 0x40(0x10)
};

// Class FSD.CustomRichTextDecorator
// Size: 0x30 (Inherited: 0x28)
struct UCustomRichTextDecorator : URichTextBlockDecorator {
	URichTextBlock* RichTextBlock; // 0x28(0x08)
};

// Class FSD.DailyDealSettings
// Size: 0x40 (Inherited: 0x30)
struct UDailyDealSettings : UDataAsset {
	TArray<FDailyDealSetup> DailyDeals; // 0x30(0x10)

	bool IsDailyDealBought(UObject* WorldContextObject);
	int32_t GetDailyDealSeed();
	void GetDailyDeal(FDailyDeal outDeal);
	bool CanAffordDailyDeal(UObject* WorldContextObject);
	bool BuyDailyDeal(UObject* WorldContextObject);
};

// Class FSD.DamageAttackComponent
// Size: 0xf8 (Inherited: 0xf0)
struct UDamageAttackComponent : UAttackBaseComponent {
	UDamageComponent* Damage; // 0xf0(0x08)
};

// Class FSD.DamageBonusBase
// Size: 0x38 (Inherited: 0x30)
struct UDamageBonusBase : UDataAsset {
	UDamageCondition* Condition; // 0x30(0x08)

	UDamageBonusBase* AddDamageBonusToComponent(UDamageBonusBase* damageBonusClass, UDamageComponent* DamageComponent);
};

// Class FSD.FlatDamageBonus
// Size: 0x48 (Inherited: 0x38)
struct UFlatDamageBonus : UDamageBonusBase {
	float Damage; // 0x38(0x04)
	UDamageClass* DamageClass; // 0x40(0x08)
};

// Class FSD.RangedFlatDamageBonus
// Size: 0x48 (Inherited: 0x38)
struct URangedFlatDamageBonus : UDamageBonusBase {
	UCurveFloat* DamageCurve; // 0x38(0x08)
	UDamageClass* DamageClass; // 0x40(0x08)
};

// Class FSD.TargetSpecificDamageBonus
// Size: 0x90 (Inherited: 0x38)
struct UTargetSpecificDamageBonus : UDamageBonusBase {
	float Bonus; // 0x38(0x04)
	FGameplayTagQuery tagQuery; // 0x40(0x48)
	FName Key; // 0x88(0x08)
};

// Class FSD.DamageConversionBonus
// Size: 0x48 (Inherited: 0x38)
struct UDamageConversionBonus : UDamageBonusBase {
	UDamageClass* DamageClass; // 0x38(0x08)
	float ConversionPercentage; // 0x40(0x04)
	bool DamageIsAdded; // 0x44(0x01)
};

// Class FSD.TargetStateDamageBonus
// Size: 0x48 (Inherited: 0x38)
struct UTargetStateDamageBonus : UDamageBonusBase {
	enum class ETargetStateDamageBonusType TargetState; // 0x38(0x01)
	float Bonus; // 0x3c(0x04)
	UDamageClass* DamageClass; // 0x40(0x08)
};

// Class FSD.StatusDamageBonus
// Size: 0x58 (Inherited: 0x38)
struct UStatusDamageBonus : UDamageBonusBase {
	TArray<UStatusEffect*> StatusEffects; // 0x38(0x10)
	float Bonus; // 0x48(0x04)
	UDamageClass* DamageClass; // 0x50(0x08)
};

// Class FSD.StatusAndStateDamageBonus
// Size: 0x68 (Inherited: 0x38)
struct UStatusAndStateDamageBonus : UDamageBonusBase {
	TArray<UStatusEffect*> StatusEffects; // 0x38(0x10)
	TArray<enum class ETargetStateDamageBonusType> TargetStates; // 0x48(0x10)
	float Bonus; // 0x58(0x04)
	UDamageClass* DamageClass; // 0x60(0x08)
};

// Class FSD.PushStatusEffectDamageBonus
// Size: 0x58 (Inherited: 0x38)
struct UPushStatusEffectDamageBonus : UDamageBonusBase {
	UStatusEffect* StatusEffect; // 0x48(0x08)
	float Chance; // 0x50(0x04)
	bool IgnoreArmorHit; // 0x54(0x01)
};

// Class FSD.PushDynamicStatusEffectDamageBonus
// Size: 0x60 (Inherited: 0x38)
struct UPushDynamicStatusEffectDamageBonus : UDamageBonusBase {
	UStatusEffect* BaseSTE; // 0x48(0x08)
	UStatusEffect* StatusEffect; // 0x50(0x08)
	float Chance; // 0x58(0x04)
};

// Class FSD.FearAoEBonus
// Size: 0x40 (Inherited: 0x38)
struct UFearAoEBonus : UDamageBonusBase {
	float FearFactor; // 0x38(0x04)
	float range; // 0x3c(0x04)
};

// Class FSD.AmmoLeftDamageBonus
// Size: 0x58 (Inherited: 0x48)
struct UAmmoLeftDamageBonus : UFlatDamageBonus {
	UCurveFloat* AmmoDamageCurve; // 0x48(0x08)
};

// Class FSD.AmmoUsedDamageBonus
// Size: 0x40 (Inherited: 0x38)
struct UAmmoUsedDamageBonus : UDamageBonusBase {
	float DamageBonusPerRoundFired; // 0x38(0x04)
};

// Class FSD.RandomDamageBonus
// Size: 0x40 (Inherited: 0x38)
struct URandomDamageBonus : UDamageBonusBase {
	FRandRange RandomDamageRange; // 0x38(0x08)
};

// Class FSD.PercentDamageBonus
// Size: 0x40 (Inherited: 0x38)
struct UPercentDamageBonus : UDamageBonusBase {
	float DamageMultiplier; // 0x38(0x04)
};

// Class FSD.GatlingHotShellsBonus
// Size: 0x48 (Inherited: 0x48)
struct UGatlingHotShellsBonus : UDamageConversionBonus {
};

// Class FSD.BreakIceBonus
// Size: 0x40 (Inherited: 0x38)
struct UBreakIceBonus : UDamageBonusBase {
	float DeFrostAmount; // 0x38(0x04)
};

// Class FSD.KnockbackDamageBonus
// Size: 0x40 (Inherited: 0x38)
struct UKnockbackDamageBonus : UDamageBonusBase {
	float KnockBackHorizontalForce; // 0x38(0x04)
	float KnockBackVerticalForce; // 0x3c(0x04)
};

// Class FSD.CarryElementalStatus
// Size: 0x48 (Inherited: 0x38)
struct UCarryElementalStatus : UDamageBonusBase {
	float CarryBonusAmount; // 0x38(0x04)
	UDamageClass* CarriedClass; // 0x40(0x08)
};

// Class FSD.LockCountSTEBonus
// Size: 0x48 (Inherited: 0x38)
struct ULockCountSTEBonus : UDamageBonusBase {
	int32_t MinLockCount; // 0x38(0x04)
	bool UseTotalLockCount; // 0x3c(0x01)
	UStatusEffect* StatusEffect; // 0x40(0x08)
};

// Class FSD.TagDamageBonus
// Size: 0x48 (Inherited: 0x38)
struct UTagDamageBonus : UDamageBonusBase {
	TArray<UDamageTag*> Tags; // 0x38(0x10)
};

// Class FSD.SpawnOnImpactDamageBonus
// Size: 0x40 (Inherited: 0x38)
struct USpawnOnImpactDamageBonus : UDamageBonusBase {
	AActor* ActorToSpawn; // 0x38(0x08)
};

// Class FSD.DamageClass
// Size: 0x50 (Inherited: 0x30)
struct UDamageClass : UDataAsset {
	UPawnStat* ResistanceStat; // 0x30(0x08)
	float RagdollScale; // 0x38(0x04)
	bool BypassesShield; // 0x3c(0x01)
	bool AffectedByFriendlyFire; // 0x3d(0x01)
	UTexture2D* IndicatorImage; // 0x40(0x08)
	UDialogDataAsset* DamageShout; // 0x48(0x08)
};

// Class FSD.DamageComponent
// Size: 0x1b0 (Inherited: 0xb0)
struct UDamageComponent : UActorComponent {
	FMulticastInlineDelegate OnTargetKilledEvent; // 0xb0(0x10)
	FMulticastInlineDelegate OnTargetDamagedEvent; // 0xc0(0x10)
	FMulticastInlineDelegate OnNoTargetHitEvent; // 0xd0(0x10)
	FMulticastInlineDelegate OnHitDeadTarget; // 0xe0(0x10)
	enum class EDamageComponentType DamageComponentType; // 0xf4(0x01)
	float Damage; // 0xf8(0x04)
	float ArmorDamageMultiplier; // 0xfc(0x04)
	bool ShattersArmor; // 0x100(0x01)
	UDamageClass* DamageClass; // 0x108(0x08)
	float WeakpointDamageMultiplier; // 0x110(0x04)
	float FrozenDamageBonusScale; // 0x114(0x04)
	float friendlyFireModifier; // 0x118(0x04)
	float SelfFriendlyFireMultiplier; // 0x11c(0x04)
	FGameplayTag FriendlyFireTag; // 0x120(0x08)
	bool StaggerOnlyOnWeakpointHit; // 0x128(0x01)
	float StaggerChance; // 0x12c(0x04)
	float StaggerDuration; // 0x130(0x04)
	float FearFactor; // 0x134(0x04)
	TArray<UDamageBonusBase*> DamageBonuses; // 0x138(0x10)
	TArray<UDamageModifier*> DamageModifiers; // 0x148(0x10)
	TArray<UDamageTag*> DamageTags; // 0x158(0x10)
	bool UseAreaOfEffect; // 0x178(0x01)
	float RadialDamage; // 0x17c(0x04)
	bool NoFriendlyFireFromRadial; // 0x180(0x01)
	UDamageClass* RadialDamageClass; // 0x188(0x08)
	float MinDamagePct; // 0x190(0x04)
	float DamageRadius; // 0x194(0x04)
	float MaxDamageRadius; // 0x198(0x04)

	void PreTestDamageConditions();
	UDamageComponent* GetDamageComponentCDO(UDamageComponent* DamageComponent);
	float GetDamage();
	void DamageTargetFromHit(FHitResult HitResult);
	void DamageTarget(AActor* Target, FVector Location, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysMat);
	void DamageArmor_Server(AActor* Target, UPrimitiveComponent* collider, int32_t BoneIndex, FVector impactLocation);
	void DamageArmor_All(AActor* Target, UPrimitiveComponent* collider, int32_t BoneIndex);
};

// Class FSD.DamageCondition
// Size: 0x28 (Inherited: 0x28)
struct UDamageCondition : UObject {
};

// Class FSD.FalseDamageCondition
// Size: 0x28 (Inherited: 0x28)
struct UFalseDamageCondition : UDamageCondition {
};

// Class FSD.MultiDamageCondition
// Size: 0x40 (Inherited: 0x28)
struct UMultiDamageCondition : UDamageCondition {
	TArray<UDamageCondition*> Conditions; // 0x28(0x10)
	bool RequireAllTrue; // 0x38(0x01)
};

// Class FSD.RandomDamageCondition
// Size: 0x30 (Inherited: 0x28)
struct URandomDamageCondition : UDamageCondition {
	float Chance; // 0x28(0x04)
};

// Class FSD.LockCountDamageCondition
// Size: 0x30 (Inherited: 0x28)
struct ULockCountDamageCondition : UDamageCondition {
	int32_t MinLockCount; // 0x28(0x04)
	bool UseTotalLockCount; // 0x2c(0x01)
};

// Class FSD.LocksRemainingDamageCondition
// Size: 0x30 (Inherited: 0x28)
struct ULocksRemainingDamageCondition : UDamageCondition {
	int32_t MaxLocksRemaining; // 0x28(0x04)
};

// Class FSD.TargetStateDamageCondition
// Size: 0x30 (Inherited: 0x28)
struct UTargetStateDamageCondition : UDamageCondition {
	enum class ETargetStateDamageBonusType TargetState; // 0x28(0x01)
};

// Class FSD.TargetSTEDamageCondition
// Size: 0x38 (Inherited: 0x28)
struct UTargetSTEDamageCondition : UDamageCondition {
	TArray<UStatusEffect*> StatusEffects; // 0x28(0x10)
};

// Class FSD.TargetTagsDamageCondition
// Size: 0x70 (Inherited: 0x28)
struct UTargetTagsDamageCondition : UDamageCondition {
	FGameplayTagQuery tagQuery; // 0x28(0x48)
};

// Class FSD.WeakpointDamageCondition
// Size: 0x28 (Inherited: 0x28)
struct UWeakpointDamageCondition : UDamageCondition {
};

// Class FSD.DirectDamageCondition
// Size: 0x30 (Inherited: 0x28)
struct UDirectDamageCondition : UDamageCondition {
	enum class EDirectDamageConditionEnum Type; // 0x28(0x01)
};

// Class FSD.ClipStatusDamageCondition
// Size: 0x30 (Inherited: 0x28)
struct UClipStatusDamageCondition : UDamageCondition {
	int32_t BulletAmount; // 0x28(0x04)
	bool CountBulletsLeft; // 0x2c(0x01)
};

// Class FSD.ItemTemperatureDamageCondition
// Size: 0x30 (Inherited: 0x28)
struct UItemTemperatureDamageCondition : UDamageCondition {
	int32_t HeatThreshold; // 0x28(0x04)
	bool MustBeUnderThreshold; // 0x2c(0x01)
};

// Class FSD.PlayerShieldsDamageCondition
// Size: 0x30 (Inherited: 0x28)
struct UPlayerShieldsDamageCondition : UDamageCondition {
	FFloatInterval ShieldPercentageRequired; // 0x28(0x08)
};

// Class FSD.PlayerHealthDamageCondition
// Size: 0x30 (Inherited: 0x28)
struct UPlayerHealthDamageCondition : UDamageCondition {
	FFloatInterval HealthPercentageRequired; // 0x28(0x08)
};

// Class FSD.CooldownDamageCondition
// Size: 0x30 (Inherited: 0x28)
struct UCooldownDamageCondition : UDamageCondition {
	float CoolDown; // 0x28(0x04)
};

// Class FSD.BoltActionWeaponDamageCondition
// Size: 0x30 (Inherited: 0x28)
struct UBoltActionWeaponDamageCondition : UDamageCondition {
	enum class EBoltActionWeaponConditions WeaponCondition; // 0x28(0x01)
};

// Class FSD.PlasmaCarbineDamageCondition
// Size: 0x30 (Inherited: 0x28)
struct UPlasmaCarbineDamageCondition : UDamageCondition {
	enum class EPlasmaCarbineConditions WeaponCondition; // 0x28(0x01)
	int32_t Condition; // 0x2c(0x04)
};

// Class FSD.MaterialDamageMultiplierCondition
// Size: 0x38 (Inherited: 0x28)
struct UMaterialDamageMultiplierCondition : UDamageCondition {
	FFloatInterval MultiplierRangeRequired; // 0x28(0x08)
	bool Invert; // 0x30(0x01)
};

// Class FSD.DamageFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UDamageFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsCorrosiveDeath(UDamageClass* DamageClass, TArray<UDamageTag*> Tags);
};

// Class FSD.DamageModifier
// Size: 0x48 (Inherited: 0x30)
struct UDamageModifier : UDataAsset {
	UDamageCondition* Condition; // 0x30(0x08)
	TArray<FDamageModifierItem> Modifiers; // 0x38(0x10)
};

// Class FSD.DamageSettings
// Size: 0x138 (Inherited: 0x30)
struct UDamageSettings : UDataAsset {
	float TemperatureChangePerColdDamagePoint; // 0x30(0x04)
	float TemperatureChangePerIceDamagePoint; // 0x34(0x04)
	float TemperatureChangePerHeatDamagePoint; // 0x38(0x04)
	float TemperatureChangePerFireDamagePoint; // 0x3c(0x04)
	float TemperatureShockActivationWindow; // 0x40(0x04)
	float FrozenDamageBonus; // 0x44(0x04)
	UStatusEffect* EnemyOnFireStatusEffect; // 0x48(0x08)
	UStatusEffect* PlayerOnFireStatusEffect; // 0x50(0x08)
	UStatusEffect* TemperatureShockFromFrozenStatusEffect; // 0x58(0x08)
	UStatusEffect* TemperatureShockFromBurningStatusEffect; // 0x60(0x08)
	UDamageComponent* ArmorShatterDamage; // 0x68(0x08)
	UNiagaraSystem* ArmorShatterEmitter; // 0x70(0x08)
	USoundCue* ArmorShatterSound; // 0x78(0x08)
	TArray<FDecalData> ImpactDecals; // 0x80(0x10)
	FRuntimeFloatCurve ArmorToArmorDamageBreakingCurve; // 0x90(0x88)
	UDamageTag* DetonateFrozen; // 0x118(0x08)
	UDamageTag* DetonateOnFire; // 0x120(0x08)
	UDamageTag* DirectHit; // 0x128(0x08)
	UDamageTag* MeltTarget; // 0x130(0x08)
};

// Class FSD.DamageSubsystem
// Size: 0x60 (Inherited: 0x30)
struct UDamageSubsystem : UGameInstanceSubsystem {
	TArray<FDamageSubsystemItem> Items; // 0x30(0x10)
};

// Class FSD.DamageTag
// Size: 0x30 (Inherited: 0x30)
struct UDamageTag : UDataAsset {
};

// Class FSD.DanceSettings
// Size: 0x40 (Inherited: 0x30)
struct UDanceSettings : UDataAsset {
	TArray<FDanceItem> DanceMoves; // 0x30(0x10)
};

// Class FSD.DashPoints
// Size: 0x1d0 (Inherited: 0xb0)
struct UDashPoints : UActorComponent {
	FMulticastInlineDelegate OnStartDashEvent; // 0xb0(0x10)
	FMulticastInlineDelegate OnStopDashEvent; // 0xc0(0x10)
	FVector_NetQuantize DashLocation; // 0xdc(0x0c)
	FRuntimeFloatCurve DashSpeedCurve; // 0xf8(0x88)
	float PointOffset; // 0x198(0x04)
	float MaxRangeFromPlayer; // 0x19c(0x04)
	float MinRangeFromPlayer; // 0x1a0(0x04)
	float MinHeightAboveTarget; // 0x1a4(0x04)
	float MaxHeightAboveTarget; // 0x1a8(0x04)
	float safeReduction; // 0x1ac(0x04)
	float AcceptedDashradius; // 0x1b0(0x04)
	float DashSpeed; // 0x1b4(0x04)
	float SlowdownRadius; // 0x1b8(0x04)
	int32_t IgnoreTheClosestPoints; // 0x1c8(0x04)
	enum class EDashPointsGenerationMode GenerationMode; // 0x1cc(0x01)
	bool IsDashing; // 0x1cd(0x01)
	bool IgnoreRules; // 0x1ce(0x01)

	void UpdateDashPointData();
	void StopDashing();
	void StartDashing();
	void OnRep_Dashing();
	void OnParentDeath(UHealthComponentBase* Health);
	FVector GetDashPoint(AActor* fromTarget, bool success);
};

// Class FSD.DeadStateComponent
// Size: 0x108 (Inherited: 0x100)
struct UDeadStateComponent : UCharacterStateComponent {
	float respawnDelay; // 0x100(0x04)

	void SetDeathParameters(float respawnDelay, float effectDelay, UAnimMontage* deathMontage, UParticleSystem* deathEffect, bool useAnimationTimeAsRespawnTime);
};

// Class FSD.DealWidget
// Size: 0x230 (Inherited: 0x230)
struct UDealWidget : UUserWidget {

	void UpdateDealText();
};

// Class FSD.FSDDebrisSettings
// Size: 0x68 (Inherited: 0x38)
struct UFSDDebrisSettings : UDeveloperSettings {
	FSoftObjectPath DefaultInfluencerDensityCurve; // 0x38(0x18)
	FSoftObjectPath DefaultInfluencerSizeCurve; // 0x50(0x18)
};

// Class FSD.CSGTriangleMapper
// Size: 0xd0 (Inherited: 0x30)
struct UCSGTriangleMapper : UDataAsset {
	bool Enabled; // 0x30(0x01)
	UTerrainMaterial* AttachToMaterial; // 0x38(0x08)
	TArray<UTerrainType*> AttachToTypes; // 0x40(0x10)
	int32_t CellCategories; // 0x50(0x04)
	float DensityInM2; // 0x54(0x04)
	float MinVerticalAngle; // 0x58(0x04)
	float MaxVerticalAngle; // 0x5c(0x04)
	FVector ScaleMin; // 0x60(0x0c)
	FVector ScaleMax; // 0x6c(0x0c)
	float ScaleBias; // 0x78(0x04)
	bool IndependentScaleAxes; // 0x7c(0x01)
	FVector BaseNormal; // 0x80(0x0c)
	float SurfaceNormalFactor; // 0x8c(0x04)
	FVector SurfaceNormalLimiter; // 0x90(0x0c)
	float RandomNormalFactor; // 0x9c(0x04)
	float RotationMinAngle; // 0xa0(0x04)
	float RotationMaxAngle; // 0xa4(0x04)
	float PosOffset; // 0xa8(0x04)
	float PosOffsetSurface; // 0xac(0x04)
	TArray<FCellNoise> NoiseLayers; // 0xb0(0x10)
	FDebrisCellNoiseParameters CellNoiseParameters; // 0xc0(0x10)
};

// Class FSD.DebrisBase
// Size: 0x1f8 (Inherited: 0xd0)
struct UDebrisBase : UCSGTriangleMapper {
	UObject* CaveInfluencer; // 0xd0(0x08)
	FRuntimeFloatCurve InfluencerDensityCurve; // 0xd8(0x88)
	FRuntimeFloatCurve InfluencerSizeCurve; // 0x160(0x88)
	UCurveFloat* CaveInfluenceCurve; // 0x1e8(0x08)
	UCurveFloat* CaveInflunceSizeCurve; // 0x1f0(0x08)
};

// Class FSD.DebrisCarved
// Size: 0x250 (Inherited: 0x1f8)
struct UDebrisCarved : UDebrisBase {
	enum class EDebrisCarvedType carverType; // 0x1f8(0x01)
	TArray<FUDebrisCarveMesh> Meshes; // 0x200(0x10)
	UTerrainMaterial* TerrainMaterial; // 0x210(0x08)
	FDebrisInfluence CaveInfluenceToAdd; // 0x218(0x10)
	enum class ECarveFilterType Filter; // 0x228(0x01)
	float ExpensiveNoise; // 0x22c(0x04)
	enum class CarveOptionsCellSize CarveCellSize; // 0x230(0x01)
	int32_t MinNumCarves; // 0x234(0x04)
	int32_t MaxNumCarves; // 0x238(0x04)
	float CarveOffsetRadius; // 0x23c(0x04)
	AActor* SpawnAttachClass; // 0x240(0x08)
	float AttachSpawnOffsetDistance; // 0x248(0x04)
};

// Class FSD.DebrisActorComponent
// Size: 0x200 (Inherited: 0x1f0)
struct UDebrisActorComponent : USceneComponent {
	bool Enabled; // 0x1f4(0x01)
};

// Class FSD.DebrisItemComponent
// Size: 0x230 (Inherited: 0x200)
struct UDebrisItemComponent : UDebrisActorComponent {
	UDebrisPositioning* Debris; // 0x1f8(0x08)
	TArray<FDebrisItemActorItem> Actors; // 0x200(0x10)
	enum class EDebrisItemPass ItemPass; // 0x210(0x01)
	float InfluenceRange; // 0x214(0x04)
	float MinDistanceToImportantLocations; // 0x218(0x04)
	bool UseAmount; // 0x21c(0x01)
	FIRandRange Amount; // 0x220(0x08)
	int32_t AmountSearchMultiplier; // 0x228(0x04)
};

// Class FSD.DebrisDataComponent
// Size: 0x200 (Inherited: 0x200)
struct UDebrisDataComponent : UDebrisActorComponent {
	UDebrisBase* Debris; // 0x1f8(0x08)
};

// Class FSD.DebrisVeinComponent
// Size: 0x210 (Inherited: 0x200)
struct UDebrisVeinComponent : UDebrisActorComponent {
	UTerrainMaterial* Material; // 0x1f8(0x08)
	enum class EDebrisCarvedType carverType; // 0x200(0x01)
	UVeinResourceCreator* VeinCreator; // 0x208(0x08)
};

// Class FSD.DebrisPatchComponent
// Size: 0x210 (Inherited: 0x200)
struct UDebrisPatchComponent : UDebrisActorComponent {
	UTerrainMaterial* Material; // 0x1f8(0x08)
	UPatchResourceCreator* PatchCreator; // 0x200(0x08)
};

// Class FSD.InfluencerComponent
// Size: 0x310 (Inherited: 0x200)
struct UInfluencerComponent : UDebrisActorComponent {
	FRuntimeFloatCurve ProbabilityCurve; // 0x1f8(0x88)
	FRuntimeFloatCurve ScaleCurve; // 0x280(0x88)
};

// Class FSD.DebrisProbabilityComponent
// Size: 0x210 (Inherited: 0x200)
struct UDebrisProbabilityComponent : UDebrisActorComponent {
	FRandRange ProbabilityRange; // 0x1f8(0x08)
	bool IsProbabilityShared; // 0x200(0x01)
};

// Class FSD.DebrisDataActor
// Size: 0x238 (Inherited: 0x220)
struct ADebrisDataActor : AActor {
};

// Class FSD.DebrisInstances
// Size: 0x6e0 (Inherited: 0x620)
struct UDebrisInstances : UHierarchicalInstancedStaticMeshComponent {
	UDebrisBase* DebrisBase; // 0x618(0x08)
	int32_t DebrisIndex; // 0x624(0x04)
};

// Class FSD.DebrisMesh
// Size: 0x258 (Inherited: 0x1f8)
struct UDebrisMesh : UDebrisBase {
	TArray<FDebrisStaticMesh> Meshes; // 0x1f8(0x10)
	UMaterialInterface* CommonMaterial; // 0x208(0x08)
	FText InGameName; // 0x210(0x18)
	FName GemTrackerName; // 0x228(0x08)
	FText InGameDescription; // 0x230(0x18)
	float StartCullDistance; // 0x248(0x04)
	float EndCullDistance; // 0x24c(0x04)
};

// Class FSD.DebrisCellNoise
// Size: 0x58 (Inherited: 0x30)
struct UDebrisCellNoise : UDataAsset {
	int32_t Seed; // 0x30(0x04)
	FVector CellSize; // 0x34(0x0c)
	int32_t NumValues; // 0x40(0x04)
	FVector InvCellSize; // 0x44(0x0c)
	bool Initialized; // 0x50(0x01)
};

// Class FSD.DebrisPositioning
// Size: 0x1f8 (Inherited: 0x1f8)
struct UDebrisPositioning : UDebrisBase {
};

// Class FSD.DebrisSet
// Size: 0x40 (Inherited: 0x30)
struct UDebrisSet : UDataAsset {
	TArray<TSoftObjectPtr<UDebrisBase>> Debris; // 0x30(0x10)
};

// Class FSD.DebrisStaticCarved
// Size: 0x240 (Inherited: 0x1f8)
struct UDebrisStaticCarved : UDebrisBase {
	enum class EDebrisCarvedType carverType; // 0x1f8(0x01)
	TArray<FUDebrisStaticCarveMesh> Meshes; // 0x200(0x10)
	UTerrainMaterial* TerrainMaterial; // 0x210(0x08)
	FDebrisInfluence CaveInfluenceToAdd; // 0x218(0x10)
	enum class ECarveFilterType Filter; // 0x228(0x01)
	float CarveOffsetRadius; // 0x22c(0x04)
	AActor* SpawnAttachClass; // 0x230(0x08)
	float AttachSpawnOffsetDistance; // 0x238(0x04)
};

// Class FSD.CustomItemPlacementHandling
// Size: 0x28 (Inherited: 0x28)
struct UCustomItemPlacementHandling : UInterface {
};

// Class FSD.InfluencerSpawnComponent
// Size: 0x200 (Inherited: 0x1f0)
struct UInfluencerSpawnComponent : USceneComponent {
	UCaveInfluencer* Influencer; // 0x1f0(0x08)
	float range; // 0x1f8(0x04)
};

// Class FSD.DecalManager
// Size: 0xb0 (Inherited: 0xb0)
struct UDecalManager : UActorComponent {

	void SpawnDecal(FVector Location, FVector Normal, UFSDPhysicalMaterial* PhysMat);
};

// Class FSD.DeepCSGWorld
// Size: 0x810 (Inherited: 0x220)
struct ADeepCSGWorld : AActor {
	UTerrainMaterial* DebugCarveInsideTerrainMaterial; // 0x228(0x08)
	UTerrainMaterial* DebugCarveOutsizeTerrainMaterial; // 0x230(0x08)
	UTerrainMaterial* DebugCarveEdgeTerrainMaterial; // 0x238(0x08)
	UTerrainMaterial* GoldTerrainMaterial; // 0x240(0x08)
	UTerrainMaterial* MOMTerrrainMaterial; // 0x248(0x08)
	UTerrainMaterial* NitraTerrrainMaterial; // 0x250(0x08)
	UTerrainMaterial* EmptyTerrainMaterial; // 0x258(0x08)
	UTerrainMaterial* DefaultBurntTerrainMaterial; // 0x260(0x08)
	UTerrainMaterial* DefaultHardRockMaterial; // 0x268(0x08)
	UTerrainMaterial* DefaultBedRockMaterial; // 0x270(0x08)
	UTerrainType* GoldTerrainType; // 0x278(0x08)
	UTerrainType* MOMTerrainType; // 0x280(0x08)
	UTerrainType* RockTerrainType; // 0x288(0x08)
	UTerrainType* CrystalTerrainType; // 0x290(0x08)
	UTerrainType* EmptyTerrainType; // 0x298(0x08)
	UTerrainType* DirtTerrainType; // 0x2a0(0x08)
	UTerrainType* DefaultBurntTerrainType; // 0x2a8(0x08)
	UTerrainMaterialsCollection* TerrainMaterials; // 0x2b0(0x08)
	TArray<UDebrisSet*> StandardDebrisSets; // 0x2b8(0x10)
	TArray<UDebrisBase*> AddedDebris; // 0x2c8(0x10)
	TArray<UDebrisBase*> DebrisLevelGenerationCarved; // 0x2d8(0x10)
	TArray<UDebrisBase*> DebrisLargeCarved; // 0x2e8(0x10)
	TArray<UDebrisBase*> DebrisSmallCarved; // 0x2f8(0x10)
	TArray<UDebrisBase*> DebrisMeshes; // 0x308(0x10)
	UMaterialInterface* DefaultScannerMaterial; // 0x318(0x08)
	ADebrisDataActor* DebrisActorInstance; // 0x320(0x08)
	int32_t DebrisActorIndex; // 0x328(0x04)
	AProceduralSetup* ProceduralSetup; // 0x330(0x08)
	TArray<UObject*> TerrainMaterialAssets; // 0x338(0x10)
	UAsyncPathRequests* AsyncPathRequests; // 0x380(0x08)
	FMulticastInlineDelegate OnBaseLayerCommitDone; // 0x388(0x10)
	FMulticastInlineDelegate OnBaseLayerFinalCommitDone; // 0x398(0x10)
	TArray<AActor*> TerrainAttachedActors; // 0x3a8(0x10)
	TArray<TWeakObjectPtr<UObject>> TerrainListeners; // 0x3b8(0x10)
	TArray<UDebrisBase*> RegisteredDebrisList; // 0x3c8(0x10)
	TArray<FDebrisWhenCarving> DebrisWhenCarvingList; // 0x3d8(0x10)
	TArray<UDebrisInstances*> DebrisInstanceList; // 0x3e8(0x10)
	TArray<TWeakObjectPtr<UPrimitiveComponent>> ShowAlwaysScannerComponents; // 0x3f8(0x10)
	TArray<TWeakObjectPtr<UPrimitiveComponent>> FogOfWarScannerComponents; // 0x408(0x10)
	TArray<UDebrisBase*> DebrisHandles; // 0x418(0x10)
	FTerrainLateJoinData LateJoinData; // 0x6e8(0xa8)
	TArray<FEncodedChunkId> visibleChunks; // 0x790(0x10)

	void UnRegisterScannerComponent(UPrimitiveComponent* Component);
	void TerrainOp_RemoveFloating(FRemoveFloatingIslandOperationData Data);
	void TerrainOp_PickAxe(FPickaxeDigOperationData Data);
	void TerrainOp_Melt(FMeltOperationData Data);
	void TerrainOp_Explode(FGrenadeExplodeOperationData Data);
	void TerrainOp_Drill(FDrillOperationData Data);
	void TerrainOp_CarveSTLMesh(FCarveWithSTLMeshOperationData Data);
	void TerrainOp_CarveSplineSegment(FSplineSegmentCarveOperationData Data);
	void TerrainOp_CarveCollider(FCarveWithColliderOperationData Data);
	void TerrainMaterialDataLoaded();
	void SetVisibleToScanner(FVector Center, FVector range);
	void SelectDebrisSettings();
	void ResetEntireWorld();
	void RemoveDebrisInstance_TerrainOp2(int32_t instance, int32_t Component);
	void RemoveDebrisInSphere(FVector Position, float Radius, bool onlyFragile, bool alsoDurable);
	void RegisterScannerComponent(UPrimitiveComponent* Component, bool useFogOfWar);
	bool Raycast(FVector Start, FVector Direction, float MaxDistance, FCSGRaycastHitInfo HitInfo, enum class ELandscapeCellFilter Filter);
	bool Linecast(FVector Start, FVector End, FCSGRaycastHitInfo HitInfo, enum class ELandscapeCellFilter Filter);
	bool IsPositionVisibleToScanner(FVector Pos);
	bool IsPointInsideTerrain(FVector Pos);
	bool IsComponentRegisteredWithScanner(UPrimitiveComponent* Component);
	int32_t GetTerrainHash();
	int32_t GetShadowQuality();
	ADebrisDataActor* GetDebrisDataActor();
	void GetAllTerrainActorsAroundPoint(FVector Center, FVector range, TArray<AActor*> TerrainActors);
	void GenerateAllMeshes();
	void FinishGeneration_Blocking();
	float FindTotalVolumeOfMaterialInWorld(UTerrainMaterial* Material);
	void CarveWithSTLMeshUsingTransform_Wait(ADeepCSGWorld* CSGWorld, USTLMeshCarver* MeshCarver, UTerrainMaterial* Material, enum class ECarveFilterType CarveFilter, FTransform Transform, enum class EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo);
	void CarveWithSTLMeshUsingTransform(USTLMeshCarver* MeshCarver, UTerrainMaterial* Material, enum class ECarveFilterType CarveFilter, FTransform Transform, enum class EPreciousMaterialOptions Precious);
	void CarveWithSTLMesh_Wait(ADeepCSGWorld* CSGWorld, USTLMeshCarver* MeshCarver, UTerrainMaterial* Material, enum class ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, enum class EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo);
	void CarveWithSTLMesh(USTLMeshCarver* MeshCarver, UTerrainMaterial* Material, enum class ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, enum class EPreciousMaterialOptions Precious);
	void CarveWithStaticMeshUsingTransform_Wait(ADeepCSGWorld* CSGWorld, UStaticMeshCarver* MeshCarver, UTerrainMaterial* Material, enum class ECarveFilterType CarveFilter, FTransform Transform, enum class EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo);
	void CarveWithStaticMeshUsingTransform(UStaticMeshCarver* MeshCarver, UTerrainMaterial* Material, enum class ECarveFilterType CarveFilter, FTransform Transform, enum class EPreciousMaterialOptions Precious);
	void CarveWithStaticMesh(UStaticMeshCarver* MeshCarver, UTerrainMaterial* Material, enum class ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, enum class EPreciousMaterialOptions Precious);
	void CarveWithSplineSegments(TArray<FCarveSplineSegment> Segments, UTerrainMaterial* Material, enum class ECarveFilterType CarveFilter, enum class EPreciousMaterialOptions Precious);
	void CarveWithSplineSegment(FVector SplineStart, FVector SplineStartTangent, FVector SplineEnd, FVector SplineEndTangent, float Radius, UTerrainMaterial* Material, enum class ECarveFilterType CarveFilter, enum class EPreciousMaterialOptions Precious);
	void CarveWithMeshUsingTransform_Wait(ADeepCSGWorld* CSGWorld, UStaticMesh* StaticMesh, UTerrainMaterial* Material, enum class ECarveFilterType CarveFilter, FTransform Transform, float ExpensiveNoise, enum class EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo);
	void CarveWithMeshUsingTransform(UStaticMesh* StaticMesh, UTerrainMaterial* Material, enum class ECarveFilterType CarveFilter, FTransform Transform, float ExpensiveNoise, enum class EPreciousMaterialOptions Precious, enum class CarveOptionsCellSize CarverSize);
	void CarveWithMesh_Wait(ADeepCSGWorld* CSGWorld, UStaticMesh* StaticMesh, UTerrainMaterial* Material, enum class ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, FLatentActionInfo LatentInfo);
	void CarveWithMesh(UStaticMesh* StaticMesh, UTerrainMaterial* Material, enum class ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, enum class EPreciousMaterialOptions Precious);
	float CalcApproximateTerrainDensity(FVector Pos, float Radius);
	void BaseLayerCommitFinal(bool blocking);
	void BaseLayerCommit(bool blocking, bool scheduleTesselation);
	void AttachActorToTerrain(AActor* Actor, FVector Pos);
	void ApplyDebrisCarvers();
	void ApplyBaseDebrisCarvers(TArray<UDebrisBase*> Carvers);
};

// Class FSD.SavableDataAsset
// Size: 0x58 (Inherited: 0x30)
struct USavableDataAsset : UDataAsset {
	bool EnableDangerousSaveGameIDEditing; // 0x38(0x01)
	FGuid SaveGameID; // 0x3c(0x10)
	UBuildRestriction* BuildRestriction; // 0x50(0x08)

	FGuid GetSavegameID();
};

// Class FSD.DeepDiveTemplate
// Size: 0xc0 (Inherited: 0x58)
struct UDeepDiveTemplate : USavableDataAsset {
	TArray<UDifficultySetting*> Difficulties; // 0x58(0x10)
	TArray<FDeepDiveTemplateItem> missions; // 0x68(0x10)
	TArray<enum class ESchematicType> Rewards; // 0x78(0x10)
	int32_t CreditsPerPrimaryObjective; // 0x88(0x04)
	int32_t CreditsPerSecondaryObjective; // 0x8c(0x04)
	int32_t XPPerPrimaryObjective; // 0x90(0x04)
	int32_t XPPerSecondaryObjective; // 0x94(0x04)
	float HazardBonus; // 0x98(0x04)
	FRandInterval MutatorCount; // 0xa0(0x10)
	FRandInterval WarningCount; // 0xb0(0x10)

	enum class ESchematicType GetStageRewardType(int32_t stageIndex);
};

// Class FSD.DeepDiveSettings
// Size: 0x98 (Inherited: 0x30)
struct UDeepDiveSettings : UDataAsset {
	UDeepDiveTemplate* NormalTemplate; // 0x30(0x08)
	UDeepDiveTemplate* HardTemplate; // 0x38(0x08)
	TArray<UMutator*> BaseMutators; // 0x40(0x10)
	TArray<UMissionMutator*> Mutators; // 0x50(0x10)
	TArray<UMissionWarning*> Warnings; // 0x60(0x10)
	TArray<UDialogDataAsset*> DeepDiveMissionCompleteShouts; // 0x70(0x10)
	TArray<FDeepDiveLoaderSequence> LoaderSequnces; // 0x80(0x10)
	UMissionNameBank* DeepDiveNameBank; // 0x90(0x08)
};

// Class FSD.DeepDiveFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UDeepDiveFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsDeepDiveElite(UObject* WorldContextObject, UDeepDive* DeepDive);
	bool GetHasEverCompletedDeepDive(UObject* WorldContextObject, UDeepDiveTemplate* DeepDive);
};

// Class FSD.DeepDiveManager
// Size: 0xd8 (Inherited: 0x28)
struct UDeepDiveManager : UObject {
	FMulticastInlineDelegate OnDeepDivesRefresh; // 0x28(0x10)
	UDeepDive* ActiveNormalDeepDive; // 0x38(0x08)
	UDeepDive* ActiveHardDeepDive; // 0x40(0x08)
	UDeepDive* ActiveDeepDive; // 0x48(0x08)
	UGeneratedMission* CurrentMission; // 0x50(0x08)
	float currentDepth; // 0x5c(0x04)
	TMap<int32_t, FDeepDiveBank> DeepDiveBank; // 0x60(0x50)
	int32_t NumFailedRequests; // 0xb0(0x04)
	int32_t BackendDataValid; // 0xb4(0x04)
	int32_t BackendSeed; // 0xb8(0x04)
	bool LockSeed; // 0xbc(0x01)
	FDateTime BackendExpirationTime; // 0xc0(0x08)
	FDateTime LastRequestTime; // 0xc8(0x08)

	void StartDeepDive(UDeepDive* DeepDive);
	void ReInitialize();
	void MarkGivenRewards();
	bool IsEliteDeepDive(UGeneratedMission* mission);
	UDeepDive* GetDeepDiveFromMission(UGeneratedMission* mission);
	UGeneratedMission* GetCurrentSingleMission();
	int32_t GetCurrentDeepDiveStage();
	UDeepDive* GetActiveNormalDeepDive();
	UDeepDive* GetActiveHardDeepDive();
	UDeepDive* GetActiveDeepDive();
	void DeepDiveRefreshDelegate__DelegateSignature();
	bool CompleteCurrentSingleMission();
	bool AreAllSelectedClassesQualified();
};

// Class FSD.DeepDive
// Size: 0x98 (Inherited: 0x28)
struct UDeepDive : UObject {
	TArray<UGeneratedMission*> missions; // 0x28(0x10)
	UBiome* Biome; // 0x38(0x08)
	TArray<FDeepDiveRewardItem> GivenRewards; // 0x40(0x10)
	int32_t MissionsCompleted; // 0x50(0x04)
	TArray<int32_t> StagesCompleted; // 0x58(0x10)
	int32_t CurrentMissionIndex; // 0x68(0x04)
	UDeepDiveTemplate* Template; // 0x70(0x08)
	FText DeepDiveName; // 0x78(0x18)
	int32_t BestTime; // 0x90(0x04)

	bool IsCompleted();
	bool HasCompletedStage(int32_t stageIndex);
	FDeepDiveRewardItem GetGivenRewardAtStage(int32_t stageIndex);
};

// Class FSD.AsyncPathRequestsInterface
// Size: 0x28 (Inherited: 0x28)
struct UAsyncPathRequestsInterface : UInterface {
};

// Class FSD.AsyncPathRequests
// Size: 0xc8 (Inherited: 0xb0)
struct UAsyncPathRequests : UActorComponent {
	TArray<TWeakObjectPtr<UObject>> RequestListeners; // 0xb0(0x10)
};

// Class FSD.DeepPathfinderSceneComponent
// Size: 0x200 (Inherited: 0x1f0)
struct UDeepPathfinderSceneComponent : USceneComponent {
};

// Class FSD.FlyingEnemyDeepPathfinderCharacter
// Size: 0x3d0 (Inherited: 0x3a0)
struct AFlyingEnemyDeepPathfinderCharacter : AEnemyDeepPathfinderCharacter {
	UPhysicalMaterial* FrozenMaterial; // 0x3b0(0x08)
	UPhysicsAsset* FrozenAsset; // 0x3b8(0x08)
	USoundCue* FrozenDeathSound; // 0x3c0(0x08)
	UParticleSystem* FrozenDeathparticles; // 0x3c8(0x08)

	void TriggerFrozenRagdoll();
	void OnFreezeImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void BP_FreezeImpact();
};

// Class FSD.FrozenPawnImpactComponent
// Size: 0x100 (Inherited: 0xb0)
struct UFrozenPawnImpactComponent : UActorComponent {
	FMulticastInlineDelegate OnStartFallingEvent; // 0xb0(0x10)
	FMulticastInlineDelegate OnFreezeImpactEvent; // 0xc0(0x10)
	UPhysicalMaterial* FrozenMaterial; // 0xe0(0x08)
	UPhysicsAsset* FrozenAsset; // 0xe8(0x08)
	USoundCue* FrozenDeathSound; // 0xf0(0x08)
	UParticleSystem* FrozenDeathparticles; // 0xf8(0x08)

	void TriggerFrozenRagdoll();
	void OnFrozen(bool frozen);
	void OnFreezeImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
};

// Class FSD.DeepPathfinderMovement
// Size: 0x428 (Inherited: 0x138)
struct UDeepPathfinderMovement : UPawnMovementComponent {
	bool UseDormancy; // 0x140(0x01)
	float MaxPawnSpeed; // 0x144(0x04)
	float StrafeSpeed; // 0x148(0x04)
	float MinSlowdownAngle; // 0x14c(0x04)
	float MaxSlowdownAngle; // 0x150(0x04)
	float MaxStrafeDistance; // 0x154(0x04)
	float AlignDirectionSpeed; // 0x158(0x04)
	float FleeSpeedBoostMultiplier; // 0x15c(0x04)
	float MaxAcceleration; // 0x160(0x04)
	float MaxBrakingDeceleration; // 0x164(0x04)
	float AngleSpeedFilterFactor; // 0x168(0x04)
	uint32_t AIAvoidanceWeight; // 0x16c(0x04)
	enum class DeepPathFinderType PathfinderType; // 0x170(0x01)
	enum class DeepPathFinderSize PathfinderSize; // 0x171(0x01)
	enum class ETeleportType MovementPhysicsType; // 0x172(0x01)
	enum class DeepPathFinderPreference PathfinderPreference; // 0x173(0x01)
	bool AlignTowardsTargetIfStationary; // 0x174(0x01)
	float AlignToTargetMinRequiredAngle; // 0x178(0x04)
	bool AllowSlowTickRateWhenNotVisible; // 0x17c(0x01)
	bool ForceAPathIfNoneFound; // 0x17d(0x01)
	bool DrawServerPath; // 0x17e(0x01)
	FMulticastInlineDelegate OnPathBegin; // 0x180(0x10)
	FMulticastInlineDelegate OnPauseMovementElapsed; // 0x190(0x10)
	FMulticastInlineDelegate OnPathFinished; // 0x1a0(0x10)
	FMulticastInlineDelegate OnRefreshDestination; // 0x1b0(0x10)
	FMulticastInlineDelegate OnStateChanged; // 0x1c0(0x10)
	ADeepCSGWorld* CSGWorld; // 0x1f8(0x08)
	uint32_t PathMovedDist; // 0x200(0x04)
	uint32_t LocalPathMovedDist; // 0x204(0x04)
	FDeepRepPath Path; // 0x208(0xd0)
	UFakeMoverSettings* MoveSettings; // 0x2d8(0x08)
	AActor* TargetActor; // 0x2e0(0x08)
	int32_t CurrentPathIndex; // 0x2e8(0x04)
	float CurrentPathFraction; // 0x2ec(0x04)
	FVector Destination; // 0x2f0(0x0c)
	AActor* DestinationActor; // 0x300(0x08)
	float AcceptanceRadius; // 0x308(0x04)
	bool OnlyPartPath; // 0x30c(0x01)
	float PauseMovementTime; // 0x310(0x04)
	enum class EDeepMovementMode MoveMode; // 0x314(0x01)
	UPawnStatsComponent* PawnStats; // 0x318(0x08)
	FVector LastForwardDir; // 0x32c(0x0c)
	float VerticalAngleSpeed; // 0x338(0x04)
	float HorizontalAngleSpeed; // 0x33c(0x04)
	bool IsStrafing; // 0x340(0x01)
	bool HasOustandingPathRequest; // 0x341(0x01)
	bool LastPathReachedPreciseDestination; // 0x342(0x01)
	float PostponedTickTime; // 0x368(0x04)
	bool LastMoveSuccessful; // 0x36c(0x01)
	bool HandleRotation; // 0x36d(0x01)
	bool TickAfterOwnerDeath; // 0x36e(0x01)
	FHandleRotationOptions HandleRotationOptions; // 0x36f(0x01)
	FVector UnfilteredPosition; // 0x388(0x0c)
	FVector LastDestPosUsed; // 0x394(0x0c)
	float DampOmega; // 0x3a0(0x04)
	bool UseMovementSpring; // 0x3a4(0x01)
	bool SnapToPathfinderOnFirstMove; // 0x3a5(0x01)
	FFakeMoverState FakePhysicsMove; // 0x3a8(0x60)
	float FakeSyncTime; // 0x408(0x04)

	void UpdateTargetActor(AActor* NewTarget);
	void UpdateDestination(FVector Dest);
	void UnPauseMovement();
	void TeleportTo(FVector destLoc, FRotator destRot);
	void StopMove();
	void StopAttackStance();
	bool StartMoveToActor(AActor* Dest, float AcceptanceRadius);
	bool StartMoveTo(FVector Dest, float AcceptanceRadius);
	bool StartFleeFrom(FVector dangerPos, float Distance);
	void StartFakePhysicsMoveSet(UFakeMoverSettings* MoveSettings);
	void StartFakePhysics(FVector Vel);
	void StartAttackStance(FVector stancePos);
	void SnapToPathfinder();
	void SetSlowDownAngles(float Min, float Max);
	void SetMaxSpeed(float Speed);
	void SetHandleRotation(bool flag);
	void SetFreezeAlignment(bool Freeze);
	void SetControlledExternally(bool controlled);
	void PauseMovement(float Time);
	bool PathExistTo(FVector Dest);
	bool PathExistsBetween(FVector From, FVector to);
	void OnRep_PathMovedDist(uint32_t lastPathMovedDist);
	void OnRep_Path(FDeepRepPath oldPath);
	void OnRep_MoveSettings(UFakeMoverSettings* MoveSettings);
	bool IsFreezeAlignmentSet();
	float GetVerticalAngleSpeed();
	void GetRandomSpawnPointAtApproximateDistance_Async(FVector Origin, float Distance, bool success, FVector outPos, FLatentActionInfo LatentInfo);
	void GetRandomReachablePointAtApproximateDistance_Async(FVector Origin, float Distance, bool success, FVector outPos, FLatentActionInfo LatentInfo);
	bool GetRandomReachablePointAtApproximateDistance(FVector Origin, float Distance, FVector outPos);
	FVector GetPathForwardDirection();
	enum class DeepPathFinderType GetPathfinderType();
	enum class DeepPathFinderSize GetPathfinderSize();
	enum class EDeepMovementState GetMovementState();
	bool GetIsStrafing();
	float GetHorizontalAngleSpeed();
	UFakeMoverSettings* GetCurrentFakePhysicsMoveSet();
	bool FlyToConnectedPosition(FVector destPos);
	bool FindPointKeepingDistance(FVector Origin, float MinDistance, float MaxDistance, FVector Target, float idealTargetDistance, FVector outPos);
	FVector FindPathfinderPointBelow(FVector Pos, float HeightOffset);
	FVector FindPathfinderPointAbove(FVector Pos, float HeightOffset);
	FVector FindPathfinderOffsetPoint(FVector Pos, enum class EOffsetFrom offsetFrom, float HeightOffset);
	FVector FindNearestPathfinderPointOverrideType(FVector Pos, enum class DeepPathFinderType overrideType, float MaxDistance);
	void FindNearestPathfinderPoint_Async(FVector Pos, float MaxDistance, bool success, FVector outPos, FLatentActionInfo LatentInfo);
	FVector FindNearestPathfinderPoint(FVector Pos, float MaxDistance);
	FVector FindNearestConnectedPathfinderPoint(FVector Pos, float MaxDistance);
	FQuat CalcPathfinderOrientation(FVector Pos, FVector forwardDir);
	bool BackOffFrom(FVector dangerPos, float Distance);
	void AddFakeMoverImpulse(FVector Impulse);
};

// Class FSD.DefenseEvent
// Size: 0x370 (Inherited: 0x358)
struct ADefenseEvent : AGameEvent {
	float DefendDuration; // 0x358(0x04)
	UWidget* DefendWidget; // 0x360(0x08)
	float Progress; // 0x368(0x04)

	void OnRep_Progress(float OldValue);
};

// Class FSD.DefensePointActor
// Size: 0x260 (Inherited: 0x220)
struct ADefensePointActor : AActor {
	AGameEvent* DefenseEvent; // 0x240(0x08)
	AGameEvent* ActiveDefenceEvent; // 0x248(0x08)
	enum class EDefendPointState DefendState; // 0x250(0x01)
	USingleUsableComponent* DefendPointUsable; // 0x258(0x08)

	void SetState(enum class EDefendPointState State);
	void OnRep_DefendState();
	void OnDefensePointActivated(APlayerCharacter* Player, enum class EInputKeys Key);
	void DefenseStart();
	void DefenseFail();
	void DefenseComplete();
};

// Class FSD.DefenseObjective
// Size: 0x1a8 (Inherited: 0x178)
struct UDefenseObjective : UObjective {
	int32_t DefensePoints; // 0x178(0x04)
	int32_t PointsDefended; // 0x17c(0x04)
	TArray<TSoftClassPtr<UObject>> ObjectiveDefenseClasses; // 0x180(0x10)
	TArray<ADefensePointActor*> ActiveObjectiveDefenseActors; // 0x190(0x10)
	UDebrisPositioning* DebrisPositioning; // 0x1a0(0x08)

	void PointDefended();
	void OnRep_PointsRepaired();
	void OnDefensePointsSpawned();
};

// Class FSD.DestinationActorComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UDestinationActorComponent : UActorComponent {
	TWeakObjectPtr<AActor> DestinationActor; // 0xb0(0x08)

	float GetDistToDestinationActor();
};

// Class FSD.DetPack
// Size: 0x288 (Inherited: 0x220)
struct ADetPack : AActor {
	float UpgradedStaggerChance; // 0x240(0x04)
	float UpgradedStaggerDuration; // 0x244(0x04)
	float UpgradedFearFactor; // 0x248(0x04)
	float VisualDamageRadius; // 0x24c(0x04)
	float IncreasedFearRadius; // 0x250(0x04)
	float IncreasedStaggerRadius; // 0x254(0x04)
	UProjectileMovementComponent* Movement; // 0x258(0x08)
	UExplosionComponent* Explosion; // 0x260(0x08)
	USingleUsableComponent* UseComp; // 0x268(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x270(0x08)
	ADetPackItem* Detonator; // 0x278(0x08)
	bool HasExploded; // 0x280(0x01)
	bool IsMoving; // 0x281(0x01)
	bool ExplodesOnDeath; // 0x282(0x01)
	bool HasExtraStaggerRadius; // 0x283(0x01)
	bool HasExtraFearRadius; // 0x284(0x01)

	void UseFearStaggerUpgrades();
	void RecieveHitObject();
	void OnRep_IsMoving();
	void OnRep_HasExploded();
	void OnExploded();
	void OnDetPackPickedUp(APlayerCharacter* User, enum class EInputKeys Key);
	void OnDetPackDeath(UHealthComponentBase* HealthComponent);
};

// Class FSD.DetPackItem
// Size: 0x460 (Inherited: 0x388)
struct ADetPackItem : AAnimatedItem {
	ADetPack* DetPackClass; // 0x398(0x08)
	AItem* LoadoutProxy; // 0x3a0(0x08)
	UAnimMontage* FPThrowMontage; // 0x3a8(0x08)
	UAnimMontage* TPThrowMontage; // 0x3b0(0x08)
	UAnimMontage* FP_DetonateAnim; // 0x3b8(0x08)
	UAnimMontage* WPN_DetonateAnim; // 0x3c0(0x08)
	UAnimMontage* FP_EquipDetonatorAnimation; // 0x3c8(0x08)
	UAnimMontage* WPN_EquipDetonatorAnimation; // 0x3d0(0x08)
	USkeletalMeshComponent* DetonatorFPMesh; // 0x3d8(0x08)
	USkeletalMeshComponent* DetonatorTPMesh; // 0x3e0(0x08)
	UForceFeedbackEffect* DetonatorTriggerForceFeedback; // 0x3e8(0x08)
	UCapacityHoldingItemAggregator* Capacity; // 0x3f0(0x08)
	float SupplyStatusWeight; // 0x3f8(0x04)
	float ThrowVelocity; // 0x3fc(0x04)
	float EnheiritOwnerVelocityScale; // 0x400(0x04)
	float ThrowAngle; // 0x404(0x04)
	float CooldownAfterThrow; // 0x408(0x04)
	float CooldownAfterDetonation; // 0x40c(0x04)
	float ThrowDelay; // 0x410(0x04)
	float ThrowZOffset; // 0x414(0x04)
	UDialogDataAsset* ShoutDetPackPlaced; // 0x418(0x08)
	UDialogDataAsset* ShoutOutOfAmmo; // 0x420(0x08)
	float CooldownLeft; // 0x42c(0x04)
	TArray<ADetPack*> ThrownPacks; // 0x430(0x10)
	TArray<UItemUpgrade*> DetPackUpgrades; // 0x440(0x10)
	bool IsDetonatorOut; // 0x45a(0x01)
	bool HasThrownPack; // 0x45b(0x01)

	void Simulate_ThrowGrenade();
	void Server_ThrowGrenade();
	void Server_Detonate();
	void Server_CycleItem();
	void Receive_OnRep_IsDetonatorOut();
	void OnRep_IsDetonatorOut();
	void OnDetonatingFinished();
	int32_t GetCurrentGrenades();
};

// Class FSD.DialogDataAsset
// Size: 0x70 (Inherited: 0x30)
struct UDialogDataAsset : UDataAsset {
	bool Enabled; // 0x30(0x01)
	bool AudioOnly; // 0x31(0x01)
	float ShoutDelay; // 0x34(0x04)
	float ShoutCoolDown; // 0x38(0x04)
	float ShoutChance; // 0x3c(0x04)
	TArray<FDialogStruct> Entries; // 0x40(0x10)
	TArray<USoundSubmixBase*> SubmixSends; // 0x50(0x10)
	TArray<int32_t> ShuffledIndices; // 0x60(0x10)

	int32_t SelectIndex(UObject* WorldContext);
	bool SelectEntry(UObject* WorldContext, FDialogStruct Dialog);
	FDialogStruct GetShout(int32_t Index);
};

// Class FSD.DifficultyManager
// Size: 0xe0 (Inherited: 0xb0)
struct UDifficultyManager : UActorComponent {
	int32_t ForcedPlayerCount; // 0xc8(0x04)
	AFSDGameMode* GameMode; // 0xd0(0x08)
	AFSDGameState* GameState; // 0xd8(0x08)

	UDifficultySetting* SelectDifficulty(int32_t Index);
	float GetSmallEnemyDamageResistance();
	float GetPointExtractionScaler();
	float GetExtraLargeEnemyDamageResistanceD();
	float GetExtraLargeEnemyDamageResistanceC();
	float GetExtraLargeEnemyDamageResistanceB();
	float GetExtraLargeEnemyDamageResistance();
	float GetEnemyDamageResistance();
	float GetEnemyDamageModifier();
	float GetEnemyCountModifier();
	UDifficultySetting* GetCurrentDifficulty();
	float GetBossDifficultyScaler();
};

// Class FSD.DifficultySetting
// Size: 0x230 (Inherited: 0x58)
struct UDifficultySetting : USavableDataAsset {
	FText DifficultyName; // 0x58(0x18)
	FText ShortDifficultyName; // 0x70(0x18)
	FText UnlockRequirementDescription; // 0x88(0x18)
	UCampaign* CampaignRequirement; // 0xa0(0x08)
	float EnvironmentalDamageModifier; // 0xa8(0x04)
	TArray<float> ExtraLargeEnemyDamageResistance; // 0xb0(0x10)
	TArray<float> ExtraLargeEnemyDamageResistanceB; // 0xc0(0x10)
	TArray<float> ExtraLargeEnemyDamageResistanceC; // 0xd0(0x10)
	TArray<float> ExtraLargeEnemyDamageResistanceD; // 0xe0(0x10)
	TArray<float> EnemyDamageResistance; // 0xf0(0x10)
	TArray<float> SmallEnemyDamageResistance; // 0x100(0x10)
	TArray<float> EnemyDamageModifier; // 0x110(0x10)
	TArray<float> EnemyCountModifier; // 0x120(0x10)
	float BossDifficultyScaler; // 0x130(0x04)
	float PointExtractionScaler; // 0x134(0x04)
	FRandInterval EncounterDifficulty; // 0x138(0x10)
	FRandInterval StationaryDifficulty; // 0x148(0x10)
	float SpecialEncounterModifier; // 0x158(0x04)
	float HazardBonus; // 0x15c(0x04)
	float friendlyFireModifier; // 0x160(0x04)
	FRandInterval EnemyWaveInterval; // 0x168(0x10)
	FRandInterval EnemyNormalWaveInterval; // 0x178(0x10)
	FRandInterval EnemyNormalWaveDifficulty; // 0x188(0x10)
	float WaveStartDelayScale; // 0x198(0x04)
	FRandInterval EnemyDiversity; // 0x1a0(0x10)
	FRandInterval StationaryEnemyDiversity; // 0x1b0(0x10)
	FIRandRange DisruptiveEnemyPoolCount; // 0x1c0(0x08)
	int32_t MinPoolSize; // 0x1c8(0x04)
	FVeteranComposition Veterans; // 0x1d0(0x20)
	float SpeedModifier; // 0x1f0(0x04)
	float AttackCooldownModifier; // 0x1f4(0x04)
	float ProjectileSpeedModifier; // 0x1f8(0x04)
	int32_t DifficultyGroup; // 0x1fc(0x04)
	int32_t DifficultyGroupIndex; // 0x200(0x04)
	TArray<UMissionStat*> MissionCompletedStats; // 0x208(0x10)
	bool UseSharedHealthPool; // 0x218(0x01)
	float HeathRegenerationMax; // 0x21c(0x04)
	float ReviveHealthRatio; // 0x220(0x04)
	float EliteChanceModifier; // 0x224(0x04)
	float EliteCooldown; // 0x228(0x04)
	int32_t MaxActiveElites; // 0x22c(0x04)

	bool IsUnlocked(UObject* WorldContext);
	float AddHazardBonus(float BaseValue);
};

// Class FSD.DiscordWrapper
// Size: 0x1f0 (Inherited: 0x28)
struct UDiscordWrapper : UObject {
	FDiscordServerInviteData ServerInfo; // 0x38(0x78)
	FMulticastInlineDelegate OnResponseSuccessChanged; // 0xb0(0x10)
	bool LastResponseSuccessful; // 0xc0(0x01)
	FMulticastInlineDelegate OnDiscordEoMDataEvent; // 0xc8(0x10)
	bool UserIn; // 0x108(0x01)
	FDiscordRewardNotification rewardNotification; // 0x110(0x40)
	int32_t UserInStatus; // 0x150(0x04)
	bool HasEoM; // 0x154(0x01)
	FDiscordEoMData EoMData; // 0x158(0x20)
	bool IsConnected; // 0x178(0x01)
	bool ServerInfoLoaded; // 0x17a(0x01)
	FMulticastInlineDelegate OnDiscordServerInfoLoaded; // 0x180(0x10)
	FMulticastInlineDelegate OnDiscordServerCountLoaded; // 0x190(0x10)
	FMulticastInlineDelegate OnDiscordUserInServer; // 0x1a0(0x10)

	void RequestUserInServer();
	void RequestFactionAdjustment(int32_t Faction, bool force);
	void RequestEoMData();
	void RequestDiscordServerInfo();
	void RejectInviteSignature();
	void IgnoreInviteSignature();
	FString GetAvatarURL();
	void AdjustFaction();
	void AcceptInviteSignature();
};

// Class FSD.DoubleDrillAggregator
// Size: 0x148 (Inherited: 0x140)
struct UDoubleDrillAggregator : UCapacityBasedItemAggregator {
};

// Class FSD.DualAnimatedItem
// Size: 0x390 (Inherited: 0x338)
struct ADualAnimatedItem : AItem {
	UAnimInstance* FPAnimInstance; // 0x338(0x08)
	UPlayerAnimInstance* TPAnimInstance; // 0x340(0x08)
	USkeletalMeshComponent* FPRMesh; // 0x348(0x08)
	USkeletalMeshComponent* FPLMesh; // 0x350(0x08)
	USkeletalMeshComponent* TPRMesh; // 0x358(0x08)
	USkeletalMeshComponent* TPLMesh; // 0x360(0x08)
	UAnimMontage* FP_EquipAnimation; // 0x368(0x08)
	UAnimMontage* TP_EquipAnimation; // 0x370(0x08)
	float EquipDuration; // 0x378(0x04)
	UItemCharacterAnimationSet* CharacterAnimationSet; // 0x380(0x08)

	USkeletalMeshComponent* GetRItemMesh();
	USkeletalMeshComponent* GetLItemMesh();
};

// Class FSD.DoubleDrillItem
// Size: 0x4c8 (Inherited: 0x390)
struct ADoubleDrillItem : ADualAnimatedItem {
	UFirstPersonParticleSystemComponent* FP_Left_DrillParticles; // 0x3a8(0x08)
	UFirstPersonParticleSystemComponent* FP_Right_DrillParticles; // 0x3b0(0x08)
	UDamageComponent* DamageComponent; // 0x3b8(0x08)
	UFSDAudioComponent* AudioComponent; // 0x3c0(0x08)
	UDoubleDrillAggregator* Aggregator; // 0x3c8(0x08)
	UAnimMontage* FPMineMontage; // 0x3d0(0x08)
	UAnimMontage* TPMineMontage; // 0x3d8(0x08)
	UAnimMontage* FPOverheat; // 0x3e0(0x08)
	UAnimMontage* TPOverheat; // 0x3e8(0x08)
	UAnimMontage* FPGunsling; // 0x3f0(0x08)
	UAnimMontage* TPGunsling; // 0x3f8(0x08)
	FName MiningSpeedAudioParamterName; // 0x400(0x08)
	UParticleSystem* DrillParticles; // 0x408(0x08)
	UForceFeedbackEffect* DrillRumble; // 0x410(0x08)
	float BlockParticlesScaleFP; // 0x418(0x04)
	float BlockParticlesScaleTP; // 0x41c(0x04)
	enum class EDoubleDrillState State; // 0x420(0x01)
	float MovementPenalty; // 0x424(0x04)
	float MiningRate; // 0x428(0x04)
	float HeatReductionPerKill; // 0x42c(0x04)
	FVector CarveSize; // 0x430(0x0c)
	float CarveNoise; // 0x43c(0x04)
	float CarverRayCastLength; // 0x440(0x04)
	float CarveTerrainDistanceCheck; // 0x444(0x04)
	float TimeToNextMine; // 0x448(0x04)
	float CurrentDrillSpeed; // 0x44c(0x04)
	float DamageDistance; // 0x450(0x04)
	float DamageRadius; // 0x454(0x04)
	float FriendlyDamageRadius; // 0x458(0x04)
	float DamageRate; // 0x45c(0x04)
	float Damage; // 0x460(0x04)
	float ArmorDamageMultiplier; // 0x464(0x04)
	UDamageClass* DamageClass; // 0x468(0x08)
	float friendlyFireModifier; // 0x470(0x04)
	float MaxFuel; // 0x474(0x04)
	float Fuel; // 0x478(0x04)
	float FuelUsePerDig; // 0x47c(0x04)
	float FuelUsePerMelee; // 0x480(0x04)
	float SupplyStatusWeight; // 0x484(0x04)
	UDialogDataAsset* ShoutOutOfFuel; // 0x488(0x08)
	TArray<FHitResult> HitCache; // 0x490(0x10)
	TArray<FDoubleDrillDamageItem> DamageCache; // 0x4a0(0x10)
	float DrillParticlesDuration; // 0x4c0(0x04)
	bool IsMining; // 0x4c4(0x01)
	bool IsGunslinging; // 0x4c5(0x01)

	void Server_StopMining();
	void Server_StartMining();
	void Server_DoDamage(TArray<FDoubleDrillDamageItem> Targets);
	void Server_DigBlock(FVector_NetQuantize Start, FVector_NetQuantize End);
	void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat);
	void OnStopDrilling();
	void OnStartDrilling();
	void OnRep_SimulatingMining();
	void OnRep_IsGunslinging();
	void OnDrillParticlesTimerElapsed();
	void Client_Resupply(float percentage);
	void BP_OnDrillDamage();
	void All_SimulateDigDebris(FVector_NetQuantize Position, int32_t DebrisIndex);
	void All_SimulateDigBlock(FVector_NetQuantize Position, bool spawnParticles, int32_t Material);
	void All_SimulateDamage(TArray<FDoubleDrillDamageItem> Targets);
};

// Class FSD.DoubleDrillAnimInstance
// Size: 0x280 (Inherited: 0x270)
struct UDoubleDrillAnimInstance : UAnimInstance {
	float DrillSpeed; // 0x268(0x04)
	bool IsMining; // 0x26c(0x01)
	bool IsGunslinging; // 0x26d(0x01)
	ADoubleDrillItem* Item; // 0x270(0x08)
};

// Class FSD.DownedStateComponent
// Size: 0x148 (Inherited: 0x100)
struct UDownedStateComponent : UCharacterStateComponent {
	FDeathIntroSettings Intro; // 0x100(0x24)
	float DownedHealthLossPerSecond; // 0x124(0x04)
	float TerrainRemovedFallThreshold; // 0x128(0x04)
	bool DownedBombActive; // 0x12c(0x01)
	UDamageComponent* DownedBombDamage; // 0x130(0x08)
	FMulticastInlineDelegate OnEnableDownedBombUIEvent; // 0x138(0x10)

	void TriggerDownedBombDamage();
	void Server_TriggerDownedBomb();
	void Receive_TriggerDownedBomb();
	UDamageComponent* CreateDownedBombDamage(UDamageComponent* DamageClass);
};

// Class FSD.DrinkableActor
// Size: 0x228 (Inherited: 0x220)
struct ADrinkableActor : AActor {
	UDrinkableDataAsset* DrinkableData; // 0x220(0x08)

	void Pickup(APlayerCharacter* byCharacter);
	void OnRep_DrinkableData();
	void Fill();
};

// Class FSD.DrinkableDataAsset
// Size: 0x218 (Inherited: 0x58)
struct UDrinkableDataAsset : USavableDataAsset {
	FText DrinkableName; // 0x58(0x18)
	FText DrinkableDescription; // 0x70(0x18)
	int32_t DrinkablePrice; // 0x88(0x04)
	TSoftObjectPtr<UTexture2D> DrinkableIcon; // 0x90(0x28)
	int32_t RequiredPlayerRank; // 0xb8(0x04)
	bool ParticipatesInFreeBeerEvent; // 0xbc(0x01)
	enum class EDrinkableAlcoholStrength AlcoholStrength; // 0xbd(0x01)
	UDrinkableDataAsset* SupporterEdition; // 0xc0(0x08)
	bool bPlayFireworks; // 0xc8(0x01)
	UMissionStat* StatConsumed; // 0xd0(0x08)
	UMissionStat* StatRoundOrdered; // 0xd8(0x08)
	TSoftClassPtr<UObject> DrinkableActorClass; // 0xe0(0x28)
	TSoftClassPtr<UObject> DrinkableItemClass; // 0x108(0x28)
	UDialogDataAsset* OrderShout; // 0x130(0x08)
	UDialogDataAsset* OrderCheeringShout; // 0x138(0x08)
	UDialogDataAsset* DrinkSaluteShout; // 0x140(0x08)
	UTemporaryBuff* buff; // 0x148(0x08)
	TSoftClassPtr<UObject> DrinkEffect; // 0x150(0x28)
	TMap<UResourceData*, int32_t> UnlockCost; // 0x178(0x50)
	TMap<UResourceData*, int32_t> PurchaseCost; // 0x1c8(0x50)

	bool TryUnlockSpecialDrinks(UObject* WorldContext);
	bool TryUnlockDrink(UObject* WorldContext);
	bool TryPurchaseDrink(UObject* WorldContext);
	void OnRoundOrdered(APlayerCharacter* Character);
	bool MustBeUnlocked();
	bool IsUnlocked(UObject* WorldContext);
	bool IsDrinkFree(UObject* WorldContext);
	bool HasSupporterEdition();
	UTexture2D* GetDrinkableIcon();
	UDrinkableDataAsset* GetDrinkableEdition(UObject* WorldContext, APlayerController* Player);
	bool AreSpecialDrinksUnlocked(UObject* WorldContext);
};

// Class FSD.DrinkEffectComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UDrinkEffectComponent : UActorComponent {
	float BeerEffectDurationSeconds; // 0xb8(0x04)
	bool AutoDestroy; // 0xbc(0x01)
	bool EffectIsActive; // 0xbd(0x01)

	void StopEffect();
	void OnStopEffect();
	void OnStartEffect(APlayerCharacter* Character);
	void OnChangedCharacter(APlayerCharacter* changedToCharacter, UObject* DrinkEffectClass);
};

// Class FSD.DrinkableItem
// Size: 0x390 (Inherited: 0x388)
struct ADrinkableItem : AAnimatedItem {
	UDrinkableDataAsset* DrinkableData; // 0x388(0x08)

	void OnRep_DrinkableData();
	void Consume();
	void ClientConsumed();
	bool CheckCanSalute();
};

// Class FSD.DrinkSettings
// Size: 0xb0 (Inherited: 0x30)
struct UDrinkSettings : UDataAsset {
	TArray<FBarleySpawnItem> BarleySpawns; // 0x30(0x10)
	FRandInterval BarleyAmount; // 0x40(0x10)
	TMap<UResourceData*, int32_t> SpecialBeerUnlockCost; // 0x50(0x50)
	TArray<UDrinkableDataAsset*> Drinkables; // 0xa0(0x10)

	TArray<UDrinkableDataAsset*> GetBarDrinkables(UObject* WorldContext, bool IncludeDailySpecial, bool includeNotUnlocked, bool includePlayerRankTooLow);
	UDrinkableDataAsset* GetBarDailySpecial(UObject* WorldContext);
};

// Class FSD.DroneAbillityStatsComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UDroneAbillityStatsComponent : UActorComponent {
	bool UseOwnArmorDamageMultiplier; // 0xb0(0x01)
};

// Class FSD.DroneCharacter
// Size: 0x398 (Inherited: 0x380)
struct ADroneCharacter : ADeepPathfinderCharacter {
	UHealthComponent* HealthComponent; // 0x380(0x08)
	UOutlineComponent* OutlineComponent; // 0x388(0x08)
	USimpleObjectInfoComponent* ObjectInfo; // 0x390(0x08)
};

// Class FSD.DroneDisplayActionComponent
// Size: 0x200 (Inherited: 0x1f0)
struct UDroneDisplayActionComponent : USceneComponent {
	UTextRenderComponent* DisplayText; // 0x1f0(0x08)

	void SetMode(enum class EDroneActions droneAction);
};

// Class FSD.DroneFlame
// Size: 0x268 (Inherited: 0x220)
struct ADroneFlame : AActor {
	UParticleSystemComponent* FlameParticles; // 0x220(0x08)
	UDamageComponent* Damage; // 0x228(0x08)
	TArray<FName> FlameParameterNames; // 0x238(0x10)
	UStatusEffect* OnFireStatusEffect; // 0x248(0x08)
	float DamageTickRate; // 0x250(0x04)
	float Duration; // 0x258(0x04)
	float FlameDiameter; // 0x25c(0x04)
	float range; // 0x260(0x04)
};

// Class FSD.DroneMiningToolBase
// Size: 0xe8 (Inherited: 0xb0)
struct UDroneMiningToolBase : UActorComponent {
	FMulticastInlineDelegate HitSomething; // 0xb0(0x10)
	float range; // 0xd0(0x04)
	float SameHitDistance; // 0xd4(0x04)
	float MineRadius; // 0xd8(0x04)
	int32_t MineStrength; // 0xdc(0x04)

	void StopMining();
	void StartMining();
	void SpawnEffects(UTerrainMaterial* aTerrainMaterial, bool aParialHit, FVector_NetQuantize aLocation, FVector_NetQuantize aImpactNormal);
};

// Class FSD.DroneUseComponent
// Size: 0x120 (Inherited: 0xb0)
struct UDroneUseComponent : UActorComponent {
	FMulticastInlineDelegate OnUsed; // 0xb0(0x10)
	FMulticastInlineDelegate OnBeginUse; // 0xc0(0x10)
	FMulticastInlineDelegate OnStopUse; // 0xd0(0x10)
	FMulticastInlineDelegate OnProgress; // 0xe0(0x10)
	UDialogDataAsset* BoscoLaserpointerShout; // 0xf0(0x08)
	TWeakObjectPtr<USingleUsableComponent> SyncToUsable; // 0x104(0x08)
	float Progress; // 0x10c(0x04)
	float useDuration; // 0x110(0x04)
	bool ResetOnFail; // 0x11c(0x01)
	bool CanUse; // 0x11d(0x01)

	void SyncedUsableUserCountChangedResponse(int32_t userCount);
	void SyncedUsableUsedResponse(APlayerCharacter* User, enum class EInputKeys Key);
	void SyncedUsableBeginUseResponse(APlayerCharacter* User, enum class EInputKeys Key);
	void SetUseDuration(float useDuration);
	void SetCanUse(bool CanUse);
	float GetProgress();
	void EndUse();
	void BeginUse();
};

// Class FSD.DropPod
// Size: 0x290 (Inherited: 0x220)
struct ADropPod : AActor {
	float DropHeight; // 0x220(0x04)
	FVector TargetLocation; // 0x224(0x0c)
	UAutoCarverComponent* AutoCarver; // 0x230(0x08)
	UCurveFloat* DepartCurve; // 0x238(0x08)
	float CarverRotationSpeed; // 0x240(0x04)
	FVector CarverScale; // 0x244(0x0c)
	float DepartureTime; // 0x250(0x04)
	FVector StartLocation; // 0x258(0x0c)
	enum class EDropPodState State; // 0x264(0x01)
	float DrillSpeed; // 0x26c(0x04)
	float FreeFallAcceleration; // 0x270(0x04)
	float FreeFallSpeed; // 0x274(0x04)

	void StartDrilling();
	void PrepForTakeOff();
	void OnRep_State();
	void OnPrepForTakeOff();
	void OnDroppodImpact();
	void OnDrillingStarted();
	void OnDeparting();
	ADropPod* DropToMission(UObject* WorldContextObject, ADropPod* podClass, FVector Location);
	void Depart();
};

// Class FSD.FSDMiningHead
// Size: 0x298 (Inherited: 0x290)
struct AFSDMiningHead : ADropPod {
	UResourceBank* ResourceBank; // 0x290(0x08)
};

// Class FSD.DropToTerrainComponent
// Size: 0xf8 (Inherited: 0xb0)
struct UDropToTerrainComponent : UActorComponent {
	float FallVelocity; // 0xbc(0x04)
	float TerrainTraceMaxDistance; // 0xc0(0x04)
	FMulticastInlineDelegate OnFallToTerrainStateChanged; // 0xc8(0x10)
	FVector CurrentLocation; // 0xd8(0x0c)
	FVector DropTarget; // 0xe4(0x0c)
	bool IsDetecting; // 0xf0(0x01)

	void StopDropDetection(bool stopFalling);
	void SetParentPositionOnAll(FVector CurrentParentLocation);
	void OnTerrainRemoved();
	void BeginDropDetection();
};

// Class FSD.DualWieldWeapon
// Size: 0x718 (Inherited: 0x6d8)
struct ADualWieldWeapon : AAmmoDrivenWeapon {
	UFirstPersonSkeletalMeshComponent* FPMeshLeft; // 0x6e0(0x08)
	USkeletalMeshComponent* TPMeshLeft; // 0x6e8(0x08)
	UAnimMontage* WPN_Left_Reload; // 0x6f0(0x08)
	UAnimMontage* WPN_Left_TP_Reload; // 0x6f8(0x08)
	UFXSystemAsset* CasingParticlesLeft; // 0x700(0x08)
	FName MuzzleLeft; // 0x710(0x08)
};

// Class FSD.DualWieldAnimInstance
// Size: 0x270 (Inherited: 0x270)
struct UDualWieldAnimInstance : UAnimInstance {
};

// Class FSD.DualMachinePistols
// Size: 0x728 (Inherited: 0x718)
struct ADualMachinePistols : ADualWieldWeapon {
	UStatusEffect* EmptyClipStatusEffect; // 0x718(0x08)

	void Server_TriggerStatusEffect();
};

// Class FSD.DynamicReverbComponent
// Size: 0x118 (Inherited: 0xb0)
struct UDynamicReverbComponent : UActorComponent {
	float LargeCaveValue; // 0xb0(0x04)
	float MediumCaveValue; // 0xb4(0x04)
	float SmallCaveValue; // 0xb8(0x04)
	float FadeTime; // 0xbc(0x04)
	float Priority; // 0xc0(0x04)
	float TunnelAmbienceFadeIn; // 0xc4(0x04)
	float TunnelAmbienceFadeOut; // 0xc8(0x04)
	UAudioComponent* TunnelSoundInstance; // 0xd8(0x08)

	void TunnelTimerTriggered();
	void TimerTriggered();
};

// Class FSD.EffectSettings
// Size: 0x40 (Inherited: 0x30)
struct UEffectSettings : UDataAsset {
	TArray<TSoftObjectPtr<UNiagaraSystem>> ParticlesForShaderGeneration; // 0x30(0x10)

	bool NeedsShadeGeneration();
	void MarkShadersGenerated();
	void CompileShaders();
};

// Class FSD.ElectroBeam
// Size: 0x2b8 (Inherited: 0x220)
struct AElectroBeam : AActor {
	UCapsuleComponent* collider; // 0x220(0x08)
	TArray<AActor*> ParentPlants; // 0x228(0x10)
	FVector LocationOffset; // 0x238(0x0c)
	FVector_NetQuantize SourceLocation; // 0x244(0x0c)
	FVector_NetQuantize TargetLocation; // 0x250(0x0c)
	USceneComponent* DelaySource; // 0x260(0x08)
	USceneComponent* DelayTarget; // 0x268(0x08)
	UParticleSystemComponent* BeamEffect; // 0x270(0x08)
	UAudioComponent* ZappSound; // 0x278(0x08)
	TArray<UStatusEffect*> StatusEffectsToApply; // 0x280(0x10)
	float MaxLitTime; // 0x290(0x04)
	float MinLitTime; // 0x294(0x04)
	float MaxUnlitTime; // 0x298(0x04)
	float MinUnlitTime; // 0x29c(0x04)
	bool ShouldFlicker; // 0x2a0(0x01)
	bool IsLit; // 0x2a1(0x01)

	void SetTarget(USceneComponent* TargetPoint);
	void SetSource(USceneComponent* SourcePoint);
	void SetParents(AActor* firstParent, AActor* secondParent);
	void RecalculateBeam();
	void OnRep_TargetLocation();
	void OnRep_SourceLocation();
	void OnRep_Flag();
	void OnParentTwoDeath(UHealthComponentBase* HealthComponent);
	void OnParentOneDeath(UHealthComponentBase* HealthComponent);
	UParticleSystemComponent* GetParticleEffect();
	UCapsuleComponent* GetCollider();
	UAudioComponent* GetAudio();
	void DelayedSetTarget(USceneComponent* TargetPoint);
	void DelayedSetSource(USceneComponent* SourcePoint);
	void DeactivateCollisionAndEffect();
};

// Class FSD.SentryElectroBeam
// Size: 0x2c8 (Inherited: 0x2b8)
struct ASentryElectroBeam : AElectroBeam {
	TArray<ARedeployableSentryGun*> Sentries; // 0x2b8(0x10)
};

// Class FSD.ElevatorPlant
// Size: 0x2f0 (Inherited: 0x220)
struct AElevatorPlant : AActor {
	FMulticastInlineDelegate OnStartTimelineEvent; // 0x220(0x10)
	FMulticastInlineDelegate COnStateChangedEvent; // 0x230(0x10)
	UAudioComponent* MovingSoundComponent; // 0x240(0x08)
	USoundCue* GrabSound; // 0x248(0x08)
	FVector RestPositionOffset; // 0x250(0x0c)
	FVector RelativeRestLocation; // 0x25c(0x0c)
	FVector RelativeDestinationLocation; // 0x268(0x0c)
	FVector BaseTangentDirectionOffset; // 0x274(0x0c)
	FVector LeafTangentDirectionOffset; // 0x280(0x0c)
	FVector LeafLocationNoise; // 0x28c(0x0c)
	FRotator LeafNoiseRotator; // 0x298(0x0c)
	float BaseTangentLength; // 0x2a4(0x04)
	USplineMeshComponent* CSplineMesh; // 0x2a8(0x08)
	USceneComponent* CVineBase; // 0x2b0(0x08)
	USceneComponent* CVineLeaf; // 0x2b8(0x08)
	float InitialBaseTangentLength; // 0x2d0(0x04)
	float LeafLocationNoiseSize; // 0x2d4(0x04)
	float VineMovementAlpha; // 0x2d8(0x04)
	bool IsMoving; // 0x2dc(0x01)
	bool IsOpen; // 0x2dd(0x01)
	bool Extend; // 0x2de(0x01)
	UCurveFloat* DipOffsetCurve; // 0x2e0(0x08)
	UCurveFloat* LocationLerpCurve; // 0x2e8(0x08)

	void SetLeafNoiseRotator(FRotator aRotator);
	void SetLeafLocationNoise(FVector aVector);
	void SetIsOpen(bool aValue);
	void SetIsExtended(bool aValue);
	void SetBaseTangentLength(float Value);
	void SetBaseTangentDirectionOffset(FVector aVector);
	void OnRep_RelavtiveDestinationLocation();
	void OnRep_Open();
	void OnMatchStarted();
	void MoreTick(FVector DipOffset, float aValue);
	float GetVineMovementAlpha();
	FVector GetRelativeRestLocation();
	FVector GetRelativeDestinationLocation();
	float GetLeafLocationNoiseSize();
	bool GetIsMoving();
	bool GetIsExtended();
	float GetInitialTangentLenth();
};

// Class FSD.EliminationObjective
// Size: 0x218 (Inherited: 0x178)
struct UEliminationObjective : UObjective {
	int32_t ObjectCount; // 0x178(0x04)
	UDebrisPositioning* Positioning; // 0x180(0x08)
	TArray<int32_t> ExcludeRoomIDs; // 0x188(0x10)
	TSoftClassPtr<UObject> ObjectToSpawn; // 0x198(0x28)
	UCaveInfluencer* CaveInfluencer; // 0x1c0(0x08)
	float DebrisRadius; // 0x1c8(0x04)
	TArray<TSoftObjectPtr<UDebrisBase>> ObjectDebris; // 0x1d0(0x10)
	int32_t EnemiesKilled; // 0x1e0(0x04)
	int32_t EnemiesToKill; // 0x1e4(0x04)
	TArray<FEliminationDescriptors> TargetDescriptors; // 0x1e8(0x10)
	TArray<FEliminationDescriptors> TargetQueue; // 0x1f8(0x10)
	TArray<FEliminationTarget> ActiveEliminationTargets; // 0x208(0x10)

	void RegisterEliminationTargets(TArray<AFSDPawn*> Targets);
	void ReceiveTargetSpawned();
	void ReceiveTargetKilled();
	void OnTargetKilled(UHealthComponentBase* Health);
	void OnRep_EnemiesToKill(int32_t prevAmount);
	void OnRep_EnemiesKilled(int32_t prevAmount);
	TArray<UEnemyDescriptor*> GetNextTargetInQueue();
};

// Class FSD.EncounterActor
// Size: 0x220 (Inherited: 0x220)
struct AEncounterActor : AActor {

	void Receive_EncounterHasSpawned(APawn* spawnedPawn);
};

// Class FSD.EncounterManager
// Size: 0x110 (Inherited: 0xb0)
struct UEncounterManager : UActorComponent {
	float SpawnDistanceFromRoomBounds; // 0xb0(0x04)
	TArray<FEncounterManagerItem> Encounters; // 0xb8(0x10)
	AProceduralSetup* ProceduralSetup; // 0xc8(0x08)
	UEnemySpawnManager* SpawnManager; // 0xd0(0x08)
	TArray<UEnemyDescriptor*> EnemyPool; // 0xd8(0x10)
	TArray<UEnemyDescriptor*> EncounterPool; // 0xe8(0x10)
	TArray<UCritterDescriptor*> CritterPool; // 0xf8(0x10)

	void ShowSpawnLocations();
	TArray<UEnemyDescriptor*> GetEnemyPool();
	TArray<UEnemyDescriptor*> GetEncounterPool();
	TArray<UCritterDescriptor*> GetCritterPool();
};

// Class FSD.EncounterSettings
// Size: 0x160 (Inherited: 0x30)
struct UEncounterSettings : UDataAsset {
	FIRandRange StationaryEnemyCount; // 0x30(0x08)
	TArray<UEnemyDescriptor*> CommonEnemies; // 0x38(0x10)
	TArray<UEnemyDescriptor*> SpecialEnemies; // 0x48(0x10)
	TArray<UEnemyDescriptor*> DisruptiveEnemies; // 0x58(0x10)
	TArray<UEnemyDescriptor*> StationaryEnemies; // 0x68(0x10)
	TArray<UCritterDescriptor*> CommonCritters; // 0x78(0x10)
	TArray<FEncounterRareCritterItem> RareCritters; // 0x88(0x10)
	TArray<FEncounterSpecialItem> SpecialEncounters; // 0x98(0x10)
	float RequiredDifficultyPerDiversity; // 0xa8(0x04)
	float GlobalDifficultyScale; // 0xac(0x04)
	FRandInterval EncounterDifficulty; // 0xb0(0x10)
	FRandInterval StationaryDifficulty; // 0xc0(0x10)
	FRandRange CritterSpawnDifficulty; // 0xd0(0x08)
	FGameplayTag SmallRoomTag; // 0xd8(0x08)
	FGameplayTag MediumRoomTag; // 0xe0(0x08)
	FGameplayTag LargeRoomTag; // 0xe8(0x08)
	float SmallRoomDifficultyModifier; // 0xf0(0x04)
	float MediumRoomDifficultyModifier; // 0xf4(0x04)
	float LargeRoomDifficultyModifier; // 0xf8(0x04)
	TMap<UEnemyDescriptor*, FEliteEnemyEntry> HeroEnemies; // 0x100(0x50)
	FRandInterval HeroEnemySpawn; // 0x150(0x10)
};

// Class FSD.EnemyFamily
// Size: 0x50 (Inherited: 0x30)
struct UEnemyFamily : UDataAsset {
	UTexture2D* Icon; // 0x30(0x08)
	FText Name; // 0x38(0x18)
};

// Class FSD.ObjectInfoComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UObjectInfoComponent : UActorComponent {

	UDialogDataAsset* GetLookAtShout(UPrimitiveComponent* TargetComponent);
	bool GetIsPingableByLaserpointer(UPrimitiveComponent* TargetComponent);
	FText GetInGameName(UPrimitiveComponent* TargetComponent);
	UTexture2D* GetInGameIcon(UPrimitiveComponent* TargetComponent);
	FText GetInGameDescription(UPrimitiveComponent* TargetComponent);
	UActorContextWidget* GetContextWidget(APlayerController* InPlayerController);
};

// Class FSD.SimpleObjectInfoComponent
// Size: 0x168 (Inherited: 0xb0)
struct USimpleObjectInfoComponent : UObjectInfoComponent {
	FText InGameName; // 0xb0(0x18)
	FText InGameDescription; // 0xc8(0x18)
	UDialogDataAsset* LookAtShout; // 0xe0(0x08)
	UDialogDataAsset* LookAtShoutOverride; // 0xe8(0x08)
	UTexture2D* Icon; // 0xf8(0x08)
	bool bIsPingableByLaserpointer; // 0x100(0x01)
	UActorContextWidget* ContextWidgetClass; // 0x108(0x08)
	TMap<TWeakObjectPtr<USceneComponent>, FSimpleObjectInfoData> ComponentMap; // 0x110(0x50)
	UActorContextWidget* ContextWidget; // 0x160(0x08)

	void SetInGameName(FString GameName);
	void SetInGameDescription(FString GameDescription);
	void SetContextWidget(UActorContextWidget* InContextWidget);
	void OverrideLookAtShoutOrUseDefault(UDialogDataAsset* InShout);
	void OverrideLookAtShout(UDialogDataAsset* InShout);
	UDialogDataAsset* GetDefaultLookAtShout();
	void ClearLookAtShoutOverride();
	void AddComponentObjectInfo(USceneComponent* TargetComponent, FSimpleObjectInfoData Data);
};

// Class FSD.EnemyComponent
// Size: 0x1a0 (Inherited: 0x168)
struct UEnemyComponent : USimpleObjectInfoComponent {
	UEnemyFamily* Family; // 0x168(0x08)
	UDialogDataAsset* KillShout; // 0x170(0x08)
	UEnemyID* EnemyID; // 0x178(0x08)
	FString mixerName; // 0x180(0x10)
	FMulticastInlineDelegate OnMixerNameChange; // 0x190(0x10)

	UEnemyID* GetID();
	FText GetFamilyName();
	UTexture2D* GetFamilyIcon();
};

// Class FSD.TestAnimInstance
// Size: 0x990 (Inherited: 0x270)
struct UTestAnimInstance : UAnimInstance {
	FTestAnimInstanceProxy AnimInstanceProxy; // 0x270(0x700)
	float WalkCycleSpeed; // 0x970(0x04)
	float StartMovingSpeed; // 0x974(0x04)
	float StopMovingSpeed; // 0x978(0x04)
	float WalkCycleMinRate; // 0x97c(0x04)
	float MeshScale; // 0x980(0x04)
};

// Class FSD.JellyFishAnimInstance
// Size: 0x2c0 (Inherited: 0x2c0)
struct UJellyFishAnimInstance : UEnemyAnimInstance {
	float HorizontalAngle; // 0x2b8(0x04)
	float VerticalSpeed; // 0x2bc(0x04)
};

// Class FSD.GliderBeastAnimInstance
// Size: 0x2f0 (Inherited: 0x2c0)
struct UGliderBeastAnimInstance : UEnemyAnimInstance {
	float SyncAnimLength; // 0x2b8(0x04)
	FGliderAnimSync AnimSync; // 0x2bc(0x20)
	bool IsFrozen; // 0x2dc(0x01)
};

// Class FSD.EnemyAttacker
// Size: 0x28 (Inherited: 0x28)
struct UEnemyAttacker : UInterface {

	float GetAttackDamageModifier();
};

// Class FSD.EnemyControlStateComponent
// Size: 0x290 (Inherited: 0x100)
struct UEnemyControlStateComponent : UCharacterStateComponent {
	bool UseThirdPersonCam; // 0x100(0x01)
	FControlEnemyState StateData; // 0x110(0x60)
	enum class EEnemyControlState ControlState; // 0x178(0x01)
	FQuat AngularVelocity; // 0x1b0(0x10)
	FQuat ControlRotation; // 0x1c0(0x10)

	void ServerExit();
	void OnRep_StateData(FControlEnemyState oldState);
	void OnRep_ControlState(enum class EEnemyControlState oldState);
	void OnEnemyCrashMontageEnded(UAnimMontage* Montage, bool interrupted);
	void OnControllingEnemyAttached();
	void OnControllingEnemy(bool IsControlling);
	void JumpPressed();
	UAIPlayerControlComponent* GetAiPlayerControlComponent();
};

// Class FSD.EnemyDescriptor
// Size: 0x218 (Inherited: 0x30)
struct UEnemyDescriptor : UDataAsset {
	UEnemyID* EnemyID; // 0x30(0x08)
	TSoftClassPtr<UObject> EnemyClass; // 0x38(0x28)
	enum class EVeteranScaling VeteranScaling; // 0x60(0x01)
	TArray<UEnemyDescriptor*> VeteranClasses; // 0x68(0x10)
	TMap<UBiome*, TSoftClassPtr<UObject>> BiomeEnemyClassOverrides; // 0x78(0x50)
	TSoftClassPtr<UObject> EliteEnemyClass; // 0xc8(0x28)
	TSet<UMissionTemplate*> BannedMissionTypes; // 0xf0(0x50)
	enum class EEnemySignificance EnemySignificance; // 0x140(0x01)
	FVector SpawnOffset; // 0x144(0x0c)
	bool UsesSpawnEffects; // 0x150(0x01)
	enum class ECreatureSize CreatureSize; // 0x154(0x04)
	UDebrisPositioning* Positioning; // 0x158(0x08)
	int32_t PlacementCategories; // 0x160(0x04)
	UCaveInfluencer* CaveInfluencer; // 0x168(0x08)
	TArray<FEnemyDebris> Debris; // 0x170(0x10)
	float InfluencerRange; // 0x180(0x04)
	AActor* PlacementCarver; // 0x188(0x08)
	enum class DeepPathFinderType PathfinderType; // 0x190(0x01)
	FGameplayTagQuery PlacementRoomQuery; // 0x198(0x48)
	float SpawnSpread; // 0x1e0(0x04)
	int32_t IdealSpawnSize; // 0x1e4(0x04)
	bool CanBeUsedForConstantPressure; // 0x1e8(0x01)
	bool CanBeUsedInEncounters; // 0x1e9(0x01)
	float DifficultyRating; // 0x1ec(0x04)
	int32_t MinSpawnCount; // 0x1f0(0x04)
	int32_t MaxSpawnCount; // 0x1f4(0x04)
	float Rarity; // 0x1f8(0x04)
	float SpawnAmountModifier; // 0x1fc(0x04)
	int32_t RequiredMainCampaignProgress; // 0x200(0x04)
	bool UsesSpawnRarityModifiers; // 0x204(0x01)
	TArray<FSpawnRarityItem> SpawnRarityModifiers; // 0x208(0x10)

	APawn* GetEnemyClass(UBiome* Biome, bool isElite);
};

// Class FSD.BaseCritterDescriptor
// Size: 0xb8 (Inherited: 0x30)
struct UBaseCritterDescriptor : UDataAsset {
	TSoftClassPtr<UObject> CritterClass; // 0x30(0x28)
	TMap<UBiome*, TSoftClassPtr<UObject>> BiomeClassOverrides; // 0x58(0x50)
	UDebrisPositioning* Positioning; // 0xa8(0x08)
	enum class DeepPathFinderType PathfinderType; // 0xb0(0x01)
};

// Class FSD.CritterDescriptor
// Size: 0xd0 (Inherited: 0xb8)
struct UCritterDescriptor : UBaseCritterDescriptor {
	FIRandRange SpawnAmountPerRoom; // 0xb8(0x08)
	float SpawnChancePerRoom; // 0xc0(0x04)
	FIRandRange SpawnAmountPerLevel; // 0xc4(0x08)
};

// Class FSD.RareCritterDescriptor
// Size: 0xc0 (Inherited: 0xb8)
struct URareCritterDescriptor : UBaseCritterDescriptor {
	float Rarity; // 0xb8(0x04)
};

// Class FSD.EnemyMinersManualData
// Size: 0x180 (Inherited: 0x30)
struct UEnemyMinersManualData : UDataAsset {
	UEnemyID* EnemyID; // 0x30(0x08)
	FText Name; // 0x38(0x18)
	FText RichDescription; // 0x50(0x18)
	TArray<FText> GameplayTips; // 0x68(0x10)
	enum class EEnemyFamily Family; // 0x78(0x01)
	enum class EEnemyType EnemyType; // 0x79(0x01)
	TArray<FEnemyAttackDescription> AttackType; // 0x80(0x10)
	TArray<FEnemyAttackDescription> SpecialAttacks; // 0x90(0x10)
	TArray<UAnimSequenceBase*> AttackAnimations; // 0xa0(0x10)
	enum class EArmorType ArmorType; // 0xb0(0x01)
	FText Armor; // 0xb8(0x18)
	FText Weakpoint; // 0xd0(0x18)
	FEnemyMinersManualStats EnemyStats; // 0xe8(0x0c)
	TArray<enum class EDamageType> Resistances; // 0xf8(0x10)
	TArray<enum class EDamageType> Weaknesses; // 0x108(0x10)
	TArray<FText> LoreInfo; // 0x118(0x10)
	bool AlwaysUnlocked; // 0x128(0x01)
	int32_t InfoUnlockSpeed; // 0x12c(0x04)
	TSoftObjectPtr<UTexture2D> EnemyIcon; // 0x130(0x28)
	TSoftClassPtr<UObject> PreviewActor; // 0x158(0x28)

	UTexture2D* GetEnemyIcon();
};

// Class FSD.HealthComponentBase
// Size: 0x148 (Inherited: 0xb0)
struct UHealthComponentBase : UActorComponent {
	FMulticastInlineDelegate OnHealthChanged; // 0xb8(0x10)
	FMulticastInlineDelegate OnDamageHealed; // 0xc8(0x10)
	FMulticastInlineDelegate OnDamageTaken; // 0xd8(0x10)
	FMulticastInlineDelegate OnHit; // 0xe8(0x10)
	FMulticastInlineDelegate OnBodypartHit; // 0xf8(0x10)
	FMulticastInlineDelegate OnDeath; // 0x108(0x10)
	FMulticastInlineDelegate OnRadialDamage; // 0x118(0x10)
	FMulticastInlineDelegate OnCanTakeDamageChanged; // 0x128(0x10)
	bool ShowLaserPointMarkerWhenDead; // 0x138(0x01)
	bool canTakeDamage; // 0x139(0x01)
	bool PassthroughTemperatureDamage; // 0x13a(0x01)

	float TakeRadialDamage(float damageAmount, FVector BlastCenter, float BlastRadius, float MaxDamageRadius, float MinDamagePct, AController* EventInstigator, AActor* DamageCauser, UPrimitiveComponent* HitComponent, UDamageClass* DamageClass);
	void TakeDamageSimple(float damageAmount, AActor* DamageCauser, UDamageClass* DamageClass);
	void SetHealthDirectly(float newHealthValue);
	void SetCanTakeDamage(bool canTakeDamage);
	void Kill(AActor* DamageCauser);
	bool IsDead();
	bool IsAlive();
	float Heal(float Amount);
	bool GetShowHealthBar();
	float GetHealthPct();
	TScriptInterface<IHealth> GetHealthComponentForCollider(UPrimitiveComponent* Primitive);
	FVector GetHealthBarWorldOffset();
	float GetHealth();
	UParticleSystem* GetGenericImpactParticles();
	bool GetCanTakeDamage();
	bool CanTakeDamageFrom(UDamageClass* DamageClass);
	void CanTakeDamageDelegate__DelegateSignature(bool OutCanTakeDamage);
};

// Class FSD.HealthComponent
// Size: 0x248 (Inherited: 0x148)
struct UHealthComponent : UHealthComponentBase {
	FMulticastInlineDelegate OnArmorChanged; // 0x148(0x10)
	FMulticastInlineDelegate OnArmorDamaged; // 0x158(0x10)
	FMulticastInlineDelegate OnArmorHealed; // 0x168(0x10)
	FMulticastInlineDelegate OnDeathDetailed; // 0x178(0x10)
	FMulticastInlineDelegate OnNewHealthSegment; // 0x188(0x10)
	float Damage; // 0x198(0x04)
	TArray<float> HealthSegmentSizes; // 0x1a0(0x10)
	bool CanDamageThroughSegments; // 0x1b0(0x01)
	TArray<USubHealthComponent*> SubHealthComponents; // 0x1c0(0x10)
	bool ShouldUseLargestSubhealthDamageTaken; // 0x1d0(0x01)
	bool InvulnerableToNonDefinedResistances; // 0x1d1(0x01)
	TMap<UPawnStat*, float> Resistances; // 0x1d8(0x50)
	bool AffectedByGlobalWeakpointDamageMultiplier; // 0x228(0x01)
	bool UseDormancy; // 0x229(0x01)
	UPawnStatsComponent* PawnStats; // 0x230(0x08)

	void ToggleCanTakeDamage();
	void Resupply(float percentage);
	void OnRep_Damage(float oldDamage);
	void HealArmor(float Amount);
	bool HasArmor();
	float GetMaxArmor();
	enum class EHealthbarType GetHealthbarType();
	void GetCurrentHealthSegment(int32_t Segment, float segmentHealth, float segmentHealthPercent);
	float GetArmorPct();
	float GetArmor();
	void Client_ReceivedHit(float Amount, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
};

// Class FSD.EnemyHealthComponent
// Size: 0x280 (Inherited: 0x248)
struct UEnemyHealthComponent : UHealthComponent {
	FVector KillImpactNormal; // 0x248(0x0c)
	enum class EEnemyHealthScaling EnemyHealthScaling; // 0x254(0x01)
	float Courage; // 0x258(0x04)
	float MaxHealth; // 0x25c(0x04)
	bool bShowHealthBar; // 0x260(0x01)
	FVector HealthBarOffsetWorld; // 0x264(0x0c)
	bool bIsBossFight; // 0x270(0x01)
	int32_t BossFightHealthBarSegments; // 0x274(0x04)
	bool bRegisterEnemy; // 0x278(0x01)

	float GetMaxHealth();
};

// Class FSD.EnemyMeleeAttackAnimNotify
// Size: 0x40 (Inherited: 0x38)
struct UEnemyMeleeAttackAnimNotify : UAnimNotify {
	FName AttackTag; // 0x38(0x08)
};

// Class FSD.EnemyRangedAttackAnimNotify
// Size: 0x38 (Inherited: 0x38)
struct UEnemyRangedAttackAnimNotify : UAnimNotify {
};

// Class FSD.StopLeadingNotify
// Size: 0x38 (Inherited: 0x38)
struct UStopLeadingNotify : UAnimNotify {
};

// Class FSD.EnemySettings
// Size: 0x158 (Inherited: 0x30)
struct UEnemySettings : UDataAsset {
	TArray<UEnemyDescriptor*> EnemiesAllowedInWaves; // 0x30(0x10)
	FRandRange EnemyWaveRange; // 0x40(0x08)
	TMap<UEnemyID*, UEnemyDescriptor*> EnemyDescriptor; // 0x48(0x50)
	FGameplayTagQuery EliteAllowQuery; // 0x98(0x48)
	TMap<UEnemyDescriptor*, FEliteEnemyEntry> HeroEnemies; // 0xe0(0x50)
	FRandFloatInterval HeroEnemySpawn; // 0x130(0x10)
	int32_t EliteRequiredCampaignProgress; // 0x140(0x04)
	TArray<UDamageComponent*> ExplodingEnemiesDamageComponents; // 0x148(0x10)
};

// Class FSD.SpawnSettings
// Size: 0x58 (Inherited: 0x30)
struct USpawnSettings : UDataAsset {
	TArray<UParticleSystem*> SpawnEffects; // 0x30(0x10)
	TArray<USoundCue*> SpawnSounds; // 0x40(0x10)
	FRandRange SpawnDuration; // 0x50(0x08)
};

// Class FSD.EnemySpawnManager
// Size: 0x268 (Inherited: 0xb0)
struct UEnemySpawnManager : UActorComponent {
	FMulticastInlineDelegate OnEnemyDestroyed; // 0xb0(0x10)
	FMulticastInlineDelegate OnEnemyDied; // 0xc0(0x10)
	FMulticastInlineDelegate OnEnemySpawned; // 0xd0(0x10)
	USpawnEffectsComponent* SpawnEffects; // 0xe0(0x08)
	TArray<APawn*> ActiveEnemies; // 0xf0(0x10)
	TArray<APawn*> ActiveSwarmerEnemies; // 0x100(0x10)
	TArray<UStatusEffect*> ActiveGlobalStatusEffects; // 0x110(0x10)
	TMap<UEnemyDescriptor*, FSpawnRarityModifierItem> SpawnRarityModifiers; // 0x120(0x50)
	TArray<APawn*> ActiveCritters; // 0x170(0x10)
	TArray<APawn*> CritcalEnemies; // 0x180(0x10)
	int32_t MaxActiveEnemies; // 0x190(0x04)
	int32_t MaxActiveSwarmers; // 0x194(0x04)
	int32_t MaxActiveCritters; // 0x198(0x04)
	float MaxDistanceBeforeCleanup; // 0x19c(0x04)
	FGameplayTag SwarmerTag; // 0x1a0(0x08)
	FGameplayTag RegularTag; // 0x1a8(0x08)
	FGameplayTag CritterTag; // 0x1b0(0x08)
	AProceduralSetup* ProceduralSetup; // 0x1b8(0x08)
	TArray<FSpawnQueueItem> SpawnQueue; // 0x1c0(0x10)
	bool bDestroyingAllEnemies; // 0x1d0(0x01)

	void SpawnerDestroyed(APawn* Actor);
	bool SpawnEnemy(UEnemyDescriptor* descriptor, FTransform Transform, FDelegate Callback, bool useSpawnFX, bool Alert);
	void SetSpawningEnabled(bool newSpawningEnabled);
	void RemoveGlobalStatusEffect(UStatusEffect* StatusEffect);
	void RegisterSpawner(APawn* Actor);
	void RegisterSpawnedEnemy(AActor* enemy);
	void PromoteToCritical(APawn* Pawn);
	void OnMatchStarted();
	void OnMatchEnded();
	bool GetSpawningEnabled();
	void EnemyDestroyed(AActor* Actor);
	void EnemyDeath(UHealthComponentBase* HealthComponent);
	void DestroyAllEnemies();
	bool CanSpawn(UEnemyDescriptor* EnemyDescriptor);
	void AddGlobalStatusEffect(UStatusEffect* StatusEffect);
};

// Class FSD.SpawnEffectsComponent
// Size: 0x1d8 (Inherited: 0xb0)
struct USpawnEffectsComponent : UActorComponent {
	FSpawnEffectsArray ActiveEffects; // 0xb0(0x120)
	UMaterialInstance* BiomeMaterialOverride; // 0x1d0(0x08)
};

// Class FSD.PheromoneSpawnerComponent
// Size: 0x118 (Inherited: 0xb0)
struct UPheromoneSpawnerComponent : UActorComponent {
	FRandRange SpawnInterval; // 0xb0(0x08)
	float AttackPositioningCostModifier; // 0xb8(0x04)
	UEnemyDescriptor* enemy; // 0xc0(0x08)
	TMap<AActor*, float> InfectedActors; // 0xc8(0x50)
};

// Class FSD.EnemyDetonationSetting
// Size: 0x60 (Inherited: 0x30)
struct UEnemyDetonationSetting : UDataAsset {
	UDamageComponent* FireDamage; // 0x30(0x08)
	UNiagaraSystem* FireParticles; // 0x38(0x08)
	USoundCue* FireSound; // 0x40(0x08)
	UDamageComponent* IceDamage; // 0x48(0x08)
	UNiagaraSystem* IceParticles; // 0x50(0x08)
	USoundCue* IceSound; // 0x58(0x08)
};

// Class FSD.TemperatureComponent
// Size: 0xc8 (Inherited: 0xb0)
struct UTemperatureComponent : UActorComponent {
	float FrozenDamageBonusScale; // 0xc0(0x04)

	bool TryPushHeatSource(AActor* Target, float Temperature, enum class ETemperatureIntensity Intensity);
	bool TryPopHeatSource(AActor* Target, float Temperature, enum class ETemperatureIntensity Intensity);
	float GetCurrentTemperature();
	void ChangeTemperature(float Degrees, AActor* Source);
};

// Class FSD.EnemyTemperatureComponent
// Size: 0x148 (Inherited: 0xc8)
struct UEnemyTemperatureComponent : UTemperatureComponent {
	float UpdateTime; // 0xc8(0x04)
	bool DieIfFrozen; // 0xcc(0x01)
	bool DieIfBurning; // 0xcd(0x01)
	float TemperatureChangeScale; // 0xd0(0x04)
	float BurnTemperature; // 0xd4(0x04)
	float DouseFireTemperature; // 0xd8(0x04)
	float FreezeTemperature; // 0xdc(0x04)
	float UnFreezeTemperature; // 0xe0(0x04)
	int32_t WarmingRate; // 0xe4(0x04)
	int32_t CoolingRate; // 0xe8(0x04)
	bool IsHeatsourceWhenOnFire; // 0xec(0x01)
	float OnFireHeatRange; // 0xf0(0x04)
	float MaxColdSlowdown; // 0xf4(0x04)
	UEnemyDetonationSetting* DetonationSetting; // 0x100(0x08)
	UPawnStatsComponent* PawnStats; // 0x108(0x08)
	int32_t WarmingCooldown; // 0x128(0x04)
	char FireDetonationStack; // 0x134(0x01)
	char IceDetonationStack; // 0x135(0x01)

	void TimerCallback();
	void OnDeath(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial, bool IsRadial, TArray<UDamageTag*> Tags);
	void DoTemperatureShock(UStatusEffectsComponent* Status);
	void All_IceDetonation();
	void All_FireDetonation();
};

// Class FSD.EnemyTemperatureReplicatorComponent
// Size: 0xf0 (Inherited: 0xb0)
struct UEnemyTemperatureReplicatorComponent : UActorComponent {
	FMulticastInlineDelegate OnTemperatureEffectChanged; // 0xb0(0x10)
	FMulticastInlineDelegate OnIsFrozenChanged; // 0xc0(0x10)
	FMulticastInlineDelegate OnIsOnFireChanged; // 0xd0(0x10)
	TWeakObjectPtr<UEnemyTemperatureComponent> EnemyTemperatureComponent; // 0xe0(0x08)
	int32_t TemperatureEffect; // 0xe8(0x04)
	bool bIsFrozen; // 0xec(0x01)
	bool bIsOnFire; // 0xed(0x01)

	void OnRep_TemperatureEffect();
	void OnRep_IsOnFire();
	void OnRep_IsFrozen();
	bool IsOnFire();
	bool IsFrozen();
	float GetTemperatureEffect();
	void BoolDelegate__DelegateSignature(bool Value);
};

// Class FSD.EnemyWaveController
// Size: 0x30 (Inherited: 0x28)
struct UEnemyWaveController : UObject {
	bool IsComplete; // 0x28(0x01)
	bool IsSuitableForSolo; // 0x29(0x01)

	void StartWave();
	void ResumeWave();
	void PauseWave();
	void OnWaveCompleted();
};

// Class FSD.EnemyWaveManager
// Size: 0x138 (Inherited: 0xb0)
struct UEnemyWaveManager : UActorComponent {
	TArray<FWaveEntry> ScriptedWaves; // 0xb0(0x10)
	TArray<FWaveEntry> EndMissionWaves; // 0xc0(0x10)
	TArray<UEnemyWaveController*> ActiveScriptedWaves; // 0xd0(0x10)
	float StartDelay; // 0xe0(0x04)
	float spawnRadiusFromSpawnPoint; // 0xe4(0x04)
	bool ScriptedWavesEnabled; // 0xe8(0x01)
	bool NormalWavesEnabled; // 0xe9(0x01)
	bool OverrideDifficultyScriptedWaveInternal; // 0xea(0x01)
	FRandRange OverrideScriptedWaveInterval; // 0xec(0x08)
	AFSDGameMode* GameMode; // 0xf8(0x08)
	UEnemySpawnManager* SpawnManager; // 0x100(0x08)
	TArray<UObject*> NormalWavesBlockStack; // 0x118(0x10)
	TArray<UObject*> ScriptedWavesBlockStack; // 0x128(0x10)

	UEnemyWaveController* TriggerWave(UEnemyWaveController* waveClass);
	void TriggerEndWave(bool cancelAllWaves);
	void SpawnScriptedWave();
	void PushDisableScriptedWaves(UObject* Owner);
	void PushDisableNormalWaves(UObject* Owner);
	void PopDisableScriptedWaves(UObject* Owner);
	void PopDisableNormalWaves(UObject* Owner);
	void OnMatchEnded();
	void OnEnemySpawned(APawn* enemy);
	bool AreScriptedWavesBlocked();
	bool AreNormalWavesBlocked();
};

// Class FSD.EscortMuleAIController
// Size: 0x410 (Inherited: 0x358)
struct AEscortMuleAIController : AFSDAIController {
	TArray<FVector> CurrentPath; // 0x368(0x10)
	TArray<FVector> GaragePath; // 0x3c8(0x10)
	int32_t PathIndex; // 0x3d8(0x04)
	int32_t CurrentRoom; // 0x3dc(0x04)
	UEscortObjective* EscortObj; // 0x3e0(0x08)
	int32_t TunnelStartIndex; // 0x3e8(0x04)
	int32_t TunnelEndIndex; // 0x3ec(0x04)
	FRandomStream RandomStream; // 0x408(0x08)

	void SetDozerNextPathSegment();
	void OnPathComplete();
	TArray<FVector> GetPathForDebug(int32_t Segment);
	FVector GetPathEndTagent();
	void FindDozerPath(FVector StartPosition);
};

// Class FSD.EscortObjective
// Size: 0x338 (Inherited: 0x178)
struct UEscortObjective : UObjective {
	FMulticastInlineDelegate OnProgressUpdated; // 0x178(0x10)
	FMulticastInlineDelegate OnShellBreakPauseChange; // 0x188(0x10)
	FMulticastInlineDelegate OnMuleRefueled; // 0x198(0x10)
	bool DidRescueDorettaHead; // 0x1a8(0x01)
	int32_t AreasToScan; // 0x1ac(0x04)
	int32_t ScanCount; // 0x1b0(0x04)
	TArray<FVector> ScanLocations; // 0x1b8(0x10)
	UDebrisPositioning* Positioning; // 0x1c8(0x08)
	UDebrisPositioning* EscortMulePositioning; // 0x1d0(0x08)
	UCurveFloat* CostDistanceCurve; // 0x1d8(0x08)
	float DebrisRadius; // 0x1e0(0x04)
	TArray<UDebrisBase*> ObjectDebris; // 0x1e8(0x10)
	TSoftClassPtr<UObject> RefuelObjectClass; // 0x1f8(0x28)
	TSoftClassPtr<UObject> DestinationClass; // 0x220(0x28)
	int32_t AreasScanned; // 0x248(0x04)
	enum class EEscortMissionState State; // 0x24c(0x01)
	bool FinalBattle; // 0x24d(0x01)
	UCarvedResourceData* FuelResource; // 0x250(0x08)
	UResourceData* GemResource; // 0x258(0x08)
	FMulticastInlineDelegate OnCannisterRegistered; // 0x260(0x10)
	float ServerShellProgress; // 0x270(0x04)
	int32_t SecondsToDestroyHeartstone; // 0x290(0x04)
	int32_t FullCanistersRequired; // 0x294(0x04)
	int32_t FullCanisters; // 0x298(0x04)
	int32_t FuelResourceAmount; // 0x29c(0x04)
	TSoftClassPtr<UObject> GarageDropCarver; // 0x2a0(0x28)
	TSoftClassPtr<UObject> EscortMuleDropBeaconClass; // 0x2c8(0x28)
	TSoftClassPtr<UObject> GarageClass; // 0x2f0(0x28)
	FVector EscortMuleDropLocation; // 0x318(0x0c)
	AEscortMule* EscortMule; // 0x328(0x08)
	AEscortDestination* EscortDestination; // 0x330(0x08)

	void SyncProgressTimer();
	void StartShellBreak();
	void SpawnGarage();
	void SetState(enum class EEscortMissionState State);
	void SetShellBreakPaused(bool newPaused);
	void SetEscortMule(AEscortMule* MULE);
	void RegisterFuelCannister(AExtractorItem* extractor);
	void RecordFailStage(bool muleDied);
	void OnResourceChanged(UCappedResource* CappedResource, float Amount);
	void OnRep_FullCanisters();
	void OnRep_EscortState();
	void OnRep_EscortMule();
	void OnRep_AreasToScan(int32_t prevAmount);
	void OnRep_AreasScanned(int32_t prevAmount);
	void OnMuleDied(UHealthComponentBase* HealthComponent);
	void OnHealthChanged(float Health);
	void OnFullCanistersChanged(int32_t Amount);
	void OnEscortMuleSpawnedEvent();
	float GetShellBreakProgress();
	bool DoesPathExist(FVector Start, FVector End);
};

// Class FSD.EscortMule
// Size: 0x490 (Inherited: 0x2f0)
struct AEscortMule : AFSDPawn {
	FMulticastInlineDelegate OnMuleActivated; // 0x2f8(0x10)
	FMulticastInlineDelegate OnSpeedChanged; // 0x308(0x10)
	FMulticastInlineDelegate OnFullCanistersChanged; // 0x318(0x10)
	FMulticastInlineDelegate OnExitGaragePathSet; // 0x328(0x10)
	FMulticastInlineDelegate Cheat_SetMuleSpeed; // 0x338(0x10)
	FMulticastInlineDelegate Cheat_JumpToNextPhase; // 0x348(0x10)
	UFriendlyHealthComponent* HealthComponent; // 0x358(0x08)
	USimpleObjectInfoComponent* ObjectInfo; // 0x360(0x08)
	URestrictedResourceBank* ResourceBank; // 0x368(0x08)
	FTransform TargetTransform; // 0x370(0x30)
	FTransform PreviousTransform; // 0x3a0(0x30)
	FEscortMuleMovementState MovementState; // 0x3f0(0x50)
	float SpeedModifier; // 0x440(0x04)
	USkeletalMeshComponent* Mesh; // 0x448(0x08)
	UOutlineComponent* OutlineComponent; // 0x450(0x08)
	float HealPerTickNormal; // 0x458(0x04)
	float HealPerTickUnderAttack; // 0x45c(0x04)
	bool CannisterVisible_Left; // 0x460(0x01)
	bool CannisterVisible_Right; // 0x461(0x01)
	FVector NextStop; // 0x464(0x0c)
	bool IsCarvingTunnel; // 0x470(0x01)
	int32_t FullCanisters; // 0x474(0x04)
	TArray<FEscortMuleExtractorSlot> ExtractorSlots; // 0x478(0x10)

	bool TryHeal(APlayerCharacter* User, float Amount);
	void SetTargetTransform(FTransform InTransform);
	void SetSpeedModifier(float inSpeedModifier);
	void SetFullExtracterAttached(UInstantUsable* Usable);
	void SetExtractorDetached(UInstantUsable* Usable);
	void SetExitGaragePath(TArray<FVector> Path);
	void ResetExtractors();
	void PathIsReady();
	void OnRep_SpeedModifier();
	void OnRep_MovementState();
	void OnRep_IsCarvingTunnel();
	void OnRep_ExtractorSlots();
	void OnObjectiveStateChanged(enum class EEscortMissionState NewState);
	void OnExtractorSlotChanged(FEscortMuleExtractorSlot Slot, int32_t Index);
	void OnExtractorDetached(AExtractorItem* Item);
	void ObjectiveStateChange(enum class EEscortMissionState NewState);
	enum class EEscortExtractorState GetExtractorState(UInstantUsable* Usable);
	void ActivateMule();
};

// Class FSD.EscortMuleTrack
// Size: 0x248 (Inherited: 0x220)
struct AEscortMuleTrack : AActor {
	FGameplayTagContainer GameplayTags; // 0x228(0x20)
};

// Class FSD.EscortDestination
// Size: 0x260 (Inherited: 0x220)
struct AEscortDestination : AActor {
	FMulticastInlineDelegate OnShellCracked; // 0x220(0x10)
	UDamageComponent* EndExplosionDamage; // 0x230(0x08)
	float NextBreakpoint; // 0x238(0x04)
	int32_t StageForAnalytics; // 0x23c(0x04)
	int32_t SecondsToDestroyHeartstone; // 0x240(0x04)
	TArray<float> BreakpointsPercent; // 0x248(0x10)
	float Radius; // 0x258(0x04)
	float ShellThickness; // 0x25c(0x04)

	void MeltPlatforms(ADeepCSGWorld* CSGWorld, TArray<FVector> meltPoints, float meltRadius);
	UTerrainMaterial* GetTerrainMaterialByHandle(ADeepCSGWorld* CSGWorld, int32_t materialHandle);
	int32_t GetSecondsToDestroyObjective();
	FVector GetClosestPointOnRadius(FVector CurrentLocation, int32_t numberOfShellsCracked, FVector dirFromCenter);
};

// Class FSD.FSDPhysicsActor
// Size: 0x238 (Inherited: 0x220)
struct AFSDPhysicsActor : AActor {
	int32_t MovementUpdateFrequency; // 0x220(0x04)
	int32_t MovementUpdateEventTriggeredFrequency; // 0x224(0x04)

	void ForceMovementUpdate();
};

// Class FSD.CarriableItem
// Size: 0x260 (Inherited: 0x238)
struct ACarriableItem : AFSDPhysicsActor {
	FMulticastInlineDelegate OnAttachedChangeDelegate; // 0x238(0x10)
	FMulticastInlineDelegate OnCarriableDeposited; // 0x248(0x10)
	bool StrictDeposit; // 0x258(0x01)

	void Throw(FVector force);
	void Receive_OnDeposited(APlayerCharacter* fromPlayer);
	void OnAttachChanged(bool Attached);
};

// Class FSD.DorrettaHead
// Size: 0x270 (Inherited: 0x260)
struct ADorrettaHead : ACarriableItem {
	UCarriableInstantUsable* Usable; // 0x260(0x08)
	UCarriableComponent* CarriableComponent; // 0x268(0x08)
};

// Class FSD.FuelCannisterAttachedAnimInstance
// Size: 0x270 (Inherited: 0x270)
struct UFuelCannisterAttachedAnimInstance : UAnimInstance {
	bool CanBeTaken; // 0x268(0x01)

	void SetCanBeTaken(bool canBeTakenValue);
};

// Class FSD.FuelCannisterItemAnimInstance
// Size: 0x270 (Inherited: 0x270)
struct UFuelCannisterItemAnimInstance : UAnimInstance {
	bool IsOnGround; // 0x268(0x01)
	bool IsFull; // 0x269(0x01)
	bool IsShooting; // 0x26a(0x01)
};

// Class FSD.EscortMuleAnimInstance
// Size: 0x270 (Inherited: 0x270)
struct UEscortMuleAnimInstance : UAnimInstance {
	bool LeftCannistersVisible; // 0x268(0x01)
	bool RightCannistersVisible; // 0x269(0x01)
	bool IsEngineRunning; // 0x26a(0x01)
	bool IsBeingRefueled; // 0x26b(0x01)
	bool PlatformOut; // 0x26c(0x01)

	void OnTookDamage(UHealthComponent* Health);
};

// Class FSD.ExplosiveBarrelEvent
// Size: 0x360 (Inherited: 0x358)
struct AExplosiveBarrelEvent : AGameEvent {
	UDamageComponent* EndDamage; // 0x358(0x08)
};

// Class FSD.ExtractorItem
// Size: 0x548 (Inherited: 0x388)
struct AExtractorItem : AAnimatedItem {
	FMulticastInlineDelegate OnCurrentLoadChangedEvent; // 0x390(0x10)
	FMulticastInlineDelegate OnCharacterEquipChange; // 0x3a0(0x10)
	UBoxComponent* DroppedCollider; // 0x3b0(0x08)
	USkeletalMeshComponent* DroppedMesh; // 0x3b8(0x08)
	UFirstPersonParticleSystemComponent* FP_DrillParticles; // 0x3c0(0x08)
	UFSDAudioComponent* AudioComponent; // 0x3c8(0x08)
	UPointLightComponent* SurfaceLight; // 0x3d0(0x08)
	UParticleSystemComponent* MeltingParticles; // 0x3d8(0x08)
	UParticleSystemComponent* InvalidSurfaceParticles; // 0x3e0(0x08)
	UParticleSystemComponent* FPMuzzleParticles; // 0x3e8(0x08)
	UParticleSystemComponent* FPMuzzleInvalidParticles; // 0x3f0(0x08)
	UParticleSystemComponent* TPMuzzleParticles; // 0x3f8(0x08)
	UParticleSystemComponent* TPMuzzleInvalidParticles; // 0x400(0x08)
	UAnimMontage* FPMineMontage; // 0x408(0x08)
	UAnimMontage* TPMineMontage; // 0x410(0x08)
	UAnimMontage* FPGunsling; // 0x418(0x08)
	UAnimMontage* TPGunsling; // 0x420(0x08)
	FName MiningSpeedAudioParamterName; // 0x428(0x08)
	UParticleSystem* DrillParticles; // 0x430(0x08)
	UForceFeedbackEffect* DrillRumble; // 0x438(0x08)
	float BlockParticlesScaleFP; // 0x440(0x04)
	float BlockParticlesScaleTP; // 0x444(0x04)
	enum class EExtractorState State; // 0x448(0x01)
	float MovementPenalty; // 0x44c(0x04)
	float CarverRayCastLength; // 0x450(0x04)
	float CarveTerrainDistanceCheck; // 0x454(0x04)
	float CurrentDrillSpeed; // 0x458(0x04)
	float DrillParticlesDuration; // 0x470(0x04)
	UResourceData* ExtractetMaterial; // 0x478(0x08)
	float TimeBeforeInvalidShout; // 0x480(0x04)
	UDialogDataAsset* InvalidSurfaceShout; // 0x488(0x08)
	UDialogDataAsset* ShoutFull; // 0x490(0x08)
	USoundCue* DigSound; // 0x498(0x08)
	bool IsMining; // 0x4a0(0x01)
	bool IsGunslinging; // 0x4a1(0x01)
	bool ReadyToExtract; // 0x4a2(0x01)
	UParticleSystem* VacuumEffect; // 0x4b0(0x08)
	UParticleSystem* ChunkSplatEffect; // 0x4b8(0x08)
	USoundCue* ChunkSplatSound; // 0x4c0(0x08)
	float MaxDifference; // 0x4ec(0x04)
	float MeltingTime; // 0x4f4(0x04)
	float ChunkMultiplier; // 0x4f8(0x04)
	float CollectChunkCooldown; // 0x4fc(0x04)
	float CrossfadeSpeed; // 0x500(0x04)
	float VacuumEffectOffset; // 0x518(0x04)
	float MaxCapacity; // 0x51c(0x04)
	float PlayerCountBonus; // 0x520(0x04)
	FColor SurfaceLightInitialColor; // 0x528(0x04)
	FColor SurfaceLightEndColor; // 0x52c(0x04)
	float SurfaceLightMinIntensity; // 0x530(0x04)
	float SurfaceLightMaxIntensity; // 0x534(0x04)
	float CurrentLoad; // 0x538(0x04)

	void SetCanPickup(bool canPickup);
	void Server_StopMining();
	void Server_StartMining();
	void Server_SetReadyToExtract(bool IsReady);
	void Server_DigBlock(FVector_NetQuantize Start, FVector_NetQuantize End);
	void Server_CollectChunk(AResourceChunk* chunk);
	void ResetCurrentLoad();
	void OnValidSurfaceChanged(bool IsValid);
	void OnThrown(FVector Direction);
	void OnStopDrilling();
	void OnStartDrilling();
	void OnRep_SimulatingMining();
	void OnRep_IsGunslinging();
	void OnRep_CurrentLoad();
	void OnCurrentLoadChanged(float load);
	void OnChunkCooldownOver();
	bool IsFull();
	UBoxComponent* GetRootCollider();
	void All_SimulateDigBlock(FVector_NetQuantize Position, bool spawnParticles, int32_t Material);
	void All_ChunkSplat(AResourceChunk* chunk);
	void AddResource(float Amount);
};

// Class FSD.ExtruderPlant
// Size: 0x248 (Inherited: 0x220)
struct AExtruderPlant : AActor {
	USkeletalMeshComponent* SkeletalMesh; // 0x220(0x08)
	UAnimationAsset* ExtrudeAnimation; // 0x228(0x08)
	UAnimationAsset* RetractAnimation; // 0x230(0x08)
	UAudioComponent* Audio; // 0x238(0x08)
};

// Class FSD.FacilityGeneratorLine
// Size: 0x340 (Inherited: 0x220)
struct AFacilityGeneratorLine : AActor {
	FTransform StartTransform; // 0x220(0x30)
	FTransform EndTransform; // 0x250(0x30)
	float HeightOffsetMin; // 0x280(0x04)
	float HeightOffsetMax; // 0x284(0x04)
	float MaxSegmentLength; // 0x288(0x04)
	float CarveRadius; // 0x28c(0x04)
	USplineComponent* SplineComponent; // 0x290(0x08)
	USplineDecoratorComponent* SplineDecorator; // 0x298(0x08)
	TSoftObjectPtr<UStaticMesh> LineMeshPtr; // 0x2a0(0x28)
	TSoftObjectPtr<UMaterialInterface> MaterialConnected; // 0x2c8(0x28)
	TSoftObjectPtr<UMaterialInterface> MaterialUnconnected; // 0x2f0(0x28)
	ATetherStation* Station; // 0x318(0x08)
	UStaticMesh* MeshInstance; // 0x320(0x08)
	TArray<FVector> ReplicatedPath; // 0x328(0x10)
	bool Connected; // 0x338(0x01)

	void SetConnected(bool InConnected);
	void ReceiveBeginPathFinding();
	void OnRep_Path();
	void OnRep_Connected();
};

// Class FSD.RessuplyPod
// Size: 0x2d8 (Inherited: 0x220)
struct ARessuplyPod : AActor {
	FMulticastInlineDelegate OnStateChanged; // 0x228(0x10)
	FGameplayTagContainer GameplayTags; // 0x238(0x20)
	UDamageComponent* Damage; // 0x258(0x08)
	float KillRadius; // 0x260(0x04)
	float DropHeight; // 0x264(0x04)
	float DropDelay; // 0x268(0x04)
	float MissionShoutDelay; // 0x26c(0x04)
	UDialogDataAsset* DialogOrderAccepted; // 0x270(0x08)
	UDialogDataAsset* DialogPodArrived; // 0x278(0x08)
	UDialogDataAsset* CurrentMissionShout; // 0x288(0x08)
	FVector StartLocation; // 0x290(0x0c)
	FVector TargetLocation; // 0x29c(0x0c)
	enum class ERessuplyPodState State; // 0x2a8(0x01)
	float TargetDropTime; // 0x2ac(0x04)
	float ServerDropProgress; // 0x2bc(0x04)
	UCurveFloat* DropCurve; // 0x2c0(0x08)
	AActor* PlayerSpawnPoint; // 0x2c8(0x08)
	float CloseToImpactDistance; // 0x2d0(0x04)

	void SetIdling();
	void RessuplyPodStateDelegate__DelegateSignature(ARessuplyPod* InPod, enum class ERessuplyPodState InState);
	void OnTunnelBLocked();
	void OnRep_State(enum class ERessuplyPodState oldState);
	void OnDropStarted();
	void OnDroppodImpact();
	void OnDroppodCloseToImpact();
	AActor* DropToTarget(UObject* WorldContextObject, ARessuplyPod* podClass, FVector Location, AActor* requester);
};

// Class FSD.FacilityHackingPod
// Size: 0x2e0 (Inherited: 0x2d8)
struct AFacilityHackingPod : ARessuplyPod {
	enum class EHackingPodState PodState; // 0x2d8(0x01)

	void SetState(enum class EHackingPodState aState);
	void OnRep_PodState(enum class EHackingPodState oldState);
	void OnExitState(enum class EHackingPodState oldState);
	void OnEnterState(enum class EHackingPodState NextState);
	enum class EHackingPodState GetState();
};

// Class FSD.FacilityHackingPodAnimInstance
// Size: 0x2a0 (Inherited: 0x270)
struct UFacilityHackingPodAnimInstance : UAnimInstance {
	AActor* SaluteTarget; // 0x270(0x08)
	FRotator LookingDirection; // 0x278(0x0c)
	FRotator TargetRotation; // 0x284(0x0c)
	bool IsHacking; // 0x290(0x01)
	enum class EHackingPodState PodState; // 0x291(0x01)
	float RadarDishAngle; // 0x294(0x04)

	void SetSaluter(AActor* salutingTarget);
	void ResetSaluteTarget();
};

// Class FSD.ItemDispenserAnimInstance
// Size: 0x270 (Inherited: 0x270)
struct UItemDispenserAnimInstance : UAnimInstance {
	bool IsOpen; // 0x268(0x01)
	bool HasItem; // 0x269(0x01)
};

// Class FSD.FacilityTetherDispenserAnimInstnace
// Size: 0x280 (Inherited: 0x270)
struct UFacilityTetherDispenserAnimInstnace : UItemDispenserAnimInstance {
	enum class EHackingPodState PodState; // 0x270(0x01)
	bool ShouldShowDispenser; // 0x271(0x01)
	bool ShouldCloseFromDispenser; // 0x272(0x01)
	bool ShouldShowButton; // 0x273(0x01)
	bool ShouldHideButton; // 0x274(0x01)
};

// Class FSD.FacilityObjective
// Size: 0x2f0 (Inherited: 0x178)
struct UFacilityObjective : UObjective {
	TSoftClassPtr<UObject> generatorClass; // 0x188(0x28)
	TSoftClassPtr<UObject> GeneratorBeaconClass; // 0x1b0(0x28)
	int32_t GeneratorCount; // 0x1d8(0x04)
	int32_t ObjectivesStage; // 0x1dc(0x04)
	TArray<FSubObjective> SubObjectives; // 0x1e0(0x10)
	FDelegate OnFirstEncounterDroneSpawned_Delegate; // 0x1f0(0x10)
	FDelegate OnSecondEncounterDroneSpawned_Delegate; // 0x200(0x10)
	TArray<APawn*> spawnedEnemies; // 0x220(0x10)
	TArray<UEnemyDescriptor*> TurretDescriptors; // 0x238(0x10)
	TArray<UEnemyDescriptor*> GeneratorRoomTurretDescriptors; // 0x248(0x10)
	TArray<UEnemyDescriptor*> EncounterEnemies; // 0x258(0x10)
	float EncounterDifficulty; // 0x268(0x04)
	FRandInterval Diversity; // 0x270(0x10)
	FIRandRange TurretEncountersRange; // 0x280(0x08)
	int32_t MinimumTurretEncounters; // 0x288(0x04)
	FIRandRange TunnelTurretsRange; // 0x28c(0x08)
	TArray<AActor*> SmallGenerators; // 0x298(0x10)
	ATetherStation* mainFacility; // 0x2a8(0x08)
	TArray<int32_t> ShieldGeneratorRooms; // 0x2b0(0x10)
	int32_t MainFacilityRoom; // 0x2c0(0x04)
	TArray<AActor*> ShieldGenerators; // 0x2c8(0x10)
	UResourceData* GoalResource; // 0x2d8(0x08)
	float AmountRequired; // 0x2e0(0x04)
	float AmountCollected; // 0x2e4(0x04)
	int32_t GeneratorsActivated; // 0x2e8(0x04)

	void SpawnFacilityEncounters(AProceduralSetup* setup, UEncounterManager* Encounters, UDebrisPositioning* Positioning);
	TArray<FTransform> SpawnEndBattleTurrets(int32_t amountOfTurrets, AProceduralSetup* setup, UDebrisPositioning* DebrisPositioning, AActor* terrainPlacement, TArray<AActor*> existingTurrets, bool success);
	void SetMainFacility(ATetherStation* mainFacility);
	void SetGeneratorRooms(TArray<int32_t> generatorRoomsIndicies);
	void SecondGeneratorEncounterSpawn(APawn* spawned);
	void Receive_AddEnemies(AProceduralSetup* setup);
	void ProgressCurrentObjective();
	AActor* PlaceObjectInRoom(AProceduralSetup* setup, FRoomNode RoomNode, UDebrisPositioning* Positioning, AActor* placementActor);
	void OnResourceChanged(UCappedResource* Resource, float Amount);
	void OnRep_ObjectivesStage();
	void OnRep_GeneratorsActivated();
	void OnRep_AmountCollected();
	void OnCoreDeposited();
	bool IsSubObjectiveComplete(int32_t objectiveIndex);
	void InitGeneratorCount(int32_t generators);
	FTransform GetTurretGoal(AProceduralSetup* setup, FVector Origin, float idealRange, UDebrisPositioning* DebrisPositioning, AActor* terrainPlacement, bool success);
	TArray<AActor*> GetShieldGenerators();
	int32_t GetShieldGeneratorCount();
	int32_t GetFacilityRoomIndex();
	FVector GetFacilityLocation();
	FSubObjective GetCurrentObjective();
	void GeneratorActivated();
	void FirstGeneratorEncounterSpawn(APawn* spawned);
	void DropOverCharger(AProceduralSetup* setup, int32_t roomIndex, FVector facilityLocation, float idealRange, float idealZDistance, UDebrisPositioning* DebrisPositioning, ARessuplyPod* generatorClass);
	void ChangeObjective();
	void AddShieldGenerator(AActor* charger, int32_t roomIndex);
};

// Class FSD.HackableBuildingObjective
// Size: 0x178 (Inherited: 0x178)
struct UHackableBuildingObjective : UObjective {

	void DropOverCharger(AProceduralSetup* setup, FVector buildingLocation, float idealRange, float idealZDistance, UDebrisPositioning* DebrisPositioning, ARessuplyPod* generatorClass);
};

// Class FSD.FacilityPowerStation
// Size: 0x258 (Inherited: 0x220)
struct AFacilityPowerStation : AActor {
	FMulticastInlineDelegate OnHackingProgressDelegate; // 0x220(0x10)
	FMulticastInlineDelegate OnProgresspointDelegate; // 0x230(0x10)
	float ProgressPoint; // 0x240(0x04)
	int32_t ProgresPointCount; // 0x244(0x04)
	float TimeToDefend; // 0x24c(0x04)
	float Progress; // 0x250(0x04)
	bool IsHacking; // 0x254(0x01)

	void StopHacking();
	void StartHacking();
	void OnRep_Progress();
	void OnRep_IsHacking();
	void OnHackingComplete();
	void OnHackingChanged(bool IsHacking);
	bool IsHacked();
};

// Class FSD.FacilityShieldGenerator
// Size: 0x248 (Inherited: 0x220)
struct AFacilityShieldGenerator : AActor {
	FGameplayTagContainer GameplayTags; // 0x228(0x20)
};

// Class FSD.TentacleBase
// Size: 0x4d0 (Inherited: 0x340)
struct ATentacleBase : AEnemyPawn {
	USplineComponent* SplineComponent; // 0x340(0x08)
	FTransform RestTransform; // 0x350(0x30)
	FTransform LastTransform; // 0x380(0x30)
	FTransform DesiredTransform; // 0x3b0(0x30)
	FTentacleTarget DesiredTarget; // 0x3e0(0x20)
	FVector TargetLocation; // 0x460(0x0c)
	float MovementAlpha; // 0x46c(0x04)
	float HeadMovementDuration; // 0x470(0x04)
	float CanSwayCooldown; // 0x474(0x04)
	FVector2D SwayRange; // 0x478(0x08)
	float NeckBaseTangentLength; // 0x480(0x04)
	FVector NeckBasePositionOffset; // 0x484(0x0c)
	FVector NeckBaseTangentOffset; // 0x490(0x0c)
	float NeckTopTangentLength; // 0x49c(0x04)
	FVector NeckTopPositionOffset; // 0x4a0(0x0c)
	FVector NeckTopTangentOffset; // 0x4ac(0x0c)
	float DurationTentacleRetract; // 0x4b8(0x04)
	float DurationTentacleFoldout; // 0x4bc(0x04)
	USceneComponent* HeadRoot; // 0x4c0(0x08)
	USceneComponent* HeadRotator; // 0x4c8(0x08)

	void Recieve_OnRep_Owner();
	void OnRep_DesiredTarget();
	void MoveHydraHead(FTransform newDesiredTransform, float newCanSwayCooldown, float newHeadMovementDuration, bool UseSpring);
	AStabberVineRoot* GetStabberVineRoot();
	USceneComponent* GetHeadRotator();
	USceneComponent* GetHeadRoot();
};

// Class FSD.FacilityTentacle
// Size: 0x520 (Inherited: 0x4d0)
struct AFacilityTentacle : ATentacleBase {
	float SwaySpeed; // 0x4d8(0x04)
	bool Extended; // 0x4dc(0x01)
	TArray<UAnimMontage*> HitReactions; // 0x4e0(0x10)
	enum class EFacilityTentacleState TentacleState; // 0x4f0(0x01)
	USkeletalMeshComponent* HeadMesh; // 0x4f8(0x08)

	void PlayHitReaction(float Amount);
	void OnStateChanged(enum class EFacilityTentacleState NewState);
	void OnRep_TentacleState();
	bool FindBurrowLocation(UDebrisPositioning* Debris, FVector Origin, float Radius, FVector OutLocation);
};

// Class FSD.FacilityTentacleHeadAnimInstance
// Size: 0x2c0 (Inherited: 0x2c0)
struct UFacilityTentacleHeadAnimInstance : UEnemyAnimInstance {
	bool Searching; // 0x2b8(0x01)
	bool Melee; // 0x2b9(0x01)
	bool RangedAttack; // 0x2ba(0x01)
};

// Class FSD.FacilityTurretController
// Size: 0x388 (Inherited: 0x358)
struct AFacilityTurretController : AFSDAIController {
	UAIPerceptionComponent* Perception; // 0x358(0x08)
	float RememberTargetTime; // 0x378(0x04)
	float RetargetOnAttackChance; // 0x37c(0x04)
	bool RespectAttack; // 0x380(0x01)

	void OnTurretsAttackingChanged(bool IsAttacking);
	void OnTargetRevived();
	void OnTargetDied(UHealthComponentBase* Health);
	void OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus);
};

// Class FSD.FacilityTurret
// Size: 0x458 (Inherited: 0x340)
struct AFacilityTurret : AEnemyPawn {
	USceneComponent* Root; // 0x340(0x08)
	USkeletalMeshComponent* Mesh; // 0x348(0x08)
	UParticleSystemComponent* aimIndicator; // 0x360(0x08)
	UParticleSystemComponent* aimIndicatorLock; // 0x368(0x08)
	float IndicatorActivationDelay; // 0x370(0x04)
	bool FinishAttackIgnoreLoS; // 0x378(0x01)
	bool InvulnerableOnInactive; // 0x379(0x01)
	float FoldOutTime; // 0x37c(0x04)
	USoundCue* EngagedAudio; // 0x388(0x08)
	float Offset; // 0x3b0(0x04)
	float AimAcceleration; // 0x3b4(0x04)
	FRuntimeFloatCurve AimSpeedCurve; // 0x3c0(0x88)
	AActor* CurrentTarget; // 0x448(0x08)
	bool TurretEngaged; // 0x450(0x01)
	bool AlwaysActive; // 0x451(0x01)

	void SetupAimindicator(UParticleSystemComponent* aimIndicator, UParticleSystemComponent* aimIndicatorLock);
	void SetIsAttacking(bool IsAttacking);
	void OnRep_TurretEngaged();
	void OnProjectileSpawned();
	void OnEngagedChanged(bool engaged);
	void OnAttack();
	FRotator GetLookingDirection();
};

// Class FSD.SpinningFacilityturret
// Size: 0x488 (Inherited: 0x458)
struct ASpinningFacilityturret : AFacilityTurret {
	FRotator TargetRotation; // 0x458(0x0c)
	FRandRange AimAtTargetEveryTurn; // 0x464(0x08)
	float TurnCooldown; // 0x46c(0x04)
	float TurnTimer; // 0x470(0x04)
	float Acceptance; // 0x474(0x04)
	float TurnSpeed; // 0x478(0x04)
};

// Class FSD.AimingFacilityTurret
// Size: 0x508 (Inherited: 0x458)
struct AAimingFacilityTurret : AFacilityTurret {
	bool IsLockedOn; // 0x458(0x01)
	float LockOnTime; // 0x480(0x04)
	float BurstInterval; // 0x484(0x04)
	float FireInterval; // 0x488(0x04)
	float TurretRotationSpeed; // 0x48c(0x04)
	float InitialLockonDelay; // 0x490(0x04)
	float RegainLosLockonModifier; // 0x494(0x04)
	float AimZOffset; // 0x498(0x04)
	float TargetLeadingStrength; // 0x49c(0x04)
	float TargetLeadingResponsiveness; // 0x4a0(0x04)
	float RaimainAfterShotTime; // 0x4a4(0x04)
	float TargetLeadingAfterLockonMultiplier; // 0x4a8(0x04)
	float TurningSpeedAfterLockOnMultipier; // 0x4ac(0x04)
	float PreLockonTargetChangeChance; // 0x4b0(0x04)
	float PreLockongTargetChangeRate; // 0x4b4(0x04)
	bool TrackTargetAfterLockon; // 0x4b8(0x01)
	bool ConstantAimAfterLock; // 0x4b9(0x01)
	bool UseTraceForLockOn; // 0x4ba(0x01)
	FInt32Interval BurstCount; // 0x4d8(0x08)

	void OnRep_IsLockedOn();
	void OnLockedOn(bool lockedOn);
};

// Class FSD.FacilityTurretAnimInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct UFacilityTurretAnimInstance : UEnemyAnimInstance {
	FRotator AimRotation; // 0x2b8(0x0c)
	bool IsEngaged; // 0x2c8(0x01)
};

// Class FSD.FadeVisibilitySubSystem
// Size: 0x78 (Inherited: 0x30)
struct UFadeVisibilitySubSystem : UWorldSubsystem {

	void ScalePrimitive(UPrimitiveComponent* Component, FVector StartScale, FVector EndScale, float Duration);
	void ScaleOutPrimitive(UPrimitiveComponent* Component, float Duration);
	void ScaleInPrimitive(UPrimitiveComponent* Component, float Duration);
	void FadeOutLight(ULightComponent* Light, float Duration);
	void FadeInMaterialByName(UMeshComponent* Component, FName Name, FName ParameterName, float Duration);
	void FadeInMaterialByIndex(UMeshComponent* Component, int32_t MaterialIndex, FName ParameterName, float Duration);
	void FadeInLight(ULightComponent* Light, float Duration);
};

// Class FSD.FakeFallComponent
// Size: 0xd8 (Inherited: 0xb0)
struct UFakeFallComponent : UActorComponent {

	void StartFakeFall();
};

// Class FSD.FakeMoverSettings
// Size: 0x90 (Inherited: 0x30)
struct UFakeMoverSettings : UDataAsset {
	enum class DeepPathFinderSize PathfinderColiSize; // 0x30(0x01)
	bool StickToSurface; // 0x31(0x01)
	bool AlignRotationToSurface; // 0x32(0x01)
	float AirFriction; // 0x34(0x04)
	float SurfaceFriction; // 0x38(0x04)
	float Gravity; // 0x3c(0x04)
	float AirGravity; // 0x40(0x04)
	FFakeMoverPropulsion Propulsion; // 0x44(0x14)
	FFakeMoverTarget NearestPlayerInfluence; // 0x58(0x1c)
	FFakeMoverTarget TargetInfluence; // 0x74(0x1c)
};

// Class FSD.FakePhysicsMover
// Size: 0x2c0 (Inherited: 0x220)
struct AFakePhysicsMover : AActor {
	USceneComponent* Root; // 0x220(0x08)
	FFakeMoverState MoverState; // 0x228(0x60)
	FFakeMoveState posVel; // 0x288(0x24)
	UFakeMoverSettings* MoveSettings; // 0x2b0(0x08)
	float SyncTime; // 0x2b8(0x04)

	void Teleport(FVector Pos, FVector Vel);
	void OnRep_PosVel(FFakeMoveState posVel);
	void OnRep_MoveSettings(UFakeMoverSettings* MoveSettings);
	void ApplyImpulse(FVector Impulse);
};

// Class FSD.FallingStateComponent
// Size: 0x1b0 (Inherited: 0x100)
struct UFallingStateComponent : UCharacterStateComponent {
	float FallDamageStartVelocity; // 0x100(0x04)
	float FallDamageModifier; // 0x104(0x04)
	float AutoClimbMinDelay; // 0x108(0x04)
	float AutoClimbLookForwardDistance; // 0x10c(0x04)
	float MaxClimbHeight; // 0x110(0x04)
	float MinClimbHeight; // 0x114(0x04)
	float CapsuleCheckZOffset; // 0x118(0x04)
	float MinInputDotProduct; // 0x11c(0x04)
	float JumpZVelocity; // 0x120(0x04)
	bool DebugAutoClimb; // 0x124(0x01)
	UDialogDataAsset* FallingShout; // 0x128(0x08)
	float ShoutAfterDistance; // 0x130(0x04)
	UUseAnimationSetting* ClimbUseSettings; // 0x138(0x08)
	float HoverBootAirFriction; // 0x16c(0x04)
	float HoverBootAirControl; // 0x170(0x04)
	float HoverBootGravityScale; // 0x174(0x04)
	UDialogDataAsset* ShoutHoverBootsBegin; // 0x178(0x08)
	float HoverBootActivateDuration; // 0x180(0x04)
	bool bHoverBootsActive; // 0x184(0x01)
	float HoverBootMaxDuration; // 0x188(0x04)
	FVector2D JumpBootsVelocityWindow; // 0x18c(0x08)
	float JumpBootsZVelocity; // 0x194(0x04)
	bool JumpBootsActive; // 0x1a0(0x01)

	void ShowJumpBootsActivation();
	void Server_TakeFallDamage(float Amount);
	void Server_ShowFallImpact(UFSDPhysicalMaterial* PhysMat);
	void Server_SetJumpPressed(bool Pressed);
	void Server_SetHoverBootsPressed(bool IsPressed);
	void Server_SetFallVelocity(float Velocity);
	void Server_ClimbLedge(bool shouldPlayAnimation);
	void Server_ActivateJumpBoots();
	void ReceiveHoverBootsTick(float DeltaSeconds);
	void ReceiveHoverBootsActiveChanged(bool IsActive);
	void OnRep_HoverBootsActive();
	void JumpReleased();
	void JumpPressed();
	void HoverBootsReleased();
	void HoverBootsPressed();
	void All_ShowJumpBootsActivation();
	void All_ShowFallImpact(UFSDPhysicalMaterial* PhysMat);
	void All_ShowClimbLedge();
};

// Class FSD.FindFriendSessionsBlueprintCallProxy
// Size: 0x80 (Inherited: 0x30)
struct UFindFriendSessionsBlueprintCallProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	UObject* WorldContextObject; // 0x50(0x08)

	UFindFriendSessionsBlueprintCallProxy* FindFriendSessions(UObject* WorldContextObject, FString FriendId);
};

// Class FSD.FirstPersonSkeletalMeshComponent
// Size: 0xac0 (Inherited: 0xac0)
struct UFirstPersonSkeletalMeshComponent : USkeletalMeshComponent {

	FVector CalcFirstPersonFOVPositionCorrection(APlayerController* PlayerController, FVector origPos);
};

// Class FSD.FirstPersonStaticMeshComponent
// Size: 0x490 (Inherited: 0x480)
struct UFirstPersonStaticMeshComponent : UStaticMeshComponent {
	bool EnabledFPFOV; // 0x480(0x01)
};

// Class FSD.FirstPersonWidgetComponent
// Size: 0x540 (Inherited: 0x540)
struct UFirstPersonWidgetComponent : UWidgetComponent {
};

// Class FSD.FirstPersonParticleSystemComponent
// Size: 0x650 (Inherited: 0x650)
struct UFirstPersonParticleSystemComponent : UParticleSystemComponent {

	UParticleSystemComponent* SpawnFirstPersonEmitterAttached(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, enum class EAttachLocation LocationType, bool bAutoDestroy);
};

// Class FSD.FirstPersonNiagaraComponent
// Size: 0x5a0 (Inherited: 0x5a0)
struct UFirstPersonNiagaraComponent : UNiagaraComponent {

	UNiagaraComponent* SpawnFirstPersonEmitterAttached(UNiagaraSystem* inNiagaraSystem, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, enum class EAttachLocation LocationType, bool inAutoDestroy);
};

// Class FSD.FirstPersonPointLightComponent
// Size: 0x350 (Inherited: 0x350)
struct UFirstPersonPointLightComponent : UPointLightComponent {
};

// Class FSD.FlameThrowerItem
// Size: 0x8a8 (Inherited: 0x6d8)
struct AFlameThrowerItem : AAmmoDrivenWeapon {
	UParticleSystemComponent* FlameParticleComponent; // 0x6d8(0x08)
	UDamageComponent* DamageComponent; // 0x6e0(0x08)
	UStickyFlameSpawner* StickyFlames; // 0x6e8(0x08)
	UDamageComponent* AoEHeatDamageComponent; // 0x6f0(0x08)
	UDamageComponent* ExplodingTargetsDamageComponent; // 0x6f8(0x08)
	UMotionAudioController* MotionAudio; // 0x700(0x08)
	int32_t ShotCostProjectile; // 0x708(0x04)
	FDecalData ImpactDecal; // 0x710(0x18)
	float DecalDelay; // 0x728(0x04)
	float CurrentDecalDelay; // 0x72c(0x04)
	UParticleSystem* ImpactParticles; // 0x730(0x08)
	UParticleSystemComponent* ImpactParticleInstance; // 0x738(0x08)
	UParticleSystem* FP_LongReachParticles; // 0x740(0x08)
	UParticleSystem* TP_LongReachParticles; // 0x748(0x08)
	float VeryLongReachThreshold; // 0x750(0x04)
	UParticleSystem* FP_VeryLongReachParticles; // 0x758(0x08)
	UParticleSystem* TP_VeryLongReachParticles; // 0x760(0x08)
	TArray<FName> FlameParameterNames; // 0x768(0x10)
	float DamageSphereRadius; // 0x778(0x04)
	float MaxFlameDistance; // 0x77c(0x04)
	float FlameGrowthPerSecond; // 0x780(0x04)
	float FlameEndPointResponsiveness; // 0x784(0x04)
	float FlameIntensityPerSecond; // 0x788(0x04)
	UStatusEffect* OnFireStatusEffect; // 0x790(0x08)
	float ChanceToFleeOnDamage; // 0x798(0x04)
	float MeltPointRadius; // 0x79c(0x04)
	float MeltPointBuildTime; // 0x7a0(0x04)
	float MeltCarveTime; // 0x7a4(0x04)
	UParticleSystem* MeltSteamParticle; // 0x7a8(0x08)
	TArray<UItemUpgrade*> upgrades; // 0x7b0(0x10)
	bool LongReachEnabled; // 0x7c0(0x01)
	bool AoEHeatEnabled; // 0x7d0(0x01)
	float KilledTargetsExplosionChance; // 0x7d4(0x04)
	float ShowDamageParticle; // 0x7d8(0x04)
	UParticleSystem* DamangeTargetsParticles; // 0x7e0(0x08)
	UParticleSystem* KilledTargetsExplodingParticles; // 0x7e8(0x08)
	USoundCue* KilledTargetsExplodingSound; // 0x7f0(0x08)
	UProjectileLauncherBaseComponent* ProjectileLancher; // 0x7f8(0x08)

	void TriggerAoEHeat();
	void ServerMeltIce(TArray<FVector> meltPoints);
	void ServerDoDamage(FVector_NetQuantize Start, FVector_NetQuantize End);
	void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat);
	void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UFSDPhysicalMaterial* PhysicalMaterial);
	void All_ShowTargetBurstIntoFire(FVector_NetQuantize Location, FRotator Rotation);
	void All_FlameFeedback(FVector_NetQuantize Location, FRotator Rotation);
};

// Class FSD.FlameWallProjectile
// Size: 0x360 (Inherited: 0x338)
struct AFlameWallProjectile : AProjectile {
	AFlameWallSegment* SegmentParticleClass; // 0x338(0x08)
	int32_t SegmentCount; // 0x340(0x04)
	float WallWidth; // 0x344(0x04)
	AActor* ImpactClass; // 0x348(0x08)
};

// Class FSD.FlameWallSegment
// Size: 0x228 (Inherited: 0x220)
struct AFlameWallSegment : AActor {
	USphereComponent* CollisionComponent; // 0x220(0x08)
};

// Class FSD.Flare
// Size: 0x2c0 (Inherited: 0x238)
struct AFlare : AFSDPhysicsActor {
	float InitialSpeed; // 0x258(0x04)
	float InitialAngularImpulse; // 0x25c(0x04)
	float InitialAngularImpulseRandomScale; // 0x260(0x04)
	int32_t MaxFlares; // 0x264(0x04)
	float ProductionTime; // 0x268(0x04)
	float Duration; // 0x26c(0x04)
	FLinearColor ChromaColor; // 0x270(0x10)
	bool IsFlareOn; // 0x280(0x01)
	AActor* DamageCauser; // 0x288(0x08)
	AActor* WeaponPreviewClass; // 0x290(0x08)
	AItem* LoadoutItem; // 0x298(0x08)
	UItemID* ItemID; // 0x2a8(0x08)
	USoundCue* ImpactGroundSound; // 0x2b0(0x08)

	void OnUpdateShadowRadius();
	void OnRep_IsFlareOn();
	void OnFlareSpawnCompleted();
	void OnFlareIgnite();
	void OnFlareExtinguish();
	void Inhibit();
	AActor* GetWeaponViewClass();
	AFlare* GetFlareDefaultObject(AFlare* flareClass);
	void ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult Hit);
	void ActivateFlare();
};

// Class FSD.FlareGunProjectile
// Size: 0x348 (Inherited: 0x338)
struct AFlareGunProjectile : AProjectile {
	float Duration; // 0x338(0x04)
	bool IsFlareOn; // 0x33c(0x01)

	void OnUpdateShadowRadius();
	void OnRep_IsFlareOn();
	void OnFlareIgnite();
	void OnFlareExtinguish();
	void OnDroppodImpact(AMiningPod* DropPod);
	void Inhibit();
	void ActivateFlare();
};

// Class FSD.FlareController
// Size: 0xd8 (Inherited: 0xb0)
struct UFlareController : UActorComponent {
	FMulticastInlineDelegate OnShadowQualityChanged; // 0xb0(0x10)
	TArray<FFlareMeta> FlaresMeta; // 0xc0(0x10)

	void UnregisterFlareGunProjectile(AFlareGunProjectile* flareprj);
	void UnregisterFlare(AFlare* Flare);
	void RegisterFlareGunProjectile(AFlareGunProjectile* flareprj);
	void RegisterFlare(AFlare* Flare);
	AActor* FindFlareNear(UObject* WorldContextObject, FVector Pos, bool allowMoving, float maxLightRadiusFraction);
};

// Class FSD.NegPointLightComponent
// Size: 0x350 (Inherited: 0x350)
struct UNegPointLightComponent : UPointLightComponent {
};

// Class FSD.PerkAsset
// Size: 0xc8 (Inherited: 0x30)
struct UPerkAsset : UDataAsset {
	FGuid SaveGameID; // 0x30(0x10)
	FText Title; // 0x40(0x18)
	UTexture2D* Icon; // 0x58(0x08)
	bool bIsEquippable; // 0x60(0x01)
	UDialogDataAsset* ShoutOnUseCharge; // 0x68(0x08)
	TArray<TSoftClassPtr<UObject>> PerkLogicClasses; // 0x70(0x10)
	TSoftClassPtr<UObject> HudIconWidgetClass; // 0x80(0x28)
	TArray<TSoftClassPtr<UObject>> HudActivationWidgets; // 0xa8(0x10)
	int32_t MaxUseCharges; // 0xb8(0x04)
	float CoolDownBetweenUse; // 0xbc(0x04)
	bool bIsHighlighted; // 0xc0(0x01)

	bool UseCharge(APlayerController* PlayerController);
	bool Unequip(UObject* WorldContext, UPlayerCharacterID* characterID);
	void SetHighlighted(UObject* WorldContext, bool IsHighlighted);
	void SetCharacterPerks(UObject* WorldContext, UPlayerCharacterID* characterID, TArray<UPerkAsset*> perks);
	bool IsUsageType(enum class EPerkUsageType InType);
	bool IsPerkAvailableInTier(int32_t Tier);
	bool IsEquippedBy(UObject* WorldContext, UPlayerCharacterID* characterID);
	float GetUseCoolDownTimeLeft(APlayerController* PlayerController);
	float GetUseCoolDownProgress(APlayerController* PlayerController);
	float GetUseCoolDownDuration(APlayerController* PlayerController);
	enum class EPerkUsageType GetUsageType();
	enum class EPerkTierState GetStateAtTier(UObject* WorldContext, int32_t Tier);
	int32_t GetRemainingUseCharges(APlayerController* PlayerController);
	int32_t GetRankTier(int32_t Rank);
	FText GetRankDescription(int32_t Rank);
	int32_t GetRankCost(int32_t Rank);
	bool GetRankAtTier(int32_t Tier, int32_t Rank);
	int32_t GetMaxUseCharges(APlayerController* PlayerController);
	UPerkHUDIconWidget* GetHudIconWidgetClass();
	TArray<UPerkHUDActivationWidget*> GetHudActivationWidgets(enum class EPerkHUDActivationLocation Location);
	UPerkDelegateItem* GetDelegates(UObject* WorldContext);
	int32_t GetCurrentRank(UObject* WorldContext);
	int32_t GetChargesUsed(APlayerController* PlayerController);
	FString GetAdditionalRankDescription(int32_t Rank);
	bool Equip(UObject* WorldContext, UPlayerCharacterID* characterID);
	bool CanUseCharge(APlayerController* PlayerController);
	bool BuyPerkAtTier(UObject* WorldContext, int32_t Tier);
};

// Class FSD.FloatPerkAsset
// Size: 0xe8 (Inherited: 0xc8)
struct UFloatPerkAsset : UPerkAsset {
	TArray<FFloatPerkRank> Ranks; // 0xc8(0x10)
	TArray<FFloatPerkEffect> Effects; // 0xd8(0x10)

	float GetPerkValue(UObject* WorldContext);
	float GetLastTierValue();
	float GetFloatPerkValue(UObject* WorldContext, UFloatPerkAsset* Perk, float UnclaimedValue);
};

// Class FSD.FloatPerkActivation
// Size: 0x30 (Inherited: 0x30)
struct UFloatPerkActivation : UDataAsset {

	void Receive_ActivatePerk(APlayerCharacter* Character, float Value);
};

// Class FSD.StatPerkActivation
// Size: 0x40 (Inherited: 0x30)
struct UStatPerkActivation : UFloatPerkActivation {
	UPawnStat* PawnStat; // 0x30(0x08)
	enum class EPawnStatType StatType; // 0x38(0x01)
};

// Class FSD.FloatPerkComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UFloatPerkComponent : UActorComponent {
	float FloatValue; // 0xb0(0x04)
	APlayerCharacter* PlayerCharacter; // 0xb8(0x08)

	void Receive_OnInitialized();
};

// Class FSD.CreateComponentPerkActivation
// Size: 0x58 (Inherited: 0x30)
struct UCreateComponentPerkActivation : UFloatPerkActivation {
	TSoftClassPtr<UObject> ComponentClass; // 0x30(0x28)
};

// Class FSD.EscapableGrabberEnemyActivation
// Size: 0x58 (Inherited: 0x30)
struct UEscapableGrabberEnemyActivation : UFloatPerkActivation {
	TSoftClassPtr<UObject> EnemyGrabberClass; // 0x30(0x28)
};

// Class FSD.SetCooldownPerkActivation
// Size: 0x30 (Inherited: 0x30)
struct USetCooldownPerkActivation : UFloatPerkActivation {
};

// Class FSD.SetMaxUsesPerkActivation
// Size: 0x30 (Inherited: 0x30)
struct USetMaxUsesPerkActivation : UFloatPerkActivation {
};

// Class FSD.KillNearbyCreaturePerkComponent
// Size: 0xe8 (Inherited: 0xc0)
struct UKillNearbyCreaturePerkComponent : UFloatPerkComponent {
	TSoftClassPtr<UObject> EnemyClass; // 0xc0(0x28)
};

// Class FSD.BezerkPerkComponent
// Size: 0xd0 (Inherited: 0xc0)
struct UBezerkPerkComponent : UFloatPerkComponent {
	UPawnStat* BoostedStat; // 0xc0(0x08)
	float AmountPerValue; // 0xc8(0x04)

	void OnHealthChanged(float Health);
};

// Class FSD.EyeForEyePerkComponent
// Size: 0x100 (Inherited: 0xc0)
struct UEyeForEyePerkComponent : UFloatPerkComponent {
	float CoolDown; // 0xc0(0x04)
	TSoftClassPtr<UObject> EyeForEyeSTE; // 0xc8(0x28)
	UStatusEffect* LoadedSTE; // 0xf8(0x08)

	void OnHit(float Damage, UDamageClass* inDamageClass, AActor* DamageCauser, bool anyHealthLost);
};

// Class FSD.ThornsPerkComponent
// Size: 0xe0 (Inherited: 0xc0)
struct UThornsPerkComponent : UFloatPerkComponent {
	UDamageClass* DamageClass; // 0xc0(0x08)
	float CoolDown; // 0xc8(0x04)
	UStatusEffect* ThornsSTE; // 0xd0(0x08)

	void OnHit(float Damage, UDamageClass* inDamageClass, AActor* DamageCauser, bool anyHealthLost);
};

// Class FSD.SalutePerkComponent
// Size: 0xd0 (Inherited: 0xc0)
struct USalutePerkComponent : UFloatPerkComponent {
	float CoolDown; // 0xc0(0x04)
	float FleeRadius; // 0xc4(0x04)

	void OnSalute();
};

// Class FSD.ShieldLinkComponent
// Size: 0x138 (Inherited: 0xc0)
struct UShieldLinkComponent : UFloatPerkComponent {
	UStatusEffect* BoostedStatusEffect; // 0xc0(0x08)
	UStatusEffect* BoostedStatusEffectInstance; // 0xc8(0x08)
	float LinkDistance; // 0xd0(0x04)
	TSet<APlayerCharacter*> LinkedCharacters; // 0xd8(0x50)
	UStatusEffect* LinkStatusEffect; // 0x128(0x08)

	void TimerFunction();
};

// Class FSD.BeastMasterComponent
// Size: 0xc8 (Inherited: 0xc0)
struct UBeastMasterComponent : UFloatPerkComponent {
	bool ShowCanCharmIcon; // 0xc0(0x01)

	void SetDamage(UDamageComponent* cmp, float dmg);
	UActorComponent* AddPetComponent(UActorComponent* ComponentClass, AFSDPawn* targetPet, APlayerCharacter* petOwner);
};

// Class FSD.PetComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UPetComponent : UActorComponent {
	TWeakObjectPtr<APlayerCharacter> OwningPlayer; // 0xb0(0x08)

	void ReceiveOwningPlayerChanged();
};

// Class FSD.BeastMasterUseSphere
// Size: 0x410 (Inherited: 0x410)
struct UBeastMasterUseSphere : USphereComponent {
};

// Class FSD.FloodFillSettings
// Size: 0x68 (Inherited: 0x30)
struct UFloodFillSettings : UDataAsset {
	FVector NoiseSize; // 0x30(0x0c)
	float FreqMultiplier; // 0x3c(0x04)
	float AmplitudeMultiplier; // 0x40(0x04)
	float MinValue; // 0x44(0x04)
	float MaxValue; // 0x48(0x04)
	bool Turbulence; // 0x4c(0x01)
	bool Invert; // 0x4d(0x01)
	int32_t Octaves; // 0x50(0x04)
	TArray<FLayeredNoise> NoiseLayers; // 0x58(0x10)
};

// Class FSD.DetailNoise
// Size: 0x70 (Inherited: 0x68)
struct UDetailNoise : UFloodFillSettings {
	float NoiseRange; // 0x68(0x04)
};

// Class FSD.FlyingStateComponent
// Size: 0x100 (Inherited: 0x100)
struct UFlyingStateComponent : UCharacterStateComponent {
};

// Class FSD.ForgingFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UForgingFunctionLibrary : UBlueprintFunctionLibrary {

	void SortSchematicDelegate__DelegateSignature(USchematic* Schematic1, USchematic* Schematic2, bool FirstIsLarger);
	USchematic* GiveForginMasteryReward(UObject* WorldContextObject);
	bool GiveForgingXP(UObject* WorldContextObject);
	TArray<USchematic*> GetOwnedSchematicsSorted(UObject* WorldContextObject, bool SmallestFirst, FDelegate IsLargerThan);
	TArray<USchematic*> GetOwnedSchematics(UObject* WorldContextObject);
	enum class ESchematicType GetNextForgingMasterRewardType(UObject* WorldContextObject);
	int32_t GetForgingXP(UObject* WorldContextObject);
	float GetForgingLevelProgress(UObject* WorldContextObject);
	int32_t GetForgingLevel(UObject* WorldContextObject);
	TArray<USchematic*> GetForgedSchematics(UObject* WorldContextObject);
	TArray<USchematic*> GetAllSchematicsSorted(UObject* WorldContextObject, bool SmallestFirst, FDelegate IsLargerThan);
	TArray<USchematic*> GetAllSchematics(UObject* WorldContextObject);
};

// Class FSD.FormationData
// Size: 0xd0 (Inherited: 0x30)
struct UFormationData : UDataAsset {
	TArray<FFormationDataItem> FormationItems; // 0x30(0x10)
	FGameplayTagQuery LeaderQuery; // 0x40(0x48)
	FGameplayTagQuery MemberQuery; // 0x88(0x48)
};

// Class FSD.GroundFormationData
// Size: 0xe0 (Inherited: 0xd0)
struct UGroundFormationData : UFormationData {
	int32_t FormationSize; // 0xd0(0x04)
	float FormationSpread; // 0xd4(0x04)
	float RandomSpread; // 0xd8(0x04)
};

// Class FSD.FlyingFormationData
// Size: 0xe0 (Inherited: 0xd0)
struct UFlyingFormationData : UFormationData {
	int32_t FormationSize; // 0xd0(0x04)
	float FormationSpread; // 0xd4(0x04)
	float RandomSpread; // 0xd8(0x04)
};

// Class FSD.FormationsManagerComponent
// Size: 0xd8 (Inherited: 0xb0)
struct UFormationsManagerComponent : UActorComponent {
	UEnemySpawnManager* SpawnManager; // 0xb0(0x08)
	TArray<UFormationData*> FormationData; // 0xb8(0x10)
};

// Class FSD.FragileDebrisCleaner
// Size: 0x200 (Inherited: 0x1f0)
struct UFragileDebrisCleaner : USceneComponent {
	float CleanRadius; // 0x1f0(0x04)
};

// Class FSD.FriendlyHealthComponent
// Size: 0x288 (Inherited: 0x248)
struct UFriendlyHealthComponent : UHealthComponent {
	float MaxHealth; // 0x24c(0x04)
	float friendlyFireModifier; // 0x250(0x04)
	float NeutralDamageModifier; // 0x254(0x04)
	float BigHitDamageModifier; // 0x258(0x04)
	float BigHitDamageReductionThreshold; // 0x25c(0x04)
	UParticleSystem* GenericImpactParticles; // 0x260(0x08)

	float GetMaxHealth();
};

// Class FSD.FrozenStateComponent
// Size: 0x130 (Inherited: 0x100)
struct UFrozenStateComponent : UCharacterStateComponent {
	FRandRange DeFrostAmount; // 0x100(0x08)
	USoundBase* AudioFreeFromIce; // 0x108(0x08)
	UFSDPhysicalMaterial* IcePhysicalMaterial; // 0x110(0x08)
	UFSDPhysicalMaterial* DwarfFleshMaterial; // 0x118(0x08)
	float SlowAnimationSpeed; // 0x124(0x04)

	void Server_ThawPlayer();
	void ReceiveOnDefrosting();
};

// Class FSD.FSDAchievement
// Size: 0x158 (Inherited: 0x58)
struct UFSDAchievement : USavableDataAsset {
	FString SteamAPIAchievementName; // 0x88(0x10)
	FString SteamAPIStatName; // 0x98(0x10)
	FString XboxAchievementID; // 0xa8(0x10)
	float AchievementTargetValue; // 0xb8(0x04)
	enum class EFSDAchievementType AchievementType; // 0xc0(0x01)

	void SetAchievementProgressForEntireServer(float Progress, UObject* WorldContext);
	void SetAchievementProgress(float Progress, AFSDPlayerController* Player, UObject* WorldContext);
	void ResetStatForAchievement(UFSDAchievement* AchievementToReset, AFSDPlayerController* Player);
	float GetAchievementTargetValue();
};

// Class FSD.AchievementList
// Size: 0x1a0 (Inherited: 0x30)
struct UAchievementList : UDataAsset {
	UFSDAchievement* WeakspotAchievement; // 0x30(0x08)
	UFSDAchievement* MissionTimeAchievement; // 0x38(0x08)
	UFSDAchievement* MissionHosterAchievement; // 0x40(0x08)
	UFSDAchievement* RollerCoasterAchievement; // 0x48(0x08)
	UFSDAchievement* DrillByShootingAchievement; // 0x50(0x08)
	UFSDAchievement* BarrelKickerAchievement; // 0x58(0x08)
	UFSDAchievement* Hazard3CompletedAchievement; // 0x60(0x08)
	UFSDAchievement* Hazard3StreakAchievement; // 0x68(0x08)
	UFSDAchievement* Hazard4CompletedAchievement; // 0x70(0x08)
	UFSDAchievement* Hazard4StreakAchievement; // 0x78(0x08)
	UFSDAchievement* Hazard5CompletedAchievement; // 0x80(0x08)
	UFSDAchievement* Hazard5StreakAchievement; // 0x88(0x08)
	UFSDAchievement* Hazard3NoKillNoSupplyAchievement; // 0x90(0x08)
	UFSDAchievement* Hazard4NoKillNoSupplyAchievement; // 0x98(0x08)
	UFSDAchievement* Hazard5NoKillNoSupplyAchievement; // 0xa0(0x08)
	UFSDAchievement* PlayedWithLowerRankAchievement; // 0xa8(0x08)
	UFSDAchievement* MilestoneAchievementPerfMatters; // 0xb0(0x08)
	UFSDAchievement* MilestoneAchievement; // 0xb8(0x08)
	UFSDAchievement* OwnedPerkAchievement; // 0xc0(0x08)
	UFSDAchievement* MovingOnUpAchievement; // 0xc8(0x08)
	UFSDAchievement* CorporateClimberAchievement; // 0xd0(0x08)
	UFSDAchievement* HatTrickAchievement; // 0xd8(0x08)
	UFSDAchievement* FullTeamAchievement; // 0xe0(0x08)
	UFSDAchievement* SilverTierEmployeeAchievement; // 0xe8(0x08)
	UFSDAchievement* ProTeamAchievement; // 0xf0(0x08)
	UFSDAchievement* GoldTierEmployeeAchievement; // 0xf8(0x08)
	UFSDAchievement* LegendaryTeamAchievement; // 0x100(0x08)
	UFSDAchievement* AllVanityEquippedAchievement; // 0x108(0x08)
	UFSDAchievement* MoustacheBuyerAchievement; // 0x110(0x08)
	UFSDAchievement* MutatorAchievement; // 0x118(0x08)
	UFSDAchievement* StateOfTheArtAchievement; // 0x120(0x08)
	UFSDAchievement* ExploringMyOptionsAchievement; // 0x128(0x08)
	UFSDAchievement* AdvancedRoboticsAchievement; // 0x130(0x08)
	UFSDAchievement* WithoutAPaddleAchievement; // 0x138(0x08)
	UFSDAchievement* FirstMissionCompleted; // 0x140(0x08)
	UFSDAchievement* HundredMissionsCompleted; // 0x148(0x08)
	UFSDAchievement* TenSoloMissionsCompleted; // 0x150(0x08)
	UFSDAchievement* SupplyPodsCalledStat; // 0x158(0x08)
	UFSDAchievement* LootbugsKilledStat; // 0x160(0x08)
	UFSDAchievement* PraetoriansKilledStat; // 0x168(0x08)
	UFSDAchievement* NormalDeepDiveCompleted; // 0x170(0x08)
	UFSDAchievement* EliteDeepDiveCompleted; // 0x178(0x08)
	UFSDAchievement* DeepDiveCompletedUnderTime; // 0x180(0x08)
	UFSDAchievement* DeepDivesCompleted; // 0x188(0x08)
	TArray<UFSDAchievement*> AllAchievements; // 0x190(0x10)
};

// Class FSD.FSDAdvancedLabel
// Size: 0x268 (Inherited: 0x230)
struct UFSDAdvancedLabel : UUserWidget {
	FText FormattedText; // 0x230(0x18)
	FText ControllerOverrideText; // 0x248(0x18)
	bool UpperCase; // 0x260(0x01)
	enum class EFSDInputSource PreviewAs; // 0x261(0x01)

	void SetText(FText NewText, FText OverrideControllerText);
	void SetAlwaysShowAs(enum class EFSDInputSource InPreferredSource);
	void Refresh();
	void OnReset();
	void OnNewLine(int32_t Index);
	void OnLanguageChanged(FString NewCulture);
	void OnInputSourceChanged(enum class EFSDInputSource Source);
	void OnAddString(FString Value);
	void OnAddKeyName(FString Name);
	void OnAddIcon(FString Name, FActionIconMapping Icon);
	FText GetText();
	bool GetIsDesignTime();
	enum class EFSDInputSource GetCurrentInputSource();
	UTextBlock* CreateTextBlock(FString Text, FSlateFontInfo InFontInfo, FLinearColor Color);
	UImage* CreateImageSized(UTexture2D* Texture, int32_t Width, int32_t Height);
	UImage* CreateImage(UTexture2D* Texture, bool MatchSize);
	UHorizontalBox* CreateHorizontalBox();
};

// Class FSD.GamepadCursorSettings
// Size: 0x48 (Inherited: 0x38)
struct UGamepadCursorSettings : UDeveloperSettings {
	float MaxSpeed; // 0x38(0x04)
	float Acceleration; // 0x3c(0x04)
	float StickySlowDown; // 0x40(0x04)
	float DeadZone; // 0x44(0x04)
};

// Class FSD.FSDAnimNotify_PlaySound
// Size: 0x58 (Inherited: 0x58)
struct UFSDAnimNotify_PlaySound : UAnimNotify_PlaySound {
};

// Class FSD.AnimNotify_PlaySound2D
// Size: 0x48 (Inherited: 0x38)
struct UAnimNotify_PlaySound2D : UAnimNotify {
	USoundBase* Sound; // 0x38(0x08)
	float VolumeMultiplier; // 0x40(0x04)
	float PitchMultiplier; // 0x44(0x04)
};

// Class FSD.AnimNotifyState_PlaySound
// Size: 0x58 (Inherited: 0x30)
struct UAnimNotifyState_PlaySound : UAnimNotifyState {
	USoundCue* Sound; // 0x30(0x08)
	FName SocketName; // 0x38(0x08)
	FVector LocationOffset; // 0x40(0x0c)
	FRotator RotationOffset; // 0x4c(0x0c)
};

// Class FSD.AnimNotify_FSDPlayParticleEffect
// Size: 0x90 (Inherited: 0x38)
struct UAnimNotify_FSDPlayParticleEffect : UAnimNotify {
	UFXSystemAsset* PSTemplate; // 0x38(0x08)
	FVector LocationOffset; // 0x40(0x0c)
	FRotator RotationOffset; // 0x4c(0x0c)
	bool AlwaysZUp; // 0x58(0x01)
	FVector Scale; // 0x5c(0x0c)
	char Attached : 1; // 0x80(0x01)
	FName SocketName; // 0x84(0x08)
	bool IsFirstPerson; // 0x8c(0x01)
	bool UseTerainMaterial; // 0x8d(0x01)
};

// Class FSD.AnimNotifyState_FSDTimedNiagaraEffect
// Size: 0x60 (Inherited: 0x30)
struct UAnimNotifyState_FSDTimedNiagaraEffect : UAnimNotifyState {
	UNiagaraSystem* Template; // 0x30(0x08)
	FName SocketName; // 0x38(0x08)
	FVector LocationOffset; // 0x40(0x0c)
	FRotator RotationOffset; // 0x4c(0x0c)
	bool IsFirstPerson; // 0x58(0x01)
	bool bDestroyAtEnd; // 0x59(0x01)
};

// Class FSD.EnemyPlaySoundKey
// Size: 0x30 (Inherited: 0x30)
struct UEnemyPlaySoundKey : UDataAsset {
};

// Class FSD.EnemyPlaySoundByKeyAnimNotify
// Size: 0x58 (Inherited: 0x38)
struct UEnemyPlaySoundByKeyAnimNotify : UAnimNotify {
	UEnemyPlaySoundKey* SoundKey; // 0x38(0x08)
	float VolumeMultiplier; // 0x40(0x04)
	float PitchMultiplier; // 0x44(0x04)
	char bFollow : 1; // 0x48(0x01)
	FName AttachName; // 0x4c(0x08)
};

// Class FSD.AnimNotify_PushSoundMix
// Size: 0x48 (Inherited: 0x38)
struct UAnimNotify_PushSoundMix : UAnimNotify {
	USoundMix* SoundMix; // 0x38(0x08)
	float MaxDistance; // 0x40(0x04)
};

// Class FSD.AnimNotifyState_SoundMix
// Size: 0x40 (Inherited: 0x30)
struct UAnimNotifyState_SoundMix : UAnimNotifyState {
	USoundMix* SoundMix; // 0x30(0x08)
	float MaxDistance; // 0x38(0x04)
};

// Class FSD.EnemySpawnEffectsKey
// Size: 0x30 (Inherited: 0x30)
struct UEnemySpawnEffectsKey : UDataAsset {
};

// Class FSD.EnemySpawnEffectsByKeyAnimNotify
// Size: 0x50 (Inherited: 0x38)
struct UEnemySpawnEffectsByKeyAnimNotify : UAnimNotify {
	UEnemySpawnEffectsKey* EffectKey; // 0x38(0x08)
	char Attached : 1; // 0x40(0x01)
	FName SocketName; // 0x44(0x08)
};

// Class FSD.AnimNotifyState_EnemyPlaySoundByKey
// Size: 0x60 (Inherited: 0x30)
struct UAnimNotifyState_EnemyPlaySoundByKey : UAnimNotifyState {
	UEnemyPlaySoundKey* SoundKey; // 0x30(0x08)
	float FadeOut; // 0x38(0x04)
	FName SocketName; // 0x3c(0x08)
	FVector LocationOffset; // 0x44(0x0c)
	FRotator RotationOffset; // 0x50(0x0c)
};

// Class FSD.AnimNotify_CameraShake
// Size: 0x50 (Inherited: 0x38)
struct UAnimNotify_CameraShake : UAnimNotify {
	float InnerRadius; // 0x38(0x04)
	float OuterRadius; // 0x3c(0x04)
	bool ControllerOnly; // 0x40(0x01)
	UCameraShake* CameraShake; // 0x48(0x08)
};

// Class FSD.AnimNotify_Shout
// Size: 0x48 (Inherited: 0x38)
struct UAnimNotify_Shout : UAnimNotify {
	UDialogDataAsset* Shout; // 0x38(0x08)
	bool ShoutNetworked; // 0x40(0x01)
	float LocalShoutVolumeMultiplier; // 0x44(0x04)
};

// Class FSD.AnimNotify_FootStep
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_FootStep : UAnimNotify {
	bool IsLeft; // 0x38(0x01)
};

// Class FSD.AnimNotify_MessageOwner
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_MessageOwner : UAnimNotify {
	FName Message; // 0x38(0x08)
};

// Class FSD.AnimNotify_TerrainFootStep
// Size: 0x48 (Inherited: 0x38)
struct UAnimNotify_TerrainFootStep : UAnimNotify {
	UParticleSystem* ParticleTemplate; // 0x38(0x08)
	FName BoneName; // 0x40(0x08)
};

// Class FSD.AnimNotify_SpawnActor
// Size: 0x60 (Inherited: 0x38)
struct UAnimNotify_SpawnActor : UAnimNotify {
	AActor* Actor; // 0x38(0x08)
	FName SocketName; // 0x40(0x08)
	FVector LocationOffset; // 0x48(0x0c)
	FRotator RotationOffset; // 0x54(0x0c)
};

// Class FSD.AnimNotify_HideBones
// Size: 0x48 (Inherited: 0x38)
struct UAnimNotify_HideBones : UAnimNotify {
	TArray<FName> TargetBoneNames; // 0x38(0x10)
};

// Class FSD.AnimNotify_HideBone
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_HideBone : UAnimNotify {
	FName BoneName; // 0x38(0x08)
};

// Class FSD.AnimNotify_UnHideBone
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_UnHideBone : UAnimNotify {
	FName BoneName; // 0x38(0x08)
};

// Class FSD.CopyBoneVisibilityCompleted
// Size: 0x28 (Inherited: 0x28)
struct UCopyBoneVisibilityCompleted : UInterface {

	void CopyBoneVisibilityCompleted(int32_t BoneIndex);
};

// Class FSD.AnimNotify_CopyBoneVisibility
// Size: 0x58 (Inherited: 0x38)
struct UAnimNotify_CopyBoneVisibility : UAnimNotify {
	FName SourceBoneName; // 0x38(0x08)
	TArray<FName> TargetBoneNames; // 0x40(0x10)
	bool HideSourceBone; // 0x50(0x01)
};

// Class FSD.AnimNotifyState_SpawnMesh
// Size: 0x68 (Inherited: 0x30)
struct UAnimNotifyState_SpawnMesh : UAnimNotifyState {
	UStaticMesh* Mesh; // 0x30(0x08)
	bool UseFirstPersonComponent; // 0x38(0x01)
	FName SocketName; // 0x3c(0x08)
	FVector ScaleOverride; // 0x44(0x0c)
	FVector LocationOffset; // 0x50(0x0c)
	FRotator RotationOffset; // 0x5c(0x0c)
};

// Class FSD.AnimNotifyState_SpawnSkeletalMesh
// Size: 0x70 (Inherited: 0x30)
struct UAnimNotifyState_SpawnSkeletalMesh : UAnimNotifyState {
	USkeletalMesh* Mesh; // 0x30(0x08)
	UAnimSequenceBase* AnimationToPlay; // 0x38(0x08)
	bool UseFirstPersonComponent; // 0x40(0x01)
	FName SocketName; // 0x44(0x08)
	FVector ScaleOverride; // 0x4c(0x0c)
	FVector LocationOffset; // 0x58(0x0c)
	FRotator RotationOffset; // 0x64(0x0c)
};

// Class FSD.AnimNotifyState_SpawnSkinnedMesh
// Size: 0x58 (Inherited: 0x30)
struct UAnimNotifyState_SpawnSkinnedMesh : UAnimNotifyState {
	enum class EItemCategory ItemCategory; // 0x30(0x01)
	bool UseFirstPersonComponent; // 0x31(0x01)
	FName SocketName; // 0x34(0x08)
	FVector LocationOffset; // 0x3c(0x0c)
	FRotator RotationOffset; // 0x48(0x0c)
};

// Class FSD.AnimNotifyState_HideBone
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotifyState_HideBone : UAnimNotifyState {
	FName BoneName; // 0x30(0x08)
};

// Class FSD.AnimNotifyState_Salute
// Size: 0x40 (Inherited: 0x30)
struct UAnimNotifyState_Salute : UAnimNotifyState {
	FName BoneName; // 0x30(0x08)
	bool FirstPerson; // 0x38(0x01)
};

// Class FSD.AnimNotifyState_InputWindow
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_InputWindow : UAnimNotifyState {
};

// Class FSD.SpawnReleasedActor
// Size: 0x28 (Inherited: 0x28)
struct USpawnReleasedActor : UInterface {

	bool Released();
	bool Attached(AActor* Parent);
};

// Class FSD.AnimNotifyState_SpawnAndReleaseActor
// Size: 0x58 (Inherited: 0x30)
struct UAnimNotifyState_SpawnAndReleaseActor : UAnimNotifyState {
	AActor* Actor; // 0x30(0x08)
	FName SocketName; // 0x38(0x08)
	FVector LocationOffset; // 0x40(0x0c)
	FRotator RotationOffset; // 0x4c(0x0c)
};

// Class FSD.AnimNotifyState_HideEquippedItem
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_HideEquippedItem : UAnimNotifyState {
};

// Class FSD.AnimNotifyState_OverrideItemOffset
// Size: 0x40 (Inherited: 0x30)
struct UAnimNotifyState_OverrideItemOffset : UAnimNotifyState {
	FVector CameraOffset; // 0x30(0x0c)
};

// Class FSD.AnimNotifyState_WeaponReload
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_WeaponReload : UAnimNotifyState {
};

// Class FSD.AnimNotifyState_ConstrainItem
// Size: 0x40 (Inherited: 0x30)
struct UAnimNotifyState_ConstrainItem : UAnimNotifyState {
	FName OldConstraint; // 0x30(0x08)
	FName NewConstraint; // 0x38(0x08)
};

// Class FSD.GameAnimationsSettings
// Size: 0x68 (Inherited: 0x38)
struct UGameAnimationsSettings : UDeveloperSettings {
	FSoftObjectPath FootstepTestingSound; // 0x38(0x18)
	FSoftObjectPath FootstepTestingParticles; // 0x50(0x18)
};

// Class FSD.DynamicMeshScaler
// Size: 0xc0 (Inherited: 0xb0)
struct UDynamicMeshScaler : UActorComponent {
};

// Class FSD.AnimNotifyState_TimedParticleEffectWithImpactDecals
// Size: 0x80 (Inherited: 0x60)
struct UAnimNotifyState_TimedParticleEffectWithImpactDecals : UAnimNotifyState_TimedParticleEffect {
	UMaterialInterface* DecalMaterial; // 0x60(0x08)
	float DecalSize; // 0x68(0x04)
	float FadeStartDelay; // 0x6c(0x04)
	float FadeDuration; // 0x70(0x04)

	void OnParticleCollision(FName EventName, float EmitterTime, int32_t ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat);
};

// Class FSD.FSDAnimationFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFSDAnimationFunctionLibrary : UBlueprintFunctionLibrary {

	float GetAnimSequenceLength(UAnimSequence* AnimSequence);
};

// Class FSD.FSDAssetManager
// Size: 0x438 (Inherited: 0x438)
struct UFSDAssetManager : UAssetManager {
};

// Class FSD.FSDAudioComponent
// Size: 0x7e0 (Inherited: 0x7d0)
struct UFSDAudioComponent : UAudioComponent {
};

// Class FSD.FSDBehaviorTreeComponent
// Size: 0x270 (Inherited: 0x270)
struct UFSDBehaviorTreeComponent : UBehaviorTreeComponent {
};

// Class FSD.FSDCheatManager
// Size: 0xa8 (Inherited: 0x78)
struct UFSDCheatManager : UCheatManager {
	int32_t RoomJumpCount; // 0x78(0x04)
	float PreviousMaxDistanceBeforeCleanup; // 0x7c(0x04)
	bool UnlimitedScoutFlareDuration; // 0x80(0x01)
	FMulticastInlineDelegate ToggleHoopGameMovement; // 0x88(0x10)
	AActor* SpawnPosMarker; // 0x98(0x08)
	bool EscortShowSmartRockDebug; // 0xa0(0x01)
	bool IsUsingSavedCheats; // 0xa1(0x01)

	void SwitchCharacter(UPlayerCharacterID* characterID);
	void SpawnEnemies(UEnemyDescriptor* desscriptor, int32_t count);
	void SpawnCritters(UBaseCritterDescriptor* descriptor, int32_t count);
	void SpawnBosco(TSoftClassPtr<UObject> droneClass, AFSDAIController* aControllerClass);
	void ShowTutorialDebug();
	void SetStandingDown(bool standingDown);
	void SetSpawnEnemies(bool SpawnEnemies);
	bool SetSavedCheatValue(FName CheatName, int32_t ValueToSet);
	void SetQuadPickAxe(bool quad);
	void SetHUDVisible(bool ShowHUD);
	void SetGodMode(bool God);
	void SetFastMovement(bool fast);
	void ResetTutorials();
	void ResetSpacerigIntroMessage();
	void R_RemoveResources(int32_t Number);
	void R_RemoveCredits(int32_t Number);
	void R_AddSeasonToken(int32_t Number);
	void R_AddResources_Player(float Number);
	void R_AddResources(float Number);
	void R_AddPerkPoints(int32_t Amount);
	void R_AddNitra(float Amount);
	void R_AddMorkite(float Amount);
	void R_AddMatrixCores(int32_t Number);
	void R_AddHollomite(float Amount);
	void R_AddGold(float Amount);
	void R_AddDystrum(float Amount);
	void R_AddCredits(int32_t Number);
	void R_AddCraftingResource(int32_t Amount, int32_t Type);
	void R_Add_BitterGem(int32_t Amount);
	void R_Add_Aquarq(int32_t Amount);
	bool IsInGodMode();
	bool GetSavedCheatValue(FName CheatName, int32_t ValueToGet);
	void GetListOfRoomNames(TArray<FString> roomNames);
	void DestroyAllInstances(AActor* destroy);
	void D_MovieModeStartWithCameraShake(bool Value);
	void D_MovieModeStartAtOrigin(bool Value);
	void D_EnableMovieModeInSpacerig(bool Value);
	void D_EnableMovieMode(bool Value);
	void Cheat_UnlockAllWeapons(UObject* WorldContextObject);
	void Cheat_UnlockAllUpgrades(UObject* WorldContextObject);
	void Cheat_UnlockAll_Poses(UObject* WorldContextObject);
	void Cheat_UnlockAll_Beers(UObject* WorldContextObject);
	void Cheat_SetSpawnPosMarker(AActor* Actor);
	void Cheat_SetHealth(float newHealthValue, APlayerCharacter* Player);
	void Cheat_Schematic_UnlockAll(UObject* WorldContextObject);
	void Cheat_Schematic_ResetAll(UObject* WorldContextObject);
	void Cheat_Schematic_GiveRandom(UObject* WorldContextObject);
	void Cheat_Schematic_ForgeAll(UObject* WorldContextObject);
	void Cheat_Resources(UObject* WorldContextObject, float Amount);
	void Cheat_ResetEquippedUpgrades(UObject* WorldContextObject);
	void Cheat_RemoveResources(UObject* WorldContextObject, int32_t Amount);
	void Cheat_PickAxeVanity_UnlockAll(UObject* WorldContextObject);
	void Cheat_PickAxeVanity_ResetAll(UObject* WorldContextObject);
	void Cheat_MinersManual_ShowAll(UObject* WorldContextObject);
	void Cheat_GenerateNewMissionSeed(UObject* WorldContextObject, bool Enabled);
	void Cheat_ForceTreasure(UObject* WorldContextObject);
	void Cheat_ForceLostPack(UObject* WorldContextObject);
	void Cheat_DeepDives_Refresh(UObject* WorldContextObject);
	void Cheat_Campaign_Complete(UObject* WorldContextObject);
	void Cheat_Campaign_Advance(UObject* WorldContextObject);
	void Cheat_AddXP(UObject* WorldContextObject, int32_t Amount);
	void Cheat_AddPerkPoints(UObject* WorldContextObject, int32_t Amount);
	void Cheat_AddCredits(UObject* WorldContextObject, int32_t Amount);
	void C_Windows_PrintStack();
	void C_Windows_CloseAll();
	void C_UnlockOverclocking();
	void C_UnlockAll_WeaponUpgrades();
	void C_UnlockAll_WeaponSkins_Paintjobs();
	void C_UnlockAll_WeaponSkins_Frameworks();
	void C_UnlockAll_WeaponSkins();
	void C_UnlockAll_Weapons();
	void C_UnlockAll_StoreVanity();
	void C_UnlockAll_Poses_ForAll();
	void C_UnlockAll_Poses();
	void C_UnlockAll_PickaxeParts();
	void C_UnlockAll_Perks();
	void C_UnlockAll_Drinks();
	void C_UnlockAll_Beers();
	void C_UnlockAll_ArmorMats();
	void C_UnlockAll();
	void C_Unlock_Facility();
	void C_Treasures_Track(bool Track);
	void C_Treasures_Reward(int32_t count);
	void C_ToggleHoopGameMovement();
	void C_ToggleFadingEnabled();
	void C_ToggleFadingDebug();
	void C_ToggleCanShowBlood();
	void C_StopMovement(bool shouldMove);
	void C_SpawnScriptedWaveIndex(int32_t Index);
	void C_SpawnScriptedWave();
	void C_SpawnNormalWave();
	void C_SpawnEvenRewarder();
	void C_SpawnBarrelOnPlayer(int32_t Amount);
	void C_SetUseSavedCheatsByDefault(bool useSavedCheats);
	void C_SetTestMission(int32_t missionIndex);
	void C_SetSavedCheats();
	void C_SetPlayers(int32_t Number);
	void C_SetHealth(float Health);
	void C_SetFlyMode(bool flyEnabled);
	void C_SetFastFlares();
	void C_SetEnglish(int32_t Val);
	void C_SetDancing(bool shouldDance);
	void C_SetAmmoCostEnabled(bool Enabled);
	void C_Seasons_ResetXP();
	void C_Seasons_ResetTreeOfVanity();
	void C_Seasons_ResetToken();
	void C_Seasons_ResetReroll();
	void C_Seasons_IncrementChallenge(int32_t Index);
	void C_Seasons_CompleteScripChallenge(int32_t Number);
	void C_Seasons_ClearChallenges();
	void C_Seasons_ClearAllProgress();
	void C_Seasons_AddXP(int32_t Number);
	void C_Seasons_AddChallenge();
	void C_ScoutFlareInfiniteDuration(bool Enabled);
	void C_Schematics_UnlockAll();
	void C_Schematics_ResetAll();
	void C_Schematics_ForgeAll();
	void C_Schematics_ClearHasSeenFirstMessage();
	void C_Schematic_GiveRandom();
	void C_Revive();
	void C_Resupply();
	void C_ResetSteamAchievementStats();
	void C_ResetForgingXP();
	void C_ResetCheatedResources(int32_t newAmount);
	void C_ResetAll_Vanity();
	void C_ResetAchievements();
	void C_Reset_YearTwoGifts();
	void C_Reset_WeaponSkinsAndUpgrades();
	void C_Reset_WeaponSkins_Paintjobs();
	void C_Reset_WeaponSkins_Framworks();
	void C_Reset_WeaponSkins();
	void C_Reset_PickaxeParts();
	void C_Reset_Perks();
	void C_Reset_MinersManual();
	void C_Reset_EnemyKillCount();
	void C_Reset_Drinks();
	void C_RemovePlayerRanks(int32_t Number);
	void C_RemoveAllWidgets();
	void C_RefreshDailyDeal(int32_t Seed);
	void C_Refinery_BreakPipes();
	void C_RecordMode();
	void C_Promotion_SetLevelSpecific(APlayerCharacter* onCharacter, int32_t Number);
	void C_Promotion_SetLevel(int32_t Number);
	void C_Promotion_SetCampaignComplete();
	void C_Promotion_ClearRewardsSeen();
	void C_ProjectileDrawPaths();
	void C_ProjectileDebugPrintToggle();
	void C_MissionMap_TestDistribution();
	void C_MissionMap_ForceWarning(int32_t Index);
	void C_MissionMap_ForceAnomaly(int32_t Index);
	void C_MissionMap_DoubleWarning(int32_t indexA, int32_t indexB);
	void C_MinersManual_EnableWorkInProgress(UObject* WorldContextObject);
	void C_MachineEvents_Track(bool Track);
	void C_MachineEvents_FinishCurrent();
	void C_LevelUpCharacter(int32_t Amount);
	void C_KillAll();
	void C_JumpToNextRoom();
	void C_IncrementAllMissionStats(int32_t Amount);
	void C_GodMode();
	void C_GiveAllGenericHeroItems();
	void C_GameDLC_ResetAnnouncements();
	void C_FSDEvent_SetDebugEvent(FString EventName);
	void C_FSDEvent_ClearSeenRewards();
	void C_FixedPLSSeed(int32_t Seed);
	void C_FixedMissionSeed(int32_t Seed);
	void C_FailMission();
	void C_FadeFromBlack(UObject* WorldContextObject);
	void C_Facility_DisableShields();
	void C_Escort_ShowSmartRockDebug(bool shouldShow);
	void C_Escort_SetMuleSpeed(UObject* WorldContextObject, float Speed);
	void C_Escort_JumpToNextPhase(UObject* WorldContextObject);
	void C_Escort_AddOilShale(int32_t Number);
	void C_DeepDives_UnlockAll();
	void C_DeepDives_SetSeed(int32_t Seed);
	void C_DeepDives_Reset();
	void C_DeepDives_Refresh();
	void C_DeepDives_List();
	void C_CompleteObjectives();
	void C_CompleteMission();
	void C_ClearAllMissionStats();
	void C_ClearAllMilestones();
	void C_ChangeIntoxication(int32_t Percent);
	void C_Campaign_ResetProgress();
	void C_Campaign_ResetCompleted();
	void C_Campaign_CompleteMain();
	void C_Campaign_CompleteCurrent();
	void C_Campaign_Advance();
	void C_AutoRotateMissionMap(bool Enabled);
	void C_AddXP(int32_t Number);
	void C_AddUncappedXP(int32_t Amount);
	void C_AddForgingXP(int32_t Number);
	void AddResourceToTeamDeposit(UResourceData* Resource, float Amount);
};

// Class FSD.FSDCloudLoadSave
// Size: 0x78 (Inherited: 0x28)
struct UFSDCloudLoadSave : UObject {
	FMulticastInlineDelegate OnCloudLoadAll; // 0x28(0x10)
	FMulticastInlineDelegate OnCloudLoadAllFailed; // 0x38(0x10)
	int32_t NumFailedSaves; // 0x48(0x04)

	void StartCloudLoadAll(UObject* WorldContextObject, int32_t Index, int32_t Offset);
};

// Class FSD.FSDConversionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFSDConversionLibrary : UBlueprintFunctionLibrary {

	FVector_NetQuantizeNormal VectorToNetQuantizeNormal(FVector Vec);
	FVector_NetQuantize VectorToNetQuantize(FVector Vec);
	FVector QuatToVector(FQuat Quat);
	FRotator QuatToRotator(FQuat Quat);
	FVector_NetQuantizeNormal QuadToNetQuantizeNormal(FQuat Quat);
	FVector ComponentToWorldLocation(USceneComponent* Component);
	FVector ActorToWorldLocation(AActor* Actor);
};

// Class FSD.FSDCreateSessionCallbackProxy
// Size: 0x98 (Inherited: 0x30)
struct UFSDCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)

	UFSDCreateSessionCallbackProxy* FSDCreateSession(UObject* WorldContextObject, APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN, bool bFriendsOnly);
};

// Class FSD.FSDCustomDPIScalingRule
// Size: 0x28 (Inherited: 0x28)
struct UFSDCustomDPIScalingRule : UDPICustomScalingRule {
};

// Class FSD.FSDEvent
// Size: 0x100 (Inherited: 0x30)
struct UFSDEvent : UDataAsset {
	FMulticastInlineDelegate OnActiveChanged; // 0x30(0x10)
	FName EventName; // 0x40(0x08)
	FGuid SaveGameID; // 0x48(0x10)
	bool bHasClaimableRewards; // 0x58(0x01)
	bool bFreeBeerEvent; // 0x59(0x01)
	TArray<TSoftClassPtr<UObject>> EventDebris; // 0x60(0x10)
	TArray<TSoftObjectPtr<UWorld>> SpacerigSublevels; // 0x70(0x10)
	FClaimableRewardView ClaimableRewards; // 0x80(0x70)
	TArray<TSoftClassPtr<UObject>> Campaigns; // 0xf0(0x10)

	void MarkClaimableRewardsSeen(UObject* WorldContext);
	bool IsFsdEventActive(UObject* WorldContext, UFSDEvent* FSDEvent);
	bool HasUnseenClaimableRewards(UObject* WorldContext);
	bool GiveRewards(APlayerController* PlayerController);
	bool GetIsActive(UObject* WorldContext);
};

// Class FSD.FSDEventCollection
// Size: 0x90 (Inherited: 0x30)
struct UFSDEventCollection : UDataAsset {
	TSet<UFSDEvent*> Events; // 0x30(0x50)
	FMulticastInlineDelegate OnEventActiveChanged; // 0x80(0x10)

	UFSDEvent* FindEventHandler(FName EventName);
	TArray<UFSDEvent*> FindAllEventHandlers(FName EventName);
};

// Class FSD.FSDEventManager
// Size: 0x120 (Inherited: 0x30)
struct UFSDEventManager : UGameInstanceSubsystem {
	FMulticastInlineDelegate OnFSDEventsRefresh; // 0x30(0x10)
	FMulticastInlineDelegate OnEventActiveChanged; // 0x40(0x10)
	TSet<FName> PendingActiveEvents; // 0x50(0x50)
	TSet<FName> ActiveEvents; // 0xa0(0x50)
	int32_t NumFailedRequests; // 0xf0(0x04)
	bool BackendDataValid; // 0xf4(0x01)
	FDateTime LastRequestTime; // 0xf8(0x08)
	float NextCheckTime; // 0x100(0x04)

	bool IsEventActive(UFSDEvent* FSDEvent);
	TArray<UFSDEvent*> GetActiveEventHandlers();
	void FSDEventsRefreshDelegate__DelegateSignature();
	bool FSDEventsReady();
};

// Class FSD.FSDFindSessionsCallbackProxy
// Size: 0xb0 (Inherited: 0x30)
struct UFSDFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	FMulticastInlineDelegate OnRefresh; // 0x50(0x10)
	UObject* WorldContextObject; // 0x98(0x08)
	UFSDFindSteamSessions* FSDFindSteamSessions; // 0xa0(0x08)

	void OnFSDCompleted(bool bSuccess, TArray<FBlueprintSessionResult> Results);
	void ManualRefreshServerList();
	UFSDFindSessionsCallbackProxy* FSDFindSessions(UObject* WorldContextObject, APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN);
	UFSDFindSessionsCallbackProxy* FSDFindFullSessions(UObject* WorldContextObject, APlayerController* PlayerController, int32_t MaxResults);
};

// Class FSD.FSDFindSteamSessions
// Size: 0x40 (Inherited: 0x28)
struct UFSDFindSteamSessions : UObject {
	FMulticastInlineDelegate OnFindResult; // 0x28(0x10)
};

// Class FSD.FSDFlyingBugController
// Size: 0x390 (Inherited: 0x358)
struct AFSDFlyingBugController : AFSDAIController {
	UBehaviorTree* BehaviourTree; // 0x370(0x08)
	float UpdateLosInterval; // 0x380(0x04)
	bool SetTargetOnAlert; // 0x384(0x01)
	bool SyncTargetWithBB; // 0x385(0x01)

	void OnFlyingBugAlerted();
};

// Class FSD.DashingFlyingBugController
// Size: 0x390 (Inherited: 0x390)
struct ADashingFlyingBugController : AFSDFlyingBugController {
};

// Class FSD.FSDFriendsAndInvites
// Size: 0x78 (Inherited: 0x28)
struct UFSDFriendsAndInvites : UObject {
	FMulticastInlineDelegate OnFriendsChanged; // 0x28(0x10)
	FMulticastInlineDelegate OnFriendInvitesChanged; // 0x38(0x10)
	FMulticastInlineDelegate OnRequestRefresh; // 0x48(0x10)
	TArray<FBlueprintFriend> Friends; // 0x58(0x10)
	TArray<FBlueprintFriend> FriendInvites; // 0x68(0x10)

	void Init();
};

// Class FSD.MissionResultInfo
// Size: 0xa8 (Inherited: 0x28)
struct UMissionResultInfo : UObject {
	bool HasInfo; // 0x28(0x01)
	float MissionTime; // 0x2c(0x04)
	float MissionTotalHazBonus; // 0x30(0x04)
	FText MissionHazName; // 0x38(0x18)
	float MissionHazBonus; // 0x50(0x04)
	float ComplexityBonus; // 0x54(0x04)
	int32_t ComplexityDots; // 0x58(0x04)
	float LenghtBonus; // 0x5c(0x04)
	int32_t LenghtDots; // 0x60(0x04)
	TArray<FText> WarningTitles; // 0x68(0x10)
	TArray<UTexture2D*> WarningIcons; // 0x78(0x10)
	TArray<float> WarningBonusses; // 0x88(0x10)
	float TotalCreditsSum; // 0x98(0x04)
	float TotalXPSum; // 0x9c(0x04)
	bool WasSuccess; // 0xa0(0x01)

	float GetWarningBonusSum();
};

// Class FSD.CampaignNotification
// Size: 0x40 (Inherited: 0x28)
struct UCampaignNotification : UObject {
	UCampaign* Campaign; // 0x28(0x08)
	UCampaignMission* mission; // 0x30(0x08)
	int32_t Progress; // 0x38(0x04)
	bool bIsCampaignCompleted; // 0x3c(0x01)
};

// Class FSD.FSDGameInstance
// Size: 0xe70 (Inherited: 0x198)
struct UFSDGameInstance : UGameInstance {
	FMulticastInlineDelegate OnTemporaryBuffChanged; // 0x1a0(0x10)
	FMulticastInlineDelegate OnGameSettingsChanged; // 0x1b0(0x10)
	FMulticastInlineDelegate OnGraphicsSettingsChanged; // 0x1c0(0x10)
	FMulticastInlineDelegate OnPressStart; // 0x1d0(0x10)
	FMulticastInlineDelegate OnJoinPendingInvite; // 0x1e0(0x10)
	FMulticastInlineDelegate OnSkinChangedEvent; // 0x1f0(0x10)
	FMulticastInlineDelegate OnLoaderStart; // 0x200(0x10)
	FMulticastInlineDelegate OnPlayLevelSequenceInCharacterWorld; // 0x210(0x10)
	FMulticastInlineDelegate OnLoaderStop; // 0x220(0x10)
	FMulticastInlineDelegate OnCharacterSelectionStart; // 0x230(0x10)
	FMulticastInlineDelegate OnStartForging; // 0x240(0x10)
	FMulticastInlineDelegate OnForgingDone; // 0x250(0x10)
	FMulticastInlineDelegate OnCharacterSelectionStop; // 0x260(0x10)
	FMulticastInlineDelegate OnShowCharacterSelectionRefresh; // 0x270(0x10)
	FMulticastInlineDelegate OnTutorialManagerSet; // 0x280(0x10)
	FMulticastInlineDelegate OnLocalPlayerCharacterSet; // 0x290(0x10)
	FMulticastInlineDelegate OnShowReconnectScreen; // 0x2a0(0x10)
	FMulticastInlineDelegate OnXBoxAccountPickerClosed; // 0x2b0(0x10)
	FMulticastInlineDelegate OnXBoxChangeUser; // 0x2c0(0x10)
	FMulticastInlineDelegate OnHDRGammaChanged; // 0x2d0(0x10)
	FMulticastInlineDelegate OnGravityChanged; // 0x2e0(0x10)
	FMulticastInlineDelegate OnNewPostProcessingManager; // 0x2f0(0x10)
	FMulticastInlineDelegate OnPreviewSkinChanged; // 0x300(0x10)
	bool ShowingReconnectScreen; // 0x310(0x01)
	FPendingRewards PendingMissionRewards; // 0x318(0x190)
	TArray<FClaimableRewardEntry> PendingPromotionRewards; // 0x4a8(0x10)
	TWeakObjectPtr<UMouseCursorWidget> MouseCursorWidget; // 0x4b8(0x08)
	FMulticastInlineDelegate OnShowCharacterSelector; // 0x4c0(0x10)
	FMulticastInlineDelegate OnShowViewer3D; // 0x4d0(0x10)
	FMulticastInlineDelegate OnShowCharacterSelectorEquipSlot; // 0x4e0(0x10)
	FMulticastInlineDelegate OnShowCharacterSelectorEquip; // 0x4f0(0x10)
	FMulticastInlineDelegate OnShowCharacterSelectorRotate; // 0x500(0x10)
	FMulticastInlineDelegate OnShowEndScreen; // 0x510(0x10)
	AProceduralSetup* ProceduralSetup; // 0x520(0x08)
	bool HasStartedAMission; // 0x528(0x01)
	FString FSDPassword; // 0x530(0x10)
	bool FSDPrivateServer; // 0x540(0x01)
	bool SoloSession; // 0x541(0x01)
	bool IsJoiningInvite; // 0x542(0x01)
	bool FirstTimeInFrontend; // 0x543(0x01)
	bool SessionFirstStartOnSpaceRig; // 0x544(0x01)
	bool ShowFirstCharacterSelector; // 0x545(0x01)
	bool ShowSaveWarning; // 0x546(0x01)
	AActor* WorldViewTargetDummy; // 0x548(0x08)
	UMissionResultInfo* MissionResultInfo; // 0x550(0x08)
	bool LoaderSequencePlaying; // 0x558(0x01)
	FString LastPerksLoadout; // 0x560(0x10)
	AActor* CharacterSelectionLastViewTarget; // 0x570(0x08)
	bool HasSeenInfoScreen; // 0x578(0x01)
	FTransform CharacterSelectionViewTargetTransform; // 0x580(0x30)
	FTransform LoaderViewTargetTransform; // 0x5b0(0x30)
	FMulticastInlineDelegate OnGeneratedMissionChanged; // 0x5e0(0x10)
	FGameStateSeamlessTravelStorage GameStateSeamlessTravelStorage; // 0x5f0(0x150)
	FMulticastInlineDelegate OnDonkeyChanged; // 0x740(0x10)
	TWeakObjectPtr<AMolly> Donkey; // 0x750(0x08)
	FMulticastInlineDelegate OnBoscoChanged; // 0x758(0x10)
	bool DEBUGSpawnRandomMissions; // 0x768(0x01)
	int32_t DEBUGFixedPLSSeed; // 0x770(0x04)
	int32_t DEBUGSeedOverride; // 0x784(0x04)
	bool CanPlayOnline; // 0x788(0x01)
	bool CanCommunicateOnline; // 0x789(0x01)
	FMulticastInlineDelegate OnSteamSearchRegionChanged; // 0x790(0x10)
	FMulticastInlineDelegate OnSteamServerJoinStatusChanged; // 0x7a0(0x10)
	FMulticastInlineDelegate OnStartSearchForFriendsComplete; // 0x7b0(0x10)
	TMap<FString, FString> FriendSessions; // 0x7c0(0x50)
	FMulticastInlineDelegate OnNewSpaceRigNotification; // 0x810(0x10)
	UGoogleAnalyticsWrapper* GoogleAnalyticsWI; // 0x828(0x08)
	USpecialEvent* ForcedSpecialEvent; // 0x830(0x08)
	bool ShowMinerManualWorkInProgress; // 0x83a(0x01)
	FMulticastInlineDelegate OnCampaignNotification; // 0x840(0x10)
	FMulticastInlineDelegate OnMinersManualNotification; // 0x850(0x10)
	FMulticastInlineDelegate OnNewHUDWarning; // 0x860(0x10)
	float LastDreadnaughtKillTime; // 0x8b8(0x04)
	TWeakObjectPtr<UWindowWidget> ActiveEscapeMenu; // 0x8bc(0x08)
	UCampaignNotification* CampaignNotification; // 0x8c8(0x08)
	TWeakObjectPtr<APostProcessingManager> PostProcessingManager; // 0x8e0(0x08)
	FFadeData Fading; // 0x8e8(0x48)
	TArray<FSpaceRigNotification> SpaceRigNotifications; // 0x930(0x10)
	TWeakObjectPtr<ABosco> Drone; // 0x940(0x08)
	TWeakObjectPtr<APlayerCharacter> LocalPlayerCharacter; // 0x948(0x08)
	TWeakObjectPtr<ATutorialManager> TutorialManager; // 0x950(0x08)
	ACharacterSelectionSwitcher* CharacterSelectionSwitcher; // 0x958(0x08)
	bool bGameSettingsChanged; // 0x960(0x01)
	FFSDServerSearchOptions ServerSearchOptions; // 0x968(0x50)
	bool ServerSearchActive; // 0x9b8(0x01)
	FMulticastInlineDelegate OnPrivilegeCheckComplete; // 0x9d0(0x10)
	bool IsOnPressStartScreen; // 0x9f0(0x01)
	bool HasSeenStartScreen; // 0x9f1(0x01)
	AProceduralSetup* ProceduralLevel; // 0x9f8(0x08)
	UIconGenerationManager* IconGenerationManagerClass; // 0xa00(0x08)
	UIconGenerationManager* IconGenerationManager; // 0xa08(0x08)
	UCampaignManager* CampaignManager; // 0xa18(0x08)
	UDeepDiveManager* DeepDiveManager; // 0xa20(0x08)
	UGeneratedMission* GeneratedMission; // 0xa28(0x08)
	UDifficultySetting* DesiredDifficulty; // 0xa30(0x08)
	UFSDSaveGame* SaveGame; // 0xa38(0x08)
	enum class EDisconnectReason DisconnectReason; // 0xa40(0x01)
	TArray<UWorld*> AlwaysLoadedWorlds; // 0xa48(0x10)
	bool ShowCharacterSelectionWorld; // 0xa58(0x01)
	AActor* Viewer3DClass; // 0xa60(0x08)
	bool ShowLoaderWorld; // 0xa68(0x01)
	bool CharacterSelectionWorldActive; // 0xa69(0x01)
	bool MixerInteractivityEnabled; // 0xa6a(0x01)
	bool LoaderWorldActive; // 0xa6b(0x01)
	bool ResetHUDWhenReturning; // 0xa6c(0x01)
	bool MovieModeActive; // 0xa6d(0x01)
	bool MovieModeActiveInSpacerig; // 0xa6e(0x01)
	bool MovieModeStartAtOrigin; // 0xa6f(0x01)
	bool MovieModeStartWithCameraShake; // 0xa70(0x01)
	USchematic* ActiveForgeSchematic; // 0xa78(0x08)
	UFSDCloudLoadSave* FSDCloudLoadSave; // 0xa80(0x08)
	UFSDSessionUpdater* SessionUpdater; // 0xa88(0x08)
	UFSDSendToURL* SendToURL; // 0xa90(0x08)
	UFSDFriendsAndInvites* FriendsAndInvites; // 0xa98(0x08)
	double SessionStartTime; // 0xaa0(0x08)
	int32_t SessionStartTimestamp; // 0xaa8(0x04)
	float InKBytesPerSecond; // 0xaac(0x04)
	float OutKBytesPerSecond; // 0xab0(0x04)
	bool PreSpawnNigaraParticles; // 0xab4(0x01)
	UTemporaryBuff* TemporaryBuff; // 0xab8(0x08)
	TSoftObjectPtr<ULevelSequence> NextLoaderSequence; // 0xac0(0x28)
	enum class EAlwaysLoadedWorlds NextLoaderLevel; // 0xae8(0x01)
	TSoftObjectPtr<ULevelSequence> DeepDiveLoaderSequence; // 0xaf0(0x28)
	TSoftObjectPtr<ULevelSequence> DeepDiveLoaderSequence2; // 0xb18(0x28)
	USoundSubmix* ControllerVibrationSubmix; // 0xb50(0x08)
	USoundSubmix* ControllerSpeakerSubmix; // 0xb58(0x08)

	void UpdateGlobelMissionSeed();
	void StopPhotographyInputProcessor();
	void StopPersonalAnalytics();
	void SteamServerJoinStatusDelegate__DelegateSignature(enum class ESteamServerJoinStatus Status);
	void SteamSearchRegionDelegate__DelegateSignature(enum class ESteamSearchRegion Region);
	void StartPhotographyInputProcessor();
	void StartPersonalAnalytics();
	AProceduralSetup* SpawnProcedural();
	bool ShouldPendingRewardsBeShown();
	bool ShouldPendingRewardsBeGiven();
	void SetViewer3DClass(AActor* NewClass, enum class ECharselectionCameraLocation Location);
	void SetSteamServerJoinStatus(enum class ESteamServerJoinStatus NewStatus);
	void SetSteamSearchRegion(enum class ESteamSearchRegion NewRegion);
	void SetServerSearchOptions(FFSDServerSearchOptions options);
	void SetServerSearchActive(bool Active);
	void SetSelectedMission(UGeneratedMission* mission, bool updateSessionSettings);
	void SetProceduralMap(AProceduralSetup* procedural);
	void SetPendingInviteJoinModding(FBlueprintSessionResult Result);
	void SetMinersManualNotification(enum class EMinersManualSection Section, UObject* IdentifyingObject, FText Text);
	void SetLoaderWorldVisible(bool V, bool resetHud);
	void SetIsUsingOnlineFeatures(bool bIsOnlineFeatureUsed);
	void SetHasSeenInfoScreen();
	void SetFSDPassword(FString pw);
	void SetEligableForRetirementAssignment(bool eligable);
	void SetCharacterSelectionWorldVisible(bool V, enum class ECharselectionCameraLocation cameraLocation, bool resetHud, enum class ECharacterSelectorItemStatus itemStatus);
	void SetCharacterSelectionSwitcher(ACharacterSelectionSwitcher* switcher);
	void SendSteamInfo();
	void ScheduleResetOfWorldsAndGameDataThenOpenLevel(FName LevelName);
	void RestoreCursors();
	void ResetViewer3DClass();
	void ResetSaveGame();
	void ResetAlwaysLoadedWorldsAndGameData();
	void RemoveRemporaryBuff();
	void RemoveBosco();
	void RefreshIsGameModded();
	void PostInit(bool reload);
	void PairingUsePreviousProfile();
	void PairingUseNewProfile();
	void OnStartSearchForFriendsComplete__DelegateSignature(bool bWasSuccessful, FString ErrorStr);
	void OnNewFSDSessionID(FString sessionId);
	void OnNetworkFailure(UWorld* World, UNetDriver* NetDriver, enum class ENetworkFailure failType, FString errorMessage);
	void OnLoadComplete(FString MapName);
	void NewHUDWarningDelegate__DelegateSignature(UHUDWarningWidget* newWidget);
	void LoadSaveGame(UFSDSaveGame* toLoad);
	bool IsScreenFadingToBlack(UObject* WorldContext);
	bool IsScreenFadingFromBlack(UObject* WorldContext);
	bool IsScreenFading(UObject* WorldContext);
	bool IsPendingInvitePasswordProtected();
	bool IsPendingInviteModded();
	bool IsMutatorActive(UMutator* mutatorClass);
	bool IsGameModded();
	bool IsFreeBeerRewardActive();
	bool IsCampaignMission();
	bool HasSignedIn();
	bool HasPendingInvite();
	bool HasAnalytics();
	void GraphicsUserSettingsChanged();
	void GiveTemporaryBuff(UTemporaryBuff* buff, APlayerCharacter* Player);
	FVector2D GetViewportSize();
	TSoftClassPtr<UObject> GetSoftReferenceToPLS();
	TArray<FBlueprintSessionResult> GetServersFriendsArePlaying(TArray<FBlueprintSessionResult> servers);
	bool GetPendingRewards(FPendingRewardsStats OutStats, FPendingRewards OutRewards);
	bool GetNextSpaceRigNotification(FSpaceRigNotification NextNotification);
	TArray<UMutator*> GetMutators(UMutator* mutatorClass);
	int32_t GetMaxPublicConnections();
	AFSDPlayerController* GetLocalFSDPlayerController();
	UIconGenerationManager* GetIconGenerationManager();
	bool GetHasSeenInfoScreen();
	int32_t GetGlobalMissionSeed();
	UGeneratedMission* GetGeneratedMission();
	UMutator* GetFirstMutator(UMutator* mutatorClass);
	float GetCurrentFadeAmount();
	TArray<FNetworkConnectionInfo> GetConnectionInfo();
	APlayerCharacter* GetCharacterSelectorCharacter();
	void GameUserSettingsChanged();
	void FadeScreenToBlack(UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, bool ToSpaceRig, UTexture* loadingImage);
	void FadeScreenFromBlack(UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, bool ToSpaceRig);
	void DonkeyCharacterDelegate__DelegateSignature(AMolly* InDonkey);
	void CloseSessionLobby();
	void ClearPendingRewards();
	void ClearGameStateSeamlessTravelStorage();
	void ClearCampaignNotifications();
	void ChangeSkinPreview(UItemSkin* PreviewSkin);
	void CancelJoin();
	void BlackoutScreen(UObject* WorldContext, bool FadeWorldOnly);
	UHUDWarningWidget* AddWarningToHUD(UHUDWarningWidget* WidgetClass, UTexture2D* Texture, USoundBase* PingSound);
	void AddToFriendSessions(FString friendSessionId, FString friendName);
	void AddStatValue(FString Key, float Value);
	void AddStatCount(FString Key, int32_t count);
	void AddSpaceRigNotification(FSpaceRigNotification NewNotification, FString ID, bool TriggerEvent);
};

// Class FSD.FSDGameMode
// Size: 0x4f8 (Inherited: 0x308)
struct AFSDGameMode : AGameMode {
	FMulticastInlineDelegate OnMatchStarted; // 0x308(0x10)
	FMulticastInlineDelegate OnAllControllersReady; // 0x318(0x10)
	FMulticastInlineDelegate OnPlayerLoggedIn; // 0x328(0x10)
	FMulticastInlineDelegate OnDonkeyCalled; // 0x338(0x10)
	bool GenerationStarted; // 0x348(0x01)
	UPheromoneSpawnerComponent* PheromoneComponent; // 0x350(0x08)
	UEnemySpawnManager* EnemySpawnManager; // 0x358(0x08)
	UObjectivesManager* ObjectivesManager; // 0x360(0x08)
	UKeepInsideWorld* KeepInsideWorld; // 0x368(0x08)
	UDifficultyManager* DifficultyManagerComponent; // 0x370(0x08)
	UMissionManager* MissionManager; // 0x378(0x08)
	UEncounterManager* EncounterManagerComponent; // 0x380(0x08)
	UCritterManager* CritterManager; // 0x388(0x08)
	TArray<AFSDPlayerController*> PlayerControllers; // 0x390(0x10)
	UFormationsManagerComponent* FormationsManager; // 0x3a0(0x08)
	TSoftClassPtr<UObject> DropPodClass; // 0x3c8(0x28)
	TSoftClassPtr<UObject> MuleClass; // 0x3f0(0x28)
	TSoftClassPtr<UObject> DropodEscapeClass; // 0x418(0x28)
	TSoftClassPtr<UObject> droneClass; // 0x440(0x28)
	TSoftClassPtr<UObject> CheatUI; // 0x468(0x28)
	float ContinueCountdown; // 0x490(0x04)
	bool PreventAllLatejoin; // 0x498(0x01)
	bool PreventLateJoinOnMissionStart; // 0x499(0x01)
	float PlayerSpawnHeightOffset; // 0x49c(0x04)
	float FriendlyFireGracePeriod; // 0x4a0(0x04)
	TArray<UEnemyDescriptor*> ForcedEnemyPool; // 0x4a8(0x10)
	bool UseNormalEncounters; // 0x4b8(0x01)
	bool UseStationaryEncounter; // 0x4b9(0x01)
	bool AllowSpecialEncounters; // 0x4ba(0x01)
	UEnemyWaveManager* CachedWaveManager; // 0x4c0(0x08)

	void StartGame();
	void SpawnMissionCriticalItems();
	void SignalEndLevelToClients();
	void ResetDeaths();
	void RecieveEndLevel();
	void RecieveAllDwarvesDown();
	void Recieve_ContinueTimerEnded();
	void ReceivePostSeamlessTravel();
	void OnObjectivesInitialized();
	void OnLevelGenerationComplete(int32_t pass);
	void OnControllerDestroyed(AActor* Controller);
	void LoadSpaceRig();
	void LoadMission(FString MapName, TSoftClassPtr<UObject> optionalGameMode);
	void HostAbortMission();
	bool HasTooManyModsEnabled();
	UEnemyWaveManager* GetWaveManager();
	AActor* GetPlayerStart(AFSDPlayerController* Controller);
	AMolly* GetMuleClass();
	UEncounterManager* GetEncounterManager();
	FSoftObjectPath GetDropPodPath();
	FSoftObjectPath GetDropPodEscapePath();
	AMiningPod* GetDropPodEscapeClass();
	AMiningPod* GetDropPodClass();
	FSoftObjectPath GetDronePath();
	ABosco* GetDroneClass();
	UDifficultyManager* GetDifficultyManager();
	int32_t GetCurrentLevel();
	bool FSDSetPause(APlayerController* PC, enum class EPauseReason pauseReason);
	bool FSDKickPlayer(APlayerController* KickedPlayer, FText KickReason);
	bool FSDClearPause(enum class EPauseReason pauseReason);
	void EndLevel();
	void DonkeyButtonPressed();
	void DestroyNonLocalPlayers();
	void Debug_ShowPlayerSpheres();
	bool AllPlayersHaveSelectedCharacter();
	bool AllPlayersHaveGeneratedLevel();
	void AddControllerForGracePeriod(APlayerCharacter* APlayerCharacter);
	void AboutMission();
};

// Class FSD.FSDGameModeSpaceRig
// Size: 0x510 (Inherited: 0x4f8)
struct AFSDGameModeSpaceRig : AFSDGameMode {
	char AmountOfPlayersSpawnedInMedbay; // 0x4f8(0x01)
	bool StartedSession; // 0x4f9(0x01)

	AActor* GetFreeSpawnOfType(enum class ESpacerigStartType aType, AFSDPlayerController* AController);
};

// Class FSD.FSDGameplayStatics
// Size: 0x28 (Inherited: 0x28)
struct UFSDGameplayStatics : UBlueprintFunctionLibrary {

	UFXSystemComponent* SpawnScaledEmitterAtLocation(UObject* WorldContextObject, FScaledEffect ScaledEffect, FVector Location, FRotator Rotation, bool bAutoDestroy);
	UDecalComponent* SpawnDecalData(UObject* WorldContextObject, FVector Location, FVector upVector, FDecalData DecalData);
	UDecalComponent* SpawnDecalAtActor(AActor* Actor, UMaterialInterface* DecalMaterial, float Size, float Duration, float FadeDuration);
	UDecalComponent* SpawnDecal(UObject* WorldContextObject, UMaterialInterface* DecalMaterial, FVector Location, FVector upVector, float Size, float Duration, float FadeDuration);
	void SetControllerVibrationSubmixSend(UObject* WorldContextObject, UAudioComponent* AudioComponent, float SendLevel);
	void SetControllerSpeakerSubmixSend(UObject* WorldContextObject, UAudioComponent* AudioComponent, float SendLevel);
};

// Class FSD.FSDTagSettings
// Size: 0x120 (Inherited: 0x30)
struct UFSDTagSettings : UDataAsset {
	FGameplayTagQuery IsFriendlyQuery; // 0x30(0x48)
	FGameplayTagQuery IsNeutralQuery; // 0x78(0x48)
	FGameplayTagQuery IsHostileQuery; // 0xc0(0x48)
	FFSDTagsRoot Root; // 0x108(0x18)
};

// Class FSD.FSDGameSession
// Size: 0x248 (Inherited: 0x238)
struct AFSDGameSession : AGameSession {
	TArray<FUniqueNetIdRepl> BannedPlayers; // 0x238(0x10)
};

// Class FSD.GameStats
// Size: 0x230 (Inherited: 0x220)
struct AGameStats : AInfo {
	int32_t NumberOfPlayersEscapedInPod; // 0x220(0x04)
	float TotalGoldMined; // 0x224(0x04)
	int32_t TotalEnemiesKilled; // 0x228(0x04)
	int32_t MissionHaz; // 0x22c(0x04)

	void OnPlayerMinedGold(UCappedResource* Resource, float Amount);
};

// Class FSD.FSDGameState
// Size: 0x688 (Inherited: 0x290)
struct AFSDGameState : AGameState {
	FMulticastInlineDelegate OnMissionTimeUpdated; // 0x290(0x10)
	FMulticastInlineDelegate OnTerrainGenerated; // 0x2a0(0x10)
	FMulticastInlineDelegate OnTerrainGenerationStarting; // 0x2b0(0x10)
	FMulticastInlineDelegate OnMatchStarted; // 0x2c0(0x10)
	FMulticastInlineDelegate OnMatchEnded; // 0x2d0(0x10)
	FMulticastInlineDelegate OnGameEventCompletedEvent; // 0x2e0(0x10)
	FMulticastInlineDelegate OnPlayerJoined; // 0x2f0(0x10)
	FMulticastInlineDelegate OnPlayerLeave; // 0x300(0x10)
	FMulticastInlineDelegate OnContinueActive; // 0x310(0x10)
	FMulticastInlineDelegate OnContinueCountdownChanged; // 0x320(0x10)
	FMulticastInlineDelegate OnAllDwarvesDown; // 0x330(0x10)
	FMulticastInlineDelegate OnTeamMemberCampaignMissionChanged; // 0x340(0x10)
	FMulticastInlineDelegate OnEnemyKilledEvent; // 0x350(0x10)
	FMulticastInlineDelegate OnPlayerCharacterRegistered; // 0x360(0x10)
	int32_t CurrentLevel; // 0x370(0x04)
	AMiningPod* EscapePod; // 0x378(0x08)
	FString FSDSessionID; // 0x380(0x10)
	FMulticastInlineDelegate OnBoscoReviveCounterChanged; // 0x390(0x10)
	bool bTeamDown; // 0x3a0(0x01)
	FMulticastInlineDelegate OnTeamDown; // 0x3a8(0x10)
	FMulticastInlineDelegate OnObjectivesCompleted; // 0x3c0(0x10)
	FMulticastInlineDelegate OnObjectiveAdded; // 0x3d0(0x10)
	FMulticastInlineDelegate OnDifficultyChanged; // 0x3e0(0x10)
	FMulticastInlineDelegate OnCountdownStarted; // 0x3f0(0x10)
	FMulticastInlineDelegate OnCountdownTimeChanged; // 0x400(0x10)
	FMulticastInlineDelegate OnCountdownFinished; // 0x410(0x10)
	ADeepCSGWorld* CSGWorld; // 0x420(0x08)
	int32_t LastSupplyPodTimeStamp; // 0x428(0x04)
	AProceduralSetup* ProceduralSetup; // 0x430(0x08)
	bool DelayLateJoin; // 0x438(0x01)
	UPrimitiveComponent* FakeMovementBase; // 0x440(0x08)
	int32_t PlayerSurvivalCreditBonus; // 0x448(0x04)
	float ResourceAmountPenalty; // 0x44c(0x04)
	float ObjectivesCreditPenalty; // 0x450(0x04)
	FText TextMissionCompleted; // 0x458(0x18)
	FText TextSecondaryObjective; // 0x470(0x18)
	FText TextSurvivalBonus; // 0x488(0x18)
	FText TextMined; // 0x4a0(0x18)
	FText TextCollected; // 0x4b8(0x18)
	FText TextBonus; // 0x4d0(0x18)
	int32_t BoscoReviveCounter; // 0x4e8(0x04)
	USpawnEffectsComponent* SpawnEffects; // 0x4f0(0x08)
	UDynamicMeshScaler* MeshScaler; // 0x4f8(0x08)
	UFlareController* FlareController; // 0x500(0x08)
	UGemProximityTracker* GemProximityTracker; // 0x508(0x08)
	UAttackerManagerComponent* AttackerManager; // 0x510(0x08)
	USoundMixManagerComponent* SoundMixManager; // 0x518(0x08)
	USeasonReplicatorComponent* SeasonReplicatorComponent; // 0x520(0x08)
	UTeamResourcesComponent* TeamResources; // 0x528(0x08)
	bool IsOnSpaceRig; // 0x530(0x01)
	bool PlayerMadeItToDropPod; // 0x531(0x01)
	TArray<APlayerCharacter*> ActivePlayerCharacters; // 0x538(0x10)
	FReplicatedObjectives Objectives; // 0x548(0x18)
	FText CompletedGameEventName; // 0x560(0x18)
	FGeneratedMissionSeed GeneratedMissionSeed; // 0x578(0x58)
	bool objectivesCompleted; // 0x5d0(0x01)
	UDifficultySetting* CurrentDifficultySetting; // 0x5d8(0x08)
	bool RememberDifficulty; // 0x5e0(0x01)
	UPlayerProximityTracker* ProximityTracker; // 0x5e8(0x08)
	UShowroomManager* ShowroomManager; // 0x5f0(0x08)
	AGameStats* GameStats; // 0x5f8(0x08)
	uint32_t MissionTime; // 0x600(0x04)
	uint32_t MissionStartTime; // 0x608(0x04)
	uint32_t MissionHaz; // 0x60c(0x04)
	bool PreventLatejoinCharacterDuplication; // 0x610(0x01)
	bool StartPressed; // 0x611(0x01)
	bool ContinuePressed; // 0x612(0x01)
	int32_t ContinuesCountdown; // 0x614(0x04)
	bool AllDwarvesDown; // 0x618(0x01)
	bool MissionAborted; // 0x619(0x01)
	int32_t CountdownRemaining; // 0x61c(0x04)
	FText countdownText; // 0x620(0x18)
	bool CanCarryOverResources; // 0x638(0x01)
	FMulticastInlineDelegate SessionLeaderChanged; // 0x658(0x10)
	APlayerState* CurrentPlayerSessionLeader; // 0x670(0x08)

	void StartCountdown(int32_t Duration, FText countdownName);
	void SetPreventLatejoinCharacterDuplication(bool prevent);
	void SetPlayersHaveReachedDroppod(bool newHasPlayerReached);
	void SetGeneratedMissionParameters(UGeneratedMission* mission);
	void SetCurrentDifficulty(UDifficultySetting* Setting, bool updateSessionSettings);
	void SetCompletionData(bool objectivesCompleted, int32_t playersInPod);
	void ReceiveGeneratedMissionReplicated();
	void PostLocalizedGameMessage(FText Msg, TArray<FText> Arguments);
	void PostGameMessage(FString Msg);
	void OnRep_StartPressed(bool oldStartPressed);
	void OnRep_ObjectivesCompleted();
	void OnRep_MissionTime();
	void OnRep_GeneratedMissionSeed();
	void OnRep_FSDSessionID();
	void OnRep_CurrentDifficultySetting();
	void OnRep_CountdownText();
	void OnRep_CountdownRemaining(int32_t prevTime);
	void OnRep_ContinuePressed();
	void OnRep_ContinueCountdown();
	void OnRep_CompletedGameEvent();
	void OnRep_BoscoReviveCounter();
	void OnRep_AllDwarvesDown();
	int32_t MissionEndscreenSeed();
	bool IsTutorialMission();
	bool IsCountingDown();
	void InitObjectives();
	bool HasObjectivesReplicated();
	void HandleSeamlessTravelEvent();
	AFSDPlayerState* GetServerPlayerState();
	UObjective* GetSecondaryObjective();
	AProceduralSetup* GetProceduralSetup();
	UObjective* GetPrimaryObjective();
	bool GetPreventLatejoinCharacterDuplication();
	bool GetPlayersHaveReachedDroppod();
	TArray<APlayerCharacter*> GetPlayableCharacters();
	TArray<UPlayerCharacterID*> GetPlayableCharacterIDs();
	TArray<UObjective*> GetObjectives();
	TArray<AFSDPlayerState*> GetNetworkSortedPlayerArray();
	int32_t GetMissionTime();
	bool GetMissionSuccessful();
	int32_t GetMissionStartTime();
	int32_t GetMissionRewardXP(bool primary);
	int32_t GetMissionRewardCreditSum();
	TArray<FCreditsReward> GetMissionRewardCredits();
	bool GetMissionCompletedCreditReward(bool primary, int32_t OutReward);
	int32_t GetGlobalMissionSeed();
	AGameStats* GetGameStats();
	TMap<UResourceData*, float> GetEndscreenResources();
	TMap<UResourceData*, float> GetCollectedResources();
	TArray<UFSDEvent*> GetActiveEventsFromMission();
	void ClientNewMessage(FFSDChatMessage Msg);
	void Client_StartPressed();
	void Client_NewLocalizedMessage(FFSDLocalizedChatMessage Msg);
	bool AllMissionEndResultsReceived();
	void All_SpawnScaledEffectAt(FScaledEffect effect, FVector_NetQuantize Location);
	void All_SpawnScaledEffectAndCueAt(FScaledEffect effect, USoundCue* Audio, FVector_NetQuantize Location);
};

// Class FSD.FSDGameUserSettings
// Size: 0x4e0 (Inherited: 0x120)
struct UFSDGameUserSettings : UGameUserSettings {
	FMulticastInlineDelegate OnUseHoldToRunChanged; // 0x128(0x10)
	FMulticastInlineDelegate OnFOVChanged; // 0x138(0x10)
	FMulticastInlineDelegate OnLanguageChanged; // 0x148(0x10)
	FMulticastInlineDelegate OnGameServerNameChanged; // 0x158(0x10)
	FMulticastInlineDelegate OnFontSizeChanged; // 0x168(0x10)
	FMulticastInlineDelegate OnJukeboxStreamerModeChanged; // 0x178(0x10)
	bool bJukeboxStreamerMode; // 0x188(0x01)
	bool bGraphicSettingsChanged; // 0x189(0x01)
	FString CurrentUserSetSaveSlotName; // 0x190(0x10)
	FMulticastInlineDelegate OnCanShowBloodChanged; // 0x1a0(0x10)
	TMap<FName, bool> NamedBoolSettings; // 0x1b0(0x50)
	FModdingUISettings ModdingUISettings; // 0x200(0x60)
	int32_t ServerSearchRegion; // 0x260(0x04)
	bool ServerSearchPasswordRequired; // 0x264(0x01)
	FMulticastInlineDelegate OnModdingSettingsChanged; // 0x268(0x10)
	float volumeCharacterVoice; // 0x278(0x04)
	float volumeMissionControl; // 0x27c(0x04)
	float volumeMaster; // 0x280(0x04)
	float volumeSFX; // 0x284(0x04)
	float volumeMusic; // 0x288(0x04)
	FString CurrentAudioOutputDeviceId; // 0x290(0x10)
	bool UseDefaultAudioOutputDevice; // 0x2a0(0x01)
	float Sharpening; // 0x2a4(0x04)
	int32_t AntiAliasingType; // 0x2a8(0x04)
	bool TemporalAAUpsamplingEnabled; // 0x2ac(0x01)
	float volumeVoice; // 0x2b0(0x04)
	USoundClass* soundClassCharacterVoices; // 0x2b8(0x08)
	USoundClass* soundClassMissionControl; // 0x2c0(0x08)
	USoundClass* soundClassMaster; // 0x2c8(0x08)
	USoundClass* soundClassSFX; // 0x2d0(0x08)
	USoundClass* soundClassUI; // 0x2d8(0x08)
	USoundClass* soundClassMusic; // 0x2e0(0x08)
	USoundClass* soundClassVoice; // 0x2e8(0x08)
	int32_t ChatFontSize; // 0x2f0(0x04)
	bool bUseVoiceChat; // 0x2f4(0x01)
	bool bUsePushToTalk; // 0x2f5(0x01)
	FString LocalGameServerName; // 0x2f8(0x10)
	FString LocalGameServerNameFiltered; // 0x308(0x10)
	bool AppearOffline; // 0x318(0x01)
	bool AutoRefreshServerlist; // 0x319(0x01)
	float MouseXSensitivity; // 0x31c(0x04)
	float MouseYSensitivity; // 0x320(0x04)
	bool UseSeperateSensetivity; // 0x324(0x01)
	bool InvertMouse; // 0x325(0x01)
	bool InvertScroolWheel; // 0x326(0x01)
	bool UseHoldToRun; // 0x327(0x01)
	bool UseToggleLaserpointer; // 0x328(0x01)
	float FOV; // 0x32c(0x04)
	float HeadbobbingScale; // 0x330(0x04)
	float CameraShakeScale; // 0x334(0x04)
	float ChatFadeTime; // 0x338(0x04)
	bool UseStreamerProgram; // 0x33c(0x01)
	bool SoundOnChatMessage; // 0x33d(0x01)
	bool PhotosensitiveMode; // 0x33e(0x01)
	bool ShowUIAnimations; // 0x33f(0x01)
	bool UseProfanityFilter; // 0x340(0x01)
	float ForceFeedbackScale; // 0x344(0x04)
	bool InvertFlightControls; // 0x348(0x01)
	bool EnableDx12ByDefault; // 0x349(0x01)
	float HDRColorGamma; // 0x34c(0x04)
	enum class EConsoleGraphicsMode ConsoleGraphicsMode; // 0x350(0x01)
	FHUDElements HUDElements; // 0x354(0x78)
	FCharacterOptions CharacterOptions; // 0x3cc(0x02)
	float DownedTurnDirection_Controller; // 0x3d0(0x04)
	float DownedTurnDirection_Mouse; // 0x3d4(0x04)
	float UIDPIScale; // 0x3d8(0x04)
	bool EnableCustomUIScale; // 0x3e0(0x01)
	FMulticastInlineDelegate OnInputSourceChanged; // 0x3e8(0x10)
	bool CheckCursorOutOfBounds; // 0x3f8(0x01)
	FMulticastInlineDelegate OnEnableTutorialHintsChanged; // 0x400(0x10)
	FMulticastInlineDelegate OnShowFPSChanged; // 0x410(0x10)
	FMulticastInlineDelegate OnShowNetInfoLevelChanged; // 0x420(0x10)
	FMulticastInlineDelegate OnDx12Enabled; // 0x430(0x10)
	FIntPoint ResolutionToBeApplied; // 0x440(0x08)
	bool VSyncToBeApplied; // 0x448(0x01)
	bool Dx12ToBeApplied; // 0x449(0x01)
	enum class EWindowMode InFullscreenModeToBeApplied; // 0x44a(0x01)
	bool InFullscreenModeToBeAppliedValid; // 0x44b(0x01)
	bool VSyncToBeAppliedValid; // 0x44c(0x01)
	bool Dx12ToBeAppliedValid; // 0x44d(0x01)
	bool ResolutionToBeAppliedValid; // 0x44e(0x01)
	bool EscMenuActive; // 0x44f(0x01)
	bool bShowUpgradeExtraDetails; // 0x450(0x01)
	FMulticastInlineDelegate OnShowUpgradeExtraDetailsChanged; // 0x458(0x10)
	FMulticastInlineDelegate OnCustomKeyBindingsChanged; // 0x468(0x10)
	int32_t LastNiagaraShaderVerions; // 0x478(0x04)
	enum class EFSDInputSource CurrentInputSource; // 0x47c(0x01)
	enum class EFSDInputSource RequestedInputSource; // 0x47d(0x01)
	TArray<FCustomKeyBinding> CustomKeyBindings; // 0x480(0x10)
	TArray<FCustomKeyBinding> CustomControllerBindings; // 0x490(0x10)
	bool SwapControllerThumbsticks; // 0x4a0(0x01)
	bool bTutorialHintsEnabled; // 0x4a1(0x01)
	bool bShowSubtitles; // 0x4a2(0x01)
	bool bShowFPS; // 0x4a3(0x01)
	int32_t ShowNetInfoLevel; // 0x4a4(0x04)
	bool bCanShowBlood; // 0x4a8(0x01)
	bool PreventLatejoinCharacterDuplication; // 0x4a9(0x01)
	bool TranslatorDebugModeEnabled; // 0x4aa(0x01)
	FString PreviousCulture; // 0x4b0(0x10)
	FControllerSettings ControllerSettings; // 0x4c0(0x0c)
	TArray<FGuid> SelectedDifficultyLevels; // 0x4d0(0x10)

	void UpdateVolumeSettings(USoundClass* CharacterVoices, USoundClass* MissionControl, USoundClass* Master, USoundClass* Music, USoundClass* SFX, USoundClass* UI, USoundClass* Voice);
	void UpdateForceFeedbackScaleOnController(APlayerController* Controller);
	bool ToggleTranslatorDebugMode();
	bool ToggleShowUpgradeExtraDetails();
	void ToggleModdingServerFilter(char ServerFilter, bool Enable);
	void SetZiplineGunAutoSwitch(bool shouldAutoSwitch);
	void SetVSyncEnabledToBeApplied(bool bEnable);
	void SetVolume(enum class EVolumeType volumeType, float Volume);
	void SetVoiceChatEnabled(bool bEnable);
	void SetUseToggleTerrainScanner(bool useToggleTerrainScanner);
	void SetUseToggleLaserpointer(bool UseToggleLaserpointer);
	void SetUseStreamerProgram(bool UseStreamerProgram);
	void SetUseSeparateSensitivity(bool newSetting);
	void SetUseProfanityFilter(bool shouldUse);
	void SetUseHoldToRun(bool UseHoldToRun);
	void SetUseDefaultAudioOutputDevice(UObject* WorldContextObject, bool UseDefault);
	void SetUseCustomUIScale(bool UseCustomScale);
	void SetUIDPIScale(float uiscale);
	void SetTutorialHintsEnabled(bool Enabled);
	void SetTemporalAAUpscalingEnabled(bool bEnable);
	void SetSwapControllerThumbsticks(bool InSwapThumbsticks);
	void SetSteamSearchRegion(enum class ESteamSearchRegion InRegion);
	void SetShowUIAnimations(bool shouldShow);
	void SetShowSubtitles(bool Show);
	void SetShowSandboxLabel(bool InShowLabel);
	void SetShowNetInfoLevel(int32_t Level);
	void SetShowFPS(bool Visible);
	void SetSharpening(float Sharpening);
	void SetServerSearchPasswordRequired(bool InPasswordRequired);
	void SetScreenResolutionToBeApplied(FIntPoint Resolution);
	void SetPushToTalk(bool bEnable);
	void SetPreventLatejoinCharacterDuplication(bool prevent);
	void SetPlaySoundOnChatMessage(bool playSoundOnMessage);
	void SetPhotosensitiveMode(bool modeOn);
	void SetMouseYSensitivity(float newSensitivity);
	void SetMouseXSensitivity(float newSensitivity);
	void SetModdingSortBy(char SortField, bool SortAscending);
	void SetJukeboxStreamerMode(bool InStreamerMode);
	void SetInvertMouseWheel(bool invertMouseWheel);
	void SetInvertMouse(bool InvertMouse);
	void SetInvertFlightControls(bool Invert);
	void SetInputSource(enum class EFSDInputSource NewSource);
	void SetHeadBobbingScale(float HeadbobbingScale);
	void SetHDRColorGamma(float Gamma);
	void SetGrapplingHookAutoSwitch(bool shouldAutoSwitch);
	void SetGamma(float gamme);
	void SetGameServerName(int32_t localUserNum, FString Name);
	void SetFullscreenModeToBeApplied(enum class EWindowMode InFullscreenMode);
	void SetFOV(float FOV);
	void SetForceFeedbackScale(float Scale);
	void SetDx12EnabledToBeApplied(bool bEnable);
	void SetDownCameraTurnDirection(enum class EFSDInputSource InputSource, float InDirection);
	void SetDisableMasterEQ(bool B);
	void SetDifficultySelected(UDifficultySetting* Difficulty, bool IsSelected);
	void SetDebugLocalizerMode(bool bEnable);
	void SetCurrentUserSaveSlotName(UObject* WorldContextObject, FString saveSlotName, enum class ESaveSlotChangeProcedure changeProcedure);
	void SetConsoleGraphicsMode(enum class EConsoleGraphicsMode Mode);
	void SetCheckForOutOfBoundsEnabled(bool Enabled);
	void SetChatFontSize(int32_t inFontSize);
	void SetChatFadeTime(float FadeTime);
	void SetCanShowBlood(bool bloodAllowed);
	void SetCameraShakeScale(float CameraShakeScale);
	void SetAutoRefreshServerlist(bool Value);
	bool SetAudioOutputDevice(UObject* WorldContextObject, FString DeviceID);
	bool SetAudioInputDevice(FString DeviceName);
	void SetAppearOffline(bool bEnable);
	void SetAntiAliasingType(int32_t AntiAliasingType);
	void SetAimSensitivity(float NewValue);
	void SetAimOuterAcceleration(float NewValue);
	void SetAimDeadZone(float NewValue);
	void ResetGraphicsChanges();
	void ResetControllerSettings();
	void PostInitFSDUserSettings(UObject* WorldContextObject);
	bool IsVoiceChatEnabled();
	bool IsDx12Enabled();
	bool IsDebugLocalizerModeEnabled();
	bool IsCurrentInputSource(enum class EFSDInputSource InputSource);
	void InitializeDifficultySelection(UObject* WorldContext, TArray<UDifficultySetting*> StartSelection);
	bool HasAudioOutputDeviceChanged(FString AudioDeviceChangedTo);
	bool GetZiplineGunAutoSwitch();
	bool GetVSyncEnabledToBeApplied();
	float GetVolume(enum class EVolumeType volumeType);
	bool GetUseToggleTerrainScanner();
	bool GetUseToggleLaserpointer();
	bool GetUseStreamerProgram();
	bool GetUseSeparateSensitivity();
	bool GetUseProfanityFilter();
	bool GetUseHoldToRun();
	bool GetUseDefaultAudioOutputDevice();
	bool GetUseCustomUIScale();
	float GetUIDPIScale();
	bool GetTutorialHintsEnabled();
	bool GetTemporalAAUpscalingEnabled();
	enum class ESteamSearchRegion GetSteamSearchRegion();
	bool GetShowUIAnimations();
	bool GetShowSubtitles();
	bool GetShowSandboxLabel();
	int32_t GetShowNetInfoLevel();
	bool GetShowFPS();
	float GetSharpening();
	FIntPoint GetScreenResolutionToBeApplied();
	bool GetPushToTalk();
	bool GetPreventLatejoinCharacterDuplication();
	bool GetPlaySoundOnChatMessage();
	bool GetPhotosensitiveMode();
	float GetMouseYSensitivity();
	float GetMouseXSensitivity();
	bool GetModdingServerFilterEnabled(char ServerFilter);
	bool GetIsDifficultySelected(UDifficultySetting* Difficulty);
	bool GetInvertMouseWheel();
	bool GetInvertMouse();
	bool GetInvertFlightControls();
	enum class EFSDInputSource GetInputSource();
	float GetHeadBobbingScale();
	float GetHDRColorGamma();
	bool GetGrapplingHookAutoSwitch();
	float GetGamma();
	enum class EWindowMode GetFullscreenModeToBeApplied();
	UFSDGameUserSettings* GetFSDGameUserSettings();
	float GetFOV();
	float GetForceFeedbackScale();
	bool GetDx12EnabledToBeApplied();
	float GetDownCameraTurnDirection(enum class EFSDInputSource InputSource);
	bool GetDisableMasterEQ();
	FString GetCurrentUserSaveSlotName();
	enum class EFSDInputSource GetCurrentInputSource();
	bool GetCurrentAudioOutputDevice(UObject* WorldContextObject, FString AudioDevice);
	FString GetCurrentAudioInputDeviceName();
	float GetCurrentAudioInputDeviceAmplitude(int32_t localUserId);
	enum class EConsoleGraphicsMode GetConsoleGraphicsMode();
	bool GetCheckForOutOfBounds();
	int32_t GetChatFontSize();
	float GetChatFadeTime();
	float GetCameraShakeScale();
	bool GetAvaliableAudioOutputDevices(UObject* WorldContextObject, TArray<FString> AudioDevices);
	bool GetAvaliableAudioInputDevices(TArray<FString> AudioDevices);
	bool GetAvailableScreenResolutionsForNonPrimaryMonitors(TArray<FIntPoint> Resolutions);
	bool GetAutoRefreshServerlist();
	FString GetAudioOutputDeviceName(UObject* WorldContextObject, FString DeviceID);
	bool GetAppearOffline();
	int32_t GetAntiAliasingType();
	float GetAimSensitivity();
	float GetAimOuterAcceleration();
	float GetAimDeadZone();
	FString GameServerNameFiltered();
	FString GameServerName();
	bool FSDSetCurrentLanguage(UObject* WorldContextObject, FString Culture);
	UFSDGameUserSettings* FSDGameUserSettings();
	bool ConsoleGraphicsModeAvailable(enum class EConsoleGraphicsMode Mode);
	void ClearCustomKeyBindings(bool InGamepadKeys);
	bool CanShowBlood();
	void ApplyGraphicsChanges();
	void ApplyConsoleGraphicsMode();
};

// Class FSD.FSDHUD
// Size: 0x338 (Inherited: 0x310)
struct AFSDHUD : AHUD {
	FMulticastInlineDelegate SetObjectivesVisible; // 0x310(0x10)
	FMulticastInlineDelegate OnHUDVisibilityChanged; // 0x320(0x10)
	char IsVisibleFlags; // 0x330(0x01)

	bool ToggleHUDVisibility(enum class EHUDVisibilityReason reason);
	void ShowObjectives(bool InVisibility);
	void SetObjectivesVisible__DelegateSignature(bool InVisible, bool animate);
	void SetHUDVisible(bool IsVisible, enum class EHUDVisibilityReason reason);
	void RadarPointAdded(URadarPointComponent* radarPoint);
	void PlayerSpawned(APlayerCharacter* Player);
	void OnVisibilityChanged();
	bool IsHUDVisibleFlagSet(enum class EHUDVisibilityReason reason);
	void HudVisibilityChanged__DelegateSignature(bool InHudVisible);
	void HandleSeamlessTravel();
	bool GetHUDVisible();
	AFSDHUD* GetFSDHUD(APlayerController* InPlayerController);
	void CameraDroneSpawned(APlayerCameraDrone* Drone);
};

// Class FSD.SpaceRigHUD
// Size: 0x350 (Inherited: 0x338)
struct ASpaceRigHUD : AFSDHUD {
	TArray<UObject*> NotificationQueue; // 0x338(0x10)
	bool bNotificationQueueActive; // 0x348(0x01)

	void SetNotificationQueueActive(bool Inactive);
	void ReceiveNotificationQueueActivated();
	void ReceiveNotificationAdded(UObject* InNotification);
	UWindowWidget* QueueWindowClass(TSoftClassPtr<UObject> InWindowType);
	void QueueWindow(UWindowWidget* InWindow);
	void QueueNotificationObject(UObject* InObject);
	void QueueMissionShout(TSoftObjectPtr<UDialogDataAsset> InShout);
	bool IsNotificationQueueEmpty();
	UObject* DequeueNotificationObject();
};

// Class FSD.FSDMainHUDWidget
// Size: 0x230 (Inherited: 0x230)
struct UFSDMainHUDWidget : UUserWidget {

	void OnRadarPointAdded(URadarPointComponent* Point);
	void AddRadarPoint(URadarPointComponent* Point);
};

// Class FSD.FSDInWorldWidget
// Size: 0x238 (Inherited: 0x230)
struct UFSDInWorldWidget : UUserWidget {
	bool bHUDVisibile; // 0x230(0x01)

	void ReceiveHUDVisibilityChanged(bool InHudVisible);
	void CallbackHUDVisibilityChanged(bool InHudVisible);
};

// Class FSD.FSDJoinSessionCallbackProxy
// Size: 0x198 (Inherited: 0x30)
struct UFSDJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	UObject* WorldContextObject; // 0x178(0x08)

	UFSDJoinSessionCallbackProxy* FSDJoinSession(UObject* WorldContextObject, APlayerController* PlayerController, FBlueprintSessionResult SearchResult, FString FSDPassword, bool fromInvite);
};

// Class FSD.FSDKismetArrayExtensionFunctions
// Size: 0x28 (Inherited: 0x28)
struct UFSDKismetArrayExtensionFunctions : UKismetArrayLibrary {

	void Array_GetRandom(TArray<int32_t> TargetArray, int32_t Item);
};

// Class FSD.FSDLookupSessionId
// Size: 0x88 (Inherited: 0x30)
struct UFSDLookupSessionId : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)

	UFSDLookupSessionId* FSDLookupSessionId(UObject* WorldContextObject, FString SessionKey);
};

// Class FSD.FSDMatchmakingCallbackProxy
// Size: 0x130 (Inherited: 0x30)
struct UFSDMatchmakingCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	FMulticastInlineDelegate OnCancelled; // 0x50(0x10)
	FDelegate FailDelegateHandle; // 0x60(0x10)
	UMissionTemplate* mission; // 0x98(0x08)
	UBiome* Biome; // 0xa0(0x08)
	UDifficultySetting* Difficulty; // 0xa8(0x08)

	UFSDMatchmakingCallbackProxy* FSDMatchmaking(UObject* WorldContextObject, APlayerController* PlayerController, FDelegate FailDelegate, UDifficultySetting* DesiredDifficulty, UBiome* desiredBiome, UMissionTemplate* desiredMission);
	void CancelMatchmaking();
};

// Class FSD.FSDMath
// Size: 0x28 (Inherited: 0x28)
struct UFSDMath : UBlueprintFunctionLibrary {

	FVector SphericalToCartesian(float Radius, float azimuth, float elecation);
	bool PercentageCheck(float percentage);
	void GetAzimuthAndElevation(FVector Direction, FTransform coordinateSystem, float azimuth, float elevation);
	float CubicSegmentLength(FVector p0, FVector tangent1, FVector p1, FVector tangent2);
	FVector CubicInterpBlueprint(FVector p0, FVector tangent1, FVector p1, FVector tangent2, float alpha);
	void CartesianToSpherical(FVector Location, float outAzimuth, float outElevation, float outRadius);
};

// Class FSD.FSDOnlineSessionClient
// Size: 0x1e0 (Inherited: 0x1e0)
struct UFSDOnlineSessionClient : UOnlineSessionClient {
};

// Class FSD.FSDOnlineSystemUtils
// Size: 0x28 (Inherited: 0x28)
struct UFSDOnlineSystemUtils : UBlueprintFunctionLibrary {

	void TryToResolvePrivilege(APlayerState* PlayerState, enum class EBlueprintableUserPrivileges Privilege, enum class EBlueprintablePrivilegeResults reason);
	void ShowUpgradeAccountUI();
	void ShowAccountPicker(UFSDGameInstance* gInstance, int32_t GamePlayerID);
	void OpenURLInOverlay(FString URL, FDelegate OnOverlayClosed);
	void OpenProfileByUserId(APlayerState* Requestor, FString RequesteeUserID);
	void OpenProfile(APlayerState* Requestor, APlayerState* Requestee);
	FText OnlinePlayBlockReasonToString(enum class EBlueprintablePrivilegeResults reason);
	void GetOnlinePlayBlockReasons(TArray<enum class EBlueprintablePrivilegeResults> reasons);
	void GetIsPrivilegeAllowed(APlayerState* PlayerState, enum class EBlueprintableUserPrivileges Privilege, FDelegate Delegate);
	FText GetInviteFeatureBlockReason(UObject* WorldContextObject, enum class EInviteBlockReason reason);
	enum class EInviteBlockReason CanPlayerInvite(UObject* WorldContextObject);
};

// Class FSD.FSDPhysicalMaterial
// Size: 0x170 (Inherited: 0x80)
struct UFSDPhysicalMaterial : UPhysicalMaterial {
	float BreakingDecelerationScale; // 0x80(0x04)
	float BreakingFrictionScale; // 0x84(0x04)
	float MaxAccelerationScale; // 0x88(0x04)
	bool RepulsePlayer; // 0x8c(0x01)
	FFloatInterval RepulsePlayerVelocity; // 0x90(0x08)
	float RepulsePlayerRandomDegreeOffset; // 0x98(0x04)
	USoundCue* RepulsePlayerSound; // 0xa0(0x08)
	UFXSystemAsset* RepulsePlayerParticle; // 0xa8(0x08)
	UFXSystemAsset* ImpactParticles; // 0xb0(0x08)
	UNiagaraSystem* ImpactNParticles; // 0xb8(0x08)
	UMaterialInstance* ImpactMaterialOverride; // 0xc0(0x08)
	USoundCue* ImpactSound; // 0xc8(0x08)
	USoundCue* MeleeImpactSound; // 0xd0(0x08)
	bool UseImpactDecalOverrides; // 0xd8(0x01)
	TArray<FDecalData> ImpactDecals; // 0xe0(0x10)
	USoundCue* FirstPersonDamageIndicatorSound; // 0xf0(0x08)
	bool IsWeakPoint; // 0xf8(0x01)
	bool IsSubhealthCollider; // 0xf9(0x01)
	float DamageMultiplier; // 0xfc(0x04)
	UFXSystemAsset* FootstepParticle; // 0x100(0x08)
	UMaterialInstance* FootstepMaterialOverride; // 0x108(0x08)
	FDecalData LeftFootprintDecal; // 0x110(0x18)
	FDecalData RightFootprintDecal; // 0x128(0x18)
	USoundCue* FootstepSound; // 0x140(0x08)
	float ExtraFallVelocity; // 0x148(0x04)
	UFXSystemAsset* FallImpactEffect; // 0x150(0x08)
	USoundCue* FallImpactSound; // 0x158(0x08)
	bool AlwaysPenetrate; // 0x160(0x01)
	UReactiveTerrain* ReactiveTerrain; // 0x168(0x08)

	UFXSystemComponent* SpawnImpactParticlesFromHit(UObject* WorldContextObject, FHitResult HitResult);
	UFXSystemComponent* SpawnImpactParticles(UObject* WorldContextObject, FVector Location, FVector Normal);
	UFSDPhysicalMaterial* GetPhysicalMaterialFromPrimitive(UPrimitiveComponent* Component);
};

// Class FSD.OptionalBloodPhysicalMaterial
// Size: 0x178 (Inherited: 0x170)
struct UOptionalBloodPhysicalMaterial : UFSDPhysicalMaterial {
	UParticleSystem* BloodlessImpactParticles; // 0x170(0x08)
};

// Class FSD.FSDPlayerCameraManager
// Size: 0x2740 (Inherited: 0x2740)
struct AFSDPlayerCameraManager : APlayerCameraManager {
};

// Class FSD.FSDPlayerControllerBase
// Size: 0x5c8 (Inherited: 0x570)
struct AFSDPlayerControllerBase : APlayerController {
	UMaterialParameterCollection* GlobalMaterialParameterCollection; // 0x570(0x08)
	FMulticastInlineDelegate OnPlayerVoiceStatusChanged; // 0x578(0x10)
	bool bStartWithBlackScreen; // 0x58b(0x01)
	UWindowManager* WindowManager; // 0x590(0x08)
	TArray<FPlatformComponent> PlatformComponentClasses; // 0x598(0x10)

	void ToggleAnalogCursor(bool Visible);
	void StopAspectRatioAxisConstraint();
	void StartAspectRatioAxisConstraint();
	void SetHUDVisible(bool IsVisible, enum class EHUDVisibilityReason reason);
	void Server_Cheat_SwitchCharacter(UPlayerCharacterID* NewCharacter);
	void RecievePreClientTravel();
	void RecieveHUDVisibilityChanged(bool IsVisible);
	bool IsHUDVisibleFlagSet(enum class EHUDVisibilityReason reason);
	void Client_WasKicked(enum class EDisconnectReason reason);
};

// Class FSD.FSDPlayerController
// Size: 0x7a0 (Inherited: 0x5c8)
struct AFSDPlayerController : AFSDPlayerControllerBase {
	FMulticastInlineDelegate OnEndLevelReceived; // 0x5c8(0x10)
	FMulticastInlineDelegate OnReceiveVoiceChanged; // 0x5d8(0x10)
	FMulticastInlineDelegate OnTransmitVoiceChanged; // 0x5e8(0x10)
	FMulticastInlineDelegate OnLevelFinished; // 0x5f8(0x10)
	FMulticastInlineDelegate OnShowTutorialHint; // 0x608(0x10)
	FMulticastInlineDelegate OnShowTutorialWidget; // 0x618(0x10)
	FMulticastInlineDelegate OnChangeTutorialHintDuration; // 0x628(0x10)
	FMulticastInlineDelegate OnHideCurrentTutorialHint; // 0x638(0x10)
	FMulticastInlineDelegate OnPlayerCharacterPossesed; // 0x648(0x10)
	UPerkUsageComponent* PerkUsageComponent; // 0x668(0x08)
	bool IsOnSpaceRig; // 0x670(0x01)
	bool bReceivedEndLevel; // 0x671(0x01)
	TArray<USoundMix*> InitialSoundMixes; // 0x678(0x10)
	bool ServerTravelDone; // 0x688(0x01)
	FMulticastInlineDelegate OnChatOpened; // 0x690(0x10)
	UFSDWidgetEffectsComponent* WidgetEffects; // 0x6a0(0x08)
	enum class ESpacerigStartType SpacerigSpawnType; // 0x6a8(0x01)
	bool bDetectGravityChanges; // 0x6bc(0x01)

	void ToggleVoiceOn(bool Enabled);
	void ShowTutorialWidget(UTutorialContentWidget* TutorialWidget, bool ignoreQueue);
	void ShowTutorialHint(FText Text, FText Title, FText TaskText, UTexture2D* Image, float Duration);
	void SetPlayerStart(AActor* Start);
	void SetAchievementProgressFromServer(UFSDAchievement* AchievementToSet, float Progress);
	void ServerSetUserHoldToRun(bool Value);
	void Server_TravelDone();
	void Server_TerrainLateJoinPartReceived();
	void Server_SetLateJoinDone();
	void Server_SetGenerationStatus(FString Status, float Fraction);
	void Server_SetGenerationFraction(float Fraction);
	void Server_SetGenerationDone();
	void Server_SetExtraEndScreenTime(float extraTime);
	void Server_SetControllerReady();
	void Server_ResetHUD();
	void Server_NewMessage(FString Sender, FString Text, enum class EChatSenderType SenderType);
	void Server_DrawProjectileDebugPath(bool bDraw);
	void Server_ActivateTemporaryBuff(UTemporaryBuff* buff);
	void SendLevelUpStatistics(int32_t currentRank);
	void RecievePawnDestroyed();
	void RecieveOnControllerReady();
	void RecieveClientTravelDone();
	void ReceivingVoiceSignature__DelegateSignature(bool isRecieving);
	void ReceiveEndLevel();
	void ReceivedEndLevelDelegate__DelegateSignature();
	void Receive_EndLevel_WaitForData(bool areObjectivesCompleted, int32_t numberOfPlayersInPod);
	void ReadyToContinueFromEndScreen();
	void OnShowTutorialHint__DelegateSignature(FText Text, FText Title, FText TaskText, UTexture2D* Image, float Duration);
	void OnSaveGamePlayerProgressChanged(int32_t Rank, int32_t Stars);
	void OnSaveGameCreditsChanged(int32_t Credits);
	void OnSaveGameCharacterProgressChanged(APlayerCharacter* CharacterClass, int32_t Level, float Progress);
	void OnPlayerStateSelectedCharacterChanged(APlayerCharacter* CharacterClass);
	void OnPlayerSpawnBegin(int32_t PlayerId);
	void OnHideTutorialHint__DelegateSignature(bool wasWatched);
	void OnGenerationDone();
	void OnChangeTutorialWidget__DelegateSignature(UTutorialContentWidget* TutorialWidget, bool bIgnoreQueue);
	void OnChangeTutorialHintDuration__DelegateSignature(float NewDuration);
	void LevelFinishedSignature__DelegateSignature();
	void HideTutorialHint(bool watched);
	bool HasPendingRewards();
	bool GetUseToggleTerrainScanner();
	bool GetUseToggleLaserpointer();
	bool GetUseHoldToRun();
	AActor* GetPlayerStart();
	bool GetPendingRewards(FPendingRewardsStats OutStats, FPendingRewards OutRewards);
	AFSDPlayerState* GetFSDPlayerState();
	AActor* FindPlayerStart(UPlayerCharacterID* characterID);
	void EndLevel();
	void Client_TerrainLateJoinVisibleChunks(TArray<uint32_t> visibleChunks);
	void Client_TerrainLateJoinPart(TArray<FGrenadeExplodeOperationData> explosions, TArray<FCarveWithColliderOperationData> colliderCarves, TArray<FCarveWithSTLMeshOperationData> meshCarves, TArray<FPickaxeDigOperationData> pickAxe, TArray<FRemoveFloatingIslandOperationData> floating, TArray<FDrillOperationData> drills, TArray<FMeltOperationData> melts, TArray<FSplineSegmentCarveOperationData> splines);
	void Client_TerrainLateJoinDone();
	void Client_TerrainLateJoinDebris(TArray<int32_t> instanceComponentPairs);
	void Client_PlayCue(USoundCue* SoundCue);
	void Client_EndLevel_WaitForData(bool areObjectivesCompleted, int32_t numberOfPlayersInPod);
	void Client_DeductResource(UResourceData* Resource, int32_t Amount);
	void Client_CollectVanityItem(UTreasureRewarder* rewarder, UVanityItem* targetItem, UPlayerCharacterID* targetCharacter);
	void Client_CollectTreasureVictoryPose(UTreasureRewarder* rewarder, UVictoryPose* targetPose, UPlayerCharacterID* targetCharacter);
	void Client_CollectTreasureSkin(UTreasureRewarder* rewarder, UItemSkin* targetSkin, UItemID* targetItem);
	void Client_CollectTreasureDrink(UTreasureRewarder* rewarder, UDrinkableDataAsset* Drinkable);
	void Client_CollectPickaxePart(UTreasureRewarder* rewarder, UPickaxePart* targetPart);
	void ApplyPendingRewards();
};

// Class FSD.FSDPlayerStart
// Size: 0x230 (Inherited: 0x220)
struct AFSDPlayerStart : AActor {
	UPlayerCharacterID* PrefferedClassID; // 0x220(0x08)
	AFSDPlayerController* usedBy; // 0x228(0x08)
};

// Class FSD.SpacerigStart
// Size: 0x280 (Inherited: 0x250)
struct ASpacerigStart : APlayerStart {
	FMulticastInlineDelegate OnPlayerSpawn; // 0x250(0x10)
	FMulticastInlineDelegate OnPlayerLeave; // 0x260(0x10)
	AFSDPlayerController* usedBy; // 0x270(0x08)
	enum class ESpacerigStartType StartType; // 0x278(0x01)
};

// Class FSD.FSDPlayerState
// Size: 0x418 (Inherited: 0x320)
struct AFSDPlayerState : APlayerState {
	FMulticastInlineDelegate OnPlayerCharacterSpawned; // 0x320(0x10)
	FMulticastInlineDelegate OnPlayerTalkingChanged; // 0x330(0x10)
	FMulticastInlineDelegate OnSelectedCharacterChanged; // 0x340(0x10)
	float FractionLevelGenerated; // 0x350(0x04)
	FString LevelGenerationState; // 0x358(0x10)
	FMulticastInlineDelegate OnSupplyStatusChangedEvent; // 0x368(0x10)
	FMulticastInlineDelegate OnEnemyKilledEvent; // 0x378(0x10)
	TArray<UVanityItem*> LatestEquipedVanity; // 0x388(0x10)
	APlayerCharacter* SelectedCharacter; // 0x398(0x08)
	bool bIsServer; // 0x3a0(0x01)
	bool ShouldCopyProperties; // 0x3a1(0x01)
	char gameOwnerStatus; // 0x3a2(0x01)
	bool IsOnSpaceRig; // 0x3a3(0x01)
	UPlayerStatsComponent* PlayerStatsComponent; // 0x3a8(0x08)
	UPlayerRejoinState* RejoinState; // 0x3b0(0x08)
	USaveGameStateComponent* SaveGameStateComponent; // 0x3b8(0x08)
	APlayerCharacter* PlayerCharacter; // 0x3c0(0x08)
	bool IsInMission; // 0x3c8(0x01)
	bool IsTalking; // 0x3c9(0x01)
	bool HasGeneratedLevel; // 0x3ca(0x01)
	bool HasSelectedCharacter; // 0x3cb(0x01)
	int32_t PlayerSortId; // 0x3cc(0x04)
	FMulticastInlineDelegate OnPlayerNameChanged; // 0x3d0(0x10)
	FMulticastInlineDelegate OnFractionLevelGenerated; // 0x3e0(0x10)
	FMulticastInlineDelegate OnLevelGenerationStateChanged; // 0x3f0(0x10)
	UPlayerResourceComponent* PlayerResources; // 0x400(0x08)
	char SupplyAmmoStatus; // 0x408(0x01)
	char SupplyHealthStatus; // 0x409(0x01)

	void SetSelectedCharacterID(UPlayerCharacterID* characterID);
	void SetSelectedCharacter(APlayerCharacter* NewCharacter);
	void SetCanOnlySpectate(bool canOnlySpectate);
	void ServerSetSelectedCharacter(APlayerCharacter* NewCharacter);
	void Server_SetSupplyStatus(char StatusHealth, char StatusAmmo);
	void Server_SetGameOwnerStatus(int32_t gameOwnerStatus);
	void OnRep_SupplyHealthStatus();
	void OnRep_SupplyAmmoStatus();
	void OnRep_SelectedCharacter();
	void OnRep_PlayerCharacter();
	void OnRep_LevelGenerationState();
	void OnRep_GameOwnerStatus();
	void OnRep_FractionLevelGenerated();
	void OnLateJoinFinished();
	bool HasNormalOwnerStatus();
	int32_t GetXPRewardsSum();
	TArray<FXPReward> GetXPRewardsCustom(TMap<UResourceData*, float> Resources, int32_t EnemiesKilled, bool FailPrimaryObjectiveCompleted, bool FailSecondaryObjectiveCompleted);
	TArray<FXPReward> GetXPRewards();
	TArray<FXPReward> GetXPRewardDeepDive(int32_t StagesCompleted);
	int32_t GetUIPing();
	float GetSupplyHealthStatus();
	float GetSupplyAmmoStatus();
	int32_t GetSelectedCharacterLevel();
	UPlayerCharacterID* GetSelectedCharacterID();
	APlayerCharacter* GetSelectedCharacter();
	FCharacterProgress GetSelectCharacterProgress();
	UPlayerResourceComponent* GetPlayerResourceComponent();
	int32_t GetPlayerRank();
	AFSDPlayerController* GetPlayerController();
	bool GetGameOwnerStatus(enum class EGameOwnerStatus Status);
	TArray<FCreditsReward> GetDeepDiveCreditsReward(int32_t StagesCompleted, int32_t goldCollected);
	enum class EChatSenderType GetChatSenderType();
	FCharacterProgress GetCharacterProgress(UPlayerCharacterID* characterID);
	int32_t GetCharacterLevel(UPlayerCharacterID* characterID);
	void CharacterSelected();
};

// Class FSD.FSDPostProcessingActor
// Size: 0x240 (Inherited: 0x220)
struct AFSDPostProcessingActor : AActor {
	enum class EPostProcessingType PostProcessingType; // 0x220(0x01)
	UPostProcessComponent* PostProcessComponent; // 0x228(0x08)
	FWeightedBlendables InitialBlendables; // 0x230(0x10)

	void UnapplyPostProcessingBlendablesByType(UObject* WorldContext, enum class EPostProcessingType Type);
	void UnapplyPostProcessingBlendablesByID(UObject* WorldContext, FName InID);
	void UnapplyPostProcessingBlendable(UObject* WorldContext, enum class EPostProcessingType Type, TScriptInterface<IBlendableInterface> InBlendableObject);
	void UnapplyAllPostProcessingBlendables(UObject* WorldContext);
	void SetupHDRColorGamma();
	void SetPostProcessManager(APostProcessingManager* InManager);
	UMaterialInstanceDynamic* GetPostProcessingMaterialInstance(UObject* WorldContext, UMaterialInterface* Material);
	UMaterialInstanceDynamic* ApplyPostProcessingMaterial(UObject* WorldContext, enum class EPostProcessingType Type, UMaterialInterface* Material, float InWeight, FName InID);
	void ApplyPostProcessingBlendable(UObject* WorldContext, enum class EPostProcessingType Type, TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight, FName InID);
};

// Class FSD.FSDProjectileMovementComponent
// Size: 0x240 (Inherited: 0x1d0)
struct UFSDProjectileMovementComponent : UProjectileMovementComponent {
	FMulticastInlineDelegate OnProjectilePenetrate; // 0x1d0(0x10)
	FMulticastInlineDelegate OnProjectileOutOfPropulsion; // 0x1e0(0x10)
	char bShouldPenetrate : 1; // 0x1f0(0x01)
	TArray<AActor*> IgnoreCollisionAgainst; // 0x1f8(0x10)
	bool InvertIgnoreCollisionAgainst; // 0x208(0x01)
	UCurveFloat* AccelerationCurve; // 0x210(0x08)
	float AccelerationMultiplier; // 0x218(0x04)
	float MaxPropulsionTime; // 0x21c(0x04)
	char bCancelPenetration : 1; // 0x220(0x01)
};

// Class FSD.FSDRefinery
// Size: 0x398 (Inherited: 0x290)
struct AFSDRefinery : ADropPod {
	FMulticastInlineDelegate OnRefineryStateChanged; // 0x290(0x10)
	FMulticastInlineDelegate OnRefineryProgressChanged; // 0x2a0(0x10)
	FMulticastInlineDelegate OnPipelineRegistered; // 0x2b0(0x10)
	FMulticastInlineDelegate OnPipelineSegmentPlaced; // 0x2c0(0x10)
	FMulticastInlineDelegate OnExtractorPodSpawned; // 0x2d0(0x10)
	USingleUsableComponent* UsableStartRefining; // 0x2e0(0x08)
	USingleUsableComponent* UsableLaunchRocket; // 0x2e8(0x08)
	TMap<float, UDialogDataAsset*> ProgressMissionShouts; // 0x2f0(0x50)
	UDialogDataAsset* LaunchRocketButtonPressedShout; // 0x340(0x08)
	ATrackBuilderItem* BuilderItem; // 0x348(0x08)
	float RefiningTotalDuration; // 0x350(0x04)
	FFloatRange PipelineBreakCoolDown; // 0x354(0x10)
	float PipelineBreakTimePenaltyPerAdditionalPlayers; // 0x364(0x04)
	FInt32Range MaxSegmentBreakDowns; // 0x368(0x10)
	int32_t SegmentBreakDownPenaltyPerAdditionalPlayers; // 0x378(0x04)
	enum class ERefineryState RefineryState; // 0x384(0x01)
	enum class ERefineryState PreviousRefineryState; // 0x385(0x01)
	char RefiningProgressReplicated; // 0x386(0x01)
	TArray<APipelineStart*> PipelineStarts; // 0x388(0x10)

	void SetRefineryState(enum class ERefineryState InState);
	void RefineryStateDelegate__DelegateSignature(enum class ERefineryState InRefineryState);
	void RefineryProgressDelegate__DelegateSignature(float InProgress01);
	void RefineryPipelineSegmentDelegate__DelegateSignature(APipelineSegment* InSegment);
	void RefineryPipelineDelegate__DelegateSignature(APipelineStart* InPipelineStart);
	void RefineryExtractPodDelegate__DelegateSignature(APipelineExtractorPod* InExtractorPod);
	void ReceiveRefineryStateChanged(enum class ERefineryState InState);
	void ReceivePipelineStateChanged(APipelineStart* InPipeline, enum class EPipelineBuildState InState);
	void ReceivePipelineStartReady(APipelineStart* InPipelineStart);
	void OnStartRefiningPressed(APlayerCharacter* InCharacter, enum class EInputKeys Key);
	void OnRep_RefineryState(enum class ERefineryState InOldState);
	void OnPlayerCharacterRegistered(APlayerCharacter* InCharacter);
	void OnPipelineStateChanged(APipelineStart* InPipelineStart, enum class EPipelineBuildState InPipelineState);
	void OnObjectivesChanged();
	void OnLaunchRocketPressed(APlayerCharacter* InCharacter, enum class EInputKeys Key);
	float GetRefiningProgress();
};

// Class FSD.FSDRefineryAnimInstance
// Size: 0x270 (Inherited: 0x270)
struct UFSDRefineryAnimInstance : UAnimInstance {
	enum class ERefineryState RefineryState; // 0x268(0x01)
};

// Class FSD.TutorialComponent
// Size: 0x100 (Inherited: 0xb0)
struct UTutorialComponent : UActorComponent {
	bool bTutorialEnabled; // 0xb0(0x01)
	int32_t Priority; // 0xb4(0x04)
	float MaxDuration; // 0xb8(0x04)
	int32_t MaxViewCount; // 0xbc(0x04)
	bool ShowInTutorialLevel; // 0xc0(0x01)
	bool bAutoRegisterWithManager; // 0xc1(0x01)
	bool bDebugAlwaysShow; // 0xc2(0x01)
	bool ManuallyMarkViews; // 0xc3(0x01)
	TWeakObjectPtr<APlayerCharacter> PlayerCharacter; // 0xc4(0x08)
	TWeakObjectPtr<AFSDPlayerState> PlayerState; // 0xcc(0x08)
	TWeakObjectPtr<AFSDPlayerController> PlayerController; // 0xd4(0x08)
	TWeakObjectPtr<UFSDSaveGame> SaveGame; // 0xdc(0x08)
	TWeakObjectPtr<ATutorialManager> TutorialManager; // 0xe4(0x08)
	bool bTutorialInitialized; // 0xec(0x01)
	bool bTutorialReady; // 0xed(0x01)
	bool bTutorialVisible; // 0xee(0x01)
	bool bTutorialActive; // 0xef(0x01)

	void RegisterTutorial();
	void ReceiveOnShown();
	void ReceiveOnInitialized();
	void ReceiveOnHidden();
	void OnTutorialsReset();
	void OnManagerReady(ATutorialManager* Manager);
	void MarkTutorialWatched();
	void MarkTutorialReadyNow();
	void MarkTutorialReadyInSeconds(float Delay);
	bool HasTutorialBeenShown();
	FString GetTutorialName();
	void CancelTutorial(bool CountAsViewed);
};

// Class FSD.TutorialHintComponent
// Size: 0x170 (Inherited: 0x100)
struct UTutorialHintComponent : UTutorialComponent {
	FTutorialHint Hint; // 0x100(0x70)

	void SetRemainingVisibleTime(float remainingTime);
	bool IsSingleplayer(UObject* WorldContext);
	void ChangeHint(FTutorialHint NewHint);
};

// Class FSD.RefineryHintComponent
// Size: 0x178 (Inherited: 0x170)
struct URefineryHintComponent : UTutorialHintComponent {
	TWeakObjectPtr<AFSDRefinery> Refinery; // 0x170(0x08)

	void ReceiveRefinerySpawned(AFSDRefinery* InRefinery);
	void ReceivePipelineSegmentPlaced(APipelineSegment* InSegment);
	void ReceiveExtractorPodSpawned(APipelineExtractorPod* InExtractorPod);
	void OnRefinerySpawned(AFSDRefinery* InRefinery);
};

// Class FSD.FSDSaveGame
// Size: 0xb70 (Inherited: 0x28)
struct UFSDSaveGame : USaveGame {
	FMulticastInlineDelegate OnCreditsChanged; // 0x28(0x10)
	FMulticastInlineDelegate OnCharacterSaveChanged; // 0x38(0x10)
	FMulticastInlineDelegate OnCharacterCanRetire; // 0x48(0x10)
	FMulticastInlineDelegate OnCharacterRetired; // 0x58(0x10)
	FMulticastInlineDelegate OnPlayerProgressChanged; // 0x68(0x10)
	FMulticastInlineDelegate OnTutorialsReset; // 0x78(0x10)
	FMulticastInlineDelegate OnPersonalMetricsChanged; // 0x88(0x10)
	FMulticastInlineDelegate OnAnonymousMetricsChanged; // 0x98(0x10)
	FMulticastInlineDelegate OnItemUnlocked; // 0xa8(0x10)
	FMulticastInlineDelegate OnItemPurchased; // 0xb8(0x10)
	FMulticastInlineDelegate OnItemUINotificationChange; // 0xc8(0x10)
	int32_t VersionNumber; // 0xd8(0x04)
	bool bMilestoneResetShown; // 0xdc(0x01)
	bool bYearTwoGiftClaimed; // 0xdd(0x01)
	FMulticastInlineDelegate OnForgingXPChanged; // 0xe0(0x10)
	FMulticastInlineDelegate OnResourceAmountChanged; // 0xf0(0x10)
	FMulticastInlineDelegate OnSkinUnlocked; // 0x100(0x10)
	FDateTime SaveSlotTimeStamp; // 0x120(0x08)
	FMulticastInlineDelegate OnPerkPointsChanged; // 0x128(0x10)
	FMissionStatSave MissionStatsSave; // 0x138(0x18)
	FMilestoneSave Milestones; // 0x150(0x10)
	FPerkClaimsSave OwnedPerks; // 0x160(0x18)
	FCharacterPerksSave EquippedPerks; // 0x178(0x10)
	FAchievementSave AchievementSave; // 0x188(0x20)
	TArray<FCharacterPerksSave> EquippedPerkLoadouts; // 0x1a8(0x10)
	FSchematicSave SchematicSave; // 0x1c0(0x38)
	FPromotionRewardsSave PromotionRewardsSave; // 0x1f8(0x50)
	FFSDEventRewardsSave FSDEventRewardsSave; // 0x248(0x50)
	FSeasonSave SeasonSave; // 0x298(0x50)
	FGameDLCSave GameDLCSave; // 0x2e8(0x50)
	int32_t SaveCreatedInPatch; // 0x338(0x04)
	FString AnonymousID; // 0x340(0x10)
	int32_t PerkPoints; // 0x350(0x04)
	bool HasRecievedDiscordReward; // 0x354(0x01)
	enum class EFSDFaction Faction; // 0x355(0x01)
	TArray<FGuid> UnLockedMissions; // 0x358(0x10)
	TMap<FGuid, FUnLockedMissionParameters> UnLockedMissionParameters; // 0x368(0x50)
	TArray<FGuid> UnLockedPlanetZones; // 0x3b8(0x10)
	FCampaignSave CampaignSave; // 0x3c8(0x48)
	FDeepDiveSave DeepDiveSave; // 0x410(0x70)
	TArray<FCharacterSave> CharacterSaves; // 0x480(0x10)
	int32_t Credits; // 0x490(0x04)
	int32_t LastBoughtDailyDealSeed; // 0x494(0x04)
	FForgingSave Forging; // 0x498(0x08)
	FDrinkSave Drinks; // 0x4a0(0x58)
	TMap<FGuid, FItemUpgradeSelection> ItemUpgradeSelections; // 0x4f8(0x50)
	TArray<FUpgradeLoadout> ItemUpgradeLoadouts; // 0x548(0x10)
	TArray<FGuid> PurchasedItemUpgrades; // 0x558(0x10)
	TArray<FGuid> UnLockedItemUpgrades; // 0x568(0x10)
	TArray<FGuid> UnlockedItems; // 0x578(0x10)
	TArray<FGuid> OwnedItems; // 0x588(0x10)
	TMap<FGuid, int32_t> EnemiesKilled; // 0x598(0x50)
	TMap<FGuid, FItemNotificationInfo> ItemsWithNotification; // 0x5e8(0x50)
	TMap<FGuid, FSkinList> UnlockedItemSkins; // 0x638(0x50)
	TSet<FGuid> UnlockedPickaxeParts; // 0x688(0x50)
	TArray<UVanityItem*> UnLockedVanityItems; // 0x6d8(0x10)
	TArray<FGuid> UnLockedVanityItemIDs; // 0x6e8(0x10)
	TArray<FGuid> HiddenUICategories; // 0x6f8(0x10)
	int32_t LastCollectedCommunityRewardPeriodID; // 0x708(0x04)
	TSet<FGuid> MinersManualKnownObjects; // 0x710(0x50)
	FEventRewardSave EventRewardSave; // 0x760(0x50)
	FItemUINotifications ItemUINotifications; // 0x7b0(0x68)
	FString RejoinSessionId; // 0x818(0x10)
	bool FirstRejoinAttempt; // 0x828(0x01)
	bool HaveSkinsBeenReset; // 0x829(0x01)
	bool bHasOpenedDeepDiveTerminal; // 0x82a(0x01)
	FResourcesSave Resources; // 0x830(0xa0)
	bool FirstSession; // 0x8d0(0x01)
	TArray<FWatchedTutorial> WatchedTutorials; // 0x8d8(0x10)
	FConsoleOptionsInSaveGame ConsoleOptions; // 0x8e8(0x120)
	FGDKWinOptionsInSaveGame WinGDKOptions; // 0xa08(0x70)
	FOptionsInSaveGame WindowsOptions; // 0xa78(0x08)
	bool HasCompletedTutorial; // 0xa80(0x01)
	bool HasPlayedTutorial; // 0xa81(0x01)
	bool ShowHowToRestartTutorialPrompt; // 0xa82(0x01)
	bool HasPlayedIntroMessage; // 0xa83(0x01)
	bool HasSentSteamInfo; // 0xa84(0x01)
	bool HasClaimedSteamGroupLoot; // 0xa85(0x01)
	bool IsBoscoAllowed; // 0xa86(0x01)
	bool HasRefundedUpgradeCostDifference; // 0xa87(0x01)
	bool HasJoinedXboxClub; // 0xa88(0x01)
	bool HasSeenAnalyticsPopUp; // 0xa89(0x01)
	bool AllowAnalyticsTracking; // 0xa8a(0x01)
	bool AllowPersonalAnalyticsTracking; // 0xa8b(0x01)
	bool IsModded; // 0xa8c(0x01)
	int32_t Index; // 0xa90(0x04)
	FString Name; // 0xa98(0x10)
	float TotalPlayTimeSeconds; // 0xaa8(0x04)
	TMap<FGuid, int32_t> SelectedLoadout; // 0xab0(0x50)
	uint32_t userIdx; // 0xb00(0x04)
	uint32_t CurrLoadoutIdx; // 0xb04(0x04)
	uint32_t SaveToDiskCounter; // 0xb08(0x04)
	uint32_t BackupSaveIndex; // 0xb0c(0x04)
	uint32_t ExternalBackupSaveIndex; // 0xb10(0x04)
	int32_t NumberOfGamesPlayed; // 0xb14(0x04)
	UPlayerCharacterID* LastPlayedCharacter; // 0xb18(0x08)
	bool ShowInfoScreen; // 0xb20(0x01)
	FString LastShownVersion; // 0xb28(0x10)
	FSonyInputSettings SonyInputSettings; // 0xb38(0x2c)
	UFSDGameInstance* FSDGameInstance; // 0xb68(0x08)

	void TutorialsResetDelegate__DelegateSignature();
	bool TrySellResource(UResourceData* Resource, int32_t Amount, int32_t Price);
	bool TryDeductResources(TMap<UResourceData*, int32_t> Resources);
	bool TryDeductCredits(int32_t Amount);
	bool TryBuyResource(UResourceData* Resource, int32_t Amount, int32_t Price);
	void SkinSignature__DelegateSignature(UItemSkin* Skin, UItemID* ItemID);
	bool ShouldDisplayFirstSchematicMessage();
	void SetSonyInputSettingMotionXMapping(enum class ESonyControllerMotionMapping NewValue);
	void SetSonyInputSettingLightMode(enum class ESonyControllerLightMode NewValue);
	void SetSonyInputSettingFloat(UObject* WorldContext, enum class ESonyInputSettingsFloats Setting, float NewValue);
	void SetSonyInputSettingBool(enum class ESonyInputSettingsBools Setting, bool NewValue);
	bool SetPersonalAnalytics(bool State);
	void SetIsModded(bool modded);
	void SetIndexAndName(int32_t Index, FString Name);
	void SetHasSentSteamInfo();
	void SetHasJoinedXboxClub();
	void SetHasClaimSteamGroupLoot();
	void SetFaction(enum class EFSDFaction newFaction, bool Reasign);
	void SetEquippedItem(enum class EItemCategory Category, UPlayerCharacterID* PlayerId, AActor* Item);
	void SetDiscordReward(bool State);
	void SetCharacterLoadout(UPlayerCharacterID* characterID, int32_t loadoutNumber);
	void SetBoscoAllowed(bool aIsBoscoAllowed);
	bool SetAnonymousAnalytics(bool State);
	void SaveToDisk();
	bool SaveSlotToDisk(UFSDSaveGame* SaveSlot, FString slotName, int32_t userIdx);
	void RetirementSignature__DelegateSignature(APlayerCharacter* CharacterClass, int32_t RetirementCount);
	int32_t RetireCharacter(UPlayerCharacterID* characterID);
	void ResourceAmountChangedDelegate__DelegateSignature(UResourceData* Resource, float currentAmount);
	void ResetTutorials();
	void ResetSonyTouchSettings();
	void ResetSonyMotionSettings();
	void ResetSonyDualSenseSettings();
	void ResetRejoinSessionId();
	void RejoinAttempted();
	void RefreshLoadoutFromCharacter(UPlayerCharacterID* characterID);
	bool RecievedDiscordReward();
	FString PromotedClassesString();
	void PlayerProgressChangedSignature__DelegateSignature(int32_t Rank, int32_t Stars);
	void PersonalMatricsChangedSignature__DelegateSignature(bool AllowPersonalMetrics);
	void PerkPointsChangedSignature__DelegateSignature(int32_t PerkPoints, int32_t Change);
	void MarkRetirementRewardScreenSeen(UPlayerCharacterID* characterID);
	void MarkFirstSchematicMessageSeen();
	void ItemUnlockedDelegate__DelegateSignature();
	void ItemUINotificationDelegate__DelegateSignature();
	bool IsObsolete();
	bool IsInMinersManual(FGuid ObjectID);
	bool IsFirstRejoinAttempt();
	bool HasSeenRetirementRewardScreen();
	bool HasCharacterRetired(UPlayerCharacterID* characterID);
	bool HasCharacterCompletedRetirementCampaign(UPlayerCharacterID* characterID);
	bool HasBackupWithMoreProgress(UFSDGameInstance* GameInstance);
	bool HasAnyCharacterRetired();
	int32_t GetTotalGamesPlayed();
	int32_t GetTotalCharacterXP();
	enum class ESonyControllerMotionMapping GetSonyInputSettingMotionXMapping();
	enum class ESonyControllerLightMode GetSonyInputSettingLightMode();
	float GetSonyInputSettingFloat(enum class ESonyInputSettingsFloats Setting);
	bool GetSonyInputSettingBool(enum class ESonyInputSettingsBools Setting);
	FDateTime GetSlotTimeStamp();
	FString GetSlotLoadedFrom();
	int32_t GetSelectedLoadoutIndex(UPlayerCharacterID* characterID);
	FString GetSaveSlotName(int32_t userIdx);
	int32_t GetResourceSellingPrice(UResourceData* Resource, int32_t Amount);
	int32_t GetResourceBuyingPrice(UResourceData* Resource, int32_t Amount);
	float GetResourceAmount(UResourceData* Resource);
	int32_t GetRequiredXPForLevel(int32_t Level);
	FString GetRejoinSessionId();
	int32_t GetPurchasableItemCount();
	int32_t GetPlayerRetirementRank();
	int32_t GetPlayerRank();
	int32_t GetPerkPoints();
	FString GetName();
	int32_t GetMaxSaveSlots();
	int32_t GetMainSaves(UFSDGameInstance* GameInstance, TArray<UFSDSaveGame*> outMainSaves);
	bool GetIsModded();
	int32_t GetIndex();
	bool GetHasSentSteamInfo();
	bool GetHasClaimedSteamGroupLoot();
	enum class EFSDFaction GetFaction();
	UItemID* GetEquippedItemID(enum class EItemCategory Category, UPlayerCharacterID* PlayerId);
	AActor* GetEquippedItem(enum class EItemCategory Category, UPlayerCharacterID* PlayerId);
	int32_t GetCredits();
	int32_t GetClassXP(UPlayerCharacterID* characterID);
	int32_t GetClassLevel(UPlayerCharacterID* characterID);
	int32_t GetCharacterRetirementCount(FGuid PlayerId);
	bool GetBoscoAllowed();
	int32_t GetAvailableUserSlotIndex(UFSDGameInstance* GameInstance);
	TArray<UFSDSaveGame*> GetAllSavesFromDisk(UFSDGameInstance* GameInstance);
	void ForgingXPDelegate__DelegateSignature(float XP);
	void ForceSetIsModded(bool modded);
	void FixNamingOfMainSave(UFSDSaveGame* mainsave);
	bool DeleteFromDisk(UFSDGameInstance* GameInstance, FString slotName, int32_t userIdx);
	bool DeductPerkPoints(int32_t Amount);
	void CreditsChangedSignature__DelegateSignature(int32_t Credits);
	void CheckPromotionAchievementProgress(UObject* WorldContext, bool IsRetroactive);
	void CharacterSignature__DelegateSignature(APlayerCharacter* CharacterClass);
	void CharacterProgressChangedSignature__DelegateSignature(APlayerCharacter* CharacterClass, int32_t Level, float Progress);
	bool CanAfford(TMap<UResourceData*, int32_t> Resources);
	void AnonymousMatricsChangedSignature__DelegateSignature(bool AllowAnonymousMetrics);
	void AddPerkPoints(int32_t Amount);
	void AddGamePlayed();
	int32_t AddCredits(int32_t Amount);
};

// Class FSD.OptionalUICategory
// Size: 0x68 (Inherited: 0x30)
struct UOptionalUICategory : UDataAsset {
	FMulticastInlineDelegate OnVisibilityChanged; // 0x30(0x10)
	FGuid Guid; // 0x40(0x10)
	FText Description; // 0x50(0x18)

	void VisibilityChanged__DelegateSignature(UOptionalUICategory* Category, bool IsVisible);
	void SetVisible(UObject* WorldContext, bool IsCategoryVisible);
	bool IsVisible(UObject* WorldContext);
};

// Class FSD.ItemRefundList
// Size: 0x98 (Inherited: 0x30)
struct UItemRefundList : UDataAsset {
	bool ResetListOnSave; // 0x30(0x01)
	TArray<TSoftObjectPtr<UObject>> Items; // 0x38(0x10)
	TMap<FGuid, FItemRefundListItem> ItemsToRefund; // 0x48(0x50)
};

// Class FSD.FSDSendToURL
// Size: 0x40 (Inherited: 0x28)
struct UFSDSendToURL : UObject {
};

// Class FSD.FSDSessionUpdater
// Size: 0x78 (Inherited: 0x28)
struct UFSDSessionUpdater : UObject {
	FMulticastInlineDelegate OnNewFSDSessionID; // 0x28(0x10)
};

// Class FSD.FSDSkeletalMeshComponent
// Size: 0xac0 (Inherited: 0xac0)
struct UFSDSkeletalMeshComponent : USkeletalMeshComponent {
};

// Class FSD.FSDSplineLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFSDSplineLibrary : UBlueprintFunctionLibrary {

	bool SplineComponentSphereTrace(USplineComponent* SplineComponent, float Radius, enum class ETraceTypeQuery TraceType, float StepSize, TArray<AActor*> IgnoreActors, FHitResult OutHitResult, FVector Offset);
	TArray<FTransform> GetSplineComponentTransforms(USplineComponent* SplineComponent, float StepSize, enum class ESplineCoordinateSpace Space);
	void GetLocationAndTangentsAtSplinePoint(USplineComponent* Spline, int32_t PointIndex, FVector Location, FVector ArriveTangent, FVector LeaveTangent, enum class ESplineCoordinateSpace CoordinateSpace);
	void ConvertSplineDistanceToInputKey(USplineComponent* SplineComponent, USplineComponent* OptionalTargetSpline);
	bool CarveAroundSplinePoints(UObject* WorldContext, FVector InStartLocation, FVector InStartTangent, FVector InEndLocation, FVector InEndTangent, float InRadius, UTerrainMaterial* InTerrainMaterial, enum class ECarveFilterType InCarveFilter, enum class EPreciousMaterialOptions InPrecious);
	bool CarveAroundSplineMesh(USplineMeshComponent* InMesh, float InRadius, UTerrainMaterial* InTerrainMaterial, enum class ECarveFilterType InCarveFilter, enum class EPreciousMaterialOptions InPrecious);
	float ApproximateSplineDistanceAtWorldLocation(USplineComponent* Spline, FVector WorldLocation);
};

// Class FSD.FSDSteamUserStats
// Size: 0xc0 (Inherited: 0xb0)
struct UFSDSteamUserStats : UActorComponent {
};

// Class FSD.FSDSteamUtils
// Size: 0x28 (Inherited: 0x28)
struct UFSDSteamUtils : UBlueprintFunctionLibrary {

	bool PlayerIsFollowingUsOnSteam();
	void OpenURLInSteamBrowser(FString URL);
	bool IsTextFilteringInitialized();
	bool IsSteamLoaded();
	bool IsDev(APlayerState* PlayerState);
	bool InitializeFilterText();
	bool HasSupporterUpgrade();
	bool HasDeluxeEdition();
	bool HasContentCreatorEdition();
	FString GetSteamRegion();
	FString GetSteamLanguage();
	FString GetSteamBranchString();
	enum class ESteamBranch GetSteamBranch();
	FString GetPlayerSteamName();
	FString GetPlayerSteamID();
	FString FilterProfanityText(FString inputMessage);
};

// Class FSD.FSDPS4Utils
// Size: 0x28 (Inherited: 0x28)
struct UFSDPS4Utils : UBlueprintFunctionLibrary {

	void SetUGCAllowed(bool bAllowed);
	bool IsUGCAllowed();
	bool IsPS4SystemLoaded();
};

// Class FSD.FSDTutorialSettings
// Size: 0x50 (Inherited: 0x30)
struct UFSDTutorialSettings : UDataAsset {
	int32_t RequiredCPTreasures; // 0x30(0x04)
	int32_t RequiredCPMachineEvents; // 0x34(0x04)
	int32_t RequiredCPVeterans; // 0x38(0x04)
	TArray<FNewPlayerMutator> FirstMissionsMutators; // 0x40(0x10)
};

// Class FSD.FSDLevelLoadingPersistentWidget
// Size: 0x230 (Inherited: 0x230)
struct UFSDLevelLoadingPersistentWidget : UUserWidget {

	void SetFadeProgress(float Fade, bool ToSpaceRig, UTexture* loadingImage);
};

// Class FSD.FSDLabelWidget
// Size: 0x2a0 (Inherited: 0x2a0)
struct UFSDLabelWidget : UTextBlock {

	void SetWrapTextAt(float WrapAt);
	void SetWrappingPolicy(enum class ETextWrappingPolicy Policy);
	void SetMargin(FMargin NewMargin);
	void SetLineHeightPercentage(float percentage);
	void SetFontSize(int32_t Size);
	int32_t GetFontSize();
};

// Class FSD.FSDWidgetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFSDWidgetBlueprintLibrary : UBlueprintFunctionLibrary {

	void WidgetDelegate__DelegateSignature(UUserWidget* Widget);
	void WidgetCreatedOrReusedDelegate__DelegateSignature(bool WasCreated, UUserWidget* Widget, int32_t ActiveIndex);
	void ToggleAnimationLooping(UObject* WorldContext, UWidgetAnimation* InAnimation, FWidgetAnimationSettings InSettings, bool InLoop, bool OutPlayingChanged, bool OutIsPlaying);
	bool TextSmallerThan(FText Text1, FText Text2);
	bool TextGreaterThan(FText Text1, FText Text2);
	TArray<UWidget*> SortWidgetArray(TArray<UWidget*> InWidgets, FDelegate InCompareFunction);
	void SimpleBox(FPaintContext Context, FVector2D Position, FVector2D Size, FLinearColor Tint);
	FTimerHandle SetTimerForNextTick(UObject* WorldContext, FDelegate TimerDelegate);
	void SetSizeBoxSettings(USizeBox* InSizeBox, FSizeBoxSettings InSettings);
	void SetMousePosition(UObject* WorldContextObject, int32_t X, int32_t Y);
	void SetChildrenVisibility(UPanelWidget* Panel, enum class ESlateVisibility Visibility, int32_t StartIndex, UUserWidget* OptionalClassFilter);
	void ScrubAnimation(UObject* WorldContext, UWidgetAnimation* InAnimation, float Progress01);
	void ScaleTextBlockToHeight(UTextBlock* TextBlock, float TargetHeight, bool SetMinimimumWidth);
	void ScaleImageToHeight(UImage* Image, float TargetHeight);
	void PrintStrings(UObject* WorldContextObject, TArray<FString> InStrings, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration);
	FString MidIgnoringWhiteSpace(FString Source, int32_t Index, int32_t count);
	FVector2D MeasureTextSize(FText Text, FSlateFontInfo Font);
	FVector2D MeasureTextBlockSize(UTextBlock* TextBlock);
	void Line(FPaintContext Context, FVector2D Pos1, FVector2D Pos2, FLinearColor Tint);
	FLinearColor LerpColors(TArray<FLinearColor> Colors, bool Interpolate, float Progress01);
	int32_t LengthIgnoringWhitespace(FString Source);
	bool IsWindowsPlatform(UObject* WorldContextObject);
	bool IsWhiteSpaceAt(FString Source, int32_t Index);
	bool IsWhiteSpace(FString Source);
	bool IsHUDVisible(UObject* WorldContextObject);
	FString IntToRomanNumeral(int32_t Value);
	bool HasAnyVisibleChildren(UPanelWidget* Panel, int32_t StartIndex, UUserWidget* OptionalClassFilter);
	FString GetShortTimeString(int32_t TotalSeconds, bool BlinkDelimiter);
	UWindowWidget* GetParentWindowWidget(UUserWidget* InWidget);
	UUserWidget* GetParentUserWidget(UUserWidget* InWidget);
	AFSDPlayerState* GetOwningFSDPlayerState(UWidget* Target);
	FText GetKeyName(FKey Key);
	float GetFontMaxHeight(FSlateFontInfo Font);
	float GetFontBaseline(FSlateFontInfo Font);
	UWidget* GetFocusedWidget(UObject* WorldContextObject, APlayerController* Controller);
	UUserWidget* GetFocusableParentUserWidget(UUserWidget* InWidget);
	FVector2D GetDrawSize(FPaintContext InContext);
	UFSDCheatManager* GetCheatManager(UObject* WorldContextObject);
	UWidget* FindChildWidget(UPanelWidget* ParentWidget, UUserWidget* WidgetClass, bool SearchChildren);
	UVerticalBox* CreateVerticalBox(UObject* WorldContext);
	UTextBlock* CreateTextBlock(UObject* WorldContext, FText Text, FSlateFontInfo Font, enum class ETextJustify Justification, FLinearColor Color, bool WrapText);
	USpacer* CreateSpacer(UObject* WorldContext, FVector2D Size);
	TArray<UUserWidget*> CreateOrReuseChildrenWithCallbackEx(UPanelWidget* Panel, int32_t count, UUserWidget* WidgetClass, FDelegate OnCreatedOrReused, FDelegate OnCollapsed);
	TArray<UUserWidget*> CreateOrReuseChildrenWithCallback(UPanelWidget* Panel, int32_t count, UUserWidget* WidgetClass, FDelegate OnCreatedOrReused);
	TArray<UUserWidget*> CreateOrReuseChildren(UPanelWidget* Panel, int32_t count, UUserWidget* WidgetClass);
	UImage* CreateImageSized(UObject* WorldContext, UTexture2D* Texture, FLinearColor Tint, FVector2D Size);
	UImage* CreateImage(UObject* WorldContext, UTexture2D* Texture, FLinearColor Tint, bool AutoSize);
	UHorizontalBox* CreateHorizontalBox(UObject* WorldContext);
	bool CompareWidgetsDelegate__DelegateSignature(UWidget* InFirstWidget, UWidget* InSecondWidget);
	FText ClampTextLength(FText Text, int32_t MaxLength, FText CutOffIndicator);
	void Box(FPaintContext Context, FVector2D Position, FVector2D Size, FSlateBrush Brush, FLinearColor Tint);
	UWidget* AddWidgetToRow(UVerticalBox* VerticalBox, UWidget* Widget, int32_t MaxWidgetsPerRow, float WidgetSpacing, float RowSpacing, UHorizontalBoxSlot* OutSlot, UHorizontalBox* OutRow);
	UWidget* AddChildToVerticalBoxEx(UVerticalBox* VerticalBox, UWidget* Widget, enum class EHorizontalAlignment HorizontalAlignment, enum class EVerticalAlignment VerticalAlignment, float Size, FMargin Padding, UVerticalBoxSlot* OutSlot, UVerticalBox* OutVerticalBox);
	UWidget* AddChildToUniformGridEx(UUniformGridPanel* GridPanel, UWidget* Widget, enum class EHorizontalAlignment HorizontalAlignment, enum class EVerticalAlignment VerticalAlignment, int32_t Column, int32_t Row, UUniformGridSlot* OutSlot, UUniformGridPanel* OutGridPanel);
	UWidget* AddChildToHorizontalBoxEx(UHorizontalBox* HorizontalBox, UWidget* Widget, enum class EHorizontalAlignment HorizontalAlignment, enum class EVerticalAlignment VerticalAlignment, float Size, FMargin Padding, UHorizontalBoxSlot* OutSlot, UHorizontalBox* OutHorizontalBox);
};

// Class FSD.FSDWidgetEffectsComponent
// Size: 0x100 (Inherited: 0xb0)
struct UFSDWidgetEffectsComponent : UActorComponent {
	TArray<FWidgetPing> WidgetPings; // 0xb0(0x10)
	TArray<FWidgetFade> WidgetFades; // 0xc0(0x10)
	TArray<FWidgetTextCounter> WidgetTextCounters; // 0xd0(0x10)
	TArray<FCustomCounter> CustomCounters; // 0xe0(0x10)
	TArray<FWidgetMover> WidgetMovers; // 0xf0(0x10)

	void StartTextCounter(UObject* WorldContext, UTextBlock* Widget, float Start, float End, float Duration, int32_t MaxDigits, float StartDelay);
	void StartCounter(UObject* WorldContext, UObject* Owner, float Start, float End, float Duration, FDelegate OnCount, float StartDelay);
	void PingWidget(UObject* WorldContext, UWidget* Widget, float Amount, float Duration, enum class EPingType PingType, float StartDelay);
	void MoveWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D Start, FVector2D End, float Duration, enum class EMoveType MoveType, float StartDelay);
	void MoveOutWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D MoveToOffset, float Duration, float StartDelay);
	void MoveInWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D MoveFromOffset, float Duration, float StartDelay);
	void FadeWidget(UObject* WorldContext, UUserWidget* Widget, float StartFade, float EndFade, float Duration, float StartDelay);
	void FadeOutWidget(UObject* WorldContext, UUserWidget* Widget, float Duration, float StartDelay);
	void FadeInWidget(UObject* WorldContext, UUserWidget* Widget, float Duration, float StartDelay);
};

// Class FSD.FSDXboxUtils
// Size: 0x28 (Inherited: 0x28)
struct UFSDXboxUtils : UBlueprintFunctionLibrary {

	void ShowStoreUIForStoreItem(UObject* WorldContextObject, FString storeItemName);
	void ShowStoreUI(UObject* WorldContextObject);
	bool ShowCheatTerminal();
	bool IsXboxInsiderBuild();
	bool IsDCLCheckComplete(UObject* WorldContextObject);
};

// Class FSD.FSDPFPUtils
// Size: 0x28 (Inherited: 0x28)
struct UFSDPFPUtils : UBlueprintFunctionLibrary {

	bool IsPlayfabLoaded();
	FString GetPlayfabUserId();
};

// Class FSD.TrackBuilderItem
// Size: 0x3e0 (Inherited: 0x388)
struct ATrackBuilderItem : AAnimatedItem {
	UCrosshairAggregator* CrosshairAggregator; // 0x390(0x08)
	enum class EPlaceableObstructionType ObstructionType; // 0x398(0x01)
	FVector ObstructionLocation; // 0x39c(0x0c)
	FVector GroundNormal; // 0x3a8(0x0c)
	ATrackBuilderSegment* DefaultSegmentType; // 0x3c8(0x08)
	ATrackBuilderSegment* NextSegment; // 0x3d0(0x08)
	bool bIsPlacingSegment; // 0x3d8(0x01)

	void UpdatePlacement(FTransform InTransform, UTrackBuilderConnectPoint* InConnectPoint, bool bPlacementValid, bool InUpdateServer);
	void ServerUpdatePlacement(FTransform InTransform, bool bPlacementValid, UTrackBuilderConnectPoint* InConnectPoint);
	void ServerFinishPlacement(FTransform FinalLocation, UTrackBuilderConnectPoint* ConnectPoint);
	void ServerCancelPlacement();
	void ServerBeginPlaceSegment(UTrackBuilderUsable* InUsable);
	void ReceiveBeginPlaceSegment();
	void OnRep_NextSegment();
	ATrackBuilderSegment* GetSegmentType();
	void FinishPlacement(FTransform FinalLocation, UTrackBuilderConnectPoint* ConnectPoint);
	void CancelPlacement();
	FVector AdjustInitialLocation(FVector Location);
};

// Class FSD.FuelLineBuilderItem
// Size: 0x3f0 (Inherited: 0x3e0)
struct AFuelLineBuilderItem : ATrackBuilderItem {
	UItemPlacerAggregator* SegmentPlacer; // 0x3e0(0x08)

	void ReceivePlacementUpdated(bool InCanPlace, bool InConnecting, float InDistanceProgress);
};

// Class FSD.FuelLineEndPoint
// Size: 0x230 (Inherited: 0x220)
struct AFuelLineEndPoint : AActor {
	UFuelLineConnectPoint* ConnectPoint; // 0x220(0x08)
	UStaticMeshComponent* StaticMesh; // 0x228(0x08)

	void ReceivePing(bool InValidPlacement);
	void CallbackConnectedWithSegment(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment);
};

// Class FSD.TrackBuilderConnectPoint
// Size: 0x450 (Inherited: 0x410)
struct UTrackBuilderConnectPoint : USphereComponent {
	FMulticastInlineDelegate OnConnectedWithSegment; // 0x410(0x10)
	ATrackBuilderSegment* ConnectType; // 0x420(0x08)
	TWeakObjectPtr<ATrackBuilderSegment> ConnectedSegment; // 0x428(0x08)
	float MaxConnectRadius; // 0x430(0x04)
	float ConnectDistance; // 0x434(0x04)
	FVector MaxAngles; // 0x438(0x0c)

	void OnRep_ConnectedSegment();
	FTransform GetConnectTransform(FTransform FromWorldTransform);
	bool Disconnect(ATrackBuilderSegment* InSegment);
	void ConnectionDelegate__DelegateSignature(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment);
	bool Connect(ATrackBuilderSegment* InSegment);
	bool CanConnectWith(ATrackBuilderSegment* InSegment, FTransform FromWorldTransform);
};

// Class FSD.FuelLineConnectPoint
// Size: 0x450 (Inherited: 0x450)
struct UFuelLineConnectPoint : UTrackBuilderConnectPoint {
};

// Class FSD.TrackBuilderSegment
// Size: 0x290 (Inherited: 0x220)
struct ATrackBuilderSegment : AActor {
	UTrackBuilderUsable* NextSegmentUsable; // 0x220(0x08)
	TWeakObjectPtr<APlayerCharacter> BuiltByCharacter; // 0x228(0x08)
	TWeakObjectPtr<UTrackBuilderUsable> BuiltFromUsable; // 0x230(0x08)
	FTrackBuilderPoint SegmentEndTransform; // 0x238(0x28)
	FTrackBuilderPoint ServerSegmentEndTransform; // 0x260(0x28)

	bool UpdatePlacement(FTransform InTransform, UTrackBuilderConnectPoint* InConnectPoint, bool InPlacementValid, AItem* PlaceableItem);
	void ReceivPlacementValidChanged(bool InIsValid);
	void ReceivePlacementStateChanged(enum class ETrackBuildPlacementState NewState);
	void ReceivePlacementChangedEnd(FTransform NewEndTransform, UTrackBuilderConnectPoint* InConnectPoint);
	void ReceivePlacementChangedBegin(FTransform NewEndTransform, UTrackBuilderConnectPoint* InConnectPoint);
	bool ReceiveCanPlaceAt(FTransform InCandidateTransform, UTrackBuilderConnectPoint* InConnectPoint);
	void OnRep_SegmentEndTransform();
	UTrackBuilderUsable* GetTrackStartUsable();
	AActor* GetTrackStartActor();
	FTransform GetStartTransform();
	FTransform GetSegmentEndTransform();
	enum class ETrackBuildPlacementState GetPlacementState();
	ATrackBuilderSegment* GetNextSegment(bool bForward);
	bool GetIsSegmentEndTransformValid();
	UTrackBuilderConnectPoint* GetConnectPoint();
	bool CanPlaceAt(FTransform InCandidateTransform, UTrackBuilderConnectPoint* InConnectPoint, AItem* PlaceableItem);
};

// Class FSD.FuelLineSegment
// Size: 0x2c8 (Inherited: 0x290)
struct AFuelLineSegment : ATrackBuilderSegment {
	USplineMeshComponent* FuelLineSplineMesh; // 0x290(0x08)
	USplineComponent* FuelLineSplineComponent; // 0x298(0x08)
	UStaticMeshComponent* FuelLineEndPostMesh; // 0x2a0(0x08)
	USimpleHealthComponent* DeconstructHealthComponent; // 0x2a8(0x08)
	USceneComponent* PreviewEndPostLocation; // 0x2b0(0x08)
	float EndPostHeightOffset; // 0x2b8(0x04)
	float MaxLength; // 0x2bc(0x04)
	bool bHasMaxTurnAngle; // 0x2c0(0x01)
	float MaxTurnAngle; // 0x2c4(0x04)

	void ClientUpdateStartTransform(FVector NewStartLocation);
	void ChangeStartTransform(FTransform ChangedStartLocation);
	void CallbackOnDeath(UHealthComponentBase* InHealthComponent);
	void CallbackCanStartNextSegmentChanged(bool InCanStart);
};

// Class FSD.FuelLineStart
// Size: 0x258 (Inherited: 0x220)
struct AFuelLineStart : AActor {
	FMulticastInlineDelegate OnFuelLineConnected; // 0x220(0x10)
	UStaticMeshComponent* StaticMesh; // 0x230(0x08)
	UOutlineComponent* OutlineComponent; // 0x238(0x08)
	USimpleObjectInfoComponent* ObjectInfoComponent; // 0x240(0x08)
	UFuelLineStartUsable* UsableStartFuelLine; // 0x248(0x08)
	bool bFuelLineConnected; // 0x250(0x01)

	void ReceiveFuelLineConnected();
	void OnRep_FuelLineConnected();
	void FuelLineStartDelegate__DelegateSignature(AFuelLineStart* InFuelLineStart);
	void CallbackNextSegmentChanged(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment);
};

// Class FSD.TrackBuilderUsable
// Size: 0x190 (Inherited: 0x150)
struct UTrackBuilderUsable : UInstantUsable {
	FMulticastInlineDelegate OnNextSegmentChanged; // 0x150(0x10)
	ATrackBuilderItem* BuilderItemType; // 0x160(0x08)
	FString ColliderName; // 0x168(0x10)
	USceneComponent* TrackStartComponent; // 0x178(0x08)
	ATrackBuilderSegment* NextSegment; // 0x180(0x08)
	TWeakObjectPtr<APlayerCharacter> InUseBy; // 0x188(0x08)

	void SegmentDelegate__DelegateSignature(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment);
	void OnRep_NextSegment();
	void OnNextSegmentDestroyed(AActor* InActor);
	FTransform GetStartTransform();
	void FinishUse(APlayerCharacter* User, ATrackBuilderSegment* InSegment);
};

// Class FSD.FuelLineStartUsable
// Size: 0x190 (Inherited: 0x190)
struct UFuelLineStartUsable : UTrackBuilderUsable {
};

// Class FSD.StatusEffectSettings
// Size: 0x38 (Inherited: 0x30)
struct UStatusEffectSettings : UDataAsset {
	UStatusEffect* frozen; // 0x30(0x08)
};

// Class FSD.GameAnimationSettings
// Size: 0x30 (Inherited: 0x30)
struct UGameAnimationSettings : UDataAsset {
};

// Class FSD.UpgradeSettings
// Size: 0x140 (Inherited: 0x30)
struct UUpgradeSettings : UDataAsset {
	TArray<TSoftObjectPtr<UItemUpgrade>> UpgradesToCostRefund; // 0x30(0x10)
	TArray<int32_t> ClassAUpgradeCosts; // 0x40(0x10)
	TArray<int32_t> ClassBUpgradeCosts; // 0x50(0x10)
	TArray<int32_t> GearAUpgradeCosts; // 0x60(0x10)
	TArray<int32_t> GearBUpgradeCosts; // 0x70(0x10)
	TArray<int32_t> ArmorUpgradeCosts; // 0x80(0x10)
	TArray<int32_t> PickaxeUpgradeCosts; // 0x90(0x10)
	TArray<int32_t> ClassBoscoUpgradeCosts; // 0xa0(0x10)
	TArray<FUpgradeCostItem> ClassAResourceCosts; // 0xb0(0x10)
	TArray<FUpgradeCostItem> ClassBResourceCosts; // 0xc0(0x10)
	TArray<FUpgradeCostItem> GearAResourceCosts; // 0xd0(0x10)
	TArray<FUpgradeCostItem> GearBResourceCosts; // 0xe0(0x10)
	TArray<FUpgradeCostItem> ArmorResourceCosts; // 0xf0(0x10)
	TArray<FUpgradeCostItem> PickaxeResourceCosts; // 0x100(0x10)
	TArray<FUpgradeCostItem> ClassBoscoResourceCosts; // 0x110(0x10)
	TArray<FUpgradeCostItem> OldClassAResourceCosts; // 0x120(0x10)
	TArray<FUpgradeCostItem> OldClassBResourceCosts; // 0x130(0x10)

	void AddUpgradesFromItems(TArray<AActor*> Items);
};

// Class FSD.AfflictionSettings
// Size: 0xf8 (Inherited: 0x30)
struct UAfflictionSettings : UDataAsset {
	TArray<FRuntimeFloatCurve> IceScalers; // 0x30(0x10)
	TArray<UStaticMesh*> IceMeshes; // 0x40(0x10)
	FRandRange ScaleDelay; // 0x50(0x08)
	USoundCue* FreezeSound; // 0x58(0x08)
	USoundCue* IceBreakSound; // 0x60(0x08)
	USoundCue* BurningSound; // 0x68(0x08)
	USoundCue* EletrocutedSound; // 0x70(0x08)
	float HeavyStaggerMinTime; // 0x78(0x04)
	float MediumStaggerMinTime; // 0x7c(0x04)
	UPawnAffliction* HeavyStaggerAffliction; // 0x80(0x08)
	UPawnAffliction* MediumStaggerAffliction; // 0x88(0x08)
	UPawnAffliction* ShortStaggerAffliction; // 0x90(0x08)
	TArray<UParticleSystem*> FreezeParticles; // 0x98(0x10)
	TArray<UParticleSystem*> IceBreakParticles; // 0xa8(0x10)
	TArray<UParticleSystem*> BurningParticles; // 0xb8(0x10)
	TArray<UParticleSystem*> EletrocutedParticles; // 0xc8(0x10)
	TArray<UParticleSystem*> ExplodingParticles; // 0xd8(0x10)
	TArray<USoundCue*> ExplodingSounds; // 0xe8(0x10)
};

// Class FSD.CommunityGoalSettings
// Size: 0x58 (Inherited: 0x30)
struct UCommunityGoalSettings : UDataAsset {
	TArray<UCommunityGoalFaction*> ActiveCommunityFactions; // 0x30(0x10)
	TArray<UCommunityGoal*> ActiveCommunityGoals; // 0x40(0x10)
	UCommunityGoal* DSMUGoal; // 0x50(0x08)

	UCommunityGoal* GetGoal(enum class ECommunityGoalIndex Goal);
	UCommunityGoal* FindGoal(FString Goal);
};

// Class FSD.GameData
// Size: 0xa68 (Inherited: 0x28)
struct UGameData : UObject {
	TSoftClassPtr<UObject> BarrelClass; // 0x28(0x28)
	FGVisibilityGroups VisibilityGroups; // 0x50(0x58)
	UNiagaraParameterCollection* NiagaraParameterCollection; // 0xa8(0x08)
	UDLCBase* AlwaysLockedDLC; // 0xb0(0x08)
	UPromotionRewardsSettings* PromotionRewardsSettings; // 0xb8(0x08)
	UFSDEventCollection* FsdEventsSettings; // 0xc0(0x08)
	UGameActivitySettings* GameActivitySettings; // 0xc8(0x08)
	UDanceSettings* DanceSettings; // 0xd0(0x08)
	UGameAnimationSettings* AnimationSettings; // 0xd8(0x08)
	UEnemySettings* EnemySettings; // 0xe0(0x08)
	UDamageSettings* DamageSettings; // 0xe8(0x08)
	UPlanetZoneSetup* ZoneSettings; // 0xf0(0x08)
	UTreasureSettings* TreasureSettings; // 0xf8(0x08)
	UDrinkSettings* DrinkSettings; // 0x100(0x08)
	UUpgradeSettings* UpgradeSettings; // 0x108(0x08)
	USpawnSettings* SpawnSettings; // 0x110(0x08)
	UKeyBindingSettings* KeyBindingSettings; // 0x118(0x08)
	UDeepDiveSettings* DeepDiveSettings; // 0x120(0x08)
	UEncounterSettings* EncounterSettings; // 0x128(0x08)
	UForginSettings* ForgingSettings; // 0x130(0x08)
	USchematicSettings* SchematicSettings; // 0x138(0x08)
	UItemSkinSettings* SkinSettings; // 0x140(0x08)
	USpecialEventSettings* SpecialEventSettings; // 0x148(0x08)
	UProceduralSettings* ProceduralSettings; // 0x150(0x08)
	UPickaxeSettings* PickaxeSettings; // 0x158(0x08)
	UFSDTagSettings* TagSettings; // 0x160(0x08)
	UItemSettings* ItemSettings; // 0x168(0x08)
	UShowroomSettings* ShowroomSettings; // 0x170(0x08)
	UVictoryPoseSettings* VictoryPoseSettings; // 0x178(0x08)
	UFSDTutorialSettings* TutorialSettings; // 0x180(0x08)
	ULegacySettings* LegacySettings; // 0x188(0x08)
	UEffectSettings* EffectSettings; // 0x190(0x08)
	UAfflictionSettings* AfflictionSettings; // 0x198(0x08)
	UCommunityGoalSettings* CommunityGoalSettings; // 0x1a0(0x08)
	UDailyDealSettings* DailyDealSettings; // 0x1a8(0x08)
	FGDMissionStats MissionStats; // 0x1b0(0x158)
	FGDMilestones Milestones; // 0x308(0x10)
	FGDPerks perks; // 0x318(0x90)
	FGDItemCategoryIDs ItemCategoryIDs; // 0x3a8(0x38)
	TArray<UTexture2D*> LoadoutIconList; // 0x3e0(0x10)
	UMinersManual* MinersManual; // 0x3f0(0x08)
	FGDDamageClasses DamageClasses; // 0x3f8(0x48)
	FGDStats Stats; // 0x440(0x128)
	FGDResources Resources; // 0x568(0xe0)
	FGDTerrainTypes TerrainTypes; // 0x648(0x10)
	FGDGameStatsTracking GameStatsTracking; // 0x658(0x20)
	FGDAudio Audio; // 0x678(0x50)
	FGDDifficulty Difficulty; // 0x6c8(0x10)
	UStatusEffectSettings* StatusEffects; // 0x6d8(0x08)
	FGDCharacterRetirement Retirement; // 0x6e0(0xc0)
	FGDPlayerAndCharacterProgression PlayerAndCharacterProgression; // 0x7a0(0xa0)
	UCharacterSettings* CharacterSettings; // 0x840(0x08)
	UAchievementList* Achievements; // 0x848(0x08)
	UDataTable* SchematicGATable; // 0x850(0x08)
	TArray<UMissionTemplate*> TestMissions; // 0x858(0x10)
	TSoftObjectPtr<UBiome> TestBiome; // 0x868(0x28)
	UGlobalMissionSetup* MissionSetup; // 0x890(0x08)
	TSoftClassPtr<UObject> CampaignManagerClass; // 0x898(0x28)
	UPlayerCharacterID* BoscoID; // 0x8c0(0x08)
	TMap<UPlayerCharacterID*, UInventoryList*> InventoryLists; // 0x8c8(0x50)
	UBiome* DefaultBiome; // 0x918(0x08)
	TArray<FText> GenericBiomeQuotes; // 0x920(0x10)
	UMissionTemplate* DefaultMission; // 0x930(0x08)
	USeasonSettings* SeasonSettings; // 0x938(0x08)
	AProceduralSetup* CaveGeneratorPLSClass; // 0x940(0x08)
	TArray<UItemRefundList*> ItemRefunds; // 0x948(0x10)
	TArray<USubsystem*> BlueprintSubSystems; // 0x958(0x10)
	UPlayerCharacterID* DefaultCharacterID; // 0x968(0x08)
	UPlayerCharacterID* DefaultEditorCharacterID; // 0x970(0x08)
	FGameplayTag XBoxExcludeRoomTag; // 0x978(0x08)

	void UnloadPreloadedAssets();
	void LoadDefaultAssetsBlocking(UAsyncManager* AsyncManager);
	bool IsPerkTierUnLocked(UObject* WorldContext, int32_t Tier);
	bool IsCheatConsolesEnabled();
	int32_t GetRequiredPerkClaimsForTier(int32_t Tier);
	TArray<UPlayerCharacterID*> GetRankedHeroIDs();
	TArray<APlayerCharacter*> GetRankedHeroClasses();
	FText GetPlayerRankName(int32_t Rank);
	APlayerCharacter* GetPlayerClassFromID(UPlayerCharacterID* ID);
	UPlayerCharacterID* GetPlayerCharacterID(FGuid ID);
	void GetPerkTierState(UObject* WorldContext, int32_t Tier, bool TierUnLocked, int32_t NextRequiredCount, int32_t NextProgressCount);
	UInventoryList* GetInventoryList(UPlayerCharacterID* characterID);
	int32_t GetHighestPerkTier();
	UDifficultySetting* GetDifficultySetting(int32_t Index);
	int32_t GetDifficultyIndex(UDifficultySetting* Difficulty);
	APlayerCharacter* GetDefaultEditorCharacter();
	APlayerCharacter* GetDefaultCharacter();
	FRetirementCostItem GetCharacterRetirementCost(UObject* WorldContext, UPlayerCharacterID* ID);
	TArray<UPerkAsset*> GetCharacterNonEquippedPerks(UObject* WorldContext, UPlayerCharacterID* characterID);
	TArray<UPerkAsset*> GetCharacterEquippedPerks(UObject* WorldContext, UPlayerCharacterID* characterID);
	TArray<UPerkAsset*> GetAvailablePerks();
	int32_t GetAmountOfPurchasedPerks(UObject* WorldContext);
	TArray<UHUDVisibilityGroup*> GetAllVisibilityGroups();
	TArray<UMissionStat*> GetAllMissionStats();
	TArray<UMissionStat*> GetAllInfirmaryStats();
	int32_t CalculateClaimablePerkPoints(UObject* WorldContext);
};

// Class FSD.DLCBase
// Size: 0x30 (Inherited: 0x30)
struct UDLCBase : UDataAsset {

	bool IsUnlocked();
	bool IsDLCUnLocked(UDLCBase* dlc);
};

// Class FSD.GameDLC
// Size: 0x130 (Inherited: 0x30)
struct UGameDLC : UDLCBase {
	int32_t SteamID; // 0x38(0x04)
	FString OddishID; // 0x40(0x10)
	FString XBoxDLCName; // 0x50(0x10)
	TMap<FString, FString> SonyAdditionalContentLabelMap; // 0x60(0x50)
	FString UWPStoreID; // 0xb0(0x10)
	TSoftObjectPtr<UTexture2D> Banner; // 0xc0(0x28)
	TSoftClassPtr<UObject> AnnouncementWidget; // 0xe8(0x28)
	FGuid SaveGameID; // 0x110(0x10)

	bool ShouldBeAnnounced(UObject* WorldContext);
	void MarkAnnounced(UObject* WorldContext);
	FString GetSonyAdditionalContentId();
	UTexture2D* GetBanner();
};

// Class FSD.GameDLCSettings
// Size: 0x80 (Inherited: 0x30)
struct UGameDLCSettings : UDataAsset {
	TSet<UGameDLC*> AnnounceDLCs; // 0x30(0x50)

	TArray<UGameDLC*> GetAnnouncableDLCs(UObject* WorldContext);
};

// Class FSD.TimedDLC
// Size: 0x40 (Inherited: 0x30)
struct UTimedDLC : UDLCBase {
	FDateTime StartDate; // 0x30(0x08)
	FDateTime EndDate; // 0x38(0x08)
};

// Class FSD.AlwaysLockedDLC
// Size: 0x30 (Inherited: 0x30)
struct UAlwaysLockedDLC : UDLCBase {
};

// Class FSD.PlatformExclusiveDLC
// Size: 0x38 (Inherited: 0x30)
struct UPlatformExclusiveDLC : UDLCBase {
	enum class EFSDTargetPlatform Platform; // 0x30(0x01)
};

// Class FSD.AndDLC
// Size: 0x40 (Inherited: 0x30)
struct UAndDLC : UDLCBase {
	TArray<UDLCBase*> DLCs; // 0x30(0x10)
};

// Class FSD.OrDLC
// Size: 0x40 (Inherited: 0x30)
struct UOrDLC : UDLCBase {
	TArray<UDLCBase*> DLCs; // 0x30(0x10)
};

// Class FSD.NotDLC
// Size: 0x38 (Inherited: 0x30)
struct UNotDLC : UDLCBase {
	UDLCBase* dlc; // 0x30(0x08)
};

// Class FSD.EventRewardFrame
// Size: 0x250 (Inherited: 0x220)
struct AEventRewardFrame : AActor {
	USpecialEventUsableComponent* EventUsable; // 0x220(0x08)
	TArray<AEventRewardDispenser*> Dispensers; // 0x228(0x10)
	bool keyInserted; // 0x238(0x01)
	TArray<FString> EventPlayerIDs; // 0x240(0x10)

	void TurnOff();
	void SetKeyInserted(bool keyInserted);
	void SetDispenseRewards(bool dispensRewards);
	void RegisterDispenser(AEventRewardDispenser* Dispenser);
	bool GetDispensRewards();
};

// Class FSD.EventRewardDispenser
// Size: 0x260 (Inherited: 0x220)
struct AEventRewardDispenser : AActor {
	FUniqueNetIdRepl PlayerId; // 0x220(0x28)
	AEventRewardFrame* DispenserFrame; // 0x248(0x08)
	bool PoweredUp; // 0x250(0x01)
	bool IsActivated; // 0x251(0x01)
	USchematic* SelectedReward; // 0x258(0x08)

	void SetSelectedReward(USchematic* InReward);
	bool PowerUp(APlayerCharacter* InPlayerCharacter);
	void OnRewardSelected();
	void OnRep_SelectedReward();
	void OnRep_PoweredUp();
	void OnRep_PlayerId();
	void OnRep_IsActivated();
	void OnPoweredUp();
	void OnOwnerAssigned();
	void OnOpenDispenser();
	bool IsOwningPlayer(APlayerCharacter* PlayerCharacter);
	APlayerCharacter* GetPlayerCharacter();
	AFSDPlayerState* GetPlayer();
};

// Class FSD.EventRewardType
// Size: 0xc8 (Inherited: 0x30)
struct UEventRewardType : UDataAsset {
	FText Title; // 0x30(0x18)
	TSoftObjectPtr<UTexture2D> IconFront; // 0x48(0x28)
	TSoftObjectPtr<UTexture2D> IconBack; // 0x70(0x28)
	FLinearColor IconFrontTint; // 0x98(0x10)
	FLinearColor IconBackTint; // 0xa8(0x10)
	FLinearColor BackgroundTint; // 0xb8(0x10)
};

// Class FSD.EventStarterButton
// Size: 0x248 (Inherited: 0x220)
struct AEventStarterButton : AActor {
	USceneComponent* Root; // 0x220(0x08)
	USingleUsableComponent* Usable; // 0x228(0x08)
	FMulticastInlineDelegate OnBootupEvent; // 0x230(0x10)
	bool Booted; // 0x244(0x01)
	bool IsOpenForUse; // 0x245(0x01)
	bool IsEventActive; // 0x246(0x01)

	void SetIsEventActive(bool IsEventActive);
	void OnUseProgress(float Progress);
	void OnRep_OpenForUse();
	void OnRep_Booted();
	void OnOpenedForUse(bool wasOpened);
	void OnBooted();
	void CloseForUse(APlayerCharacter* User, enum class EInputKeys Key);
	void BootUpEvent();
};

// Class FSD.GameEventAnimInstance
// Size: 0x270 (Inherited: 0x270)
struct UGameEventAnimInstance : UAnimInstance {
	float StageProgress; // 0x268(0x04)
	bool IsEventActive; // 0x26c(0x01)
	bool AreEventStartersActive; // 0x26d(0x01)
	bool EventFailed; // 0x26e(0x01)
};

// Class FSD.EventStarterAnimInstance
// Size: 0x270 (Inherited: 0x270)
struct UEventStarterAnimInstance : UAnimInstance {
	float UseProgress; // 0x268(0x04)
	bool IsOpenForUse; // 0x26c(0x01)
	bool IsBooted; // 0x26d(0x01)
	bool IsEventActive; // 0x26e(0x01)
};

// Class FSD.CoreInfuserAnimInstance
// Size: 0x270 (Inherited: 0x270)
struct UCoreInfuserAnimInstance : UAnimInstance {
	bool PoweredUp; // 0x268(0x01)
	bool IsOpen; // 0x269(0x01)
	bool IsRewardSelected; // 0x26a(0x01)

	void OnRewardSelected();
};

// Class FSD.CoreInfuserPlatformAnimInstance
// Size: 0x270 (Inherited: 0x270)
struct UCoreInfuserPlatformAnimInstance : UAnimInstance {
	bool keyInserted; // 0x268(0x01)
	bool dispensRewards; // 0x269(0x01)
};

// Class FSD.EventParticipant
// Size: 0x28 (Inherited: 0x28)
struct UEventParticipant : UInterface {

	bool SetupEvent(AGameEvent* GameEvent);
	void OnEventTriggered();
	void OnEventProgress(float Progress);
	void OnEventOpened();
	void OnEventFinished(bool eventSuccess);
	bool AdvanceOneObjective();
	bool AddEventProgress(float Progress);
};

// Class FSD.GameFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGameFunctionLibrary : UBlueprintFunctionLibrary {

	void SpawnOrUpdateAudio2D(UObject* WorldContext, UAudioComponent* AudioComponent, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, FName FloatParamName, float FloatParam);
	void SetUsePushToTalk(bool Enable);
	void SetGlobalGravityZ(UObject* WorldContextObject, float GravityZ);
	void SetGlobalGravityScale(UObject* WorldContextObject, float GravityScale);
	bool IsWorldTickEnabled(UObject* WorldContextObject);
	void IsTearingDown(UObject* caller, bool IsTearingDown);
	bool IsPlayingOffline(UObject* WorldContextObject);
	bool IsPlayInEditor(UObject* WorldContextObject);
	UWindowManager* GetWindowManager(UObject* WorldContextObject);
	bool GetUsePushToTalk();
	UWindowWidget* GetTopWindow(UObject* WorldContextObject);
	FString GetProjectVersion();
	int32_t GetNumPlayers(UObject* WorldContext);
	int32_t GetNumAdditionalPlayers(UObject* WorldContext);
	FString GetMajorProjectVersion();
	APlayerCharacter* GetLocalPlayerCharacter(UObject* WorldContext);
	UGoogleAnalyticsWrapper* GetGoogleAnalyticsWrapper(UObject* WorldContextObject);
	float GetGlobalGravityZ(UObject* WorldContextObject);
	AFSDGameModeSpaceRig* GetFSDSRGameMode(UObject* WorldContextObject);
	UFSDSaveGame* GetFSDSaveGame(UObject* WorldContextObject);
	AFSDGameState* GetFSDGameState(UObject* WorldContextObject);
	AFSDGameMode* GetFSDGameMode(UObject* WorldContextObject);
	UFSDGameInstance* GetFSDGameInstance(UObject* WorldContextObject);
	UGameData* GetFSDGameData();
	UDeepDiveManager* GetDeepDiveManager(UObject* WorldContextObject);
	ADeepCSGWorld* GetCSGWorld(UObject* WorldContextObject);
	int32_t GetChangelist();
	UCampaignManager* GetCampaingManager(UObject* WorldContextObject);
	UAsyncManager* GetAsyncManager(UObject* WorldContextObject);
};

// Class FSD.GameModeFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGameModeFunctionLibrary : UBlueprintFunctionLibrary {

	FTransform FindRandomEscapePodLocation(UObject* WorldContextObject);
	FTransform FindEscapePodLocationAtDistance(UObject* WorldContextObject, float Distance, float aboveDistanceBias, AActor* optionalFrom);
};

// Class FSD.ResourceBasedObjective
// Size: 0x178 (Inherited: 0x178)
struct UResourceBasedObjective : UObjective {
};

// Class FSD.GatherGemsObjective
// Size: 0x190 (Inherited: 0x178)
struct UGatherGemsObjective : UResourceBasedObjective {
	int32_t GemsRequired; // 0x178(0x04)
	float GemsSpawnedModifier; // 0x17c(0x04)
	int32_t GemsCollected; // 0x180(0x04)
	UGemResourceData* GemResource; // 0x188(0x08)

	void OnResourceChanged(UCappedResource* CappedResource, float Amount);
	void OnRep_GemsCollected(int32_t prevAmount);
};

// Class FSD.GatheItemsObjective
// Size: 0x190 (Inherited: 0x178)
struct UGatheItemsObjective : UResourceBasedObjective {
	int32_t ItemsRequired; // 0x178(0x04)
	float ItemsSpawnedModifier; // 0x17c(0x04)
	int32_t ItemsCollected; // 0x180(0x04)
	UCollectableResourceData* ItemResource; // 0x188(0x08)

	void OnResourceChanged(UCappedResource* CappedResource, float Amount);
	void OnRep_ItemsCollected(int32_t prevAmount);
};

// Class FSD.BasicThrowableItem
// Size: 0x2b8 (Inherited: 0x260)
struct ABasicThrowableItem : ACarriableItem {
	UBoxComponent* BoxComp; // 0x260(0x08)
	USphereComponent* UseSphere; // 0x268(0x08)
	UCarriableComponent* CarriableComp; // 0x270(0x08)
	UInstantUsable* UsableComp; // 0x278(0x08)
	UStaticMeshComponent* WorldMeshComp; // 0x280(0x08)
	UFirstPersonStaticMeshComponent* ViewMeshComp; // 0x288(0x08)
	USoundCue* ImpactSound; // 0x2a0(0x08)
	float SquaredMinImpactForce; // 0x2a8(0x04)
	float ImpactAudioResetTime; // 0x2ac(0x04)
	float SquaredMinThrowforce; // 0x2b0(0x04)

	void ThrowItem(FVector throwForce);
	void ResetImpactSound();
	void OnUsed(APlayerCharacter* User, enum class EInputKeys Key);
	void OnUsableChanged(bool CanUse);
	void OnPickedUp();
	void OnDropped();
	void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
};

// Class FSD.Gem
// Size: 0x278 (Inherited: 0x260)
struct AGem : ACarriableItem {
	UCarriableInstantUsable* Usable; // 0x260(0x08)
	UResourceData* ResourceType; // 0x268(0x08)
	float ResourceAmount; // 0x270(0x04)
	bool hasBeenReleased; // 0x274(0x01)

	void SetHasBeenReleased(bool hasBeenReleased);
	bool GetHasBeenReleased();
};

// Class FSD.ResourcePouch
// Size: 0x288 (Inherited: 0x260)
struct AResourcePouch : ACarriableItem {
	UCarriableInstantUsable* Usable; // 0x260(0x08)
	USoundCue* ImpactGroundSound; // 0x268(0x08)

	void ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult Hit);
};

// Class FSD.GemTracker
// Size: 0xb8 (Inherited: 0xb0)
struct UGemTracker : UActorComponent {
	FName TrackName; // 0xb0(0x08)
};

// Class FSD.GemProximityTracker
// Size: 0xd0 (Inherited: 0xb0)
struct UGemProximityTracker : UActorComponent {
	TArray<TWeakObjectPtr<UGemTracker>> Trackers; // 0xb0(0x10)
	TArray<FTrackPositionList> TrackerLists; // 0xc0(0x10)
};

// Class FSD.GemResourceData
// Size: 0x158 (Inherited: 0xf0)
struct UGemResourceData : UResourceData {
	UDebrisPositioning* DebrisPositioning; // 0xf0(0x08)
	bool CheckIfCompletelyCoveredByTerrain; // 0xf8(0x01)
	FIRandRange GemValue; // 0xfc(0x08)
	UGemResourceCreator* ResourceCreator; // 0x108(0x08)
	float InfluencerRange; // 0x110(0x04)
	TArray<TSoftObjectPtr<UDebrisBase>> Debris; // 0x118(0x10)
	TArray<TSoftClassPtr<UObject>> GemClasses; // 0x128(0x10)
	TArray<AGem*> GemClassesLoaded; // 0x138(0x10)
	TArray<UDebrisBase*> DebrisLoaded; // 0x148(0x10)

	int32_t GetCollectedGemsCreditValue(AFSDGameState* GameState);
	int32_t GetCollectedGemsAmount(AFSDGameState* GameState);
};

// Class FSD.GemResourceCreator
// Size: 0x40 (Inherited: 0x30)
struct UGemResourceCreator : UDataAsset {
	UGemResourceData* ResourceData; // 0x30(0x08)
	bool CheckIfFreeSpaceAbove; // 0x38(0x01)
	int32_t SearchSize; // 0x3c(0x04)
};

// Class FSD.RandomGemResourceCreator
// Size: 0x48 (Inherited: 0x40)
struct URandomGemResourceCreator : UGemResourceCreator {
	UCurveFloat* PlacementDistanceProbabilityCurve; // 0x40(0x08)
};

// Class FSD.DistributedGemResourceCreator
// Size: 0x48 (Inherited: 0x40)
struct UDistributedGemResourceCreator : UGemResourceCreator {
	UCurveFloat* PlacementDistanceProbabilityCurve; // 0x40(0x08)
};

// Class FSD.GeneratedMission
// Size: 0x118 (Inherited: 0x28)
struct UGeneratedMission : UObject {
	UBiome* Biome; // 0x28(0x08)
	int32_t Seed; // 0x30(0x04)
	int32_t GlobalSeed; // 0x34(0x04)
	UMissionTemplate* Template; // 0x38(0x08)
	FText MissionName; // 0x40(0x18)
	UObjective* PrimaryObjective; // 0x58(0x08)
	UObjective* SecondaryObjective; // 0x60(0x08)
	TMap<UMutator*, FGMMutatorItem> Mutators; // 0x68(0x50)
	TArray<UMissionWarning*> MissionWarnings; // 0xb8(0x10)
	UMissionMutator* MissionMutator; // 0xc8(0x08)
	UMissionComplexity* ComplexityLimit; // 0xd0(0x08)
	UMissionDuration* DurationLimit; // 0xd8(0x08)
	UMissionDNA* MissionDNA; // 0xe0(0x08)
	enum class EMissionStructure MissionStructure; // 0xe8(0x01)
	TSoftObjectPtr<ULevelSequence> LoaderLevelSequence; // 0xf0(0x28)

	void Recieve_SetupPLS(AProceduralSetup* pls);
	bool IsSingleMission();
	bool IsLocked(AFSDPlayerController* Player);
	bool IsDeepDive();
	FObjectiveMissionIcon GetSecondaryObjectiveIcon();
	AProceduralSetup* GetPLS();
	TArray<UMutator*> GetMutators(UMutator* mutatorClass);
	float GetMissionScale();
	UMissionDNA* GetMissionDNA();
	AProceduralSetup* CreatePLS(int32_t Seed);
	bool AreMissionsEqual(UGeneratedMission* Other);
};

// Class FSD.RoomGenerationItem
// Size: 0x228 (Inherited: 0x228)
struct ARoomGenerationItem : AGenerationItem {
};

// Class FSD.GetFriendsListBlueprintCallProxy
// Size: 0x78 (Inherited: 0x30)
struct UGetFriendsListBlueprintCallProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	UObject* WorldContextObject; // 0x50(0x08)

	UGetFriendsListBlueprintCallProxy* GetFriendsList(UObject* WorldContextObject, FString ListName);
};

// Class FSD.GlobalMissionSetup
// Size: 0x128 (Inherited: 0x30)
struct UGlobalMissionSetup : UDataAsset {
	FIRandRange ExtraBiomes; // 0x30(0x08)
	FIRandRange AdditionalMissionsForExtraBiomes; // 0x38(0x08)
	FIRandRange MissionsPerZone; // 0x40(0x08)
	TArray<FMissionBiomeItem> Biomes; // 0x48(0x10)
	TArray<FMissionTemplateItem> AvailableMissions; // 0x58(0x10)
	FMissionTemplateItem FacilityMission; // 0x68(0x10)
	float FacilityMutatorChance; // 0x78(0x04)
	UMissionNameBank* MissionNames; // 0x80(0x08)
	FIRandRange MutatorWarningCount; // 0x88(0x08)
	float DoubleWarningChance; // 0x90(0x04)
	TArray<UMissionMutator*> Mutators; // 0x98(0x10)
	TArray<UMissionWarning*> Warnings; // 0xa8(0x10)
	TMap<UMissionWarning*, UMissionWarning*> IncompatibleWarnings; // 0xb8(0x50)
	TArray<UPlanetZone*> PlanetZones; // 0x108(0x10)
	TArray<FRequiredMissionItem> GlobalRequiredMissions; // 0x118(0x10)

	TArray<FMissionTemplateItem> GetAllPossibleMissions();
};

// Class FSD.GlowPlant
// Size: 0x290 (Inherited: 0x220)
struct AGlowPlant : AActor {
	UStaticMeshComponent* TrunkMesh; // 0x220(0x08)
	UPointLightComponent* MainLight; // 0x248(0x08)
	float IntensityBase; // 0x254(0x04)
	float RadiusBase; // 0x258(0x04)
	float IntensityPerPart; // 0x25c(0x04)
	float RadiusPerPart; // 0x260(0x04)
	float IntensityAllParts; // 0x264(0x04)
	float RadiusAllParts; // 0x268(0x04)
	float MaxIntensity; // 0x26c(0x04)
	float MinIntensity; // 0x270(0x04)
	float TimeOnMaxLight; // 0x274(0x04)
	float IntensityFadeInTime; // 0x278(0x04)
	float IntensityFadeOutTime; // 0x27c(0x04)
	float MaxEmissive; // 0x280(0x04)
	float MinEmissive; // 0x284(0x04)
	float EmissiveFadeInTime; // 0x288(0x04)
	float EmissiveFadeOutTime; // 0x28c(0x04)

	void OnDeath();
	void OnDamage(UPrimitiveComponent* hitSphere);
};

// Class FSD.GoogleAnalyticsWrapper
// Size: 0x150 (Inherited: 0x28)
struct UGoogleAnalyticsWrapper : UObject {
	FString LastUnlockedWeapons; // 0x30(0x10)
	FString LastKnownClass; // 0x40(0x10)
	FString BoscoLoadOut; // 0x50(0x10)
	bool WasCampaign; // 0x60(0x01)
	FString LastCampaignName; // 0x68(0x10)
	int32_t LastCampaignProgress; // 0x78(0x04)
	bool WasLastCampaignMission; // 0x7c(0x01)
	int32_t LastCampaignSize; // 0x80(0x04)
	FString LastWeaponsLoadout; // 0x88(0x10)
	FString LastUpgradesLoadout; // 0x98(0x10)
	FString SchematicInformation; // 0xa8(0x10)
	FPartyAnalyticsInformation PartyInfo; // 0xb8(0x14)
	FDeepDiveAnalyticsInformation DeepDiveInfo; // 0xcc(0x0c)
	FString DiscordCommunityTrackingID; // 0xd8(0x10)
	FString CommunityGoalsTrackingID; // 0xe8(0x10)
	bool ShouldUpdateSchematicTrackingInformation; // 0x14c(0x01)

	void StartMissionPartyInfo(AFSDGameState* GameState);
	void SetShouldUpdateSchematicInformation();
	void ResetBoscoLoadout();
	void RecordTotalTimeHit(FString Key, FString Campaign, bool Rank, int32_t Time);
	void RecordOpenScreen(FString Key, bool Rank);
	void RecordMachineEventEnd(FString EventName, bool WasCompleted, float completionTime);
	void RecordKickPlayer(FString reason, APlayerController* KickedPlayer);
	void RecordGAUserTiming(FString TimingCategory, int32_t TimingValue, FString TimingName);
	void RecordGaTreeOfVanityClaim(int32_t NodeID);
	void RecordGASeasonLevelUp();
	void RecordGAMissionTotalTimeHit(FString Key, FString Campaign, bool Rank, int32_t totalTime, int32_t Progress, int32_t XP, int32_t Credits);
	void RecordGAMissionTimeEvent(int32_t Time);
	void RecordGAEvent(FString EventCategory, FString EventAction, FString EventLabel, int32_t EventValue, enum class EFSDGoogleAnalyticsProperties Property);
	void RecordGADeepDiveStageHit(FString Key, bool Rank, int32_t stageTime, int32_t timeSinceStartOfDive, int32_t totalTime, int32_t nitraLeft);
	void RecordGaChallengeReroll(int32_t challengeIndex);
	void RecordExtraFailInfo(FString MissionName, FString Stage, FString ExtraText);
	void RecordCustomGAEvent(FString EventCategory, FString EventAction, FString EventLabel, int32_t EventValue, FString TrackingId);
	void RecordContinuousDamage(AActor* DamageCauser);
	void RecordBossFightEnd(FString BossName, bool WasBossKilled, int32_t BossKills);
	FString ProcessCampaignName(UObject* Campaign);
	void PlayerLatejoin();
	void PlayerDropout();
	void OnPlayerLeaveBind(AFSDPlayerState* PlayerState);
	void OnPlayerJoinBind(AFSDPlayerState* PlayerState);
	void HandleMatchStarted();
	FString GetAnalyticsFText(FText Text);
	void EndMissionPartyInfo();
};

// Class FSD.GooGun
// Size: 0x788 (Inherited: 0x6d8)
struct AGooGun : AAmmoDrivenWeapon {
	FMulticastInlineDelegate OnStartCharging; // 0x6d8(0x10)
	FMulticastInlineDelegate OnEndCharging; // 0x6e8(0x10)
	FMulticastInlineDelegate OnChargingFailed; // 0x6f8(0x10)
	FMulticastInlineDelegate OnChargeChanged; // 0x708(0x10)
	float ChargeTime; // 0x718(0x04)
	int32_t ShotCostCharged; // 0x71c(0x04)
	float ChargeThreshold; // 0x720(0x04)
	float AutoStopCharingAfterSeconds; // 0x724(0x04)
	int32_t ShotCostCycle; // 0x728(0x04)
	enum class EGooGunFireMode FireMode; // 0x72c(0x01)
	USoundCue* FullyChargedFireSound; // 0x730(0x08)
	int32_t ChargedShotCount; // 0x738(0x04)
	float BuckShotSpreadV; // 0x73c(0x04)
	float BuckShotSpreadH; // 0x740(0x04)
	float BuckshotArcCompensation; // 0x744(0x04)
	UFXSystemAsset* ChargeupParticles; // 0x748(0x08)
	UFXSystemAsset* ChargeupFireMuzzleFlash; // 0x750(0x08)
	UFXSystemComponent* ChargeupParticleInstance; // 0x758(0x08)
	UAnimMontage* FP_ChargeupMontage; // 0x760(0x08)
	UAnimMontage* TP_ChargeupMontage; // 0x768(0x08)

	float GetOverChargeProgress();
	bool GetIsCharging();
	float GetChargeProgress();
	void ChargingDelegate__DelegateSignature();
	void ChargeChangedDelegate__DelegateSignature(float charge);
};

// Class FSD.GooGunProjectile
// Size: 0x340 (Inherited: 0x338)
struct AGooGunProjectile : AProjectile {
	float PuddleLifeTime; // 0x338(0x04)
	int32_t FragmentCount; // 0x33c(0x04)

	AGooGunPuddle* SpawnPuddle(FTransform Transform, AGooGunPuddle* PuddleClass);
};

// Class FSD.GooGunPuddle
// Size: 0x268 (Inherited: 0x220)
struct AGooGunPuddle : AActor {
	USphereComponent* SphereTrigger; // 0x220(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x228(0x08)
	USoundBase* SpawnSound; // 0x230(0x08)
	TArray<FGooPuddleStatusEffectTrigger> StatusEffectTriggers; // 0x238(0x10)
	TArray<UStatusEffect*> InflictedStatusEffects; // 0x248(0x10)
	int32_t ActiveStatusEffectTriggersMask; // 0x258(0x04)
	float LifeTime; // 0x25c(0x04)

	void SetStatusEffect(UStatusEffect* NewStatusEffect);
	void OnStatusEffectAdded(FGooPuddleStatusEffectTrigger Trigger);
	void OnRep_ActiveStatusEffectTriggersMask(int32_t PreviousMask);
	void OnPuddleEndOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void OnPuddleBeginOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void OnHit(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	void AddStatusEffect(UStatusEffect* NewStatusEffect);
};

// Class FSD.GooGunAnimInstance
// Size: 0x280 (Inherited: 0x270)
struct UGooGunAnimInstance : UAnimInstance {
	bool isCharging; // 0x268(0x01)
	float ChargePercentVisual; // 0x26c(0x04)
	float ChargePercent; // 0x270(0x04)
	float OverChargePercent; // 0x274(0x04)
	float BarrelRotationRate; // 0x278(0x04)

	void SetTargetBarrelRotationRate(float RotationRate);
};

// Class FSD.GrabbedStateComponent
// Size: 0x120 (Inherited: 0x100)
struct UGrabbedStateComponent : UCharacterStateComponent {
	TWeakObjectPtr<UGrabberComponent> CurrentGrabber; // 0x10c(0x08)

	void OnRep_Grabber();
};

// Class FSD.FlyingLifter
// Size: 0x508 (Inherited: 0x448)
struct AFlyingLifter : AAFlyingBug {
	UGrabberComponent* GrabberComp; // 0x448(0x08)
	UCapsuleComponent* GrabCapsule; // 0x450(0x08)
	UAudioComponent* GrabStart; // 0x458(0x08)
	UAudioComponent* GrabEnd; // 0x460(0x08)
	UAudioComponent* GrabbedIdleLoop; // 0x468(0x08)
	UInDangerComponent* InDanger; // 0x470(0x08)
	UAudioComponent* ScreamComponent; // 0x478(0x08)
	FMulticastInlineDelegate OnGrabSuccess; // 0x488(0x10)
	float PreventGrabAfterSpawn; // 0x498(0x04)
	bool ShouldScream; // 0x4a1(0x01)
	enum class EGrabberState GrabberState; // 0x4a2(0x01)
	float WanderingSpeed; // 0x4a4(0x04)
	float WanderingAcceleration; // 0x4a8(0x04)
	float ChaseSpeed; // 0x4ac(0x04)
	float ChaseAcceleration; // 0x4b0(0x04)
	float CarrySpeed; // 0x4b4(0x04)
	float CarryAcceleration; // 0x4b8(0x04)
	float FleeSpeed; // 0x4bc(0x04)
	float FleeAcceleration; // 0x4c0(0x04)
	float CarryCooldown; // 0x4c8(0x04)
	USoundBase* ScreamSound; // 0x4d0(0x08)
	USoundBase* FleeSound; // 0x4d8(0x08)
	UAnimSequenceBase* FleeAnimation; // 0x4e0(0x08)
	UCapsuleComponent* GrabberCollider; // 0x4e8(0x08)
	bool ParalyzeOnGrab; // 0x4f0(0x01)
	float ExtraUpForce; // 0x4f4(0x04)
	float ScreamDistance; // 0x4f8(0x04)
	UPointLightComponent* GrabLight; // 0x500(0x08)

	void SetLight(UPointLightComponent* ALight);
	bool SelectAnotherTarget();
	void OnStateBroke(AActor* aReleasedPlayer);
	void OnRep_State();
	void OnRep_ShouldScream();
	void OnInDanger();
	void OnActorLeftGrabZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void OnActorEnterGrabZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	bool GetJustGrabbed();
	void DropTarget();
	void ChangeState(enum class EGrabberState aGrabberState);
};

// Class FSD.FlyingLifterAnimInstance
// Size: 0x2f0 (Inherited: 0x2f0)
struct UFlyingLifterAnimInstance : USimpleMovingEnemyAnimInstance {
	bool HasGrabbedPlayer; // 0x2e8(0x01)
	bool ToChaseLock; // 0x2e9(0x01)
	bool ChaseToWanderLock; // 0x2ea(0x01)
	bool ToCarryLock; // 0x2eb(0x01)
	enum class EGrabberState GrabberState; // 0x2ec(0x01)
};

// Class FSD.GrabberComponent
// Size: 0x1b0 (Inherited: 0xb0)
struct UGrabberComponent : UActorComponent {
	FMulticastInlineDelegate OnGrabbedActor; // 0xb0(0x10)
	FMulticastInlineDelegate OnReleasedActor; // 0xc0(0x10)
	FGameplayTagQuery TagFilter; // 0xd0(0x48)
	TWeakObjectPtr<AActor> GrabbedActor; // 0x130(0x08)
	TWeakObjectPtr<ADeepPathfinderCharacter> PathfinderOwner; // 0x138(0x08)
	TWeakObjectPtr<USkeletalMeshComponent> OwnerMesh; // 0x140(0x08)
	TArray<UPrimitiveComponent*> TargetClippingWith; // 0x148(0x10)
	USoundCue* BeginGrabedSound; // 0x158(0x08)
	USoundCue* GrabedLoopSound; // 0x160(0x08)
	USoundCue* EndGrabedSound; // 0x168(0x08)
	UDialogDataAsset* BeginGrabbedShout; // 0x170(0x08)
	UDialogDataAsset* EndGrabbedShout; // 0x178(0x08)
	UDialogDataAsset* AttentionGrabbedShout; // 0x180(0x08)
	AActor* CurrentlyGrabbed; // 0x188(0x08)
	enum class EUseRestriction UseRestriction; // 0x190(0x01)
	FName GrabAttachName; // 0x194(0x08)
	float GrabTime; // 0x19c(0x04)
	float CarryCooldown; // 0x1a0(0x04)
	enum class EOutline PlayerOutlineOnGrab; // 0x1a4(0x01)
	enum class EGrabbedStateCameraMode CameraMode; // 0x1a5(0x01)
	bool TrackPlayerCollision; // 0x1a6(0x01)
	bool ManualGrabTime; // 0x1a7(0x01)
	bool CanPlayerShoot; // 0x1a8(0x01)
	bool NeedsPathToTarget; // 0x1ab(0x01)

	void SetPlayerReleased();
	bool SetPlayerGrabbed();
	void ReleaseTarget();
	void OnRep_CurrentlyGrabbed();
	void OnPrimWake(UPrimitiveComponent* WakingComponent, FName BoneName);
	void OnParentDestroyed(AActor* Actor);
	bool IsGrabbedTargetValid();
	bool HasGrabbed();
	bool GrabTarget(AActor* aGrabTarget);
	bool CanGrabTarget(AActor* aTarget);
};

// Class FSD.FakePhysGrabberComponent
// Size: 0x1d8 (Inherited: 0x1b0)
struct UFakePhysGrabberComponent : UGrabberComponent {
	TArray<FGrabAvoidClassEntry> ActorTypesToAvoid; // 0x1b0(0x10)
	TArray<FAvoidActorEntry> ActorsToAvoid; // 0x1c8(0x10)
};

// Class FSD.GrapplingHookGun
// Size: 0x3d8 (Inherited: 0x388)
struct AGrapplingHookGun : AAnimatedItem {
	UCoolDownItemAggregator* CoolDownAggregator; // 0x390(0x08)
	bool AutoFire; // 0x398(0x01)
	float MaxDistance; // 0x39c(0x04)
	UAnimMontage* FPReloadAnim; // 0x3a0(0x08)
	UAnimMontage* TPReloadAnim; // 0x3a8(0x08)
	UAnimMontage* FPGunslingAnim; // 0x3b0(0x08)
	UAnimMontage* TPGunslingAnim; // 0x3b8(0x08)
	float MaxSpeed; // 0x3d0(0x04)
	float WindUpTime; // 0x3d4(0x04)

	void OnReleaseHook();
	float GetCooldownDuration(AGrapplingHookGun* GrapplingHookGun);
};

// Class FSD.GravityChangedComponent
// Size: 0xc8 (Inherited: 0xb0)
struct UGravityChangedComponent : UActorComponent {
	bool bAwakeOnGravityChanged; // 0xb0(0x01)
	TArray<UPrimitiveComponent*> PrimitiveComponents; // 0xb8(0x10)

	void OnGravityChanged(float Gravity, float Change);
};

// Class FSD.GrenadeAnimationSet
// Size: 0x50 (Inherited: 0x30)
struct UGrenadeAnimationSet : UDataAsset {
	UAnimMontage* FP_EquipAnimation; // 0x30(0x08)
	UAnimMontage* TP_EquipAnimation; // 0x38(0x08)
	UAnimMontage* FP_ThrowAnimation; // 0x40(0x08)
	UAnimMontage* TP_ThrowAnimation; // 0x48(0x08)
};

// Class FSD.Grenade
// Size: 0x2a8 (Inherited: 0x220)
struct AGrenade : AActor {
	UProjectileMovementComponent* Movement; // 0x238(0x08)
	float Duration; // 0x240(0x04)
	float ExplosionDelay; // 0x244(0x04)
	bool ExplodeOnImpact; // 0x248(0x01)
	int32_t MaxGrenades; // 0x24c(0x04)
	bool HasExploded; // 0x250(0x01)
	bool EnableDangerousSaveGameIDEditing; // 0x251(0x01)
	FGuid SaveGameID; // 0x254(0x10)
	UItemID* ItemID; // 0x268(0x08)
	AActor* WeaponPreviewClass; // 0x270(0x08)
	ALoadoutItemProxy* LoadoutProxy; // 0x278(0x08)
	UStaticMesh* HandAttachMesh; // 0x280(0x08)
	USoundCue* ImpactGroundSound; // 0x288(0x08)
	UParticleSystem* ImpactGroundParticles; // 0x290(0x08)
	UGrenadeAnimationSet* GrenadeAnimationSetOverride; // 0x298(0x08)

	void OnRep_HasExploded();
	void OnExploded();
	bool IsNonFriendlyPawn(AActor* Actor);
	bool IsNonFriendly(AActor* Actor);
	AActor* GetWeaponViewClass();
	AGrenade* GetGrenadeDefaultObject(AGrenade* GrenadeClass);
	void ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult Hit);
};

// Class FSD.MolotovComponent
// Size: 0xc8 (Inherited: 0xb0)
struct UMolotovComponent : UActorComponent {
	UDebrisPositioning* Positioning; // 0xb0(0x08)
	AActor* BurningFlamesClass; // 0xb8(0x08)
	float Radius; // 0xc0(0x04)

	void Trigger();
};

// Class FSD.AreaSpawnerComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UAreaSpawnerComponent : UActorComponent {
	AActor* ActorToSpawn; // 0xb0(0x08)
	enum class DeepPathFinderSize PathfinderSize; // 0xb8(0x01)
	float ChanceToSpawn; // 0xbc(0x04)

	void SpawnInArea(FVector Origin, float Radius, float maxVerticalDistance, APawn* Instigator);
};

// Class FSD.HugeExplosionComponent
// Size: 0xd8 (Inherited: 0xb0)
struct UHugeExplosionComponent : UActorComponent {
	UParticleSystem* ExplosionEffect; // 0xb0(0x08)
	float ExplosionSpeed; // 0xb8(0x04)
	float ExplosionSize; // 0xbc(0x04)

	void TriggerExplosion(FVector Location);
};

// Class FSD.GroundToAirComponent
// Size: 0x128 (Inherited: 0xb0)
struct UGroundToAirComponent : UActorComponent {
	FMulticastInlineDelegate OnChangedPathfinderState; // 0xb0(0x10)
	UDeepPathfinderMovement* CurrentMove; // 0xc0(0x08)
	float WalkTime; // 0xc8(0x04)
	float WalkTimeMaxRandomOffset; // 0xcc(0x04)
	float WalkTimeMinRandomOffset; // 0xd0(0x04)
	bool WalkUseTimer; // 0xd4(0x01)
	FStateStats WalkStats; // 0xd8(0x14)
	float FlyTime; // 0xec(0x04)
	float FlyTimeMaxRandomOffset; // 0xf0(0x04)
	float FlyTimeMinRandomOffset; // 0xf4(0x04)
	bool FlyUseTimer; // 0xf8(0x01)
	FStateStats FlyStats; // 0xfc(0x14)
	bool IsFlying; // 0x110(0x01)
	TWeakObjectPtr<ADeepPathfinderCharacter> OwningPathfinder; // 0x114(0x08)

	void SetIsFlying(bool aIsFlying);
	void SetAllowedToChangeState(bool aIsAllowed);
	void OnRep_StateChange();
	bool GetIsWalking();
	bool GetIsFlying();
	void Engage();
};

// Class FSD.GrowthComponent
// Size: 0x148 (Inherited: 0xb0)
struct UGrowthComponent : UActorComponent {
	USceneComponent* ScaleComponent; // 0xb0(0x08)
	FRuntimeFloatCurve CurrentGrowthCurve; // 0xb8(0x88)

	void StopGrow();
	void StartGrow(USceneComponent* aComponentToScale, FRuntimeFloatCurve aCurve);
};

// Class FSD.GuntowerActivationPlatform
// Size: 0x290 (Inherited: 0x220)
struct AGuntowerActivationPlatform : AActor {
	USceneComponent* Root; // 0x220(0x08)
	USkeletalMeshComponent* SKMesh; // 0x228(0x08)
	UCapsuleComponent* Trigger; // 0x230(0x08)
	FMulticastInlineDelegate OnProgressUpdatedDelegate; // 0x238(0x10)
	FMulticastInlineDelegate OnPlayersInsideChangedDelegate; // 0x248(0x10)
	FMulticastInlineDelegate OnProgressFilled; // 0x258(0x10)
	AGuntowerModule* AssignedModule; // 0x270(0x08)
	float DoneAt; // 0x278(0x04)
	float DisabledTime; // 0x280(0x04)
	int32_t PlayersInside; // 0x284(0x04)
	bool Disabled; // 0x288(0x01)
	bool IsShutDown; // 0x289(0x01)

	void UpdatePlayersInside(APlayerCharacter* Character);
	void ShutDown();
	void SetPlatformActive(bool IsActive);
	void ReEnable();
	void OnShutDown();
	void OnRep_PlayersInside();
	void OnRep_IsShutDown();
	void OnRep_Disabled();
	void OnPlayersInsideChanged(int32_t PlayersInside);
	void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void OnFinished();
	void OnDisabledChanged(bool IsDisabled);
	void ModuleDestroyed(UHealthComponentBase* Health);
	AGuntowerModule* GetAssignedModule();
	void EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	bool CanWidgetAppear();
	void AssignModule(AGuntowerModule* towerModule);
};

// Class FSD.GuntowerEvent
// Size: 0x3b8 (Inherited: 0x358)
struct AGuntowerEvent : AGameEvent {
	USceneComponent* Root; // 0x358(0x08)
	USkeletalMeshComponent* BaseMesh; // 0x360(0x08)
	UDamageComponent* EndExplosionDamage; // 0x368(0x08)
	TArray<FGuntowerModuleLevel> GuntowerLevels; // 0x370(0x10)
	FName ModuleAttachBone; // 0x380(0x08)
	float TowerExplodeDelay; // 0x398(0x04)
	float DelayBetweenExplosions; // 0x39c(0x04)
	TArray<AGuntowerModule*> TowerModules; // 0x3a0(0x10)
	int32_t ActiveHostileModules; // 0x3b0(0x04)

	void OnRep_ModuleActive();
	void OnModulesSpawned();
	void OnModuleExploded(AGuntowerModule* explodedModule);
};

// Class FSD.TowerModuleBase
// Size: 0x360 (Inherited: 0x2f0)
struct ATowerModuleBase : AFSDPawn {
	USceneComponent* Root; // 0x2f8(0x08)
	USkeletalMeshComponent* ModuleMesh; // 0x300(0x08)
	TArray<UStaticMeshComponent*> ArmorPlates; // 0x308(0x10)
	UEnemyHealthComponent* Health; // 0x318(0x08)
	FRotator ModuleRotation; // 0x320(0x0c)
	USkeletalMesh* DestroyedMesh; // 0x338(0x08)
	USoundCue* deathSound; // 0x340(0x08)
	UParticleSystem* deathParticles; // 0x348(0x08)
	float ArmorLaunchPower; // 0x350(0x04)
	float HideArmorTime; // 0x354(0x04)
	float ModuleRotationSpeed; // 0x358(0x04)
	bool ConstantRotation; // 0x35c(0x01)
	enum class EGuntowerModuleState State; // 0x35d(0x01)

	void SetState(enum class EGuntowerModuleState State);
	void OnRep_State(enum class EGuntowerModuleState prevState);
	void HideArmorPlates();
	void DoAttack();
};

// Class FSD.AimingTowerModule
// Size: 0x390 (Inherited: 0x360)
struct AAimingTowerModule : ATowerModuleBase {
	AActor* Target; // 0x360(0x08)
	FRotator AimRotation; // 0x368(0x0c)
	float BurstTime; // 0x374(0x04)
	float AttackTime; // 0x37c(0x04)
	int32_t BurstSize; // 0x384(0x04)
};

// Class FSD.GuntowerModule
// Size: 0x3b0 (Inherited: 0x2f0)
struct AGuntowerModule : AFSDPawn {
	USoundCue* ExposeWeakpointSound; // 0x2f8(0x08)
	USoundCue* deathSound; // 0x300(0x08)
	UParticleSystem* deathParticles; // 0x308(0x08)
	TArray<AActor*> WeakpointActors; // 0x310(0x10)
	FName BodyBone; // 0x320(0x08)
	FName TopConnectionPointName; // 0x328(0x08)
	FRotator CurrentTurretRotation; // 0x330(0x0c)
	UAnimSequenceBase* IntroductionAnimation; // 0x340(0x08)
	UStaticMeshComponent* ArmorPiece1; // 0x348(0x08)
	UStaticMeshComponent* ArmorPiece2; // 0x350(0x08)
	UStaticMeshComponent* ArmorPiece3; // 0x358(0x08)
	USkeletalMeshComponent* ModuleMesh; // 0x360(0x08)
	UGunTowerHealthComponent* GuntowerModuleHealth; // 0x368(0x08)
	AGuntowerEvent* OwningEvent; // 0x370(0x08)
	AGuntowerModule* ChildModule; // 0x378(0x08)
	float WeakpointsExposedTime; // 0x380(0x04)
	float WeakpointsExposedTimeSolo; // 0x384(0x04)
	float HideArmorTime; // 0x38c(0x04)
	float ArmorShootoutDelay; // 0x390(0x04)
	float ArmorLaunchPower; // 0x394(0x04)
	int32_t ModuleID; // 0x398(0x04)
	bool IsPassiveModule; // 0x3a0(0x01)
	bool ModuleIsActive; // 0x3a1(0x01)
	bool AreWeakpointsExposed; // 0x3a2(0x01)
	bool AreWeaponsExposed; // 0x3a3(0x01)
	bool ConstantRotation; // 0x3a4(0x01)
	bool IsArmorOff; // 0x3a5(0x01)
	bool Exploded; // 0x3a6(0x01)

	void ShootOutArmor();
	void SetModuleActive();
	void OnTearArmor();
	void OnRep_IsModuleActive();
	void OnRep_IsArmorOff();
	void OnRep_Exploded();
	void OnRep_AreWeakpointExposed();
	void OnActivationChanged(bool IsActivated);
	void Introduce();
	void HideWeakpoints();
	void HideArmor();
	int32_t GetModuleID();
	void DoExplosion();
	void DeactivateTowerModule();
	void All_PlayIntroductionAnim();
	void ActivateTowerModule();
};

// Class FSD.HostileGuntowerModule
// Size: 0x3e0 (Inherited: 0x3b0)
struct AHostileGuntowerModule : AGuntowerModule {
	USkeletalMeshComponent* DestroyedMesh; // 0x3b8(0x08)
	UParticleSystemComponent* DestroyedSmoke; // 0x3c0(0x08)
	UEnemyComponent* EnemyComponent; // 0x3c8(0x08)
	float ModuleMaxHealth; // 0x3d0(0x04)
	FRotator CurrentAimRotation; // 0x3d4(0x0c)

	void OnWeakpointDied(UHealthComponentBase* Health);
	void OnRep_ModuleMaxHealth();
	void OnModuleDied(UHealthComponentBase* Health);
};

// Class FSD.HostileTargetingGuntowerModule
// Size: 0x420 (Inherited: 0x3e0)
struct AHostileTargetingGuntowerModule : AHostileGuntowerModule {
	TArray<AActor*> SensedTargets; // 0x3e0(0x10)
	float TurretRotationSpeed; // 0x3fc(0x04)
	AActor* TargetedActor; // 0x400(0x08)
	float TargetingRotationSpeed; // 0x408(0x04)
	FName TargetingFromBone; // 0x40c(0x08)
	float TimeUntilForgetTarget; // 0x414(0x04)
	bool AlwaysUpdateAimRotation; // 0x41c(0x01)

	void OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus);
};

// Class FSD.LMGGuntoweModule
// Size: 0x4a8 (Inherited: 0x420)
struct ALMGGuntoweModule : AHostileTargetingGuntowerModule {
	UHitscanComponent* HitScanComp; // 0x420(0x08)
	UDamageComponent* DamageComp; // 0x428(0x08)
	USceneComponent* AimAtWhenNoTarget; // 0x430(0x08)
	UAudioComponent* FireAudio; // 0x438(0x08)
	UParticleSystem* TracerEffect; // 0x450(0x08)
	UParticleSystem* MuzzleEffect; // 0x458(0x08)
	USoundCue* ShootTailSound; // 0x460(0x08)
	int32_t BurstSize; // 0x470(0x04)
	float MaxAimOffset; // 0x480(0x04)
	float IdleAimRotationSpeed; // 0x484(0x04)
	float TimeBetweenShots; // 0x498(0x04)
	float TimeBetweenBursts; // 0x49c(0x04)
	float AimSpeed; // 0x4a0(0x04)
	bool IsFiresoundPlaying; // 0x4a5(0x01)

	void ShowShot(FVector Location);
	void OnRep_IsFiresoundPlaying();
};

// Class FSD.RandomFiringGuntowerModule
// Size: 0x560 (Inherited: 0x3e0)
struct ARandomFiringGuntowerModule : AHostileGuntowerModule {
	UStaticMeshComponent* LaserFrontTop; // 0x3e0(0x08)
	UStaticMeshComponent* LaserFrontBottom; // 0x3e8(0x08)
	UStaticMeshComponent* LaserBackTop; // 0x3f0(0x08)
	UStaticMeshComponent* LaserBackBottom; // 0x3f8(0x08)
	UParticleSystemComponent* FrontTopLaserMuzzle; // 0x400(0x08)
	UParticleSystemComponent* FrontBottomLaserMuzzle; // 0x408(0x08)
	UParticleSystemComponent* BackTopLaserMuzzle; // 0x410(0x08)
	UParticleSystemComponent* BackBottomLaserMuzzle; // 0x418(0x08)
	FRotator OtherCurrentRotation; // 0x4e4(0x0c)
	UParticleSystem* LaserImpact; // 0x500(0x08)
	UAudioComponent* LaserSound; // 0x508(0x08)
	UDamageComponent* Damage; // 0x510(0x08)
	float BoneSpaceTurretMaxYaw; // 0x518(0x04)
	float BoneSpaceTurretMaxPitch; // 0x51c(0x04)
	float TimeBetweenAttacks; // 0x520(0x04)
	float TimeUntilNextAttack; // 0x524(0x04)
	float ModuleRotationSpeed; // 0x528(0x04)
	float TurretAimSpeed; // 0x52c(0x04)
	float LaserLeghtRatio; // 0x530(0x04)
	float TimeBetweenHits; // 0x534(0x04)
	float ChanceToInvert; // 0x53c(0x04)
	float PlatformDissolveRadius; // 0x540(0x04)
	float PlatformDissolveSqueeze; // 0x544(0x04)
	bool IsAttacking; // 0x558(0x01)
};

// Class FSD.RadialFireModule
// Size: 0x428 (Inherited: 0x3e0)
struct ARadialFireModule : AHostileGuntowerModule {
	AProjectile* projectileClass; // 0x3e0(0x08)
	FRotator AttackEndRotation; // 0x3e8(0x0c)
	float RotationSpeedTurret; // 0x3f4(0x04)
	float DelayBetweenShots; // 0x3fc(0x04)
	bool IsAttacking; // 0x404(0x01)
	FName LeftFireSocket; // 0x408(0x08)
	FName RightFireSocket; // 0x410(0x08)
	FName FrontFireSocket; // 0x418(0x08)
	FName BackFireSocket; // 0x420(0x08)

	void OnFire();
};

// Class FSD.HomingFireModule
// Size: 0x438 (Inherited: 0x420)
struct AHomingFireModule : AHostileTargetingGuntowerModule {
	FName ShootDroneSocket; // 0x420(0x08)
	AProjectile* HomingProjectileClass; // 0x428(0x08)
	float TimeBetweenShots; // 0x430(0x04)
};

// Class FSD.HomingDroneBomb
// Size: 0x388 (Inherited: 0x338)
struct AHomingDroneBomb : AProjectile {
	UEnemyHealthComponent* Health; // 0x340(0x08)
	USoundCue* ArmingSound; // 0x348(0x08)
	float HomingUpdateInterval; // 0x350(0x04)
	float TargetSearchInterval; // 0x354(0x04)
	float ArmTime; // 0x358(0x04)
	FGameplayTagContainer GameplayTags; // 0x360(0x20)
	float HomingAccelerationMagnitude; // 0x380(0x04)

	void UpdateHomingSpeed();
	void SearchForTarget();
	void OnRep_HomingAccelerationMagnitude();
};

// Class FSD.GunTowerModuleAnimInstance
// Size: 0x290 (Inherited: 0x270)
struct UGunTowerModuleAnimInstance : UAnimInstance {
	FRotator CurrentModuleRotation; // 0x268(0x0c)
	FRotator CurrentLookAtRotation; // 0x274(0x0c)
	bool IsModuleActive; // 0x280(0x01)
	bool AreWeakpointsExposed; // 0x281(0x01)
};

// Class FSD.RandomFireModuleAnimInstance
// Size: 0x2a0 (Inherited: 0x290)
struct URandomFireModuleAnimInstance : UGunTowerModuleAnimInstance {
	FRotator OtherLookatRotation; // 0x288(0x0c)
};

// Class FSD.GuntowerWeakPoint
// Size: 0x338 (Inherited: 0x2f0)
struct AGuntowerWeakPoint : AFSDPawn {
	USceneComponent* Root; // 0x2f0(0x08)
	UEnemyHealthComponent* Health; // 0x2f8(0x08)
	UStaticMeshComponent* Mesh; // 0x300(0x08)
	UWeakpointGlowComponent* HitGlow; // 0x308(0x08)
	TWeakObjectPtr<UEnemyHealthComponent> ParentHealth; // 0x310(0x08)
	UDamageClass* DamageToParent; // 0x318(0x08)
	UParticleSystem* deathParticles; // 0x320(0x08)
	USoundCue* deathSound; // 0x328(0x08)

	void OnExposedChanged(bool isExposed);
	void OnDeath(UHealthComponentBase* HealthComponent);
	void DamageParent(float ammount);
};

// Class FSD.GunTowerHealthComponent
// Size: 0x280 (Inherited: 0x280)
struct UGunTowerHealthComponent : UEnemyHealthComponent {
};

// Class FSD.HackingToolItem
// Size: 0x398 (Inherited: 0x388)
struct AHackingToolItem : AAnimatedItem {
	TWeakObjectPtr<UHackingUsableComponent> HackingUsable; // 0x388(0x08)

	void Server_HackingCompleted(bool InHackingSuccessful);
	void ReceiveHackingStarted();
	void ReceiveClick();
	void OnRep_HackingUsable();
	void HackingCompleted(bool InHackingSuccessful);
};

// Class FSD.HackingUsableComponent
// Size: 0x1c8 (Inherited: 0x150)
struct UHackingUsableComponent : UInstantUsable {
	FMulticastInlineDelegate OnHacked; // 0x150(0x10)
	TSoftClassPtr<UObject> ItemType; // 0x160(0x28)
	TSoftClassPtr<UObject> HackingWidgetType; // 0x188(0x28)
	FHackingUsableState HackingState; // 0x1b0(0x14)

	void OnRep_HackingState(FHackingUsableState oldState);
	void HackedDelegate__DelegateSignature(APlayerCharacter* InHackedBy);
	bool GetIsHacked();
	bool GetIsBeingHacked();
	TSoftClassPtr<UObject> GetHackingWidgetType();
	APlayerCharacter* GetHackedBy();
};

// Class FSD.HackingToolWidget
// Size: 0x280 (Inherited: 0x230)
struct UHackingToolWidget : UUserWidget {
	FMulticastInlineDelegate OnHackingFail; // 0x230(0x10)
	FMulticastInlineDelegate OnHackingStageCompleted; // 0x240(0x10)
	FMulticastInlineDelegate OnHackingCompleted; // 0x250(0x10)
	FMulticastInlineDelegate OnRequestUnequipHackingTool; // 0x260(0x10)
	TWeakObjectPtr<UHackingUsableComponent> HackingUsable; // 0x270(0x08)
	TWeakObjectPtr<AHackingToolItem> HackingTool; // 0x278(0x08)

	void StartHacking(UHackingUsableComponent* InHackingUsable, AHackingToolItem* InHackingTool);
	void RequestUnequipHackingTool();
	void ReceiveHackingToolUnequipped();
	void ReceiveHackingStarted();
	void ReceiveClick();
	void HackingUnequipDelegate__DelegateSignature();
	void HackingStageCompletedDelegate__DelegateSignature(int32_t InNextStage, int32_t InTotalStages);
	void HackingStageComplete(int32_t InNextStage, int32_t InTotalStages);
	void HackingFailDelegate__DelegateSignature(USoundCue* InFailCue, UDialogDataAsset* InShout);
	void HackingCompleteDelegate__DelegateSignature(bool InSuccess);
	void HackingComplete(bool InSuccess);
};

// Class FSD.WidgetComponentCustomMaterial
// Size: 0x540 (Inherited: 0x540)
struct UWidgetComponentCustomMaterial : UWidgetComponent {
	UMaterialInterface* CustomMaterial; // 0x538(0x08)
};

// Class FSD.HealthBarComponent
// Size: 0x540 (Inherited: 0x540)
struct UHealthBarComponent : UWidgetComponentCustomMaterial {
};

// Class FSD.HealthDamageTracker
// Size: 0xd0 (Inherited: 0xb0)
struct UHealthDamageTracker : UActorComponent {
	FMulticastInlineDelegate OnTrackedPercentageReachedEvent; // 0xb0(0x10)
	float TiggerOnPercentage; // 0xc0(0x04)
	UHealthComponentBase* Health; // 0xc8(0x08)

	void ResetTrackedDamage();
	void OnDamageTaken(float Amount);
};

// Class FSD.PlayerCharacterData
// Size: 0xb8 (Inherited: 0x30)
struct UPlayerCharacterData : UDataAsset {
	FHeroInfo HeroInfo; // 0x30(0x88)

	FText GetSwitchToMessage();
	UTexture2D* GetSmallIcon();
	FText GetShortDescription();
	FText GetName();
	FText GetLongDescription();
	UTexture2D* GetIcon();
	UTexture2D* GetFullSizeImage();
	FLinearColor GetColor();
};

// Class FSD.HitscanBaseComponent
// Size: 0x238 (Inherited: 0x110)
struct UHitscanBaseComponent : UWeaponFireComponent {
	FMulticastInlineDelegate OnSpreadChanged; // 0x110(0x10)
	FMulticastInlineDelegate OnFireComplete; // 0x120(0x10)
	float SpreadPerShot; // 0x130(0x04)
	UDamageComponent* DamageComponent; // 0x138(0x08)
	float Damage; // 0x144(0x04)
	float ArmorDamageMultiplier; // 0x148(0x04)
	UDamageClass* DamageClass; // 0x150(0x08)
	float WeakpointDamageMultiplier; // 0x158(0x04)
	int32_t MaxPenetrations; // 0x15c(0x04)
	enum class EImpactDecalSize ImpactDecalSize; // 0x160(0x01)
	float friendlyFireModifier; // 0x164(0x04)
	bool UseDynamicSpread; // 0x168(0x01)
	float MinSpread; // 0x16c(0x04)
	float MinSpreadWhenMoving; // 0x170(0x04)
	float MinSpreadWhenSprinting; // 0x174(0x04)
	float MaxSpread; // 0x178(0x04)
	FRuntimeFloatCurve SpreadCurve; // 0x180(0x88)
	float SpreadRecoveryPerSecond; // 0x208(0x04)
	float VerticalSpreadMultiplier; // 0x214(0x04)
	float HorizontalSpredMultiplier; // 0x218(0x04)
	float MaxVerticalSpread; // 0x21c(0x04)
	float MaxHorizontalSpread; // 0x220(0x04)
	enum class ERicochetBehavior RicochetBehavior; // 0x228(0x01)
	float RicochetChance; // 0x22c(0x04)
	bool RicochetOnWeakspotOnly; // 0x230(0x01)
	float RicochetMaxRange; // 0x234(0x04)

	void Server_StopFire();
	void Server_RemoveDebris(int32_t instance, int32_t Component);
	float GetCurrentVerticalSpread();
	float GetCurrentHorizontalSpread();
};

// Class FSD.HitscanComponent
// Size: 0x2f0 (Inherited: 0x238)
struct UHitscanComponent : UHitscanBaseComponent {
	FMulticastInlineDelegate OnHit; // 0x238(0x10)
	bool BulletsCanCarve; // 0x248(0x01)
	FIRandRange NormalBulletsPerCarvingOne; // 0x24c(0x08)
	float CarveDiameter; // 0x258(0x04)
	float CarveNoise; // 0x25c(0x04)
	float CarveDebrisSize; // 0x260(0x04)
	float GeneralImpactAudioVolume; // 0x264(0x04)
	float ImpactDelay; // 0x268(0x04)
	bool OnlyUseImpactEffects; // 0x26c(0x01)
	UFXSystemAsset* ImpactParticles; // 0x270(0x08)
	USoundCue* ImpactSound; // 0x278(0x08)
	bool IgnoreAlwaysPenetrate; // 0x280(0x01)
	TArray<AActor*> DamagedActorCache; // 0x288(0x10)

	void Server_RegisterRicochetHit_Terrain(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UFSDPhysicalMaterial* PhysMaterial);
	void Server_RegisterRicochetHit_Destructable(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, char BoneIndex);
	void Server_RegisterRicochetHit(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial);
	void Server_RegisterHit_Terrain(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UFSDPhysicalMaterial* PhysMaterial);
	void Server_RegisterHit_Destructable(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, char BoneIndex);
	void Server_RegisterHit(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial);
	void All_ShowRicochetHit_Terrain(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, char MaterialID, UFSDPhysicalMaterial* PhysMaterial);
	void All_ShowRicochetHit_Destructable(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, char BoneIndex);
	void All_ShowRicochetHit(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, bool SpawnDecal, UFSDPhysicalMaterial* PhysMaterial);
	void All_ShowHit_Terrain(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, char MaterialID, UFSDPhysicalMaterial* PhysMaterial);
	void All_ShowHit_Destructable(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, char BoneIndex);
	void All_ShowHit(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, bool SpawnDecal, UFSDPhysicalMaterial* PhysMaterial);
};

// Class FSD.HostileGuntowerModuleController
// Size: 0x368 (Inherited: 0x358)
struct AHostileGuntowerModuleController : AFSDAIController {
	UAIPerceptionComponent* Perception; // 0x358(0x08)

	void OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus);
};

// Class FSD.HttpUtilityLibrary
// Size: 0x28 (Inherited: 0x28)
struct UHttpUtilityLibrary : UBlueprintFunctionLibrary {
};

// Class FSD.HUDHealthBar
// Size: 0x320 (Inherited: 0x250)
struct UHUDHealthBar : UFSDUserWidget {
	FMulticastInlineDelegate OnOwnerDead; // 0x250(0x10)
	FLinearColor BackgroundColor; // 0x260(0x10)
	FLinearColor HealthColor; // 0x270(0x10)
	FLinearColor DamageColor; // 0x280(0x10)
	TMap<enum class EHealthbarType, FHealthBarLooks> HealthBarLooks; // 0x290(0x50)
	FLinearColor OutlineColor; // 0x2e0(0x10)
	int32_t OutlineThickness; // 0x2f0(0x04)
	float HealthAnimationFactor; // 0x2f4(0x04)
	float HealthPerCell; // 0x2f8(0x04)
	int32_t MinHealthCells; // 0x2fc(0x04)
	int32_t MaxHealthCells; // 0x300(0x04)
	TScriptInterface<IHealth> TargetHealth; // 0x308(0x10)
	float AnimatedHealth; // 0x318(0x04)
	float MaxHealth; // 0x31c(0x04)

	void SetHealthComponent(TScriptInterface<IHealth> Health, float Damage);
	float GetCurrentHealth();
};

// Class FSD.HUDVisibilityGroup
// Size: 0x98 (Inherited: 0x30)
struct UHUDVisibilityGroup : UDataAsset {
	FMulticastInlineDelegate OnModeChanged; // 0x30(0x10)
	FMulticastInlineDelegate OnVisibilityChanged; // 0x40(0x10)
	enum class EHUDVisibilityGroups GroupID; // 0x50(0x01)
	FText Title; // 0x58(0x18)
	bool AllowDynamicMode; // 0x70(0x01)
	bool AllowHiddenMode; // 0x71(0x01)
	bool bDynamicallyVisible; // 0x78(0x01)
	TArray<FHUDVisibilityRegisteredWidget> RegisteredWidgets; // 0x80(0x10)
	enum class EHUDVisibilityMode RecommendedMode; // 0x90(0x01)
	enum class EHUDVisibilityMode MinimalMode; // 0x91(0x01)

	void VisibilityDelegate__DelegateSignature(UHUDVisibilityGroup* Group, bool IsVisible);
	void SetModeFromPreset(enum class EHUDVisibilityPresets Preset);
	void SetMode(enum class EHUDVisibilityMode InMode);
	void SetHudGroupDynamicallyVisible(UHUDVisibilityGroup* Group, bool IsVisible);
	void SetGroupDynamicallyVisible(bool IsVisible);
	void RegisterWidgetWithVisibilityGroup(UWidget* Widget, UHUDVisibilityGroup* Group, enum class ESlateVisibility VisibleMode, enum class ESlateVisibility HiddenMode);
	void RegisterMultipleWidgetsWithVisibilityGroup(TArray<UWidget*> Widgets, UHUDVisibilityGroup* Group, enum class ESlateVisibility VisibleMode, enum class ESlateVisibility HiddenMode);
	void ModeDelegate__DelegateSignature(UHUDVisibilityGroup* Group, enum class EHUDVisibilityMode Mode);
	bool IsModeAllowed(enum class EHUDVisibilityMode InMode);
	bool IsInDynamicMode();
	bool IsHudGroupVisible(UHUDVisibilityGroup* Group);
	bool IsGroupVisible();
	enum class EHUDVisibilityMode GetMode();
	TArray<enum class EHUDVisibilityMode> GetAllowedModes();
};

// Class FSD.HUDWarningWidget
// Size: 0x250 (Inherited: 0x250)
struct UHUDWarningWidget : UFSDUserWidget {

	void SetData(UTexture2D* Texture, USoundBase* PingSound);
	void Ping(bool DestroyAfterPing);
};

// Class FSD.HydraWeedCore
// Size: 0x340 (Inherited: 0x340)
struct AHydraWeedCore : AEnemyPawn {

	void WakupCore();
	void OnShooterKilled(AHydraWeedShooter* shooter);
	void OnHealerKilled(AHydraWeedHealer* healer);
};

// Class FSD.ShootingPlant
// Size: 0x350 (Inherited: 0x340)
struct AShootingPlant : AEnemyPawn {
	bool IsVisible; // 0x340(0x01)
	AActor* Target; // 0x348(0x08)

	void SetTarget(AActor* Target);
	void OnRep_Target();
};

// Class FSD.HydraWeedShooter
// Size: 0x358 (Inherited: 0x350)
struct AHydraWeedShooter : AShootingPlant {
	AHydraWeedCore* Core; // 0x350(0x08)
};

// Class FSD.HydraWeedHealer
// Size: 0x348 (Inherited: 0x340)
struct AHydraWeedHealer : AEnemyPawn {
	AHydraWeedCore* Core; // 0x340(0x08)
};

// Class FSD.HydraWeedSpawnProjectile
// Size: 0x348 (Inherited: 0x338)
struct AHydraWeedSpawnProjectile : AProjectile {
	FVector TargetLocation; // 0x338(0x0c)
};

// Class FSD.TriggerAI
// Size: 0x28 (Inherited: 0x28)
struct UTriggerAI : UInterface {

	bool OnTriggerAI(FName TriggerName);
	void OnMessageAI(FName TriggerName);
};

// Class FSD.IconGenerationManager
// Size: 0x168 (Inherited: 0x28)
struct UIconGenerationManager : UObject {
	AIconGenerationCharacter* GeneratorInst; // 0x28(0x08)
	AIconGenerationPickaxe* PickaxeGeneratorInst; // 0x30(0x08)
	AIconGenerationWeapon* WeaponGeneratorInst; // 0x38(0x08)
	TArray<FGenerateIconInfo> ItemGenerationQueue; // 0x90(0x10)
	TArray<enum class EVanitySlot> VanitySlots; // 0xc8(0x10)
	TArray<UVanityItem*> HairColorHairItems; // 0xd8(0x10)
	TSoftClassPtr<UObject> IconCharacter; // 0xe8(0x28)
	TSoftClassPtr<UObject> IconPickaxe; // 0x110(0x28)
	TSoftClassPtr<UObject> IconWeapon; // 0x138(0x28)
	UTextureRenderTarget2D* LatestGeneratedTexture; // 0x160(0x08)

	void GenerateWeaponIcon_Async(UIconGenerationManager* Manager, UItemSkin* Item, bool inShowCloseUp, UPlayerCharacterID* Character, UTextureRenderTarget2D* Icon, FLatentActionInfo LatentInfo);
	void GenerateVanityIcon_Async(UIconGenerationManager* Manager, UVanityItem* Item, UPlayerCharacterID* Character, UTextureRenderTarget2D* Icon, FLatentActionInfo LatentInfo);
	void GeneratePickaxeSetIcon_Async(UIconGenerationManager* Manager, FPickaxeSet PickaxeSet, UPlayerCharacterID* Character, UTextureRenderTarget2D* Icon, FLatentActionInfo LatentInfo);
	void GeneratePickaxePartIcon_Async(UIconGenerationManager* Manager, UPickaxePart* part, enum class EPickaxePartLocation PickaxePartLocation, UPlayerCharacterID* Character, UTextureRenderTarget2D* Icon, FLatentActionInfo LatentInfo);
};

// Class FSD.IconGeneratable
// Size: 0x28 (Inherited: 0x28)
struct UIconGeneratable : UInterface {
};

// Class FSD.Craftable
// Size: 0x28 (Inherited: 0x28)
struct UCraftable : UInterface {

	void PreviewItem(AFSDPlayerState* PlayerState, bool Show);
	bool IsOwned(UObject* WorldContextObject, UPlayerCharacterID* characterID);
	TArray<FCraftingCost> GetResourceCost();
	int32_t GetRequiredPlayerRank();
	int32_t GetCraftingCreditsCost();
	FText GetCraftableName();
	UTexture2D* GetCraftableIcon();
	FText GetCraftableDescription();
	void CraftItem(UObject* WorldContextObject, UPlayerCharacterID* characterID);
	bool CanCraft(UObject* WorldContextObject);
};

// Class FSD.FootStepNotifyTarget
// Size: 0x28 (Inherited: 0x28)
struct UFootStepNotifyTarget : UInterface {
};

// Class FSD.Health
// Size: 0x28 (Inherited: 0x28)
struct UHealth : UInterface {

	bool IsDead();
	bool IsAlive();
	AActor* GetOwner();
	float GetMaxHealth();
	enum class EHealthbarType GetHealthbarType();
	float GetHealth();
};

// Class FSD.InputCompatible
// Size: 0x28 (Inherited: 0x28)
struct UInputCompatible : UInterface {
};

// Class FSD.ImpactComponent
// Size: 0x120 (Inherited: 0xb0)
struct UImpactComponent : UActorComponent {
	FMulticastInlineDelegate OnImpactedEvent; // 0xb0(0x10)
	FMulticastInlineDelegate OnHighAcceleration; // 0xc0(0x10)
	bool DebugText; // 0xd0(0x01)
	bool TrackAcceleration; // 0xfc(0x01)
	bool TrackVelocity; // 0xfd(0x01)
	float TriggerHighAccelAt; // 0x104(0x04)
	float TriggerAtVelocityDifference; // 0x110(0x04)

	void SetCheckVelocity(bool aCheckVelocity);
	void SetCheckAcceleration(bool aCheckAcceleration);
	void EnableImpactCheckhing(USceneComponent* cmp);
	void DisableImpactChecking();
};

// Class FSD.WeaponImpactComponent
// Size: 0x128 (Inherited: 0xb0)
struct UWeaponImpactComponent : UActorComponent {
	FMulticastInlineDelegate OnImpactedEvent; // 0xb0(0x10)
	FMulticastInlineDelegate OnHighAcceleration; // 0xc0(0x10)
	bool DebugText; // 0xd0(0x01)
	FName ImpactSocketName; // 0xd4(0x08)
	USkeletalMeshComponent* ActiveMesh; // 0xe0(0x08)
	bool TrackAcceleration; // 0x110(0x01)
	bool TrackVelocity; // 0x111(0x01)
	float TriggerHighAccelAt; // 0x118(0x04)
	float TriggerAtVelocityDifference; // 0x124(0x04)

	void EnableImpactCheckhing(USkeletalMeshComponent* cmp);
	void DisableImpactChecking();
};

// Class FSD.ImpactAudioComponent
// Size: 0x800 (Inherited: 0x7d0)
struct UImpactAudioComponent : UAudioComponent {
	FName AudioParameterSpeed; // 0x7d0(0x08)
	float DecelerationThreshold; // 0x7ec(0x04)
	bool ListenForDeath; // 0x7f4(0x01)

	void OnOwnerDeath(UHealthComponentBase* HealthComponent);
	UImpactAudioComponent* AddImpactAudioToActor(AActor* Actor, USceneComponent* AttachToComponent, UImpactAudioComponent* ComponentClass);
};

// Class FSD.FSDReverbVolume
// Size: 0x238 (Inherited: 0x220)
struct AFSDReverbVolume : AActor {
	USphereComponent* Collision; // 0x220(0x08)
	UReverbEffect* Reverb; // 0x228(0x08)
	float Priority; // 0x230(0x04)
};

// Class FSD.InDangerComponent
// Size: 0xe8 (Inherited: 0xb0)
struct UInDangerComponent : UActorComponent {
	FMulticastInlineDelegate OnInDanger; // 0xb0(0x10)
	TWeakObjectPtr<UHealthComponentBase> ParentHealthComponent; // 0xc0(0x08)
	float DamageTimeLimit; // 0xc8(0x04)
	float DamageThreshold; // 0xcc(0x04)
	bool RunsOnClients; // 0xd0(0x01)

	void SetIsActive(bool aFlag);
	void OnDamage(float Amount);
	bool GetIsActive();
};

// Class FSD.NetMontageAble
// Size: 0x28 (Inherited: 0x28)
struct UNetMontageAble : UInterface {

	float QueueMontage(UAnimMontage* Montage);
	USkeletalMeshComponent* GetSkeletalMesh();
	UAnimInstance* GetAnimInstance();
};

// Class FSD.NotifyMessageReceiver
// Size: 0x28 (Inherited: 0x28)
struct UNotifyMessageReceiver : UInterface {

	bool OnNotifyMessageReceived(FName TriggerName);
};

// Class FSD.InputCaptureWidget
// Size: 0x270 (Inherited: 0x230)
struct UInputCaptureWidget : UUserWidget {
	FCustomKeySetting Settings; // 0x230(0x38)
	enum class EKeyBindingSlot InputSlot; // 0x268(0x01)
	bool bIsGamepadKey; // 0x269(0x01)
	bool bCapturing; // 0x26a(0x01)

	void SetData(FCustomKeySetting InSettings, enum class EKeyBindingSlot InInputSlot, bool InIsGamepadKey);
	void SetCurrentBinding(FKey InKey);
	void ReceiveKeyChanged(FKey InKey);
	void ReceiveKeyCaptured(FKey InKey);
	void ReceiveCapturingChanged(bool InCapturing);
	FKey GetCurrentBinding();
	bool FindCurrentSettingsForKey(FKey InKey, FCustomKeySetting OutSettings);
	void ClearCurrentBinding();
	void BindActionToKey(FCustomKeySetting InAction, FKey InKey, enum class EKeyBindingSlot InSlot, bool SaveToDisk);
};

// Class FSD.InputFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UInputFunctionLibrary : UBlueprintFunctionLibrary {

	void SetMouseSmoothingOn(bool smoothingOn);
	bool IsMouseSmoothingOn();
	bool IsMouseEventAction(FPointerEvent MouseEvent, FName ActionName, bool IgnoreCustomBindings);
	bool IsKeyEventAction(FKeyEvent KeyEvent, FName ActionName, bool IgnoreCustomBindings);
	bool IsAxisMappedToDirectional(FName InActionName, FKey Key, int32_t Direction, bool IgnoreCustomBindings);
	bool IsActionMappedTo(FName InActionName, FKey Key, bool IgnoreCustomBindings);
	TArray<FKey> GetInputKeysBoundToAction(FName ActionName, enum class EKeyBindingAxis Axis, bool IsGamePadKey);
	bool GetAxisMapping(FName InActionName, int32_t Axis, bool InGamepadKeys, FInputAxisKeyMapping OutResult);
	bool GetActionMapping(FName InActionName, bool InGamepadKeys, FInputActionKeyMapping OutResult);
	bool FindInputDisplay(APlayerController* PlayerController, FName InputName, enum class EFSDInputSource InputSource, int32_t LayoutIndex, FInputDisplay OutInputDisplay);
};

// Class FSD.InsectSwarmEnemy
// Size: 0x3a8 (Inherited: 0x3a0)
struct AInsectSwarmEnemy : AEnemyDeepPathfinderCharacter {
	UParticleSystemComponent* SwarmParticles; // 0x3a0(0x08)
};

// Class FSD.InsectSwarmSpawner
// Size: 0x360 (Inherited: 0x340)
struct AInsectSwarmSpawner : AEnemyPawn {
	AInsectSwarmEnemy* SwarmType; // 0x340(0x08)
	float SpawnHeightOffset; // 0x348(0x04)
	float AlertDistance; // 0x34c(0x04)
	float respawnDelay; // 0x350(0x04)
	TWeakObjectPtr<AInsectSwarmEnemy> SwarmInstance; // 0x354(0x08)

	UStaticMeshComponent* Receive_GetStaticMesh();
	void OnSwarmSpawned(AInsectSwarmEnemy* Swarm);
	void OnSwarmDestroyed(AActor* DestroyedActor);
};

// Class FSD.InstancedMeshOnSpline
// Size: 0x560 (Inherited: 0x530)
struct UInstancedMeshOnSpline : UInstancedStaticMeshComponent {
	USplineComponent* Spline; // 0x528(0x08)
	int32_t NumInstances; // 0x530(0x04)
	float Speed; // 0x534(0x04)
	float VerticalOffset; // 0x538(0x04)
	FVector Scale; // 0x53c(0x0c)
	TArray<FTransform> NewInstancesTransforms; // 0x548(0x10)
	float Phase; // 0x558(0x04)

	void SetSpeed(float newSpeed);
};

// Class FSD.InventoryComponent
// Size: 0x270 (Inherited: 0xb0)
struct UInventoryComponent : UActorComponent {
	FMulticastInlineDelegate OnItemsLoaded; // 0xb0(0x10)
	FMulticastInlineDelegate OnItemClicked; // 0xc0(0x10)
	FMulticastInlineDelegate OnItemEquipped; // 0xd0(0x10)
	FMulticastInlineDelegate OnItemUnequipped; // 0xe0(0x10)
	FMulticastInlineDelegate OnGrenadeCountChanged; // 0xf0(0x10)
	FMulticastInlineDelegate OnFlareCountChanged; // 0x100(0x10)
	FMulticastInlineDelegate OnMaxFlareCountChanged; // 0x110(0x10)
	FMulticastInlineDelegate OnFlareProduction; // 0x120(0x10)
	FMulticastInlineDelegate OnResuppliedEvent; // 0x130(0x10)
	FMulticastInlineDelegate OnCarriableChangedEvent; // 0x140(0x10)
	bool bItemsLoaded; // 0x150(0x01)
	UInventoryList* InventoryList; // 0x160(0x08)
	AThrownGrenadeItem* ThrownGrenadeClass; // 0x168(0x08)
	TArray<AItem*> Items; // 0x170(0x10)
	TArray<AItem*> UnlistedItems; // 0x180(0x10)
	APickaxeItem* MiningItem; // 0x190(0x08)
	AThrownGrenadeItem* GrenadeItem; // 0x198(0x08)
	ALaserPointerItem* LaserPointerItem; // 0x1a0(0x08)
	ATerrainScannerItem* TerrainScannerItem; // 0x1a8(0x08)
	ARecallableSentryGunItem* RecallableSentryGunItem; // 0x1b0(0x08)
	AItem* PickedUpItem; // 0x1b8(0x08)
	ARessuplyPodItem* ResupplyItem; // 0x1c0(0x08)
	AItem* PreviousItem; // 0x1c8(0x08)
	TArray<AItem*> EquipHistory; // 0x1d0(0x10)
	FCarriedItemState CarriedItem; // 0x1e8(0x10)
	FVector FlareOffset; // 0x1f8(0x0c)
	USoundCue* OutOfFlaresSound; // 0x208(0x08)
	UDialogDataAsset* OutOfFlaresShout; // 0x210(0x08)
	float FlareAngle; // 0x21c(0x04)
	float FlareCooldown; // 0x220(0x04)
	float FlareProductionTime; // 0x224(0x04)
	FLinearColor FlareChromaColor; // 0x228(0x10)
	float FlareProductionTimeLeft; // 0x238(0x04)
	int32_t MaxFlares; // 0x23c(0x04)
	int32_t Flares; // 0x240(0x04)
	float FlareCooldownRemaining; // 0x244(0x04)
	AFlare* flareClass; // 0x248(0x08)
	TArray<UItemUpgrade*> FlareUpgrades; // 0x250(0x10)
	AItem* EquippedItem; // 0x260(0x08)

	void UpdateFromSaveGameInSlot(enum class EItemCategory Category);
	void StartGrenadeThrow();
	void Server_ThrowFlare();
	void Server_Equip(AItem* Item);
	void Server_DropCarriedItem();
	void Resupply(float percentage);
	void PickupItemInstance(AItem* Item);
	AItem* PickupItem(AItem* itemClass);
	void OnRep_PickedUpItem();
	void OnRep_Items();
	void OnRep_EquippedItem(AItem* oldItem);
	void OnRep_CarriedItem(FCarriedItemState LastCarriedItem);
	void OnCharacterStateChanged(enum class ECharacterState NewState);
	bool IsTerrainScannerEquipped();
	bool HasPickedUpItem();
	bool HasDrink();
	int32_t GetTotalAmmoLeft();
	ARecallableSentryGunItem* GetRecallableSentryGunItem();
	AItem* GetItem(enum class EItemCategory Category);
	AActor* GetCarriedItem();
	TArray<AItem*> GetAllItems();
	void EquipLastItem(bool ignoreUsing);
	bool EquipCategory(enum class EItemCategory Category);
	void EquipAtIndex(int32_t Index, bool ignoreUsing);
	void Equip(AItem* Item, bool ignoreIsUsing, bool ignoreConditions);
	void EndGrenadeThrow();
	void DropPickedupItem();
	void CreateStartingEquipmentWhenItemsLoaded();
	void Client_Resupply(float percentage);
	void Client_DropPickedUpItem();
	void AnimationNotify2();
	void AnimationNotify1();
};

// Class FSD.InventoryList
// Size: 0x188 (Inherited: 0x30)
struct UInventoryList : UDataAsset {
	TSoftObjectPtr<UTexture2D> IconWeaponSetOutline; // 0x30(0x28)
	TSoftObjectPtr<UTexture2D> IconWeaponSetFill; // 0x58(0x28)
	TSoftObjectPtr<UMaterialInterface> LaserpointerMarkerMaterial; // 0x80(0x28)
	TSoftObjectPtr<UMaterialInterface> LaserpointerBeamMaterial; // 0xa8(0x28)
	UItemID* LaserPointerItem; // 0xd0(0x08)
	UItemID* TerrainScannerItem; // 0xd8(0x08)
	UItemID* ResupplyItem; // 0xe0(0x08)
	TArray<UItemID*> PrimaryWeapons; // 0xe8(0x10)
	TArray<UItemID*> SecondaryWeapons; // 0xf8(0x10)
	TArray<UItemID*> TraversalTools; // 0x108(0x10)
	TArray<UItemID*> ClassTools; // 0x118(0x10)
	TArray<UItemID*> Armors; // 0x128(0x10)
	TArray<UItemID*> Flares; // 0x138(0x10)
	TArray<UItemID*> Grenades; // 0x148(0x10)
	TArray<UItemID*> MiningTools; // 0x158(0x10)

	UItemID* GetPreviousUnlockedItem(UObject* WorldContextObject, enum class EItemCategory Category, UItemID* currentItem);
	UItemID* GetPreviousItem(enum class EItemCategory Category, UItemID* currentItem);
	int32_t GetNumberOfItems(enum class EItemCategory Category);
	UItemID* GetNextUnlockedItem(UObject* WorldContextObject, enum class EItemCategory Category, UItemID* currentItem);
	UItemID* GetNextItem(enum class EItemCategory Category, UItemID* currentItem);
	TArray<AActor*> GetLoadedItemListFiltered(enum class EItemCategory Category, FDelegate Filter);
	TArray<AActor*> GetLoadedItemList(enum class EItemCategory Category);
	TArray<UItemID*> GetItemList(enum class EItemCategory Category);
	int32_t GetItemIndex(enum class EItemCategory Category, UItemID* Item);
	TArray<UItemID*> GetAllItemsList();
	void CheckForInventoryAchievements(UObject* WorldContextObject);
};

// Class FSD.PlaySoundInterface
// Size: 0x28 (Inherited: 0x28)
struct UPlaySoundInterface : UInterface {
};

// Class FSD.ProjectileSpawner
// Size: 0x28 (Inherited: 0x28)
struct UProjectileSpawner : UInterface {
};

// Class FSD.RejoinListener
// Size: 0x28 (Inherited: 0x28)
struct URejoinListener : UInterface {
};

// Class FSD.Targetable
// Size: 0x28 (Inherited: 0x28)
struct UTargetable : UInterface {

	void ShowDamageEffects(UParticleSystem* Particles, FVector Location, FRotator Orientation);
	UHealthComponentBase* GetTargetHealthComponent();
	FVector GetTargetCenterMass();
	bool GetIsTargetable();
};

// Class FSD.AnimNotify_CycleItemComplete
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_CycleItemComplete : UAnimNotify {
};

// Class FSD.HeatMaterialComponent
// Size: 0xd0 (Inherited: 0xb0)
struct UHeatMaterialComponent : UActorComponent {
	FName ParameterName; // 0xb0(0x08)
	float MaxEffect; // 0xb8(0x04)
	TArray<UMaterialInstanceDynamic*> MaterialIntances; // 0xc0(0x10)

	void OnTemperatureChanged(float Temperature, bool Overheated);
	void AddHeatMaterial(UMaterialInstanceDynamic* MaterialInstance);
};

// Class FSD.ItemAquisitionSource
// Size: 0x58 (Inherited: 0x58)
struct UItemAquisitionSource : USavableDataAsset {
};

// Class FSD.ItemCharacterAnimationSet
// Size: 0x1a0 (Inherited: 0x30)
struct UItemCharacterAnimationSet : UDataAsset {
	UAnimSequence* FP_Idle; // 0x30(0x08)
	UAnimMontage* FP_InspectWeapon; // 0x38(0x08)
	UAnimSequence* FP_Walk; // 0x40(0x08)
	UAnimSequence* FP_Sprint; // 0x48(0x08)
	UAnimMontage* FP_JumpStart_Montage; // 0x50(0x08)
	UAnimSequence* FP_JumpStart; // 0x58(0x08)
	UAnimSequence* FP_JumpLoop; // 0x60(0x08)
	UAnimSequence* FP_JumpLand; // 0x68(0x08)
	UAnimSequence* FP_JumpLand_Aim; // 0x70(0x08)
	UAnimSequence* FP_Downed; // 0x78(0x08)
	UBlendSpace1D* TP_LookUpDown; // 0x80(0x08)
	UBlendSpace1D* TP_LookUpDown_Aim; // 0x88(0x08)
	UAnimSequence* TP_Sprint; // 0x90(0x08)
	UAnimSequence* TP_Idle; // 0x98(0x08)
	UAnimSequence* TP_Idle_Aim; // 0xa0(0x08)
	UAnimSequence* TP_LookForward; // 0xa8(0x08)
	UAnimSequence* TP_LookForward_Aim; // 0xb0(0x08)
	UAnimSequence* TP_JumpStart; // 0xb8(0x08)
	UAnimSequence* TP_JumpStart_Aim; // 0xc0(0x08)
	UAnimSequence* TP_JumpLoop; // 0xc8(0x08)
	UAnimSequence* TP_JumpLoop_Aim; // 0xd0(0x08)
	UAnimMontage* TP_JumpLand; // 0xd8(0x08)
	UAnimSequence* TP_Walk_Forward; // 0xe0(0x08)
	UAnimSequence* TP_Walk_Forward_Aim; // 0xe8(0x08)
	UAnimSequence* TP_Run_Forward; // 0xf0(0x08)
	UAnimSequence* TP_Run_Forward_Aim; // 0xf8(0x08)
	UAnimSequence* TP_Walk_Right; // 0x100(0x08)
	UAnimSequence* TP_Walk_Right_Aim; // 0x108(0x08)
	UAnimSequence* TP_Run_Right; // 0x110(0x08)
	UAnimSequence* TP_Run_Right_Aim; // 0x118(0x08)
	UAnimSequence* TP_Walk_Left; // 0x120(0x08)
	UAnimSequence* TP_Walk_Left_Aim; // 0x128(0x08)
	UAnimSequence* TP_Run_Left; // 0x130(0x08)
	UAnimSequence* TP_Run_Left_Aim; // 0x138(0x08)
	UAnimSequence* TP_Walk_Back; // 0x140(0x08)
	UAnimSequence* TP_Walk_Back_Aim; // 0x148(0x08)
	UAnimSequence* TP_Run_Back; // 0x150(0x08)
	UAnimSequence* TP_Run_Back_Aim; // 0x158(0x08)
	UAnimSequence* TP_Revived; // 0x160(0x08)
	UAnimSequence* TP_Downed; // 0x168(0x08)
	UAnimSequence* TP_Downed_Loop; // 0x170(0x08)
	FItemLoadoutAnimations LoadoutAnimations; // 0x178(0x18)
	float CameraOffset; // 0x190(0x04)
	UItemCharacterAnimationSet* ParentSet; // 0x198(0x08)
};

// Class FSD.ItemData
// Size: 0x148 (Inherited: 0x30)
struct UItemData : UPrimaryDataAsset {
	UItemID* ItemID; // 0x30(0x08)
	UTexture2D* IconLine; // 0x38(0x08)
	UTexture2D* IconBG; // 0x40(0x08)
	UTexture2D* IconDetailed; // 0x48(0x08)
	TSoftObjectPtr<UTexture2D> PreviewImage; // 0x50(0x28)
	TSoftClassPtr<UObject> PreviewActor; // 0x78(0x28)
	FText Name; // 0xa0(0x18)
	FText Category; // 0xb8(0x18)
	FText Description; // 0xd0(0x18)
	int32_t CreditCost; // 0xe8(0x04)
	TMap<UResourceData*, float> ResourceCost; // 0xf0(0x50)
	int32_t RequiredCharacterLevel; // 0x140(0x04)

	AActor* GetPreviewActorClass();
	TArray<FCraftingCost> GetCraftingCost();
};

// Class FSD.ItemDispenser
// Size: 0x268 (Inherited: 0x220)
struct AItemDispenser : AActor {
	USceneComponent* Root; // 0x220(0x08)
	UInstantUsable* Usable; // 0x228(0x08)
	FMulticastInlineDelegate OnItemSpawned; // 0x230(0x10)
	ACarriableItem* itemClass; // 0x248(0x08)
	AActor* spawnedItem; // 0x250(0x08)
	float ItemSpawnTime; // 0x258(0x04)
	float InitialItemSpawnTime; // 0x25c(0x04)
	bool IsOpen; // 0x260(0x01)

	void SpawnItem();
	void Open();
	void OnUsed(APlayerCharacter* User, enum class EInputKeys Key);
	void OnRep_SpawnedItem(AActor* oldItem);
	void OnRep_IsOpen();
	void OnPickedUpItem(AActor* Item);
	void OnOpenChanged(bool Open);
	void OnItemSpawnedEvent(AActor* Item);
	bool HasItem();
	AActor* GetItem();
	void Close();
};

// Class FSD.ItemMarker
// Size: 0x228 (Inherited: 0x220)
struct AItemMarker : AActor {
	bool bMarkerValid; // 0x220(0x01)
	bool bMarkerVisible; // 0x221(0x01)

	void OnMarkerVisibilityChanged(bool Visible);
	void OnMarkerValidChanged(bool Valid);
};

// Class FSD.ItemPlacerAggregator
// Size: 0x1d0 (Inherited: 0xc8)
struct UItemPlacerAggregator : UItemAggregator {
	TArray<TWeakObjectPtr<AActor>> IgnoreActors; // 0xc8(0x10)
	FMulticastInlineDelegate OnMarkerSpawned; // 0xd8(0x10)
	FMulticastInlineDelegate OnPlacementChanged; // 0xe8(0x10)
	float PlacementDistance; // 0xf8(0x04)
	float MaxOffsetZ; // 0xfc(0x04)
	float MinOffsetZ; // 0x100(0x04)
	float ItemHeight; // 0x104(0x04)
	UDialogDataAsset* ShoutOnPlaced; // 0x108(0x08)
	AItemMarker* MarkerType; // 0x110(0x08)
	bool CanOnlyPlaceOnTerrain; // 0x118(0x01)
	FGameplayTagQuery ExcludeTags; // 0x120(0x48)
	AItemMarker* PlacementMarker; // 0x168(0x08)
	AItem* Item; // 0x170(0x08)
	bool bIsPlacementActive; // 0x178(0x01)
	bool bIsMarkerHidden; // 0x179(0x01)
	bool bIsMarkerValid; // 0x17a(0x01)
	bool bCanPlaceMarker; // 0x17b(0x01)
	FTransform LastPlacement; // 0x180(0x30)

	void ToggleValid(bool Valid);
	void TogglePlacement(bool Inactive);
	void ToggleMarkerHidden(bool InHidden);
	void PlacementUpdatedDelegate__DelegateSignature(bool InPlacementValid, FTransform InPlacement);
	void MarkerDelegate__DelegateSignature(AItemMarker* Marker);
	void GetPlacementEx(FTransform Placement, bool OutValidLocation, bool OutValidMarker);
	bool GetPlacement(FTransform Placement);
	void ClearIgnoredActors();
	void AddIgnoredActor(AActor* InActor);
};

// Class FSD.ItemPreviewActor
// Size: 0x270 (Inherited: 0x220)
struct AItemPreviewActor : AActor {
	UItemSkin* CurrentSkinColor; // 0x230(0x08)
	UItemSkin* CurrentSkinMesh; // 0x238(0x08)
	AActor* itemClass; // 0x250(0x08)
	UIconGenerationCameraKey* CameraKey_Normal; // 0x258(0x08)
	UIconGenerationCameraKey* CameraKey_CloseUp; // 0x260(0x08)

	void SkinItem(USkinEffect* Skin);
	void SetItemClass(AActor* itemClass);
	void OnSkinPreviewChanged(UItemSkin* PreviewSkin);
	void OnSkinItem(USkinEffect* Skin);
	void OnSkinChanged();
	void ChangeSkin(UItemSkin* skinMesh, UItemSkin* skinColor, bool isPreview);
};

// Class FSD.ItemsBarIcon
// Size: 0x258 (Inherited: 0x230)
struct UItemsBarIcon : UUserWidget {
	bool Selected; // 0x230(0x01)
	UItemsBar* ItemBar; // 0x238(0x08)
	APlayerCharacter* Character; // 0x240(0x08)
	AItem* Item; // 0x248(0x08)
	int32_t Index; // 0x250(0x04)

	void OnUnselect();
	void OnSelect();
	void OnInit();
};

// Class FSD.ItemsBar
// Size: 0x288 (Inherited: 0x250)
struct UItemsBar : UFSDUserWidget {
	UItemsBarIcon* DefaultItemWidget; // 0x250(0x08)
	bool bShowSupplyItem; // 0x258(0x01)
	TArray<UItemsBarIcon*> ItemIcons; // 0x260(0x10)
	UItemsBarIcon* SupplyIcon; // 0x270(0x08)
	UItemsBarIcon* SelectedIcon; // 0x278(0x08)

	void OnSupplyItemUnequipped(UItemsBarIcon* ItemIcon);
	void OnSupplyItemEquipped(UItemsBarIcon* ItemIcon);
	void OnSupplyItemAdded(UItemsBarIcon* ItemIcon);
	void OnItemUnequipped(UItemsBarIcon* ItemIcon);
	void OnItemsLoaded();
	void OnItemEquipped(UItemsBarIcon* ItemIcon);
	void OnItemClicked();
	void OnItemAdded(UItemsBarIcon* ItemIcon);
	void OnClear();
	void ItemEquipped(AItem* NewItem);
	void ItemClicked(AItem* NewItem);
};

// Class FSD.ItemSettings
// Size: 0x80 (Inherited: 0x30)
struct UItemSettings : UDataAsset {
	TMap<UItemID*, UItemData*> ItemData; // 0x30(0x50)
};

// Class FSD.ItemSkinSet
// Size: 0x38 (Inherited: 0x30)
struct UItemSkinSet : UDataAsset {
	bool ColorIsLockedToSet; // 0x30(0x01)
	float SortPriority; // 0x34(0x04)
};

// Class FSD.SavablePrimaryDataAsset
// Size: 0x60 (Inherited: 0x30)
struct USavablePrimaryDataAsset : UPrimaryDataAsset {
	int32_t BuildRestrictions; // 0x38(0x04)
	int32_t PlatformRestrictions; // 0x3c(0x04)
	bool EnableDangerousSaveGameIDEditing; // 0x40(0x01)
	FGuid SaveGameID; // 0x44(0x10)
	UBuildRestriction* BuildRestriction; // 0x58(0x08)
};

// Class FSD.ItemSkin
// Size: 0xf0 (Inherited: 0x60)
struct UItemSkin : USavablePrimaryDataAsset {
	FMulticastInlineDelegate OnSkinUnlocked; // 0x60(0x10)
	FMulticastInlineDelegate OnSkinEquipped; // 0x70(0x10)
	FMulticastInlineDelegate OnSkinUnequipped; // 0x80(0x10)
	bool UnlockedFromStart; // 0x90(0x01)
	UDLCBase* RequiredDLC; // 0x98(0x08)
	enum class EItemSkinType SkinType; // 0xa0(0x01)
	int32_t SortPriority; // 0xa4(0x04)
	FText SkinName; // 0xa8(0x18)
	UItemSkinSet* SkinSet; // 0xc0(0x08)
	UMaterialInterface* SkinIconMaterial; // 0xc8(0x08)
	TArray<USkinEffect*> SkinEffects; // 0xd0(0x10)
	UItemID* OwningItem; // 0xe0(0x08)
	UPlayerCharacterID* OwningCharacter; // 0xe8(0x08)

	bool Unlock(UObject* WorldContext, UItemID* ItemID, bool broadcast);
	void Receive_SkinItem(UObject* Skinnable);
	void ItemSkinSignature__DelegateSignature(UItemSkin* Skin);
	void ItemSkinEquipSignature__DelegateSignature(UItemSkin* Skin);
	bool IsLocked(UObject* WorldContext, UItemID* skinnableID);
	bool IsEquippedOnItem(UItemID* ItemID, AFSDPlayerState* PlayerState);
	UItemID* GetOwningItem();
	UPlayerCharacterID* GetOwningCharacter();
};

// Class FSD.ItemSkinSettings
// Size: 0x48 (Inherited: 0x30)
struct UItemSkinSettings : UDataAsset {
	UItemSkinSet* StockSet; // 0x30(0x08)
	TArray<UItemSkin*> LoadedSkins; // 0x38(0x10)
};

// Class FSD.ItemSkinFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UItemSkinFunctionLibrary : UBlueprintFunctionLibrary {
};

// Class FSD.ItemSkinSchematicCollection
// Size: 0x68 (Inherited: 0x30)
struct UItemSkinSchematicCollection : UDataAsset {
	UItemSkin* Skin; // 0x30(0x08)
	USchematicCategory* Category; // 0x38(0x08)
	USchematicPricingTier* PricingTier; // 0x40(0x08)
	USchematicRarity* Rarity; // 0x48(0x08)
	enum class EItemSkinCollectionType CollectionType; // 0x50(0x01)
	enum class EItemSkinCollectionType LastGeneratedCollectionType; // 0x51(0x01)
	TArray<USchematic*> Schematics; // 0x58(0x10)
};

// Class FSD.ItemUpgrade
// Size: 0x150 (Inherited: 0x58)
struct UItemUpgrade : USavableDataAsset {
	FMulticastInlineDelegate OnCrafted; // 0x60(0x10)
	FMulticastInlineDelegate OnEquipped; // 0x70(0x10)
	FMulticastInlineDelegate OnUnequipped; // 0x80(0x10)
	FText Name; // 0x90(0x18)
	FText Description; // 0xa8(0x18)
	int32_t Cost; // 0xc0(0x04)
	bool UseOldCost; // 0xc4(0x01)
	enum class EUpgradeTiers UpgradeTier; // 0xc5(0x01)
	enum class EUpgradeClass upgradeClass; // 0xc6(0x01)
	UItemUpgradeCategory* Category; // 0xc8(0x08)
	TMap<UResourceData*, float> UpgradeCraftingCost; // 0xd0(0x50)
	TArray<UResourceData*> ResourceCost; // 0x120(0x10)
	TArray<UItemUpgradeElement*> Elements; // 0x130(0x10)
	TArray<FItemUpgradeStatText> StatTexts; // 0x140(0x10)

	void UnequipUpgrade(AActor* itemClass, AFSDPlayerState* PlayerState);
	void ItemUpgradeSignature__DelegateSignature(UItemUpgrade* Upgrade);
	TArray<FItemUpgradeStatText> GetUpgradeStatTexts();
	FText GetUpgradeName(UItemUpgrade* Upgrade);
	TArray<FCraftingCost> GetUpgradeCost();
	FString GetSourceName();
	FUpgradeValues GetGenericUpgradedValue(AActor* Item, AFSDPlayerState* Player, UItemUpgrade* upgradeClass);
	float GetCreditsCost();
	void EquipUpgrade(AActor* itemClass, AFSDPlayerState* PlayerState);
	void CraftItem(UItemID* ItemID, AFSDPlayerController* PlayerController, APlayerCharacter* previewedCharacter);
};

// Class FSD.CombinedUpgrade
// Size: 0x170 (Inherited: 0x150)
struct UCombinedUpgrade : UItemUpgrade {
	TArray<TSoftObjectPtr<UItemUpgrade>> CombinedUpgrades; // 0x150(0x10)
	TArray<UItemUpgrade*> LoadedUpgrades; // 0x160(0x10)

	TArray<UItemUpgrade*> GetUpgrades();
};

// Class FSD.OverclockUpgrade
// Size: 0x178 (Inherited: 0x170)
struct UOverclockUpgrade : UCombinedUpgrade {
	USchematicCategory* SchematicCategory; // 0x170(0x08)
};

// Class FSD.ItemUpgradeCategory
// Size: 0x70 (Inherited: 0x30)
struct UItemUpgradeCategory : UDataAsset {
	FText CategoryName; // 0x30(0x18)
	FText CategoryDescription; // 0x48(0x18)
	UTexture2D* CategoryIcon; // 0x60(0x08)
	FColor CategoryTint; // 0x68(0x04)
};

// Class FSD.ItemUpgradeCondition
// Size: 0x28 (Inherited: 0x28)
struct UItemUpgradeCondition : UObject {
};

// Class FSD.PlayerShieldsItemUpgradeCondition
// Size: 0x30 (Inherited: 0x28)
struct UPlayerShieldsItemUpgradeCondition : UItemUpgradeCondition {
	FFloatInterval ShieldPercentageRequired; // 0x28(0x08)
};

// Class FSD.ProjectileClassFilterItemUpgradeCondition
// Size: 0x38 (Inherited: 0x28)
struct UProjectileClassFilterItemUpgradeCondition : UItemUpgradeCondition {
	TArray<AProjectileBase*> ProjectileClasses; // 0x28(0x10)
};

// Class FSD.ItemUpgradeElement
// Size: 0x30 (Inherited: 0x30)
struct UItemUpgradeElement : UDataAsset {

	bool ElementOf(UItemUpgrade* upg);
};

// Class FSD.MuzzleEffectUpgradeElement
// Size: 0x40 (Inherited: 0x30)
struct UMuzzleEffectUpgradeElement : UItemUpgradeElement {
	UFXSystemAsset* FPMuzzleFlash; // 0x30(0x08)
	UFXSystemAsset* TPMuzzleFlash; // 0x38(0x08)
};

// Class FSD.FireWeaponSoundUpgradeElement
// Size: 0x38 (Inherited: 0x30)
struct UFireWeaponSoundUpgradeElement : UItemUpgradeElement {
	USoundCue* FireSound; // 0x30(0x08)
};

// Class FSD.TracerUpgradeElement
// Size: 0x38 (Inherited: 0x30)
struct UTracerUpgradeElement : UItemUpgradeElement {
	UFXSystemAsset* Tracer; // 0x30(0x08)
};

// Class FSD.HitScanImpactUpgradeElement
// Size: 0x40 (Inherited: 0x30)
struct UHitScanImpactUpgradeElement : UItemUpgradeElement {
	UFXSystemAsset* ImpactParticle; // 0x30(0x08)
	USoundCue* ImpactSound; // 0x38(0x08)
};

// Class FSD.TrailUpgradeElement
// Size: 0x38 (Inherited: 0x30)
struct UTrailUpgradeElement : UItemUpgradeElement {
	UFXSystemAsset* Trail; // 0x30(0x08)
};

// Class FSD.ReplaceMaterialUpgradeElement
// Size: 0x40 (Inherited: 0x30)
struct UReplaceMaterialUpgradeElement : UItemUpgradeElement {
	UMaterialInterface* TargetMaterial; // 0x30(0x08)
	UMaterialInterface* ReplaceWithMaterial; // 0x38(0x08)
};

// Class FSD.ReplaceSkeletonMeshUpgradeElement
// Size: 0x48 (Inherited: 0x30)
struct UReplaceSkeletonMeshUpgradeElement : UItemUpgradeElement {
	USkeletalMesh* TargetMesh; // 0x30(0x08)
	USkeletalMesh* ReplaceWithMesh; // 0x38(0x08)
	UAnimInstance* ReplaceWithAnimInstance; // 0x40(0x08)
};

// Class FSD.ProjectileUpgradeElement
// Size: 0x38 (Inherited: 0x30)
struct UProjectileUpgradeElement : UItemUpgradeElement {
	UParticleSystem* NewTrailParticle; // 0x30(0x08)
};

// Class FSD.ItemUpgradePreviewComponent
// Size: 0xd0 (Inherited: 0xb0)
struct UItemUpgradePreviewComponent : UActorComponent {
	FMulticastInlineDelegate OnPreviewUpgradeChanged; // 0xb0(0x10)
	UItemUpgrade* PreviewUpgrade; // 0xc0(0x08)

	void SetPreviewUpgrade(UItemUpgrade* InUpgrade);
	void RefreshPreviewUpgrade();
	void ItemUpgradeDelegate__DelegateSignature(UItemUpgrade* PreviewUpgrade);
};

// Class FSD.StandardItemUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UStandardItemUpgrade : UItemUpgrade {
	float Amount; // 0x150(0x04)
	bool IsPercentage; // 0x154(0x01)
};

// Class FSD.AmmoDrivenWeaponUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UAmmoDrivenWeaponUpgrade : UStandardItemUpgrade {
	enum class EAmmoDrivenWeapnUpgradeType upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EAmmoDrivenWeapnUpgradeType upgradeType);
};

// Class FSD.WeaponHitCounterUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UWeaponHitCounterUpgrade : UItemUpgrade {
	UWeaponHitCounterComponent* ComponentClass; // 0x150(0x08)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AActor* Item, UWeaponHitCounterComponent* ComponentClass);
};

// Class FSD.BeltDrivenWeaponUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UBeltDrivenWeaponUpgrade : UStandardItemUpgrade {
	enum class EBeltDrivenWeaponUpgrade upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EBeltDrivenWeaponUpgrade upgradeType);
};

// Class FSD.GatlingGunUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UGatlingGunUpgrade : UStandardItemUpgrade {
	enum class EGatlingGunUpgrade upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EGatlingGunUpgrade upgradeType);
};

// Class FSD.AssaultRifleUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UAssaultRifleUpgrade : UStandardItemUpgrade {
	enum class EAssaultRifleUpgrade upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EAssaultRifleUpgrade upgradeType);
};

// Class FSD.BoltActionRifleUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UBoltActionRifleUpgrade : UStandardItemUpgrade {
	enum class EBoltActionRifleUpgrades upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EBoltActionRifleUpgrades upgradeType);
};

// Class FSD.DualMachinePistolsUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UDualMachinePistolsUpgrade : UStandardItemUpgrade {
	enum class EDualMachinePistolsUpgrades upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EDualMachinePistolsUpgrades upgradeType);
};

// Class FSD.ChargedWeaponUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UChargedWeaponUpgrade : UStandardItemUpgrade {
	enum class EChargedWeaponUpgrades upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EChargedWeaponUpgrades upgradeType);
};

// Class FSD.AutoCannonUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UAutoCannonUpgrade : UStandardItemUpgrade {
	enum class EAutoCannonUpgrades upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EAutoCannonUpgrades upgradeType);
};

// Class FSD.SawedOffShotgunUpgrade
// Size: 0x160 (Inherited: 0x158)
struct USawedOffShotgunUpgrade : UStandardItemUpgrade {
	enum class ESawedOffShotgunUpgrades upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class ESawedOffShotgunUpgrades upgradeType);
};

// Class FSD.BurstWeaponUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UBurstWeaponUpgrade : UStandardItemUpgrade {
	enum class EBurstWeaponUpgrades upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EBurstWeaponUpgrades upgradeType);
};

// Class FSD.AutoShotgunUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UAutoShotgunUpgrade : UStandardItemUpgrade {
	enum class EAutoShotgunUpgrades upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EAutoShotgunUpgrades upgradeType);
};

// Class FSD.BasicPistolUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UBasicPistolUpgrade : UStandardItemUpgrade {
	enum class EBasicPistol upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EBasicPistol upgradeType);
};

// Class FSD.RevolverUpgrade
// Size: 0x160 (Inherited: 0x158)
struct URevolverUpgrade : UStandardItemUpgrade {
	enum class ERevolerUpgrades upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class ERevolerUpgrades upgradeType);
};

// Class FSD.CryoSprayUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UCryoSprayUpgrade : UStandardItemUpgrade {
	enum class ECryoSprayUpgrades upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class ECryoSprayUpgrades upgradeType);
};

// Class FSD.CryoSprayProjectileUpgrade
// Size: 0x160 (Inherited: 0x150)
struct UCryoSprayProjectileUpgrade : UItemUpgrade {
	float MaxFireCost; // 0x150(0x04)
	float BaseArch; // 0x154(0x04)
	AProjectile* projectileClass; // 0x158(0x08)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, AProjectile* projectileClass);
};

// Class FSD.PickaxeUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UPickaxeUpgrade : UStandardItemUpgrade {
	enum class EPickaxeUpgradeType upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EPickaxeUpgradeType upgradeType);
};

// Class FSD.FlameThrowerUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UFlameThrowerUpgrade : UStandardItemUpgrade {
	enum class EFlameThrowerUpgradeType upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EFlameThrowerUpgradeType upgradeType);
};

// Class FSD.StickyFlameStatusEffectUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UStickyFlameStatusEffectUpgrade : UItemUpgrade {
	UStatusEffect* StatusEffect; // 0x150(0x08)

	FUpgradeValues GetUpgradedValue(AActor* Item, AFSDPlayerState* Player, UStatusEffect* StatusEffect);
};

// Class FSD.DoubleDrillUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UDoubleDrillUpgrade : UStandardItemUpgrade {
	enum class EDoubleDrillUpgradeType upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EDoubleDrillUpgradeType upgradeType);
};

// Class FSD.InventoryItemUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UInventoryItemUpgrade : UStandardItemUpgrade {
	enum class EInventoryItemUpgradeType upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EInventoryItemUpgradeType upgradeType);
};

// Class FSD.CapacityUpgrade
// Size: 0x158 (Inherited: 0x158)
struct UCapacityUpgrade : UStandardItemUpgrade {

	FUpgradeValues GetUpgradedValue(AActor* Item, AFSDPlayerState* Player, int32_t componentIndex);
};

// Class FSD.CooldownUpgrade
// Size: 0x158 (Inherited: 0x158)
struct UCooldownUpgrade : UStandardItemUpgrade {

	FUpgradeValues GetUpgradedValue(AActor* Item, AFSDPlayerState* Player);
};

// Class FSD.MultiHitscanUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UMultiHitscanUpgrade : UStandardItemUpgrade {
	enum class EMultiHitscanUpgradeType upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EMultiHitscanUpgradeType upgradeType);
};

// Class FSD.HitscanBaseUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UHitscanBaseUpgrade : UStandardItemUpgrade {
	enum class EHitScanBaseUpgradeType upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EHitScanBaseUpgradeType upgradeType);
};

// Class FSD.DamageUpgrade
// Size: 0x168 (Inherited: 0x158)
struct UDamageUpgrade : UStandardItemUpgrade {
	enum class EDamageUpgrade upgradeType; // 0x158(0x01)
	enum class EDamageComponentType DamageComponentType; // 0x159(0x01)
	AActor* RequiredClass; // 0x160(0x08)

	FUpgradeValues GetUpgradedValue(AActor* Item, AActor* upgradedItem, AFSDPlayerState* Player, enum class EDamageUpgrade upgradeType, enum class EDamageComponentType DamageComponentType);
};

// Class FSD.FlatDamageUpgrade
// Size: 0x170 (Inherited: 0x150)
struct UFlatDamageUpgrade : UItemUpgrade {
	float Damage; // 0x150(0x04)
	UDamageClass* DamageClass; // 0x158(0x08)
	AActor* RequiredClass; // 0x160(0x08)
	UDamageCondition* Condition; // 0x168(0x08)

	FUpgradeValues GetUpgradedValue(AActor* Item, AFSDPlayerState* Player, UDamageClass* DamageClass);
};

// Class FSD.RandomDamageUpgrade
// Size: 0x158 (Inherited: 0x150)
struct URandomDamageUpgrade : UItemUpgrade {
	FRandRange DamageRange; // 0x150(0x08)

	FUpgradeValues GetUpgradedValue(AActor* Item, AFSDPlayerState* Player);
};

// Class FSD.DamageConversionUpgrade
// Size: 0x170 (Inherited: 0x150)
struct UDamageConversionUpgrade : UItemUpgrade {
	UDamageClass* DamageClass; // 0x150(0x08)
	float ConversionPercentage; // 0x158(0x04)
	bool DamageIsAdded; // 0x15c(0x01)
	AActor* RequiredClass; // 0x160(0x08)
	UDamageCondition* Condition; // 0x168(0x08)

	FUpgradeValues GetUpgradedValue(AActor* Item, AActor* upgradedItem, AFSDPlayerState* Player, UDamageClass* DamageClass);
};

// Class FSD.GatlingHotShellsBonusUpgrade
// Size: 0x168 (Inherited: 0x150)
struct UGatlingHotShellsBonusUpgrade : UItemUpgrade {
	UDamageClass* DamageClass; // 0x150(0x08)
	float ConversionPercentage; // 0x158(0x04)
	bool DamageIsAdded; // 0x15c(0x01)
	float TemperatureRequired; // 0x160(0x04)

	FUpgradeValues GetUpgradedValue(AActor* Item, AFSDPlayerState* Player, UDamageClass* DamageClass);
};

// Class FSD.TargetSpecificDamageBonusUpgrade
// Size: 0x1a8 (Inherited: 0x150)
struct UTargetSpecificDamageBonusUpgrade : UItemUpgrade {
	float Bonus; // 0x150(0x04)
	FGameplayTagQuery tagQuery; // 0x158(0x48)
	FName Key; // 0x1a0(0x08)

	FUpgradeValues GetUpgradedValue(AActor* Item, AFSDPlayerState* Player, FName Key);
};

// Class FSD.TargetStateDamageBonusUpgrade
// Size: 0x160 (Inherited: 0x150)
struct UTargetStateDamageBonusUpgrade : UItemUpgrade {
	enum class ETargetStateDamageBonusType TargetState; // 0x150(0x01)
	float Bonus; // 0x154(0x04)
	UDamageClass* DamageClass; // 0x158(0x08)

	FUpgradeValues GetUpgradedValue(AActor* Item, AFSDPlayerState* Player, enum class ETargetStateDamageBonusType TargetState);
};

// Class FSD.StatusDamageBonusUpgrade
// Size: 0x170 (Inherited: 0x150)
struct UStatusDamageBonusUpgrade : UItemUpgrade {
	TArray<UStatusEffect*> StatusEffects; // 0x150(0x10)
	float Bonus; // 0x160(0x04)
	UDamageClass* DamageClass; // 0x168(0x08)

	FUpgradeValues GetUpgradedValue(AActor* Item, AFSDPlayerState* Player, UStatusEffect* StatusEffect);
};

// Class FSD.StatusAndStateDamageBonusUpgrade
// Size: 0x180 (Inherited: 0x150)
struct UStatusAndStateDamageBonusUpgrade : UItemUpgrade {
	TArray<UStatusEffect*> StatusEffects; // 0x150(0x10)
	TArray<enum class ETargetStateDamageBonusType> TargetStates; // 0x160(0x10)
	float Bonus; // 0x170(0x04)
	UDamageClass* DamageClass; // 0x178(0x08)
};

// Class FSD.PushSatusEffectDamageBonusUpgrade
// Size: 0x160 (Inherited: 0x150)
struct UPushSatusEffectDamageBonusUpgrade : UItemUpgrade {
	UStatusEffect* StatusEffect; // 0x150(0x08)
	float Chance; // 0x158(0x04)
	bool IgnoreArmorHit; // 0x15c(0x01)

	FUpgradeValues GetUpgradedValue(AActor* Item, AFSDPlayerState* Player, UStatusEffect* StatusEffect);
};

// Class FSD.PushDynamicStatusEffectDamageBonusUpgrade
// Size: 0x160 (Inherited: 0x150)
struct UPushDynamicStatusEffectDamageBonusUpgrade : UItemUpgrade {
	FName Key; // 0x150(0x08)
	UStatusEffectItem* StatusEffectItem; // 0x158(0x08)

	FUpgradeValues GetUpgradedValue(AActor* Item, AFSDPlayerState* Player, FName Key);
};

// Class FSD.ModifyDynamicStatusEffectDamageBonusUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UModifyDynamicStatusEffectDamageBonusUpgrade : UStandardItemUpgrade {
	enum class EModifyStatusEffectDamageUpgrade upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AActor* Item, AActor* upgradedItem, AFSDPlayerState* Player, enum class EModifyStatusEffectDamageUpgrade upgradeType);
};

// Class FSD.LockCountSTEBonusUpgrade
// Size: 0x160 (Inherited: 0x150)
struct ULockCountSTEBonusUpgrade : UItemUpgrade {
	UStatusEffect* StatusEffect; // 0x150(0x08)
	bool UseTotalLockCount; // 0x158(0x01)
	float Amount; // 0x15c(0x04)

	FUpgradeValues GetUpgradedValue(AActor* Item, AFSDPlayerState* Player, UStatusEffect* StatusEffect);
};

// Class FSD.DamageTagBonusUpgrade
// Size: 0x168 (Inherited: 0x150)
struct UDamageTagBonusUpgrade : UItemUpgrade {
	TArray<UDamageTag*> Tags; // 0x150(0x10)
	UDamageCondition* Condition; // 0x160(0x08)
};

// Class FSD.ConditionalDamageModifierUpgrade
// Size: 0x168 (Inherited: 0x150)
struct UConditionalDamageModifierUpgrade : UItemUpgrade {
	UDamageCondition* Condition; // 0x150(0x08)
	TArray<FDamageModifierItem> Modifiers; // 0x158(0x10)

	FUpgradeValues GetUpgradedValue(AActor* Item, AFSDPlayerState* Player);
};

// Class FSD.FearAoEBonusUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UFearAoEBonusUpgrade : UItemUpgrade {
	float FearFactor; // 0x150(0x04)
	float range; // 0x154(0x04)

	FUpgradeValues GetUpgradedValue(AActor* Item, AFSDPlayerState* Player);
};

// Class FSD.SingleUsableUpgrade
// Size: 0x160 (Inherited: 0x158)
struct USingleUsableUpgrade : UStandardItemUpgrade {
	enum class ESingleUsableUpgradeType upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AActor* Item, AActor* subItem, AFSDPlayerState* Player, enum class ESingleUsableUpgradeType upgradeType);
};

// Class FSD.FlareUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UFlareUpgrade : UStandardItemUpgrade {
	enum class EFlareUpgradeType upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AActor* flareClass, enum class EFlareUpgradeType upgradeType);
};

// Class FSD.GrenadeUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UGrenadeUpgrade : UStandardItemUpgrade {
	enum class EGrenadeUpgradeType upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AGrenade* flareClass, enum class EGrenadeUpgradeType upgradeType);
};

// Class FSD.LineCutterUpgrade
// Size: 0x160 (Inherited: 0x158)
struct ULineCutterUpgrade : UStandardItemUpgrade {
	enum class ELineCutterUpgradeType upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AActor* Item, enum class ELineCutterUpgradeType upgradeType);
};

// Class FSD.LineCutterProjectileUpgrade
// Size: 0x160 (Inherited: 0x158)
struct ULineCutterProjectileUpgrade : UStandardItemUpgrade {
	enum class ELineCutterProjectileUpgradeType upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AActor* Item, enum class ELineCutterProjectileUpgradeType upgradeType);
};

// Class FSD.ProjectileUpgrade
// Size: 0x170 (Inherited: 0x158)
struct UProjectileUpgrade : UStandardItemUpgrade {
	enum class EProjectileUpgrade upgradeType; // 0x158(0x01)
	AActor* projectileClass; // 0x160(0x08)
	UItemUpgradeCondition* Condition; // 0x168(0x08)

	FUpgradeValues GetUpgradedValue(AActor* Item, AActor* upgradedItem, AFSDPlayerState* Player, enum class EProjectileUpgrade upgradeType);
};

// Class FSD.FlareGunUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UFlareGunUpgrade : UStandardItemUpgrade {
	enum class EFlaregunUpgrades upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AActor* Item, AFSDPlayerState* Player, enum class EFlaregunUpgrades upgradeType);
};

// Class FSD.FlaregunProjectileUpgrade
// Size: 0x168 (Inherited: 0x158)
struct UFlaregunProjectileUpgrade : UStandardItemUpgrade {
	enum class EFlaregunProjectileUpgrades upgradeType; // 0x158(0x01)
	AActor* projectileClass; // 0x160(0x08)

	FUpgradeValues GetUpgradedValue(AActor* Item, AActor* upgradedItem, AFSDPlayerState* Player, enum class EFlaregunProjectileUpgrades upgradeType);
};

// Class FSD.ChargedProjectileUpgrade
// Size: 0x168 (Inherited: 0x158)
struct UChargedProjectileUpgrade : UStandardItemUpgrade {
	enum class EChargedProjectileUpgrades upgradeType; // 0x158(0x01)
	AActor* projectileClass; // 0x160(0x08)

	FUpgradeValues GetUpgradedValue(AItem* Item, AActor* upgradedActor, AFSDPlayerState* Player, enum class EChargedProjectileUpgrades upgradeType);
};

// Class FSD.ElectricalSMGUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UElectricalSMGUpgrade : UStandardItemUpgrade {
	enum class EElectricalSMGUpgrades upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AActor* Item, enum class EElectricalSMGUpgrades upgradeType);
};

// Class FSD.ZiplineGunUpgrade
// Size: 0x168 (Inherited: 0x158)
struct UZiplineGunUpgrade : UStandardItemUpgrade {
	enum class EZiplineGunUpgrades upgradeType; // 0x158(0x01)
	AZipLineProjectile* projectileClass; // 0x160(0x08)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AActor* Item, enum class EZiplineGunUpgrades upgradeType);
};

// Class FSD.GrapplingHookUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UGrapplingHookUpgrade : UStandardItemUpgrade {
	enum class EGrapplingHookUpgrade upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AActor* Item, enum class EGrapplingHookUpgrade upgradeType);
};

// Class FSD.SentryGunUpgrade
// Size: 0x160 (Inherited: 0x158)
struct USentryGunUpgrade : UStandardItemUpgrade {
	enum class ESentryGunUpgradeType upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class ESentryGunUpgradeType upgradeType);
};

// Class FSD.SentryGunTypeUpgrade
// Size: 0x160 (Inherited: 0x150)
struct USentryGunTypeUpgrade : UItemUpgrade {
	ARecallableSentryGun* SentryGunType; // 0x150(0x08)
	AItemMarker* MarkerType; // 0x158(0x08)
};

// Class FSD.ShieldGeneratorUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UShieldGeneratorUpgrade : UStandardItemUpgrade {
	enum class EShieldGeneratorUpgrades upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EShieldGeneratorUpgrades upgradeType);
};

// Class FSD.AddComponentUpgrade
// Size: 0x160 (Inherited: 0x150)
struct UAddComponentUpgrade : UItemUpgrade {
	UActorComponent* ComponentClass; // 0x150(0x08)
	bool ServerOnly; // 0x158(0x01)

	bool GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, UActorComponent* ComponentClass, bool includePreview);
};

// Class FSD.TriggeredStatusEffectUpgrade
// Size: 0x178 (Inherited: 0x150)
struct UTriggeredStatusEffectUpgrade : UItemUpgrade {
	UStatusEffect* StatusEffect; // 0x160(0x08)
	enum class ETriggeredStatusEffectType upgradeType; // 0x168(0x01)
	float AoERange; // 0x16c(0x04)
	UStatusEffect* OwnerEffect; // 0x170(0x08)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AActor* Item, UStatusEffect* StatusEffect, enum class ETriggeredStatusEffectType aUpgradeType);
};

// Class FSD.ArmorUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UArmorUpgrade : UStandardItemUpgrade {
	enum class EArmorUpgradeType upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AActor* armorClass, enum class EArmorUpgradeType aUpgradeType);
};

// Class FSD.ArmorStatUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UArmorStatUpgrade : UStandardItemUpgrade {
	UPawnStat* Stat; // 0x158(0x08)

	FUpgradeValues GetUpgradedStatValue(AFSDPlayerState* Player, AActor* armorClass, UPawnStat* Stat);
};

// Class FSD.BoscoUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UBoscoUpgrade : UStandardItemUpgrade {
	enum class EBoscoUpgrades upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AActor* Item, enum class EBoscoUpgrades upgradeType);
};

// Class FSD.PlatformGunUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UPlatformGunUpgrade : UItemUpgrade {
	enum class EPlatformGunUpgrades myUpgradeType; // 0x150(0x01)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AActor* Item, enum class EPlatformGunUpgrades aUpgradeType);
};

// Class FSD.DetPackUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UDetPackUpgrade : UStandardItemUpgrade {
	enum class EDetPackUpgrades upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AActor* Item, AFSDPlayerState* Player, enum class EDetPackUpgrades upgradeType);
};

// Class FSD.BonusDamageUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UBonusDamageUpgrade : UItemUpgrade {
	UDamageBonusBase* DamageBonus; // 0x150(0x08)
};

// Class FSD.ProjectileLauncherBaseUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UProjectileLauncherBaseUpgrade : UStandardItemUpgrade {
	enum class EProjectileLauncherBaseUpgradeType upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EProjectileLauncherBaseUpgradeType upgradeType);
};

// Class FSD.MicroMissileLauncherUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UMicroMissileLauncherUpgrade : UStandardItemUpgrade {
	enum class EMicroMissileLauncherUpgrades upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EMicroMissileLauncherUpgrades upgradeType);
};

// Class FSD.WeaponSwitchProjectileUpgrade
// Size: 0x160 (Inherited: 0x150)
struct UWeaponSwitchProjectileUpgrade : UItemUpgrade {
	FProjectileSwitch Projectile; // 0x150(0x10)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AActor* Item, UWeaponHitCounterComponent* ComponentClass);
};

// Class FSD.GooGunUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UGooGunUpgrade : UStandardItemUpgrade {
	enum class EGooGunUpgrades upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EGooGunUpgrades upgradeType);
};

// Class FSD.GooGunProjectileUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UGooGunProjectileUpgrade : UStandardItemUpgrade {
	enum class EGooGunProjectileUpgrades upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AActor* Item, AActor* upgradedItem, enum class EGooGunProjectileUpgrades upgradeType);
};

// Class FSD.LockOnWeaponUpgrade
// Size: 0x160 (Inherited: 0x158)
struct ULockOnWeaponUpgrade : UStandardItemUpgrade {
	enum class ELockOnWeaponUpgrades upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class ELockOnWeaponUpgrades upgradeType);
};

// Class FSD.PlasmaCarbineUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UPlasmaCarbineUpgrade : UStandardItemUpgrade {
	enum class EPlasmaCarbineUpgrades upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EPlasmaCarbineUpgrades upgradeType);
};

// Class FSD.WeaponChargeProgressDamageBonus
// Size: 0x168 (Inherited: 0x150)
struct UWeaponChargeProgressDamageBonus : UItemUpgrade {
	UDamageClass* DamageClass; // 0x150(0x08)
	FFloatInterval ChargeRange; // 0x158(0x08)
	FFloatInterval DamageBonusRange; // 0x160(0x08)
};

// Class FSD.Upgradable
// Size: 0x28 (Inherited: 0x28)
struct UUpgradable : UInterface {

	void Upgraded(TArray<UItemUpgrade*> upgrades);
};

// Class FSD.UpgradableGear
// Size: 0x28 (Inherited: 0x28)
struct UUpgradableGear : UInterface {

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
};

// Class FSD.JellyBreeder
// Size: 0x4b0 (Inherited: 0x448)
struct AJellyBreeder : AAFlyingBug {
	UAnimSequenceBase* EggSpawnAnimation; // 0x448(0x08)
	UParticleSystem* EggParticles; // 0x450(0x08)
	USoundBase* EggSound; // 0x458(0x08)
	UEnemyDescriptor* EnemyToSpawn; // 0x460(0x08)
	AProjectile* EggClass; // 0x468(0x08)
	float TimeBetweenBursts; // 0x470(0x04)
	float TimeBetweenEggs; // 0x474(0x04)
	float CloseToSpawnEggTime; // 0x478(0x04)
	UPhysicalMaterial* WeakPointMaterial; // 0x488(0x08)
	UPhysicalMaterial* UnWeakPointMaterial; // 0x490(0x08)
	int32_t EggBurstSize; // 0x498(0x04)
	int32_t MaxJellies; // 0x4a0(0x04)
	float MultiplierOnHighPlayerCount; // 0x4a8(0x04)
	bool IsInBreedMode; // 0x4ac(0x01)

	void SpawnEnemies(AProjectile* Egg, int32_t AmountToSpawn);
	void PlaySpawnEggAnim();
	void OnRep_BreedMode();
	void OnJellyDestroyed(AActor* AActor);
	void BreedModeFlipped(bool aIsLayingEggs);
};

// Class FSD.JellyBreederAnimInstance
// Size: 0x300 (Inherited: 0x2f0)
struct UJellyBreederAnimInstance : UFlyingBugAnimInstance {
	bool ReadyToSpawnEggs; // 0x2f0(0x01)
};

// Class FSD.JellyEggAnimInstance
// Size: 0x280 (Inherited: 0x270)
struct UJellyEggAnimInstance : UAnimInstance {
	FVector force; // 0x268(0x0c)
};

// Class FSD.JetPackItem
// Size: 0x3c0 (Inherited: 0x388)
struct AJetPackItem : AAnimatedItem {
	float ActiveTime; // 0x38c(0x04)
	UCurveFloat* VerticalAccelerationCurve; // 0x390(0x08)
	float VerticalAcceleration; // 0x398(0x04)
	float MaxVerticalSpeed; // 0x39c(0x04)
	float MaxHorizontalSpeed; // 0x3a0(0x04)
	float MaxHorizontalDrift; // 0x3a4(0x04)
	float BurnDuration; // 0x3a8(0x04)
	float RechargeDuration; // 0x3ac(0x04)
	float Fuel; // 0x3b0(0x04)
	bool Active; // 0x3b4(0x01)
	UPlayerMovementComponent* CharacterMovement; // 0x3b8(0x08)

	void Server_StopThruster();
	void Server_StartThruster();
	void OnRep_Fuel(float OldFuel);
	void OnRep_Active();
	void OnFuelChanged(float Value, float Delta);
};

// Class FSD.KeepInsideWorld
// Size: 0xc8 (Inherited: 0xb0)
struct UKeepInsideWorld : UActorComponent {
	TArray<TWeakObjectPtr<AActor>> ActorsToKeepInsideWorld; // 0xb0(0x10)
	int32_t IteratorIndex; // 0xc0(0x04)

	void UnregisterForKeepInsideWorld(UObject* WorldContextObject, AActor* Actor);
	void RegisterForKeepInsideWorld(UObject* WorldContextObject, AActor* Actor);
};

// Class FSD.KillEnemiesObjective
// Size: 0x198 (Inherited: 0x178)
struct UKillEnemiesObjective : UObjective {
	int32_t EnemyCount; // 0x178(0x04)
	int32_t ExtraEnemies; // 0x17c(0x04)
	UDebrisPositioning* Positioning; // 0x180(0x08)
	UEnemyDescriptor* EnemyTarget; // 0x188(0x08)
	int32_t EnemiesKilled; // 0x190(0x04)
	int32_t EnemiesToKill; // 0x194(0x04)

	void RegisterTargetSpawned(APawn* Target);
	void ReceiveTargetKilled(UHealthComponentBase* Health);
	void OnTargetKilled(UHealthComponentBase* Health);
	void OnRep_EnemiesToKill(int32_t prevAmount);
	void OnRep_EnemiesKilled(int32_t prevAmount);
};

// Class FSD.LaserPointerMarker
// Size: 0x298 (Inherited: 0x220)
struct ALaserPointerMarker : AActor {
	FLaserPointerData LookAtData; // 0x220(0x60)
	AActor* LookAtActor; // 0x280(0x08)
	UPrimitiveComponent* LookAtComponent; // 0x288(0x08)
	UTerrainMaterial* LookAtTerrainMaterial; // 0x290(0x08)

	APlayerCharacter* GetCharacter();
};

// Class FSD.LaserPointerWaypoint
// Size: 0x240 (Inherited: 0x220)
struct ALaserPointerWaypoint : AActor {
	TWeakObjectPtr<APlayerCharacter> Character; // 0x220(0x08)
	TWeakObjectPtr<ALaserPointerItem> LaserPointer; // 0x228(0x08)
	FVector Normal; // 0x230(0x0c)
	int32_t Index; // 0x23c(0x04)

	void OnShow();
	void OnHide();
};

// Class FSD.LaserPointerItem
// Size: 0x538 (Inherited: 0x388)
struct ALaserPointerItem : AAnimatedItem {
	FMulticastInlineDelegate OnMarkerPlaced; // 0x388(0x10)
	ALaserPointerMarker* MarkerType; // 0x398(0x08)
	ALaserPointerMarker* SecondaryMarkerType; // 0x3a0(0x08)
	TWeakObjectPtr<ALaserPointerMarker> ActiveMarker; // 0x3a8(0x08)
	ALaserPointerWaypoint* WaypointType; // 0x3b0(0x08)
	int32_t MaxWaypoints; // 0x3b8(0x04)
	TArray<ALaserPointerWaypoint*> Waypoints; // 0x3c0(0x10)
	int32_t NextWaypointIndex; // 0x3d0(0x04)
	float MarkerLifeTime; // 0x3d8(0x04)
	FLinearColor ColorMinerals; // 0x3dc(0x10)
	FLinearColor ColorEnemy; // 0x3ec(0x10)
	FLinearColor ColorOther; // 0x3fc(0x10)
	UDialogDataAsset* DefaultLookAtShout; // 0x410(0x08)
	UDialogDataAsset* DefaultEnemyShout; // 0x418(0x08)
	USceneComponent* PointerComponent; // 0x420(0x08)
	FHitResult LookAtHit; // 0x428(0x88)
	TWeakObjectPtr<UObjectInfoComponent> LookAtInfo; // 0x4b0(0x08)
	TWeakObjectPtr<UTerrainMaterial> LookAtTerrainMaterial; // 0x4b8(0x08)
	FLaserPointerData LookAtData; // 0x4c0(0x60)
	float LookAtDistance; // 0x520(0x04)
	UDialogDataAsset* LookAtShout; // 0x528(0x08)
	AFSDGameState* GameState; // 0x530(0x08)

	void UnlockToMinersManual(UObject* WorldContextObject, FGuid ObjectID);
	void ToggleLaserVisible(bool aVisible);
	void ServerPlaceMarker(FVector Location, AActor* Actor, UPrimitiveComponent* Cmponent, UTerrainMaterial* TerrainMaterial, enum class ELaserPointerMarkerType eMarkerType);
	void Server_SecondaryUse();
	void OnPointOfInterest(AActor* TargetActor, FVector TargetLocation, UTexture2D* TargetIcon);
	void OnDeath(UHealthComponentBase* Health);
	void GetPointTransform(FTransform PointTransform);
};

// Class FSD.LegacySettings
// Size: 0x40 (Inherited: 0x30)
struct ULegacySettings : UDataAsset {
	TArray<TSoftObjectPtr<USkeletalMesh>> ArmorMeshes; // 0x30(0x10)
};

// Class FSD.LevelGenerationDebris
// Size: 0xc8 (Inherited: 0xb0)
struct ULevelGenerationDebris : UActorComponent {
	UDebrisBase* Debris; // 0xb0(0x08)
	UObject* Influencer; // 0xb8(0x08)
	float range; // 0xc0(0x04)
	bool SelfActivate; // 0xc4(0x01)
};

// Class FSD.LineSegmentCarverComponent
// Size: 0x430 (Inherited: 0x3f0)
struct ULineSegmentCarverComponent : UGenerationComponent {
	TArray<FLineSegmentCarverPoint> LinePoints; // 0x3f0(0x10)
	bool Visible; // 0x400(0x01)
	int32_t Layer; // 0x404(0x04)
	float Cielingheight; // 0x408(0x04)
	float FloorDepth; // 0x40c(0x04)
	UFloodFillSettings* CeilingNoiseOverride; // 0x410(0x08)
	UFloodFillSettings* WallNoiseOverride; // 0x418(0x08)
	UFloodFillSettings* FloorNoiseOverride; // 0x420(0x08)
	bool UseDetailNoise; // 0x428(0x01)
};

// Class FSD.LineSegmentCarver
// Size: 0x240 (Inherited: 0x228)
struct ALineSegmentCarver : AGenerationItem {
	ULineSegmentCarverComponent* LineComponent; // 0x228(0x08)
};

// Class FSD.LineCutterProjectile
// Size: 0x528 (Inherited: 0x338)
struct ALineCutterProjectile : AProjectile {
	FScaledEffect EletricHitEffect; // 0x338(0x10)
	FScaledEffect ProjectileDisappearEffect; // 0x348(0x10)
	float SwipeRadius; // 0x358(0x04)
	float DoubleLineDistanceMultiplier; // 0x35c(0x04)
	float OverlapRadius; // 0x360(0x04)
	bool DestroyOnTerrainCollision; // 0x364(0x01)
	bool IsDead; // 0x365(0x01)
	bool bHasReversedDirection; // 0x366(0x01)
	float FlyStraighTime; // 0x3bc(0x04)
	enum class EImpactDecalSize EletricDecalSize; // 0x3c0(0x01)
	enum class EImpactDecalSize ImpactDecalSize; // 0x3c1(0x01)
	FMulticastInlineDelegate OnLineDestroy; // 0x408(0x10)
	FMulticastInlineDelegate OnLineLifespanEnd; // 0x418(0x10)
	FMulticastInlineDelegate OnPerformHit; // 0x428(0x10)
	FMulticastInlineDelegate OnLineEffectHide; // 0x438(0x10)
	FVector LeftLastPosition; // 0x448(0x0c)
	FVector RightLastPosition; // 0x454(0x0c)
	USceneComponent* LineRoot; // 0x460(0x08)
	USceneComponent* LeftSphere; // 0x468(0x08)
	USceneComponent* RightSphere; // 0x470(0x08)
	USceneComponent* LeftSphere2; // 0x478(0x08)
	USceneComponent* RightSphere2; // 0x480(0x08)
	USceneComponent* LeftSphere3; // 0x488(0x08)
	USceneComponent* RightSphere3; // 0x490(0x08)
	UParticleSystemComponent* BeamParticle; // 0x498(0x08)
	UParticleSystemComponent* BeamParticle2; // 0x4a0(0x08)
	UParticleSystemComponent* BeamParticle3; // 0x4a8(0x08)
	UParticleSystemComponent* LeftHitParticles; // 0x4b0(0x08)
	UParticleSystemComponent* RightHitParticles; // 0x4b8(0x08)
	float RotationSpeed; // 0x4c0(0x04)
	FRotator LineRotation; // 0x4c4(0x0c)
	enum class ELineRotation RotationMode; // 0x4d0(0x01)
	bool ShouldExplode; // 0x4d1(0x01)
	bool OnlyOne; // 0x4d2(0x01)
	bool IsDoubleLine; // 0x4d3(0x01)
	bool HasPlasmaTrail; // 0x4d4(0x01)
	float LineMaxSize; // 0x4d8(0x04)
	float LineExpansionDelay; // 0x4dc(0x04)
	float TimeToLineExpansion; // 0x4e0(0x04)
	float FireRate; // 0x4e4(0x04)
	UDamageComponent* DamageComponent; // 0x4e8(0x08)
	UDamageComponent* InitialDamageComponent; // 0x4f0(0x08)
	int32_t InitialHitDamageMultiplier; // 0x4f8(0x04)
	float InhibitImpactDecalsTime; // 0x4fc(0x04)
	float MinTimeBetweenImpactDecals; // 0x500(0x04)

	void UpdateBeamLocations();
	void TerrainSweep(FVector Left, FVector Right);
	void StartSpawningTrail();
	void SpawnDecal(FHitResult Result);
	void SetExtraBeamVisibility(bool IsVisible);
	void Server_RemoveDebris(int32_t instance, int32_t Component);
	void PerformHit__DelegateSignature(FHitResult Result);
	void OnRep_LineRotation();
	void LineLifeSpanDestroy__DelegateSignature();
	void LineEffectHide__DelegateSignature();
	void LineDestroy__DelegateSignature(FHitResult Result);
	void Fire(FVector Origin, FVector Direction, float Distance);
};

// Class FSD.GuntowerLineProjectile
// Size: 0x3a8 (Inherited: 0x338)
struct AGuntowerLineProjectile : AProjectile {
	FMulticastInlineDelegate OnLineDestroy; // 0x338(0x10)
	USceneComponent* LeftLinePoint; // 0x348(0x08)
	USceneComponent* RightLinePoint; // 0x350(0x08)
	UDamageComponent* DamageComponent; // 0x358(0x08)
	UParticleSystemComponent* BeamParticles; // 0x360(0x08)
	float PlatformDissolveRadius; // 0x368(0x04)
	float PlatformDissolveSqueeze; // 0x36c(0x04)
	UParticleSystemComponent* HitParticles; // 0x370(0x08)
	float TimeBetweenLineChecks; // 0x398(0x04)

	void TurnOffParticles();
	void LineDestroy__DelegateSignature(FHitResult Result);
	void Fire(FVector Origin, FVector Direction, float Distance);
};

// Class FSD.LineSegmentFillerComponent
// Size: 0x430 (Inherited: 0x3f0)
struct ULineSegmentFillerComponent : UGenerationComponent {
	TArray<FLineSegmentFillerPoint> LinePoints; // 0x3f0(0x10)
	bool Visible; // 0x400(0x01)
	UFloodFillSettings* NoiseOverride; // 0x408(0x08)
	FRandRange RangeScale; // 0x410(0x08)
	FRandRange NoiseRangeScale; // 0x418(0x08)
};

// Class FSD.LineSegmentFiller
// Size: 0x240 (Inherited: 0x228)
struct ALineSegmentFiller : AGenerationItem {
	ULineSegmentFillerComponent* LineComponent; // 0x228(0x08)
};

// Class FSD.LoadoutItem
// Size: 0x28 (Inherited: 0x28)
struct ULoadoutItem : UInterface {

	AItem* GetLoadoutItemClass();
};

// Class FSD.LoadoutItemProxy
// Size: 0x358 (Inherited: 0x338)
struct ALoadoutItemProxy : AItem {
	UItemCharacterAnimationSet* AnimationSet; // 0x338(0x08)
	FItemLoadoutAnimations LoadoutAnimations; // 0x340(0x18)

	AItem* GetLoadoutItemFromClass(AActor* ActorClass);
};

// Class FSD.LocalizationFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULocalizationFunctionLibrary : UBlueprintFunctionLibrary {

	TArray<FLocalizedLanguageInfo> GetLocalizedLanguages();
};

// Class FSD.FSDLocalizationSettings
// Size: 0x48 (Inherited: 0x38)
struct UFSDLocalizationSettings : UDeveloperSettings {
	TArray<FFSDTranslationProgress> CommunityTranslationProgress; // 0x38(0x10)
};

// Class FSD.LockOnBeam
// Size: 0x348 (Inherited: 0x220)
struct ALockOnBeam : AActor {
	USplineComponent* BeamSpline; // 0x220(0x08)
	USplineMeshComponent* BeamMeshComponent01; // 0x228(0x08)
	USplineMeshComponent* BeamMeshComponent02; // 0x230(0x08)
	USplineMeshComponent* BeamMeshComponent03; // 0x238(0x08)
	USceneComponent* BlockedNodeComponent; // 0x240(0x08)
	USceneComponent* PreviewLocationComponent; // 0x248(0x08)
	UMaterialInterface* BeamMaterial; // 0x250(0x08)
	UMaterialInterface* BlockedBeamMaterial; // 0x258(0x08)
	UMaterialInterface* SeekerMaterial; // 0x260(0x08)
	float BeamThicknessScale; // 0x268(0x04)
	TWeakObjectPtr<ALockOnWeapon> Item; // 0x278(0x08)
	TWeakObjectPtr<AActor> TargetActor; // 0x280(0x08)
	FBeamCollision Collision; // 0x298(0xb0)

	void ReceiveItemSet();
};

// Class FSD.LockOnWeapon
// Size: 0x880 (Inherited: 0x6d8)
struct ALockOnWeapon : AAmmoDrivenWeapon {
	FMulticastInlineDelegate OnLockingStarted; // 0x6d8(0x10)
	FMulticastInlineDelegate OnLockingStopped; // 0x6e8(0x10)
	FMulticastInlineDelegate OnMaxTargetsChanged; // 0x6f8(0x10)
	FMulticastInlineDelegate OnLockOnCountChanged; // 0x708(0x10)
	FMulticastInlineDelegate OnLockonTargetRotationUpdated; // 0x718(0x10)
	AActor* AimTarget; // 0x728(0x08)
	float LockOnDamageMultiplier; // 0x730(0x04)
	int32_t ShotsPerTarget; // 0x734(0x04)
	int32_t MaxTargets; // 0x738(0x04)
	float TimeBetweenLockedShots; // 0x73c(0x04)
	float LockOnTime; // 0x740(0x04)
	float MaxLockOnDegree; // 0x744(0x04)
	float LoseLockOnDegree; // 0x748(0x04)
	float DegreeTolerance; // 0x74c(0x04)
	float MaxLockOnRange; // 0x750(0x04)
	bool bPrioritizeLowHitPoint; // 0x754(0x01)
	bool bAlwaysHitTarget; // 0x755(0x01)
	float MaxLockOnDuration; // 0x758(0x04)
	bool bLockOnControlsSentryGun; // 0x75c(0x01)
	bool bSentryGunShootsOnLockedShot; // 0x75d(0x01)
	bool bLockedShotsIgnoreArmor; // 0x75e(0x01)
	UActorTrackingWidget* TrackingWidgetClass; // 0x760(0x08)
	ALockOnBeam* LockOnBeamClass; // 0x768(0x08)
	AActor* AoeActorClass; // 0x770(0x08)
	int32_t AoeHitCountThreshhold; // 0x778(0x04)
	bool UseLockOnTargetStatusEffect; // 0x77c(0x01)
	UStatusEffect* LockOnTargetStatusEffect; // 0x780(0x08)
	int32_t PushStatusEffectEveryXLock; // 0x788(0x04)
	int32_t LockOnCount; // 0x7b4(0x04)
	UDamageComponent* DamageComponent; // 0x7e8(0x08)
	UHitscanComponent* HitscanComponent; // 0x7f0(0x08)
	FTracerData ChargedShotTracer; // 0x7f8(0x30)
	float ChargeSpeed; // 0x828(0x04)
	float SlowMovementAtCharge; // 0x82c(0x04)
	float FearFactorOnFullLockFire; // 0x830(0x04)
	float FearRange; // 0x834(0x04)
	bool IsMovementSlowed; // 0x83a(0x01)
	bool Charging; // 0x83b(0x01)
	float ChargeProgress; // 0x83c(0x04)
	bool LastShotWasLockedOn; // 0x840(0x01)
	float LockOnRecoilMult; // 0x844(0x04)

	void UpdateRifleEye();
	void SetMuzzleDirection(FVector TargetLocation);
	void Server_TriggerAoe(FVector Location);
	void Server_SetTotalLockCount(int32_t totalLockCount);
	void Server_SetLockCount(FLockCounter LockCounter);
	void Server_SetIsMovementSlowed(bool bisMovementSlowed);
	void Server_SetIsLatestShotLockedOn(bool bisShotLockedOn);
	void Server_SetIsChargingShot(bool bisCharging);
	void Server_SetIgnoreArmor(bool inIgnoreArmor);
	void Server_PushStatusEffect(AActor* Target);
	void Server_PopStatusEffect(AActor* Target);
	void Server_FiringComplete();
	void RefundAmmo();
	void OnRep_AimTarget();
	void OnMovementSlowed(bool isSlowed);
	void OnHitDeadTarget();
	void OnHit(FHitResult Hit, bool AlwaysPenetrate);
	void OnAsyncFireComplete();
	void MuzzleLerpToTarget(FVector TargetLocation);
	void MaxTargetsDelegate__DelegateSignature(int32_t InMaxTargets);
	void LockonTargetRotationUpdated__DelegateSignature(bool hasTargetLockon, FRotator socketRotation);
	void LockOnRifleLockingOnState__DelegateSignature();
	void LockOnCountDelegate__DelegateSignature(int32_t InCurrentCount);
};

// Class FSD.LockOnTrackingWidget
// Size: 0x278 (Inherited: 0x278)
struct ULockOnTrackingWidget : UActorTrackingWidget {

	void OnLockOn(int32_t numberOfLockOnsOnThisTarget, int32_t totalNumberOfLockOns);
	void OnFireComplete(int32_t numberOfLockOnsOnThisTarget);
	void CleanUpWidget(bool showFade);
};

// Class FSD.LoginBlueprintCallProxy
// Size: 0x70 (Inherited: 0x30)
struct ULoginBlueprintCallProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	UObject* WorldContextObject; // 0x50(0x08)

	ULoginBlueprintCallProxy* Login(UObject* WorldContextObject);
};

// Class FSD.LookingAtWidget
// Size: 0x278 (Inherited: 0x230)
struct ULookingAtWidget : UUserWidget {
	float TargetSelectDuration; // 0x230(0x04)
	float TargetLostDuration; // 0x234(0x04)
	TWeakObjectPtr<APlayerCharacter> Character; // 0x238(0x08)
	TWeakObjectPtr<UCharacterSightComponent> CharacterSight; // 0x240(0x08)
	TWeakObjectPtr<AActor> CurrentTarget; // 0x248(0x08)
	TWeakObjectPtr<UPawnAfflictionComponent> CurrentTargetAfflictions; // 0x250(0x08)
	TScriptInterface<IHealth> CurrentTargetHealth; // 0x258(0x10)
	bool CanCurrentTargetTakeDamage; // 0x268(0x01)
	float TargetLostTime; // 0x26c(0x04)
	bool bTargetSet; // 0x270(0x01)

	void SetCurrentTarget(AActor* NewActor, TScriptInterface<IHealth> HealthComponent, float OverrideTargetLostTime);
	void ResetCurrentTarget();
	void ReceiveUpdateTarget(AActor* InCurrentTarget, float DeltaTime);
	void ReceiveTargetLost();
	void ReceiveNewTarget(AActor* InCurrentTarget);
	bool IsValidTarget(AActor* TargetActor, TScriptInterface<IHealth> TargetHealth);
	bool IsBossFight(TScriptInterface<IHealth> Health);
	UHealthComponentBase* GetLookingAtHealth();
	AActor* GetLookingAtActor();
	bool GetCharacterTemperatureEffect(float TemperatureEffect);
};

// Class FSD.LookingAtContentWidget
// Size: 0x270 (Inherited: 0x230)
struct ULookingAtContentWidget : UUserWidget {
	TWeakObjectPtr<AActor> CurrentTarget; // 0x230(0x08)
	TWeakObjectPtr<UPawnAfflictionComponent> CurrentTargetAfflictions; // 0x238(0x08)
	TWeakObjectPtr<USimpleObjectInfoComponent> CurrentTargetInfo; // 0x240(0x08)
	TScriptInterface<IHealth> CurrentTargetHealth; // 0x248(0x10)
	TWeakObjectPtr<UHackingUsableComponent> CurrentHackingComponent; // 0x258(0x08)
	TWeakObjectPtr<UPetComponent> CurrentPetComponent; // 0x260(0x08)
	bool bWeakPointHit; // 0x268(0x01)

	void UpdateCurrentTarget(float DeltaSeconds, AActor* InTargetActor, TScriptInterface<IHealth> InTargetHealthComponent);
	void RegisterWeakPointHit();
	void ReceiveUpdateTarget(AActor* InCurrentTarget, float DeltaTime);
	void ReceiveNewTarget(AActor* InCurrentTarget);
	FText GetTargetOwnerName();
	FText GetTargetName();
	float GetTargetHealthPct();
};

// Class FSD.TreasureBeacon
// Size: 0x298 (Inherited: 0x220)
struct ATreasureBeacon : AActor {
	USceneComponent* RootComp; // 0x220(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x228(0x08)
	UDebrisPositioning* TreasurePositioning; // 0x230(0x08)
	UDebrisPositioning* DebrisPartsPositioning; // 0x238(0x08)
	UCurveFloat* AvoidCostCurve; // 0x240(0x08)
	UCurveFloat* AvoidCostCurveDebris; // 0x248(0x08)
	float MaxRange; // 0x250(0x04)
	float MinRange; // 0x254(0x04)
	float DebrisSpawnRange; // 0x258(0x04)
	AActor* DebrisPartClass; // 0x260(0x08)
	int32_t DebrisPartsToSpawn; // 0x268(0x04)
	int32_t MaxSpawnLocationTries; // 0x26c(0x04)
	ATreasureContainer* TreasureClass; // 0x288(0x08)
	ATreasureContainer* TreasureInstance; // 0x290(0x08)

	void SpawnDebreeParts();
	void ActivateTreasure();
};

// Class FSD.TreasureContainer
// Size: 0x288 (Inherited: 0x220)
struct ATreasureContainer : AActor {
	USceneComponent* Root; // 0x220(0x08)
	UOncePerPlayerUsableComponent* CollectUsable; // 0x228(0x08)
	UItemAquisitionSource* AquisitionSource; // 0x238(0x08)
	TArray<APlayerCharacter*> Collectors; // 0x240(0x10)
	APlayerCharacter* LastJoiner; // 0x250(0x08)
	TArray<FTreasureWeight> PossibleRewarders; // 0x258(0x10)
	UTreasureRewarder* TreasureRewarder; // 0x268(0x08)
	bool PreventLatejoiners; // 0x282(0x01)

	void TestAwardTreasure();
	void SetPreventFurtherLatejoiners(bool prevent);
	void SetCanCollectTreasure(bool canCollect);
	void OnRep_LastJoiner();
	void OnRep_Collectors();
	void OnPlayerLatejoined(APlayerCharacter* joiner);
	void OnPlayerCollectedTreasure(APlayerCharacter* collector, enum class EInputKeys Key);
	void OnLocalPlayerCollectedTreasure(APlayerCharacter* Player);
	void OnDisableChestLocally();
	void OnContainerActivated();
	bool GetPreventFurtherLatejoiners();
};

// Class FSD.LostPack
// Size: 0x220 (Inherited: 0x220)
struct ALostPack : AActor {
};

// Class FSD.MasteryIconWidget
// Size: 0x230 (Inherited: 0x230)
struct UMasteryIconWidget : UUserWidget {

	void ReceiveUnlocked();
};

// Class FSD.MeleeAttackComponent
// Size: 0x160 (Inherited: 0xf8)
struct UMeleeAttackComponent : UDamageAttackComponent {
	TArray<UAnimMontage*> Montages; // 0xf8(0x10)
	bool CenterOnTarget; // 0x110(0x01)
	TArray<UAttackEffect*> AttackEffects; // 0x118(0x10)
	FMulticastInlineDelegate OnAttackStartedEvent; // 0x130(0x10)
	FMulticastInlineDelegate OnDamageAppliedEvent; // 0x140(0x10)
	FMulticastInlineDelegate OnAttackEndedEvent; // 0x150(0x10)

	UAnimMontage* SelectMontage();
	void OnPerformAttack(FName Name);
	void OnMontageEnded(UAnimMontage* Montage, bool interrupted);
};

// Class FSD.MeshCarveAttackEffect
// Size: 0x60 (Inherited: 0x28)
struct UMeshCarveAttackEffect : UAttackEffect {
	float ExpensiveNoise; // 0x28(0x04)
	UStaticMesh* CarveMesh; // 0x30(0x08)
	float CarverOffset; // 0x38(0x04)
	FRotator CarverOrientation; // 0x3c(0x0c)
	FVector CarverScale; // 0x48(0x0c)
	FName Socket; // 0x54(0x08)
};

// Class FSD.MessagingSubSystem
// Size: 0x1308 (Inherited: 0x30)
struct UMessagingSubSystem : UGameInstanceSubsystem {
	FMulticastInlineDelegate OnNewMessage; // 0x30(0x10)

	float MessageAge(FFSDChatMessage Msg);
	void LatestMessages(int32_t Num, bool resetAge, TArray<FFSDChatMessage> OutMessages);
	void ClearMessages();
};

// Class FSD.MicroMissileLauncher
// Size: 0x788 (Inherited: 0x6d8)
struct AMicroMissileLauncher : AAmmoDrivenWeapon {
	FMulticastInlineDelegate OnStartCharging; // 0x6d8(0x10)
	FMulticastInlineDelegate OnEndCharging; // 0x6e8(0x10)
	TArray<FName> MuzzleNames; // 0x6f8(0x10)
	float ChargeTime; // 0x708(0x04)
	int32_t ChargeMaxFireCount; // 0x70c(0x04)
	float BuckShotDelay; // 0x710(0x04)
	float ShotDirectionHorizontalDegreeOffset; // 0x714(0x04)
	float ShotDirectionVerticleDegreeOffset; // 0x718(0x04)
	enum class EMicroMissileLauncherFireMode FireMode; // 0x71c(0x01)
	bool DisableHomingOnRelease; // 0x71d(0x01)
	float MaxHomingProjectiles; // 0x720(0x04)
	UAnimMontage* WPN_Fire_Empty_Mag; // 0x728(0x08)
	UAnimMontage* WPN_Fire_Level2; // 0x730(0x08)
	UAnimMontage* WPN_Fire_Level2_Empty_Mag; // 0x738(0x08)
	UAnimMontage* WPN_Fire_Level3; // 0x740(0x08)
	UAnimMontage* WPN_Fire_Level3_Empty_Mag; // 0x748(0x08)
	UAnimMontage* WPN_Mag_Feed; // 0x750(0x08)
	UAnimMontage* WPN_Mag_And_Barrel_Feed; // 0x758(0x08)
	USoundCue* ChargedMissileFireSound; // 0x760(0x08)

	void Server_SetIsCharging(bool isCharging);
	void Server_SetChargedMissile(bool isCharged);
	bool IsNextShotBuckShot();
	int32_t GetChargeCurrentFireCount();
	void ChargingDelegate__DelegateSignature();
	void All_SetChargedMissile(bool isCharged);
};

// Class FSD.MicroMissileLauncherAnimInstance
// Size: 0x2d0 (Inherited: 0x270)
struct UMicroMissileLauncherAnimInstance : UAnimInstance {
	AMicroMissileLauncher* Weapon; // 0x2c0(0x08)

	void OnMontageEndedInternal(UAnimMontage* Montage, bool interrupted);
};

// Class FSD.MilestoneAsset
// Size: 0xc0 (Inherited: 0x30)
struct UMilestoneAsset : UDataAsset {
	FMulticastInlineDelegate OnMilestoneClaimed; // 0x30(0x10)
	FMulticastInlineDelegate OnMilestoneReached; // 0x40(0x10)
	FGuid SaveGameID; // 0x50(0x10)
	UTexture2D* LargeImage; // 0x60(0x08)
	FText FormattedTitle; // 0x68(0x18)
	int32_t FormattedValueOffset; // 0x80(0x04)
	bool CountValueAsTotal; // 0x84(0x01)
	UMissionStat* TrackingStat; // 0x88(0x08)
	UPlayerCharacterID* TrackingCharacterID; // 0x90(0x08)
	TArray<FMilestoneTier> Tiers; // 0x98(0x10)
	UFSDGameInstance* GameInstance; // 0xa8(0x08)
	int32_t LastTierReached; // 0xb0(0x04)
	bool bPendingMilestoneReached; // 0xb4(0x01)

	TArray<UMilestoneAsset*> SortMilestonesByProgress(UObject* WorldContext, TArray<UMilestoneAsset*> Milestones);
	void OnMissionStatChanged(UMissionStat* Stat, float Value);
	bool IsCompleted(UObject* WorldContext);
	bool IsClaimable(UObject* WorldContext);
	FText GetTitleForTier(int32_t Tier);
	FText GetTitle(UObject* WorldContext);
	int32_t GetNextPerkPointsReward(UObject* WorldContext);
	void GetCurrentProgress(UObject* WorldContext, int32_t Tier, float Progress, float CurrentCount, float TargetCount);
	int32_t GetClaimedTier(UObject* WorldContext);
	bool GetClaimedProgress(UObject* WorldContext, int32_t Tier, float Progress, float CurrentCount, float TargetCount);
	UTexture2D* GetCategoryIcon();
	void ClearPendingMilestoneReached();
	int32_t ClaimNextTier(UObject* WorldContext);
};

// Class FSD.MineralTradeData
// Size: 0x40 (Inherited: 0x30)
struct UMineralTradeData : UDataAsset {
	TArray<FText> MineralTradeTickerTexts; // 0x30(0x10)
};

// Class FSD.MinersManualData
// Size: 0xb0 (Inherited: 0x30)
struct UMinersManualData : UDataAsset {
	FSoftMinersManualDescription Description; // 0x30(0x80)

	void GetText(FText Headline, FText richText);
	UTexture2D* GetFrontImage();
	UTexture2D* GetBackgroundImage();
};

// Class FSD.LoreScreenMasterWidget
// Size: 0x2a8 (Inherited: 0x230)
struct ULoreScreenMasterWidget : UUserWidget {
	FText PageName; // 0x230(0x18)
	TSoftObjectPtr<UTexture2D> SolidImage; // 0x248(0x28)
	TSoftObjectPtr<UTexture2D> TransparentImage; // 0x270(0x28)
	FLinearColor BackgroundColor; // 0x298(0x10)
};

// Class FSD.MinersManual
// Size: 0x1a0 (Inherited: 0x30)
struct UMinersManual : UDataAsset {
	TArray<TSoftClassPtr<UObject>> BasicsPages; // 0x30(0x10)
	TMap<int32_t, FText> BasicsPageHeaders; // 0x40(0x50)
	TArray<TSoftClassPtr<UObject>> CombatPages; // 0x90(0x10)
	TArray<TSoftClassPtr<UObject>> ExtraMissionPages; // 0xa0(0x10)
	TArray<TSoftClassPtr<UObject>> ResourcePages; // 0xb0(0x10)
	TArray<UEnemyMinersManualData*> Enemies; // 0xc0(0x10)
	TArray<TSoftObjectPtr<UBiome>> BiomeReferences; // 0xd0(0x10)
	TArray<TSoftObjectPtr<UMissionTemplate>> MissionReferences; // 0xe0(0x10)
	TArray<FDamageTypeDescription> DamageTypeInfo; // 0xf0(0x10)
	TMap<int32_t, FMissionTypeDescription> MissionDescriptions; // 0x100(0x50)
	TMap<int32_t, FBiomeFeatures> BiomeFeatureDescriptions; // 0x150(0x50)

	bool IsObjectInMinersManual(UObject* WorldContext, UObject* Object);
	bool IsMissionUnlocked(UObject* WorldContext, UMissionTemplate* mission);
	bool IsBiomeUnlocked(UObject* WorldContext, UBiome* Biome);
	TArray<FText> GetUnlockedCreatureLore(UObject* WorldContext, UEnemyMinersManualData* enemy, float completePercentage);
	TArray<TSoftObjectPtr<UMissionTemplate>> GetMissions();
	void GetMissionInfo(int32_t MissionTypeIndex, FText InfoHeadline, FText InfoDescription, TArray<FMissionStepDescription> Steps);
	int32_t GetEnemyKillCount(UObject* WorldContext, FGuid EnemyID);
	TArray<UEnemyMinersManualData*> GetEnemiesSorted();
	TArray<UEnemyMinersManualData*> GetEnemies();
	void GetDamageTypeDescriptions(TArray<enum class EDamageType> damageTypes, TArray<FDamageTypeDescription> Icon);
	void GetDamageTypeDescription(enum class EDamageType damageTypes, FDamageTypeDescription Icon);
	TArray<TSoftObjectPtr<UBiome>> GetBiomes();
	TArray<UMinersManualData*> GetBiomeFeatures(int32_t BiomeIndex);
	TArray<FDamageTypeDescription> GetAllDamageTypeDescriptions();
};

// Class FSD.MiningPodCalldownLocation
// Size: 0x220 (Inherited: 0x220)
struct AMiningPodCalldownLocation : AActor {
};

// Class FSD.MiningPod
// Size: 0x368 (Inherited: 0x220)
struct AMiningPod : AActor {
	float DropHeight; // 0x228(0x04)
	FVector TargetLocation; // 0x22c(0x0c)
	UAutoCarverComponent* AutoCarver; // 0x240(0x08)
	UCurveFloat* DropCurve; // 0x258(0x08)
	UCurveFloat* DepartCurve; // 0x260(0x08)
	UCurveFloat* CarverDropCurve; // 0x268(0x08)
	float CarverRotationSpeed; // 0x270(0x04)
	FVector CarverScale; // 0x274(0x0c)
	FGameplayTagContainer GameplayTags; // 0x280(0x20)
	UBoxComponent* DwarfCheckerBox; // 0x2a0(0x08)
	float DepartureTime; // 0x2a8(0x04)
	FText DepartueCountdownName; // 0x2b0(0x18)
	FMiningPodDialogs Dialogs; // 0x2d0(0x50)
	enum class EMiningPodMission MissionType; // 0x320(0x01)
	bool HasLanded; // 0x321(0x01)
	UOutlineComponent* PodOutline; // 0x328(0x08)
	FVector StartLocation; // 0x330(0x0c)
	enum class EMiningPodState State; // 0x33c(0x01)
	enum class EMiningPodRampState rampState; // 0x33d(0x01)
	float TargetDropTime; // 0x340(0x04)
	float TargetDepartureTime; // 0x344(0x04)
	float TimeToDrop; // 0x348(0x04)
	UObjectivesManager* ObjectivesManager; // 0x350(0x08)

	AMiningPod* SpawnPodAtLocation(UObject* WorldContextObject, AMiningPod* podClass, FTransform Transform);
	void SetRampState(enum class EMiningPodRampState rampState);
	void SetMuleInstance(AMolly* Donkey);
	void RecieveReturnTimerFifteenSecondWarning();
	void RecieveReturnTimerExpired();
	void PrepForTakeOff();
	void PowerUp();
	void PoweredUp();
	void OnRep_State();
	void OnRep_RampState();
	void OnPrepForTakeOff();
	void OnPoweringUp();
	void OnPoweredUp();
	void OnHostInsidePod(bool isInside);
	void OnDropStarted();
	void OnDroppodImpact();
	void OnDrillingStarted();
	void OnDeparting();
	void OnCountdownFinished();
	void OnCountdownChanged(int32_t newTime);
	void OnAllDwavesInsidePod(bool AllInside);
	int32_t GetTimeToDeparture();
	bool GetHasLanded();
	FVector GetDonkeyReturnPickupLocation();
	void ForceTakeoff();
	void ExitSpacerig();
	void DropToTarget(UObject* WorldContextObject, AMiningPod* podClass, FTransform dropLocation, int32_t DropDelay);
	AMiningPod* DropToMission(UObject* WorldContextObject, AMiningPod* podClass, FVector Location);
	void DepositAllPlayersMaterials();
	void Depart();
	void CorrectLocationsForSpawnedOnLocation();
	FVector AdjustLandingLocationToGround(UObject* WorldContextObjet, FVector initialLocation);
};

// Class FSD.MiningPodAnimInstance
// Size: 0x270 (Inherited: 0x270)
struct UMiningPodAnimInstance : UAnimInstance {
	enum class EMiningPodRampState rampState; // 0x268(0x01)
	enum class EMiningPodState PodState; // 0x269(0x01)
};

// Class FSD.MissionChallenge
// Size: 0x30 (Inherited: 0x30)
struct UMissionChallenge : UDataAsset {
};

// Class FSD.MissionFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMissionFunctionLibrary : UBlueprintFunctionLibrary {

	int32_t GetGlobalMissionSeed();
};

// Class FSD.MissionGenerationManager
// Size: 0x88 (Inherited: 0x30)
struct UMissionGenerationManager : UGameInstanceSubsystem {
	TMap<int32_t, FGeneratedMissionGroup> AllMissionGroups; // 0x30(0x50)
	bool ResetSelectedMission; // 0x80(0x01)

	TArray<UGeneratedMission*> GetMissions(int32_t Seed);
	UGeneratedMission* GetMissionFromSeeds(int32_t GlobalSeed, int32_t MissionSeed);
	TArray<UGeneratedMission*> GetAvailableMissions();
};

// Class FSD.MissionManager
// Size: 0xc0 (Inherited: 0xb0)
struct UMissionManager : UActorComponent {
	TArray<URunningMissionBP*> RunningBlueprints; // 0xb0(0x10)

	void OnMatchStarted();
};

// Class FSD.MissionMutator
// Size: 0x90 (Inherited: 0x30)
struct UMissionMutator : UDataAsset {
	URunningMissionBP* MissionBP; // 0x30(0x08)
	TArray<TSoftClassPtr<UObject>> BannedObjectives; // 0x38(0x10)
	TArray<UMutator*> Mutators; // 0x48(0x10)
	FText Title; // 0x58(0x18)
	FText RichDescription; // 0x70(0x18)
	UTexture2D* Icon; // 0x88(0x08)
};

// Class FSD.Mutator
// Size: 0x30 (Inherited: 0x30)
struct UMutator : UDataAsset {
};

// Class FSD.VeinMutator
// Size: 0x40 (Inherited: 0x30)
struct UVeinMutator : UMutator {
	UVeinResourceData* VeinResource; // 0x30(0x08)
	float Modifier; // 0x38(0x04)
};

// Class FSD.CraftingMaterialMutator
// Size: 0x38 (Inherited: 0x30)
struct UCraftingMaterialMutator : UMutator {
	float Modifier; // 0x30(0x04)
};

// Class FSD.ResourceMutator
// Size: 0x48 (Inherited: 0x30)
struct UResourceMutator : UMutator {
	TArray<UResourceData*> Resources; // 0x30(0x10)
	float Modifier; // 0x40(0x04)
};

// Class FSD.SupplyPodMutator
// Size: 0x38 (Inherited: 0x30)
struct USupplyPodMutator : UMutator {
	float CostModifier; // 0x30(0x04)
};

// Class FSD.PlayerShieldsMutator
// Size: 0x38 (Inherited: 0x30)
struct UPlayerShieldsMutator : UMutator {
	float ShieldModifier; // 0x30(0x04)
};

// Class FSD.EnemyRarityMutator
// Size: 0x48 (Inherited: 0x30)
struct UEnemyRarityMutator : UMutator {
	float RarityMultiplier; // 0x30(0x04)
	float SpawnAmountMultiplier; // 0x34(0x04)
	float DifficultyMultiplier; // 0x38(0x04)
	UEnemyDescriptor* EnemyDescriptor; // 0x40(0x08)
};

// Class FSD.ForceStationaryEncounterMutator
// Size: 0x40 (Inherited: 0x30)
struct UForceStationaryEncounterMutator : UMutator {
	UEnemyGroupDescriptor* EnemyGroup; // 0x30(0x08)
	FIRandRange GroupSize; // 0x38(0x08)
};

// Class FSD.EncounterOverrideMutator
// Size: 0x38 (Inherited: 0x30)
struct UEncounterOverrideMutator : UMutator {
	float MobileEncounterScale; // 0x30(0x04)
	float StationaryEncounterScale; // 0x34(0x04)
};

// Class FSD.NoHeadlightMutator
// Size: 0x30 (Inherited: 0x30)
struct UNoHeadlightMutator : UMutator {
};

// Class FSD.DifficultyMutator
// Size: 0x60 (Inherited: 0x30)
struct UDifficultyMutator : UMutator {
	float ExtraLargeEnemyDamageResistanceMultiplier; // 0x30(0x04)
	float EnemyDamageResistanceMultiplier; // 0x34(0x04)
	float SmallEnemyDamageResistanceMultiplier; // 0x38(0x04)
	float EnemyDamageModifierMultiplier; // 0x3c(0x04)
	float EnemyCountModifierMultiplier; // 0x40(0x04)
	float WeakpointDamageMultiplier; // 0x44(0x04)
	float HazardBonus; // 0x48(0x04)
	float FriendlyFireModifierMultiplier; // 0x4c(0x04)
	float EnemyWaveIntervalModifier; // 0x50(0x04)
	float EnemyNormalWaveIntervalModifier; // 0x54(0x04)
	float EnemyNormalWaveDifficultyMultiplier; // 0x58(0x04)
};

// Class FSD.ResourceVeinMutator
// Size: 0x48 (Inherited: 0x30)
struct UResourceVeinMutator : UMutator {
	UResourceData* Resource; // 0x30(0x08)
	float VeinLengthMultiplier; // 0x38(0x04)
	float RangeMultiplier; // 0x3c(0x04)
	float NoiseRangeMultiplier; // 0x40(0x04)
};

// Class FSD.RewardMutator
// Size: 0x50 (Inherited: 0x30)
struct URewardMutator : UMutator {
	FText RewardText; // 0x30(0x18)
	float XPMultiplier; // 0x48(0x04)
	float CreditMultiplier; // 0x4c(0x04)
};

// Class FSD.CommunicationMutator
// Size: 0x38 (Inherited: 0x30)
struct UCommunicationMutator : UMutator {
	float PitchMultiplier; // 0x30(0x04)
};

// Class FSD.ExplosiveEnemiesMutator
// Size: 0x30 (Inherited: 0x30)
struct UExplosiveEnemiesMutator : UMutator {
};

// Class FSD.InfestedEnemiesMutator
// Size: 0x40 (Inherited: 0x30)
struct UInfestedEnemiesMutator : UMutator {
	TArray<UParticleSystem*> SpawnEffects; // 0x30(0x10)

	UParticleSystem* GetParticleSystem(AFSDPawn* enemy);
};

// Class FSD.RunningMissionBP
// Size: 0x28 (Inherited: 0x28)
struct URunningMissionBP : UObject {

	void StartLogic();
};

// Class FSD.StatusEffectMissionBP
// Size: 0x78 (Inherited: 0x28)
struct UStatusEffectMissionBP : URunningMissionBP {
	FGameplayTagQuery EnemyQuery; // 0x28(0x48)
	UStatusEffect* StatusEffect; // 0x70(0x08)

	void OnEnemySpawned(APawn* Pawn, UEnemyDescriptor* descriptor);
};

// Class FSD.NoOxygenMutator
// Size: 0x88 (Inherited: 0x30)
struct UNoOxygenMutator : UMutator {
	float OxygenReplenishmentRate; // 0x30(0x04)
	TSoftClassPtr<UObject> OxygenComponent; // 0x38(0x28)
	TSoftClassPtr<UObject> ReplenishOxygenEffect; // 0x60(0x28)
};

// Class FSD.PlayerDamageTakenMutator
// Size: 0x88 (Inherited: 0x30)
struct UPlayerDamageTakenMutator : UMutator {
	float DamageMultiplier; // 0x30(0x04)
	TSet<UDamageClass*> SkipDamageClasses; // 0x38(0x50)
};

// Class FSD.CaveItemsMutator
// Size: 0x38 (Inherited: 0x30)
struct UCaveItemsMutator : UMutator {
	UDebrisItemComponent* Item; // 0x30(0x08)
};

// Class FSD.EliteEnemiesMutator
// Size: 0x40 (Inherited: 0x30)
struct UEliteEnemiesMutator : UMutator {
	float SpawnChanceModifier; // 0x30(0x04)
	int32_t MaxElites; // 0x34(0x04)
	float EliteCooldown; // 0x38(0x04)
};

// Class FSD.MissionMutatorManager
// Size: 0xb0 (Inherited: 0xb0)
struct UMissionMutatorManager : UActorComponent {
};

// Class FSD.MissionPlayerAndCharacterWidget
// Size: 0x270 (Inherited: 0x230)
struct UMissionPlayerAndCharacterWidget : UUserWidget {

	void UpdateValues(int32_t PlayerRank, int32_t PlayerStars, int32_t CharacterLevel, float CharacterProgress);
	void StepCounter(float TimeScale, bool CounterFinished);
	void PingPlayerRank();
	void PingCharacterLevel(int32_t Level, int32_t Stars);
	void InitCounter(FPlayerProgress PlayerProgressStart, FCharacterProgress CharacterProgressStart, FPlayerProgress PlayerProgressFinish, FCharacterProgress CharacterProgressFinish);
};

// Class FSD.FSDMissionSettings
// Size: 0xf0 (Inherited: 0x38)
struct UFSDMissionSettings : UDeveloperSettings {
	FSoftObjectPath DefaultRoomGenerator; // 0x38(0x18)
	TMap<int32_t, FMissionHazardSetting> MissionComplexitySettings; // 0x50(0x50)
	TMap<int32_t, FMissionHazardSetting> MissionDurationSettings; // 0xa0(0x50)

	float GetTotalHazardBonus(UObject* WorldContextObject, UGeneratedMission* mission, UDifficultySetting* DifficultySetting);
};

// Class FSD.MissionStatCategory
// Size: 0x50 (Inherited: 0x30)
struct UMissionStatCategory : UDataAsset {
	FText Title; // 0x30(0x18)
	UTexture2D* Icon; // 0x48(0x08)
};

// Class FSD.MissionStat
// Size: 0x80 (Inherited: 0x30)
struct UMissionStat : UDataAsset {
	FMulticastInlineDelegate OnCountChanged; // 0x30(0x10)
	FGuid SaveGameID; // 0x40(0x10)
	FText Title; // 0x50(0x18)
	UMissionStatCategory* Category; // 0x68(0x08)
	UFSDAchievement* StatAchievement; // 0x70(0x08)
	enum class EMissionStatType MissionStatType; // 0x78(0x01)
	bool DoNotShowInMissionStatView; // 0x79(0x01)
	bool ShowAllValuesCombined; // 0x7a(0x01)
	bool ShowHighestValue; // 0x7b(0x01)

	void StatCountChanged__DelegateSignature(UMissionStat* MissionStat, float Value);
	FText MissionStatToText(enum class EMissionStatType StatType, float Value);
	void Increment(UObject* WorldContext, UMissionStat* Stat, APlayerCharacter* CharacterClass, float Amount);
	float GetStatMinCount(UObject* WorldContext);
	float GetStatMaxCount(UObject* WorldContext);
	FText GetStatCountTotalAsText(UObject* WorldContext);
	float GetStatCountTotal(UObject* WorldContext);
	float GetStatCountPct(UObject* WorldContext, APlayerCharacter* CharacterClass);
	FText GetStatCountAsText(UObject* WorldContext, UPlayerCharacterID* characterID);
	float GetStatCount(UObject* WorldContext, UPlayerCharacterID* characterID);
	FString GetSourceTitle();
	FText GetLowestStatCountAsText(UObject* WorldContext);
	UTexture2D* GetIcon();
	FText GetHighestStatCountAsText(UObject* WorldContext);
	FText GetCategoryTitle();
};

// Class FSD.MissionStatsCollector
// Size: 0xd8 (Inherited: 0xb0)
struct UMissionStatsCollector : UActorComponent {
	APlayerCharacter* Character; // 0xb8(0x08)

	void OnResourceIncremented(UCappedResource* Resource, float Amount);
};

// Class FSD.GlobalMissionParameters
// Size: 0x40 (Inherited: 0x30)
struct UGlobalMissionParameters : UDataAsset {
	TArray<FResourceSpawner> DefaultResources; // 0x30(0x10)
};

// Class FSD.MissionTemplate
// Size: 0x208 (Inherited: 0x58)
struct UMissionTemplate : USavableDataAsset {
	TArray<FResourceSpawner> ResourceDistribution; // 0x58(0x10)
	UObjective* PrimaryObjective; // 0x68(0x08)
	TArray<UObjective*> SecondaryObjectives; // 0x70(0x10)
	TArray<UObjective*> DeepDiveObjectives; // 0x80(0x10)
	TArray<UMutator*> BaseMutators; // 0x90(0x10)
	TSoftClassPtr<UObject> pls; // 0xa0(0x28)
	TSoftObjectPtr<UWorld> Level; // 0xc8(0x28)
	TSoftClassPtr<UObject> GameMode; // 0xf0(0x28)
	TArray<UMissionComplexity*> LockedComplexities; // 0x118(0x10)
	TArray<UMissionDuration*> LockedDurations; // 0x128(0x10)
	FText MissionName; // 0x138(0x18)
	TSoftObjectPtr<UTexture2D> MissionImageLarge; // 0x150(0x28)
	TSoftObjectPtr<UTexture2D> MissionButtonImage; // 0x178(0x28)
	UTexture2D* MissionIcon; // 0x1a0(0x08)
	UTexture2D* MissionIconSmall; // 0x1a8(0x08)
	FLinearColor MissionColor; // 0x1b0(0x10)
	int32_t MissionTypeIndex; // 0x1c0(0x04)
	FString MissionTypeAnalyticsIndex; // 0x1c8(0x10)
	TArray<UMissionDNA*> DNA; // 0x1d8(0x10)
	TArray<TSoftClassPtr<UObject>> DebrisComponents; // 0x1e8(0x10)
	bool MustBeUnlocked; // 0x1f8(0x01)
	float RoomEncounerScale; // 0x1fc(0x04)
	float StationaryEnemyScale; // 0x200(0x04)

	void Receive_SetMissionParameters(UGeneratedMission* mission, FRandomStream Random);
	bool IsLocked(UFSDSaveGame* SaveGame);
	TArray<UMissionDuration*> GetValidDurations();
	TArray<UMissionComplexity*> GetValidComplexities();
	TSoftClassPtr<UObject> GetSoftReferenceToPLS();
	FObjectiveMissionIcon GetPrimaryObjectiveIconFromAsset(UMissionTemplate* mission, bool getSmallVersion);
	FObjectiveMissionIcon GetPrimaryObjectiveIcon(bool getSmallVersion);
	AProceduralSetup* GetPLS();
	int32_t GetMissionTypeIndex();
	UTexture2D* GetMissionImageLarge();
	UTexture2D* GetMissionButtonImage();
	UGeneratedMission* GenerateMission(UObject* WorldContextObject, UBiome* Biome, int32_t Seed, int32_t GlobalSeed, int32_t missionIndex, UMissionComplexity* limitComplexity, UMissionDuration* limitDuration, UMissionMutator* Mutator, TArray<UMissionWarning*> Warnings, UObjective* forceSecondary);
};

// Class FSD.MissionNameBank
// Size: 0x50 (Inherited: 0x30)
struct UMissionNameBank : UDataAsset {
	TArray<FText> FirstNames; // 0x30(0x10)
	TArray<FText> LastNames; // 0x40(0x10)

	TArray<FText> GetRandomGeneratedNames(FRandomStream Random, int32_t count);
};

// Class FSD.MissionComplexity
// Size: 0x60 (Inherited: 0x30)
struct UMissionComplexity : UDataAsset {
	FText Title; // 0x30(0x18)
	float HazardBonus; // 0x48(0x04)
	int32_t NumberOfDots; // 0x4c(0x04)
	FGuid SaveGameID; // 0x50(0x10)
};

// Class FSD.MissionDuration
// Size: 0x60 (Inherited: 0x30)
struct UMissionDuration : UDataAsset {
	FText Title; // 0x30(0x18)
	float HazardBonus; // 0x48(0x04)
	int32_t NumberOfDots; // 0x4c(0x04)
	FGuid SaveGameID; // 0x50(0x10)
};

// Class FSD.MissionDNA
// Size: 0x50 (Inherited: 0x28)
struct UMissionDNA : UObject {
	float MissionScale; // 0x28(0x04)
	float Weight; // 0x2c(0x04)
	UMissionComplexity* Complexity; // 0x30(0x08)
	UMissionDuration* Duration; // 0x38(0x08)
	TArray<FGameplayTagQuery> RoomQueries; // 0x40(0x10)

	float GetDurationHazardBonus();
	float GetComplexityHazardBonus();
};

// Class FSD.EscortMissionDNA
// Size: 0x58 (Inherited: 0x50)
struct UEscortMissionDNA : UMissionDNA {
	int32_t RefuelLocations; // 0x50(0x04)
};

// Class FSD.DNATester
// Size: 0x230 (Inherited: 0x220)
struct ADNATester : AActor {
	UMissionDNA* DNA; // 0x220(0x08)
	URoomGeneratorGroup* Group; // 0x228(0x08)
};

// Class FSD.MissionWarning
// Size: 0xd0 (Inherited: 0x30)
struct UMissionWarning : UDataAsset {
	TSoftClassPtr<UObject> MissionBP; // 0x30(0x28)
	TArray<TSoftClassPtr<UObject>> BannedObjectives; // 0x58(0x10)
	TArray<UMissionMutator*> BannedMutators; // 0x68(0x10)
	TArray<UMutator*> Mutators; // 0x78(0x10)
	FText Title; // 0x88(0x18)
	FText RichDescription; // 0xa0(0x18)
	UTexture2D* Icon; // 0xb8(0x08)
	float HazardBonus; // 0xc0(0x04)
	UMissionStat* MissionCompletedStat; // 0xc8(0x08)
};

// Class FSD.StatusEffectEnemies
// Size: 0xf8 (Inherited: 0x28)
struct UStatusEffectEnemies : URunningMissionBP {
	TArray<UStatusEffect*> StatusEffects; // 0x28(0x10)
	FGameplayTagContainer AllowedFilter; // 0x38(0x20)
	FGameplayTagQuery AllowedQuery; // 0x58(0x48)
	float ChanceToApply; // 0xa0(0x04)
	bool OverrideReplacesDefault; // 0xa4(0x01)
	TMap<UEnemyDescriptor*, UStatusEffect*> Overrides; // 0xa8(0x50)

	void OnEnemySpawned(APawn* enemy, UEnemyDescriptor* descriptor);
};

// Class FSD.HeroEnemies
// Size: 0xc0 (Inherited: 0x28)
struct UHeroEnemies : URunningMissionBP {
	FGameplayTagQuery AllowedQuery; // 0x28(0x48)
	TMap<UEnemyDescriptor*, FEliteEnemyEntry> Entries; // 0x70(0x50)

	void OnEnemySpawned(APawn* enemy, UEnemyDescriptor* descriptor);
};

// Class FSD.ExterminationReward
// Size: 0x58 (Inherited: 0x28)
struct UExterminationReward : URunningMissionBP {
	UResourceData* Resource; // 0x28(0x08)
	float AwardSize; // 0x30(0x04)
	FGameplayTagContainer AllowedFilter; // 0x38(0x20)

	void OnEnemyKilled(FGameplayTagContainer GameplayTags, AActor* killedEnemy);
};

// Class FSD.MOD_MakeEliteEnemy
// Size: 0xb0 (Inherited: 0xb0)
struct UMOD_MakeEliteEnemy : UActorComponent {
};

// Class FSD.MULE
// Size: 0x398 (Inherited: 0x380)
struct AMULE : ADeepPathfinderCharacter {
	UHealthComponent* HealthComponent; // 0x380(0x08)
	USimpleObjectInfoComponent* ObjectInfo; // 0x388(0x08)
	bool IsDown; // 0x390(0x01)

	void SetIsDown(bool IsDown);
	void SetControlledByDropShip(bool Control);
	void OnRep_IsDown();
};

// Class FSD.Molly
// Size: 0x3d0 (Inherited: 0x398)
struct AMolly : AMULE {
	FMulticastInlineDelegate OnCalledByChanged; // 0x398(0x10)
	UResourceBank* ResourceBank; // 0x3a8(0x08)
	UOutlineComponent* OutlineComponent; // 0x3b0(0x08)
	FMulticastInlineDelegate OnReachedDropShip; // 0x3b8(0x10)
	TWeakObjectPtr<APlayerCharacter> CalledBy; // 0x3c8(0x08)

	void SetOpenForDeposit(bool Open);
	void SetGotoDropShip(FVector Location);
	void SetCalledBy(APlayerCharacter* InPlayer);
	void OnRep_CalledBy();
	UDialogDataAsset* GetCallingShout();
	void EnableButton();
	void CalledByDelegate__DelegateSignature(APlayerCharacter* InPlayer);
};

// Class FSD.MiniMule
// Size: 0x3a8 (Inherited: 0x398)
struct AMiniMule : AMULE {
	TArray<AGem*> LostLegs; // 0x398(0x10)

	void SetLegsVisibleOnScanner();
	void OnLegsSetVisible();
	TArray<AGem*> FindLegsInLevelSortedByDistance();
};

// Class FSD.MotionAudioController
// Size: 0x830 (Inherited: 0x7e0)
struct UMotionAudioController : UFSDAudioComponent {
	float MaxValue; // 0x7d8(0x04)
	float IncreseSpeed; // 0x7dc(0x04)
	float DecaySpeed; // 0x7e0(0x04)
	bool DebugText; // 0x7e4(0x01)
	bool Clamp; // 0x7e5(0x01)
	bool Interp; // 0x7e6(0x01)
	float AccelerationThreshold; // 0x7e8(0x04)
	float SpeedThreshold; // 0x7f8(0x04)
	float FadeInTime; // 0x7fc(0x04)
	float FadeOutTime; // 0x800(0x04)
	bool AutoPlayOnSpeedThreshold; // 0x804(0x01)
};

// Class FSD.MountedGun
// Size: 0x248 (Inherited: 0x220)
struct AMountedGun : AActor {
	USkeletalMeshComponent* Mesh; // 0x230(0x08)
	UWeaponFireComponent* WeaponFire; // 0x238(0x08)
	UGunLogicComponent* GunLogic; // 0x240(0x08)

	void Server_Test();
};

// Class FSD.GunLogicComponent
// Size: 0xf0 (Inherited: 0xb0)
struct UGunLogicComponent : UActorComponent {
	UWeaponFireComponent* WeaponFire; // 0xb0(0x08)
	UMeshComponent* Mesh; // 0xb8(0x08)
	float RateOfFire; // 0xc0(0x04)
	UParticleSystem* MuzzleParticles; // 0xc8(0x08)
	UParticleSystem* TracerParticles; // 0xd0(0x08)
	USoundCue* FireSound; // 0xd8(0x08)
	float MinTracerDistance; // 0xe0(0x04)
	float TracerSpeed; // 0xe4(0x04)

	void SetMesh(UMeshComponent* Mesh);
	void OnWeaponFireEnded();
	void OnWeaponFired(FVector Location);
};

// Class FSD.MouseCursorWidget
// Size: 0x258 (Inherited: 0x250)
struct UMouseCursorWidget : UFSDUserWidget {
	enum class EFSDInputSource TargetInput; // 0x250(0x01)
	bool bIsHovering; // 0x251(0x01)

	void OnUnhover();
	void OnInputSourceChanged(enum class EFSDInputSource Source);
	void OnHover();
};

// Class FSD.MultiHitscanComponent
// Size: 0x2e8 (Inherited: 0x238)
struct UMultiHitscanComponent : UHitscanBaseComponent {
	FMulticastInlineDelegate OnHit; // 0x238(0x10)
	int32_t BulletsPerShot; // 0x248(0x04)
	float MuzzleRadius; // 0x24c(0x04)
	float GeneralImpactAudioVolume; // 0x250(0x04)
	TArray<AActor*> DamagedActorCache; // 0x258(0x10)
	FMultiHitScanHits Hits; // 0x268(0x30)
	TArray<AActor*> ActorsHit; // 0x298(0x10)

	void Server_RegisterHit(FMultiHitScanHits hitResults);
	void All_ShowHit(FMultiHitScanHits hitResults);
};

// Class FSD.MultiprojectileSpawner
// Size: 0x100 (Inherited: 0xb0)
struct UMultiprojectileSpawner : UActorComponent {
	TArray<FProjectileSpawnData> ProjectileData; // 0xb0(0x10)
	bool ProjectilesIgnoreEachOther; // 0xc0(0x01)

	bool GetIsFiring();
	void Fire(FVector Velocity, FVector Origin);
	UMultiprojectileSpawner* FindMultiProjectileSpawner(AActor* Actor, UDataAsset* RangedAttack);
};

// Class FSD.MusicLibrary
// Size: 0x48 (Inherited: 0x30)
struct UMusicLibrary : UDataAsset {
	TArray<USoundCue*> MusicCues; // 0x30(0x10)
	UMusicCategory* Category; // 0x40(0x08)
};

// Class FSD.MusicCategory
// Size: 0x38 (Inherited: 0x30)
struct UMusicCategory : UDataAsset {
	float FadeDuration; // 0x30(0x04)
};

// Class FSD.MusicReplicator
// Size: 0x238 (Inherited: 0x220)
struct AMusicReplicator : AActor {
	TArray<FActiveMusicItem> ActiveMusic; // 0x220(0x10)

	void OnRep_ActiveMusic();
};

// Class FSD.MusicManager
// Size: 0x90 (Inherited: 0x30)
struct UMusicManager : UWorldSubsystem {
	TMap<FMusicHandle, FActiveAudioItem> ActiveAudio; // 0x40(0x50)

	void StopHandle(FMusicHandle Handle);
	void StopCategory(UMusicCategory* Category);
	FMusicHandle PlayLibrary(UMusicLibrary* library);
	FMusicHandle Play(USoundBase* Music, UMusicCategory* Category);
};

// Class FSD.NewsTextLists
// Size: 0x70 (Inherited: 0x30)
struct UNewsTextLists : UDataAsset {
	TArray<FText> Verb; // 0x30(0x10)
	TArray<FText> Person; // 0x40(0x10)
	TArray<FText> Creature; // 0x50(0x10)
	TArray<FText> Resource; // 0x60(0x10)
};

// Class FSD.NewsTextHeadlines
// Size: 0x40 (Inherited: 0x30)
struct UNewsTextHeadlines : UDataAsset {
	TArray<FText> MineralTradeTicker; // 0x30(0x10)
};

// Class FSD.NoiseCarveAttackEffect
// Size: 0x48 (Inherited: 0x28)
struct UNoiseCarveAttackEffect : UAttackEffect {
	float ExpensiveNoise; // 0x28(0x04)
	float CarveDiameterCM; // 0x2c(0x04)
	float CarveNoiseCM; // 0x30(0x04)
	float CarveBurnThicknessCM; // 0x34(0x04)
	float CarverOffset; // 0x38(0x04)
	FName Socket; // 0x3c(0x08)
};

// Class FSD.NoiseFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNoiseFunctionLibrary : UBlueprintFunctionLibrary {

	void SphericalNoiseMovementComponent(UObject* WorldContextObject, USceneComponent* Component, FVector Center, float Radius, float Speed, float TimeOffset);
	void SphericalNoiseMovementActor(UObject* WorldContextObject, AActor* Actor, FVector Center, float Radius, float Speed, float TimeOffset);
	FVector NoiseSphere3D(UObject* WorldContextObject, float Time, float Radius);
	FVector2D NoiseSphere2D(UObject* WorldContextObject, float Time, float Radius);
	float Noise3D(UObject* WorldContextObject, float X, float Y, float Z);
	float Noise2D(UObject* WorldContextObject, float X, float Y);
	float Noise(UObject* WorldContextObject, float X);
};

// Class FSD.NoiseVisualizor
// Size: 0x260 (Inherited: 0x220)
struct ANoiseVisualizor : AActor {
	UFloodFillSettings* FloodFillSettings; // 0x228(0x08)
	float FreqMultiplier; // 0x230(0x04)
	float AmplitudeMultiplier; // 0x234(0x04)
	FVector NoiseSize; // 0x238(0x0c)
	float PointSize; // 0x244(0x04)
	float PostNoiseAmplitude; // 0x248(0x04)
	int32_t Octaves; // 0x24c(0x04)
	FVector Origin; // 0x250(0x0c)
	bool ShowNoise; // 0x25c(0x01)
	bool ShowTerrainNoise; // 0x25d(0x01)
};

// Class FSD.NoisyPathfinderComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UNoisyPathfinderComponent : UActorComponent {
};

// Class FSD.NoisyPathfinderTest
// Size: 0x2b0 (Inherited: 0x220)
struct ANoisyPathfinderTest : AActor {
	FVector Start; // 0x220(0x0c)
	FVector End; // 0x22c(0x0c)
	FVector StartDirection; // 0x238(0x0c)
	FVector EndDirection; // 0x244(0x0c)
	float DirectionDistance; // 0x250(0x04)
	float DirectionPenalty; // 0x254(0x04)
	float ZPenaltyPower; // 0x258(0x04)
	float ZPenaltyScale; // 0x25c(0x04)
	float DistancePenaltyScale; // 0x260(0x04)
	float RandomPenaltyScale; // 0x264(0x04)
	TArray<FPathObstacle> obstacles; // 0x268(0x10)
	UTunnelSegmentSetting* TunnelSettings; // 0x278(0x08)
	UTunnelParameters* TunnelParameters; // 0x280(0x08)
	int32_t StepSize; // 0x288(0x04)
	bool Realtime; // 0x28c(0x01)
	bool CarvePath; // 0x28d(0x01)
	bool CanDiagonal; // 0x28e(0x01)
	UFloodFillSettings* FloodFillSettings; // 0x290(0x08)
	ADeepCSGWorld* CSGWorld; // 0x298(0x08)
};

// Class FSD.NoMovementStateComponent
// Size: 0x108 (Inherited: 0x100)
struct UNoMovementStateComponent : UCharacterStateComponent {
	bool DisableHeadLightOnEnter; // 0x100(0x01)
	bool EnableHeadLightOnExit; // 0x101(0x01)
};

// Class FSD.AttachedStateComponent
// Size: 0x130 (Inherited: 0x100)
struct UAttachedStateComponent : UCharacterStateComponent {
	bool DisableHeadLightOnEnter; // 0x100(0x01)
	bool EnableHeadLightOnExit; // 0x101(0x01)
	float MaxPitch; // 0x104(0x04)
};

// Class FSD.OxygenComponent
// Size: 0x110 (Inherited: 0xb0)
struct UOxygenComponent : UActorComponent {
	FMulticastInlineDelegate OnOxygenChanged; // 0xb0(0x10)
	FMulticastInlineDelegate OnOxygenReplenishingEvent; // 0xc0(0x10)
	float OxygenGivenOnRevive; // 0xd0(0x04)
	float CurrentOxygen; // 0xd4(0x04)
	float OxygenReplinishmentRate; // 0xd8(0x04)
	int32_t NetworkedOxygen; // 0xdc(0x04)
	bool IsReplenishingOxygen; // 0xe4(0x01)
	float OxygenDepletionPersecond; // 0xe8(0x04)
	TArray<FOxygenCallback> Callbacks; // 0xf0(0x10)
	UStatusEffect* NoOxygenStatusEffect; // 0x108(0x08)

	void RegisterOxygenEvent(FDelegate OxygenCallback, float oxygenLevel, bool triggerOnOxygenLoss);
	void OnRevived();
	void OnRep_NetworkedOxygen(int32_t OldValue);
	void OnRep_IsReplenishingOxygen();
	void OnDeath(UHealthComponentBase* HealthComponent);
};

// Class FSD.OxygenSourceComponent
// Size: 0xe8 (Inherited: 0xb0)
struct UOxygenSourceComponent : UActorComponent {
	float SourceRadius; // 0xb0(0x04)
	float CenterOffset; // 0xb4(0x04)
	FMulticastInlineDelegate OnOxygenActivationChanged; // 0xb8(0x10)
	UNoOxygenMutator* Mutator; // 0xc8(0x08)

	void OnTimerTick();
	void OnSourceActivated();
};

// Class FSD.PlayerCharacterID
// Size: 0x90 (Inherited: 0x30)
struct UPlayerCharacterID : UDataAsset {
	FGuid SaveGameID; // 0x38(0x10)
	FName AssetName; // 0x48(0x08)
	TSoftClassPtr<UObject> Character; // 0x50(0x28)
	FString AnalyticsID; // 0x78(0x10)
	UPlayerCharacterData* CharacterData; // 0x88(0x08)

	APlayerCharacter* GetCharacterClass();
	APlayerCharacter* GetCharacter();
};

// Class FSD.ItemID
// Size: 0x90 (Inherited: 0x58)
struct UItemID : USavableDataAsset {
	TSoftClassPtr<UObject> Item; // 0x58(0x28)
	UPlayerCharacterID* ItemOwner; // 0x80(0x08)
	enum class EItemCategory ItemCategory; // 0x88(0x01)

	AItem* GetItemClass();
	enum class EItemCategory GetItemCategory();
	AItem* GetItem();
	AActor* GetActorClass();
	AActor* GetActor();
};

// Class FSD.EnemyID
// Size: 0x58 (Inherited: 0x58)
struct UEnemyID : USavableDataAsset {
};

// Class FSD.CategoryID
// Size: 0x48 (Inherited: 0x30)
struct UCategoryID : UDataAsset {
	FGuid SaveGameID; // 0x38(0x10)
};

// Class FSD.ActorContextWidget
// Size: 0x240 (Inherited: 0x230)
struct UActorContextWidget : UUserWidget {
	AActor* ContextActor; // 0x230(0x08)
	UPrimitiveComponent* ContextPrimitive; // 0x238(0x08)

	void Update(UPrimitiveComponent* InContextPrimitive);
	void Show(UPrimitiveComponent* InContextPrimitive);
	void ReceiveUpdate(UPrimitiveComponent* InContextPrimitive);
	void ReceiveShow(UPrimitiveComponent* InContextPrimitive);
	void ReceiveContextActorChanged(AActor* InContextActor);
};

// Class FSD.ObjectiveWidget
// Size: 0x290 (Inherited: 0x230)
struct UObjectiveWidget : UUserWidget {
	FMulticastInlineDelegate OnObjectiveWidgetUpdated; // 0x230(0x10)
	UObjective* MissionObjective; // 0x240(0x08)
	bool bIsPrimaryObjective; // 0x248(0x01)
	FText ObjectiveText; // 0x250(0x18)
	FText ObjectiveCounterText; // 0x268(0x18)
	UTexture2D* ObjectiveCounterIcon; // 0x280(0x08)
	bool bObjectiveCompleted; // 0x288(0x01)

	void SetText(FText InText, FText InCounterText, UTexture2D* InCounterIcon, bool InObjectiveCompleted);
	void SetSimpleText(FText InText, bool InObjectiveCompleted);
	void SetObjective(UObjective* InObjective, bool InIsPrimaryObjective);
	void ReceiveObjectiveUpdated();
	void ReceiveObjectiveInitialized();
	void OnObjectiveUpdated(UObjective* InObjective);
	void ObjectiveWidgetDelegate__DelegateSignature(UObjectiveWidget* InObjectiveWidget);
};

// Class FSD.OptionalObjectiveWidget
// Size: 0x240 (Inherited: 0x230)
struct UOptionalObjectiveWidget : UUserWidget {
	FMulticastInlineDelegate OnWidgetUpdated; // 0x230(0x10)

	void SignalWidgetUpdated();
	void SetObjective(UObjective* obj);
	void OptionalObjectiveWidgetDelegate__DelegateSignature(UOptionalObjectiveWidget* InOptionalObjectiveWidget);
};

// Class FSD.ObjectivesManager
// Size: 0x100 (Inherited: 0xb0)
struct UObjectivesManager : UActorComponent {
	FMulticastInlineDelegate OnObjectivesCompleted; // 0xb0(0x10)
	FMulticastInlineDelegate OnObjectivesChanged; // 0xc0(0x10)
	FMulticastInlineDelegate OnAllRequiredReturnObjectivesCompleted; // 0xd0(0x10)
	UObjective* Objective; // 0xe0(0x08)
	TArray<UObjective*> SecondaryObjectives; // 0xe8(0x10)
	bool ObjectivesInitialized; // 0xf8(0x01)
	bool ObjectivesStarted; // 0xf9(0x01)
	bool bCheatObjectivesCompleted; // 0xfa(0x01)

	void OnObjectiveChanged(UObjective* obj);
	UObjective* GetSecondaryObjective();
	UObjective* GetPrimaryObjective();
	void ExitPodDescending();
	void ExitPodArrived();
	void DropPodExited();
};

// Class FSD.ObjectTemperatureComponent
// Size: 0x100 (Inherited: 0xc8)
struct UObjectTemperatureComponent : UTemperatureComponent {
	float TemperatureChangeScale; // 0xc8(0x04)
	float BurnTemperature; // 0xcc(0x04)
	float DouseFireTemperature; // 0xd0(0x04)
	int32_t CoolingRate; // 0xd4(0x04)
	bool IsHeatsourceWhenOnFire; // 0xd8(0x01)
	float OnFireHeatRange; // 0xdc(0x04)

	void TimerCallback();
	void OnDeath(UHealthComponentBase* HealthComponent);
};

// Class FSD.ObstructionChecker
// Size: 0x240 (Inherited: 0x1f0)
struct UObstructionChecker : USceneComponent {
	FMulticastInlineDelegate OnObstructionChangedEvent; // 0x1f0(0x10)
	float DistanceToCheck; // 0x200(0x04)
	float CheckInterval; // 0x208(0x04)
	TArray<FVector> RayOffsets; // 0x210(0x10)

	void Timer_Tick();
	void Timer_Result();
	void CheckForObstructions();
};

// Class FSD.OldZiplineSalvage
// Size: 0x238 (Inherited: 0x220)
struct AOldZiplineSalvage : AActor {
	AZipLineProjectile* ZiplineProjectileClass; // 0x220(0x08)
	FVector RelativeDestinationLocation; // 0x228(0x0c)

	void OnMatchStarted();
};

// Class FSD.OptionalUIWidget
// Size: 0x240 (Inherited: 0x230)
struct UOptionalUIWidget : UUserWidget {
	UOptionalUICategory* Category; // 0x230(0x08)
	enum class ESlateVisibility VisibleFlag; // 0x238(0x01)
	enum class ESlateVisibility HiddenFlag; // 0x239(0x01)

	void OnVisibilityChanged(UOptionalUICategory* UICategory, bool IsVisible);
};

// Class FSD.OutlineComponent
// Size: 0xf8 (Inherited: 0xb0)
struct UOutlineComponent : UActorComponent {
	FMulticastInlineDelegate OnOutlineChanged; // 0xb0(0x10)
	enum class EOutline DefaultOutline; // 0xc0(0x01)
	bool ActiveOnHoldTAB; // 0xc1(0x01)
	float CustomLaserPointDuration; // 0xc4(0x04)
	int32_t LockCounter; // 0xc8(0x04)
	enum class EOutline CurrentOutline; // 0xcc(0x01)
	TArray<UPrimitiveComponent*> OutlinedComponents; // 0xd0(0x10)
	TArray<UPrimitiveComponent*> ExcludedComponents; // 0xe0(0x10)
	TWeakObjectPtr<APlayerCharacter> Character; // 0xf0(0x08)

	void UnlockOutline();
	void ToggleDefaultOutline(bool Visible);
	void SetOutline(enum class EOutline outline);
	void RemoveFromOutline(UPrimitiveComponent* Component);
	void OutlineChanged__DelegateSignature(enum class EOutline InOutline);
	void OnToggleOutline(bool Visible);
	void OnOwnerDeath(UHealthComponentBase* HealthComponent);
	void OnLocalPlayerSet(APlayerCharacter* PlayerCharacter);
	void OnItemUnequipped(AItem* Item);
	void OnItemEquipped(AItem* Item);
	void LockOutline();
	void EnableActivateOnHoldTab();
	void AddToOutline(UPrimitiveComponent* Component);
	void AddActorToOutline(AActor* Actor);
};

// Class FSD.OverclockBank
// Size: 0x90 (Inherited: 0x30)
struct UOverclockBank : UDataAsset {
	TMap<UOverclockUpgrade*, USchematic*> Overclocks; // 0x38(0x50)
	UItemID* OwningItem; // 0x88(0x08)
};

// Class FSD.OverheatingAggregator
// Size: 0x100 (Inherited: 0xc8)
struct UOverheatingAggregator : UItemAggregator {
	FMulticastInlineDelegate OnOverheatingProgressChanged; // 0xc8(0x10)
	FMulticastInlineDelegate OnOverheatedChanged; // 0xd8(0x10)
	float HeatLossPerSecond; // 0xec(0x04)
	float OverheatedDuration; // 0xf0(0x04)
	bool bIsOverheated; // 0xf4(0x01)
	float Temperature; // 0xf8(0x04)

	void Server_SetTemperature(float NewTemperature);
	void Server_SetIsOverheated(bool NewOverheated);
	void OverheatingProgressChanged__DelegateSignature(float Progress);
	void OverheatedChanged__DelegateSignature(bool Overheated);
	void OnRep_Temperature();
	void OnRep_IsOverheated();
	float GetTemperature();
	float GetOverheatingProgress();
	bool GetIsOverheated();
};

// Class FSD.ParalyzedStateComponent
// Size: 0x140 (Inherited: 0x100)
struct UParalyzedStateComponent : UCharacterStateComponent {
	TSoftClassPtr<UObject> CaveLeechClass; // 0x108(0x28)
	float CameraArmHeightOffset; // 0x134(0x04)
	float CameraArmSpeed; // 0x138(0x04)
};

// Class FSD.ParasiteEnemy
// Size: 0x398 (Inherited: 0x340)
struct AParasiteEnemy : AEnemyPawn {
	USceneComponent* Root; // 0x340(0x08)
	USkeletalMeshComponent* Mesh; // 0x348(0x08)
	UStaticMeshComponent* Tentacles1; // 0x350(0x08)
	UStaticMeshComponent* Tentacles2; // 0x358(0x08)
	UOutlineComponent* outline; // 0x360(0x08)
	UParticleSystem* deathParticles; // 0x380(0x08)
	USoundBase* deathSound; // 0x388(0x08)

	void OnSelfDeath(UHealthComponentBase* aHealthComponent);
};

// Class FSD.PassedOutStateComponent
// Size: 0x110 (Inherited: 0x100)
struct UPassedOutStateComponent : UCharacterStateComponent {
	UDialogDataAsset* ReviveShout; // 0x100(0x08)
	bool bAllPlayersPassedOut; // 0x108(0x01)

	void ReceiveTeamPassedOut();
};

// Class FSD.PathfinderCollisionComponent
// Size: 0x490 (Inherited: 0x480)
struct UPathfinderCollisionComponent : UStaticMeshComponent {
	bool ActivatePFCollisionAtInit; // 0x480(0x01)
	enum class PFCollisionType PFColiType; // 0x481(0x01)

	void DisablePFCollision();
	void ActivatePFCollision();
};

// Class FSD.PathfinderSplineSegmentCollisionComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UPathfinderSplineSegmentCollisionComponent : UActorComponent {
	float Radius; // 0xb0(0x04)
	enum class PFCollisionType CollisionType; // 0xb4(0x01)

	void UpdateFromSpline(USplineComponent* SplineComponent, int32_t StartIndex);
	void Update(FVector SplineStart, FVector SplineStartTangent, FVector SplineEnd, FVector SplineEndTangent);
	void Clear();
};

// Class FSD.PathfinderDebugProbe
// Size: 0x228 (Inherited: 0x220)
struct APathfinderDebugProbe : AActor {
	AActor* Dest; // 0x220(0x08)
};

// Class FSD.RaycastDebugProbe
// Size: 0x228 (Inherited: 0x220)
struct ARaycastDebugProbe : AActor {
	UTerrainType* TerrainType; // 0x220(0x08)
};

// Class FSD.FindPointKeepingDistanceProbe
// Size: 0x238 (Inherited: 0x220)
struct AFindPointKeepingDistanceProbe : AActor {
	float MinDistance; // 0x220(0x04)
	float MaxDistance; // 0x224(0x04)
	AActor* Target; // 0x228(0x08)
	float IdealTargetDist; // 0x230(0x04)
};

// Class FSD.PathfinderFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPathfinderFunctionLibrary : UBlueprintFunctionLibrary {

	FVector SnapToGrid(UObject* WorldContextObject, FVector Origin, enum class DeepPathFinderType pathType, enum class DeepPathFinderSize pathSize, float maxSnapDistance);
	bool IsPathfinderReady(UObject* WorldContextObject);
	FVector FindRandomPositionOnNavmeshAtDistance(UObject* WorldContextObject, FVector Origin, float atDistance);
	FVector FindRandomNearbyPositionOnNavmesh(UObject* WorldContextObject, FVector Origin, float Radius);
	FVector FindPointAlongPathTo(UObject* WorldContextObject, FVector Origin, FVector Destination, float atDistance);
};

// Class FSD.PathfinderVehicle
// Size: 0x2b0 (Inherited: 0x280)
struct APathfinderVehicle : APawn {
	UDeepPathfinderMovement* PathfinderMovement; // 0x290(0x08)
	USkeletalMeshComponent* Mesh; // 0x298(0x08)
	UHealthComponent* HealthComponent; // 0x2a0(0x08)
	float Speed; // 0x2a8(0x04)
};

// Class FSD.PatrolBot
// Size: 0x600 (Inherited: 0x3a0)
struct APatrolBot : AEnemyDeepPathfinderCharacter {
	UHackingUsableComponent* HackingUsable; // 0x3a8(0x08)
	UPawnSensingComponent* PawnSensing; // 0x3b0(0x08)
	USphereComponent* CollisionSphere; // 0x3b8(0x08)
	USphereComponent* NearTargetSphere; // 0x3c0(0x08)
	UParticleSystemComponent* LaserBeam; // 0x3c8(0x08)
	UParticleSystemComponent* TearingGroundParticles; // 0x3d0(0x08)
	UEnemyComponent* EnemyComponent; // 0x3d8(0x08)
	UDamageComponent* Damage; // 0x3e0(0x08)
	UDamageComponent* BumpDamage; // 0x3e8(0x08)
	UPawnAlertComponent* Alert; // 0x3f0(0x08)
	UPlayerImpactCooldownComponent* ImpactCooldown; // 0x3f8(0x08)
	UAudioComponent* RollingAudio; // 0x400(0x08)
	UAudioComponent* FlyingAudio; // 0x408(0x08)
	UProjectileAttackComponent* RollingRangedAttack; // 0x410(0x08)
	UProjectileAttackComponent* FlyingRangedAttack; // 0x418(0x08)
	UProjectileAttackComponent* MissileAttack; // 0x420(0x08)
	float MaxMotionSoundVelThresholdFlying; // 0x434(0x04)
	float MaxMotionSoundVelThreshold; // 0x438(0x04)
	float MaxTurningMotionSoundVelThreshold; // 0x43c(0x04)
	bool DebugAudio; // 0x440(0x01)
	float HackedAttackMultiplier; // 0x444(0x04)
	bool IsLockedOn; // 0x460(0x01)
	float DelayAfterLockOn; // 0x464(0x04)
	USoundCue* ImpactCue; // 0x468(0x08)
	USoundCue* JumpSound; // 0x470(0x08)
	USoundCue* StartupAccelerationSound; // 0x478(0x08)
	float LaunchPower; // 0x480(0x04)
	float SpawnRocketsTime; // 0x488(0x04)
	enum class EPatrolBotState State; // 0x48d(0x01)
	enum class EPatrolBotControlState ControlState; // 0x48f(0x01)
	float HackedAttackSpeedMultiplier; // 0x4e0(0x04)
	float LaserPenetrationDistance; // 0x4e4(0x04)
	float MinTurretAngle; // 0x4e8(0x04)
	float MaxTurretAngle; // 0x4ec(0x04)
	float SpawnRocketsChance; // 0x4f0(0x04)
	float GunRange; // 0x4f4(0x04)
	float RollingAttackCooldown; // 0x4f8(0x04)
	float FlyingAttackCooldown; // 0x4fc(0x04)
	float TurretLerpSpeed; // 0x500(0x04)
	float AimDownwardsOffset; // 0x504(0x04)
	float AccelerationThreshold; // 0x50c(0x04)
	float LowSpeedThreshold; // 0x510(0x04)
	FRuntimeFloatCurve SpeedTiltCurve; // 0x520(0x88)
	UFakeMoverSettings* RollSettings; // 0x5a8(0x08)
	UFakeMoverSettings* JumpSettings; // 0x5b0(0x08)
	UFakeMoverSettings* SpawnRocketsSettings; // 0x5b8(0x08)
	bool CanJump; // 0x5c0(0x01)
	float JumpForce; // 0x5c4(0x04)
	float StartFlyingTimer; // 0x5c8(0x04)
	float MinRollingTime; // 0x5cc(0x04)
	float MaxRollingTime; // 0x5d0(0x04)
	float MinFlyingTime; // 0x5d4(0x04)
	float MaxFlyingTime; // 0x5d8(0x04)
	float SinSpeed; // 0x5e0(0x04)
	float SinSize; // 0x5e4(0x04)
	float FlyingDampOmega; // 0x5ec(0x04)
	float RollingDampOmega; // 0x5f0(0x04)
	bool FiringRockets; // 0x5f4(0x01)
	bool Alerted; // 0x5f5(0x01)
	AActor* CurrentTarget; // 0x5f8(0x08)

	void SetIsPatrolling(bool patroling);
	void SetHacked();
	void SetFiringRockets(bool firing);
	void ReviveDrone();
	void OnStateChangedEvent(enum class EPatrolBotState CurrentState);
	void OnSpawnRocketsEvent();
	void OnRocketsEnded();
	void OnRevived();
	void OnRep_State();
	void OnRep_IsLockedOn();
	void OnRep_FiringRockets();
	void OnRep_ControlState(enum class EPatrolBotControlState oldState);
	void OnProjectileSpawned();
	void OnMovementStateChanged(enum class EDeepMovementState State);
	void OnLockedOn();
	void OnLandedEvent();
	void OnJumpEvent();
	void OnFireRockets();
	void OnDroneHacked();
	void OnDroneAlerted();
	void OnDisabled();
	void OnDeath(UHealthComponentBase* aHealthComponent);
	void OnControlStateChanged(enum class EPatrolBotControlState ControlState);
	void OnCollided(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void Jumped();
	bool IsHacked();
	void ImpactSound();
	void EndFireRockets();
	void DisableDrone();
};

// Class FSD.SpiderAnimInstance
// Size: 0x410 (Inherited: 0x2c0)
struct USpiderAnimInstance : UEnemyAnimInstance {
	float Speed; // 0x2c0(0x04)
	FVector Velocity; // 0x2c4(0x0c)
	float WalkCycleSpeed; // 0x2d0(0x04)
	float StartMovingSpeed; // 0x2d4(0x04)
	float StopMovingSpeed; // 0x2d8(0x04)
	float WalkCycleMinRate; // 0x2dc(0x04)
	float WalkCyclePlayRate; // 0x2e0(0x04)
	float MeshScale; // 0x2e4(0x04)
	float Direction; // 0x2e8(0x04)
	float PathDirectionLerpSpeedIn; // 0x2ec(0x04)
	float PathDirectionLerpSpeedOut; // 0x2f0(0x04)
	float PathDirection; // 0x2f4(0x04)
	float HorizontalAngularSpeed; // 0x2f8(0x04)
	float HorizontalAngularSpeed_Abs; // 0x2fc(0x04)
	float VerticalAngularSpeed; // 0x300(0x04)
	enum class EMoveDirection MoveDirection; // 0x304(0x01)
	bool IsMoving; // 0x305(0x01)
	bool IsStrafing; // 0x306(0x01)
	bool IsMovingAndStrafing; // 0x307(0x01)
	bool IsFrozen; // 0x308(0x01)
	bool IsStaggered; // 0x309(0x01)
	float StaggerStrength; // 0x30c(0x04)
	bool IsAirborne; // 0x310(0x01)
	UParticleSystem* FootstepParticle; // 0x318(0x08)
	USoundCue* FootstepSound; // 0x320(0x08)
	FName FootStepLeftBoneName; // 0x328(0x08)
	FName FootStepRightBoneName; // 0x330(0x08)
	float FootStepParticleCullDistance; // 0x338(0x04)
	TMap<UEnemyPlaySoundKey*, USoundCue*> PlaySoundByKeyMap; // 0x340(0x50)
	TMap<UEnemySpawnEffectsKey*, UParticleSystem*> SpawnEffectsByKeyMap; // 0x390(0x50)
	int32_t RandomWalkCycleIndex; // 0x3e0(0x04)
	TArray<FRandomWalkCycleEntry> RandomWalkCycles; // 0x3e8(0x10)
	bool TurnToIdle; // 0x3f8(0x01)
	bool IdleToTurnLeft; // 0x3f9(0x01)
	bool IdleToTurnRight; // 0x3fa(0x01)
	bool TurnToWalk; // 0x3fb(0x01)
	bool WalkToTurnRight; // 0x3fc(0x01)
	bool WalkToTurnLeft; // 0x3fd(0x01)
	bool IsInFakePhysics; // 0x3fe(0x01)

	void SetMeshScale(float newScale);
	void SetDeathAnimation(UAnimSequenceBase* Animation);
	void PlayForcedCycle(float Duration);
};

// Class FSD.PatrolBotAnimInstance
// Size: 0x440 (Inherited: 0x410)
struct UPatrolBotAnimInstance : USpiderAnimInstance {
	FRotator TurretRotation; // 0x408(0x0c)
	float Tilt; // 0x414(0x04)
	bool Rolling; // 0x418(0x01)
	bool Disabled; // 0x419(0x01)
	bool FlyingDisable; // 0x41a(0x01)
	FRotator WheelRotation; // 0x41c(0x0c)
	float CurrentTilt; // 0x428(0x04)
	float TiltSpeed; // 0x42c(0x04)
	float WheelSpeedModifier; // 0x430(0x04)
};

// Class FSD.PawnAffliction
// Size: 0x88 (Inherited: 0x30)
struct UPawnAffliction : UDataAsset {
	UTexture2D* Icon; // 0x30(0x08)
	FColor IconColor; // 0x38(0x04)
	FColor IconColorBG; // 0x3c(0x04)
	bool bShowPlayerIcon; // 0x40(0x01)
	bool bShowOnEnemyHealthbar; // 0x41(0x01)
	UPlayerAfflictionOverlay* AfflictionOverlay; // 0x48(0x08)
	TArray<UAfflictionEffect*> EnemyEffects; // 0x50(0x10)
	TArray<UAfflictionEffect*> PlayerFirstPersonEffects; // 0x60(0x10)
	TArray<UAfflictionEffect*> PlayerThirdPersonEffects; // 0x70(0x10)
	UDialogDataAsset* PlayerShoutOnBegin; // 0x80(0x08)
};

// Class FSD.AfflictionFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAfflictionFunctionLibrary : UBlueprintFunctionLibrary {

	void PlayEnemyExplosionEffects(AFSDPawn* enemy);
};

// Class FSD.PawnAfflictionComponent
// Size: 0x260 (Inherited: 0xb0)
struct UPawnAfflictionComponent : UActorComponent {
	FMulticastInlineDelegate OnAfflictionActivatedEvent; // 0xb0(0x10)
	FMulticastInlineDelegate OnAfflictionDeactivatedEvent; // 0xc0(0x10)
	TMap<UPawnAffliction*, FPawnAfflictionItem> ActiveAfflictions; // 0xd0(0x50)
	FAfflictionEntriesArray NetworkedAfflictions; // 0x120(0x120)
	UFrozenAfflictionEffect* FrozenEffect; // 0x240(0x08)
	UBurningAfflictionEffect* BurningEffect; // 0x248(0x08)
	enum class EFrozenBitsSize EffectSize; // 0x250(0x01)
	float BaseEffectScale; // 0x254(0x04)
	bool UseDormancy; // 0x258(0x01)

	void PushAffliction(UPawnAffliction* Affliction, bool onlyIfNotActive);
	void PopAffliction(UPawnAffliction* Affliction);
	void OnDeath(UHealthComponentBase* HealthComponent);
	bool IsAfflictedBy(UPawnAffliction* Affliction);
	TArray<UPawnAffliction*> GetActiveAfflictions();
};

// Class FSD.PlayerAfflictionOverlay
// Size: 0x80 (Inherited: 0x30)
struct UPlayerAfflictionOverlay : UDataAsset {
	UTexture2D* Texture; // 0x30(0x08)
	FLinearColor TextureTint; // 0x38(0x10)
	UPlayerAfflictionOverlayWidget* WidgetOverride; // 0x48(0x08)
	int32_t ZOrder; // 0x50(0x04)
	TSoftObjectPtr<USoundCue> Audio2D_OnBegin; // 0x58(0x28)
};

// Class FSD.PlayerAfflictionComponent
// Size: 0x2d8 (Inherited: 0x260)
struct UPlayerAfflictionComponent : UPawnAfflictionComponent {
	FMulticastInlineDelegate OnShowOverlay; // 0x260(0x10)
	FMulticastInlineDelegate OnHideOverlay; // 0x270(0x10)
	TMap<UPlayerAfflictionOverlay*, int32_t> ActiveOverlays; // 0x280(0x50)
	TWeakObjectPtr<APlayerCharacter> Character; // 0x2d0(0x08)

	void ShowPlayerOverlay(UPlayerAfflictionOverlay* Overlay);
	void OverlayDelegate__DelegateSignature(UPlayerAfflictionOverlay* Overlay);
	void HidePlayerOverlay(UPlayerAfflictionOverlay* Overlay);
};

// Class FSD.EnemyPawnAfflictionComponent
// Size: 0x260 (Inherited: 0x260)
struct UEnemyPawnAfflictionComponent : UPawnAfflictionComponent {
};

// Class FSD.DeepPatherFinderCharacterAfflictionComponent
// Size: 0x268 (Inherited: 0x260)
struct UDeepPatherFinderCharacterAfflictionComponent : UPawnAfflictionComponent {
	ADeepPathfinderCharacter* Character; // 0x260(0x08)
};

// Class FSD.StaticObjectAfflictionComponent
// Size: 0x268 (Inherited: 0x260)
struct UStaticObjectAfflictionComponent : UPawnAfflictionComponent {
	UStaticMeshComponent* Mesh; // 0x260(0x08)
};

// Class FSD.AnimatedObjectAfflictionComponent
// Size: 0x268 (Inherited: 0x260)
struct UAnimatedObjectAfflictionComponent : UPawnAfflictionComponent {
	USkeletalMeshComponent* Mesh; // 0x260(0x08)
};

// Class FSD.PlayerAfflictionOverlayWidget
// Size: 0x240 (Inherited: 0x230)
struct UPlayerAfflictionOverlayWidget : UUserWidget {
	bool bOverlayActive; // 0x230(0x01)
	UPlayerAfflictionOverlay* Overlay; // 0x238(0x08)

	void ReceiveEndOverlay();
	void ReceiveBeginOverlay(UTexture2D* InTexture, FLinearColor InTint);
	void EndOverlay();
	void BeginOverlay(UPlayerAfflictionOverlay* InOverlay);
};

// Class FSD.PawnAlertComponent
// Size: 0xd0 (Inherited: 0xb0)
struct UPawnAlertComponent : UActorComponent {
	FMulticastInlineDelegate OnAlertedFromDamage; // 0xb0(0x10)
	bool AutoAlertAI; // 0xc0(0x01)
	bool ShouldAlertNearby; // 0xc1(0x01)
	float AlertRadius; // 0xc4(0x04)

	void StopAutoAlerting();
	void OnPawnSeen(APawn* Pawn);
	void OnHit(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	void OnAlerted();
	void AleartNearby();
};

// Class FSD.PawnStat
// Size: 0x38 (Inherited: 0x30)
struct UPawnStat : UDataAsset {
	float StartingValue; // 0x30(0x04)
	enum class EPawnStatType PawnStatType; // 0x34(0x01)
	enum class EPawnStatType ValueModificationType; // 0x35(0x01)
};

// Class FSD.PawnStatsComponent
// Size: 0x1d8 (Inherited: 0xb0)
struct UPawnStatsComponent : UActorComponent {
	FPawnStatEntriesArray Stats; // 0xb0(0x120)
	bool UseDormancy; // 0x1d0(0x01)

	void RemoveModifier(UPawnStat* Stat, float Value);
	float GetStatValue(UPawnStat* Stat);
	void ChangeModifier(UPawnStat* Stat, float CurrentValue, float NewValue);
	int32_t AddModifier(UPawnStat* Stat, float Value);
};

// Class FSD.PerkLogic
// Size: 0xb0 (Inherited: 0xb0)
struct UPerkLogic : UActorComponent {

	void StartLogic(int32_t Rank);
	APlayerCharacter* GetCharacter();
	FText GetAdditionalText(int32_t Rank);
};

// Class FSD.PerkDelegateItem
// Size: 0x78 (Inherited: 0x28)
struct UPerkDelegateItem : UObject {
	FMulticastInlineDelegate OnPerkClaimed; // 0x28(0x10)
	FMulticastInlineDelegate OnPerkEquipped; // 0x38(0x10)
	FMulticastInlineDelegate OnPerkUnequipped; // 0x48(0x10)
	FMulticastInlineDelegate OnPerkHighlighted; // 0x58(0x10)
	FMulticastInlineDelegate OnChargesUsedChanged; // 0x68(0x10)
};

// Class FSD.PerkSubsystem
// Size: 0x80 (Inherited: 0x30)
struct UPerkSubsystem : UWorldSubsystem {
	TMap<UPerkAsset*, UPerkDelegateItem*> PerkDelegates; // 0x30(0x50)

	UPerkDelegateItem* GetPerkDelegates(UPerkAsset* Perk);
};

// Class FSD.PerkHUDWidget
// Size: 0x238 (Inherited: 0x230)
struct UPerkHUDWidget : UUserWidget {
	UPerkAsset* PerkAsset; // 0x230(0x08)

	void SetPerkAsset(UPerkAsset* InPerk);
	void ReceivePerkAssetChanged();
	AFSDPlayerState* GetFSDPlayerState();
	APlayerCharacter* GetCharacter();
};

// Class FSD.PerkHUDIconWidget
// Size: 0x240 (Inherited: 0x238)
struct UPerkHUDIconWidget : UPerkHUDWidget {
	float CoolDownProgress; // 0x238(0x04)
};

// Class FSD.PerkHUDActivationWidget
// Size: 0x240 (Inherited: 0x238)
struct UPerkHUDActivationWidget : UPerkHUDWidget {
	enum class EPerkHUDActivationLocation Location; // 0x238(0x01)
};

// Class FSD.PerkFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPerkFunctionLibrary : UBlueprintFunctionLibrary {

	void SplitPerksByUsage(TArray<UPerkAsset*> perks, TArray<UPerkAsset*> OutPassivePerks, TArray<UPerkAsset*> OutActivePerks);
	TArray<UPerkAsset*> SortPerksByUsage(TArray<UPerkAsset*> perks);
	void GetPerkEquipSlots(UObject* WorldContext, enum class EPerkUsageType InType, APlayerCharacter* InCharacterClass, int32_t OutAvailableSlots, int32_t OutUnavailableSlots, int32_t OutPromotionLockedSlots);
	TArray<enum class EPerkSlotType> GetPerkEquipSlotLayout(UObject* WorldContext, enum class EPerkUsageType InType, APlayerCharacter* InCharacterClass);
	TArray<UPerkAsset*> GetOwnedPerksByType(UObject* WorldContext, enum class EPerkUsageType InType);
	TArray<UPerkAsset*> GetOwnedPerks(UObject* WorldContext);
	FText FormatRichText(FText SourceText, bool UpperCase, TMap<FString, FString> CharTagMap);
};

// Class FSD.PerkUsageComponent
// Size: 0xd8 (Inherited: 0xb0)
struct UPerkUsageComponent : UActorComponent {
	TArray<FPerkUsage> PerkUsageReplicated; // 0xb8(0x10)

	void Server_MarkPerkUsed(UPerkAsset* Perk);
	void Server_CheatReset();
	void OnRep_PerkUsageReplicated();
};

// Class FSD.PhotographyStateComponent
// Size: 0x100 (Inherited: 0x100)
struct UPhotographyStateComponent : UCharacterStateComponent {
};

// Class FSD.PickaxeFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPickaxeFunctionLibrary : UBlueprintFunctionLibrary {

	bool RemovePickaxePartFromOwned(UObject* WorldContextObject, UPickaxePart* part);
	bool IsPickaxePartEquipped(UObject* WorldContextObject, enum class EPickaxePartLocation Location, UPickaxePart* part, UItemID* pickaxeID);
	TArray<UPickaxePart*> GetUnlockedPickaxeParts(UObject* WorldContextObject, enum class EPickaxePartLocation Category);
	TArray<UPickaxePart*> GetPickaxeParts(UObject* WorldContextObject, enum class EPickaxePartLocation Category);
	bool GetIsPickAxePartAcquired(UObject* WorldContextObject, UPickaxePart* InPickaxePart);
	FPickaxeSet GetEquippedPickaxeSet(UObject* WorldContextObject, UItemID* pickaxeID);
	UPickaxePart* GetEquippedPickaxePart(UObject* WorldContextObject, enum class EPickaxePartLocation partLocation, UItemID* pickaxeID);
	void EquipPickaxePart(UObject* WorldContextObject, UPickaxePart* part, enum class EPickaxePartLocation partLocation, UItemID* pickaxeID);
};

// Class FSD.PickaxeItem
// Size: 0x6c0 (Inherited: 0x338)
struct APickaxeItem : AItem {
	bool QuadDamageCarving; // 0x348(0x01)
	FMulticastInlineDelegate ActiveMiningEvent; // 0x350(0x10)
	USceneComponent* FP_Root; // 0x360(0x08)
	USceneComponent* TP_Root; // 0x368(0x08)
	USceneComponent* FP_Scale; // 0x370(0x08)
	USceneComponent* TP_Scale; // 0x378(0x08)
	UPlayerAnimInstance* FPAnimInstance; // 0x380(0x08)
	UPlayerAnimInstance* TPAnimInstance; // 0x388(0x08)
	UAnimMontage* FP_EquipAnimation; // 0x390(0x08)
	UAnimMontage* TP_EquipAnimation; // 0x398(0x08)
	float EquipDuration; // 0x3a0(0x04)
	UItemCharacterAnimationSet* CharacterAnimationSet; // 0x3a8(0x08)
	UDamageComponent* DamageComponent; // 0x3b8(0x08)
	UDamageComponent* SpecialDamageComponent; // 0x3c0(0x08)
	float SpecialCooldown; // 0x3c8(0x04)
	float SpecialCooldownRemaining; // 0x3cc(0x04)
	FCoolDownProgressStyle SpecialCooldownUI; // 0x3e8(0x40)
	int32_t RockMiningBonus; // 0x428(0x04)
	int32_t DirtMiningBonus; // 0x42c(0x04)
	float DamageRange; // 0x430(0x04)
	float DamageRadius; // 0x434(0x04)
	UStatusEffect* OnDamageEnemySlowdownEffect; // 0x438(0x08)
	FGameplayTagContainer WideDamageTrackingTags; // 0x440(0x20)
	USoundCue* MiningSound; // 0x460(0x08)
	UForceFeedbackEffect* MineRumble; // 0x468(0x08)
	UForceFeedbackEffect* PartialMineRumble; // 0x470(0x08)
	UForceFeedbackEffect* DamageRumble; // 0x478(0x08)
	float GeneralImpactAudioVolume; // 0x480(0x04)
	float HitCooldown; // 0x484(0x04)
	float MiningDuration; // 0x488(0x04)
	float DistanceConsideredSameHit; // 0x48c(0x04)
	float BlockParticlesScaleFP; // 0x490(0x04)
	float BlockParticlesScaleTP; // 0x494(0x04)
	enum class EPickaxeState State; // 0x498(0x01)
	bool ActiveMiningEnabled; // 0x600(0x01)
	int32_t MaxActiveMiningCount; // 0x604(0x04)
	float ActiveMiningSpeedBoost; // 0x608(0x04)
	bool PreventQMining; // 0x60c(0x01)
	float QMiningExpectedDelay; // 0x610(0x04)
	float QMiningInitialDelay; // 0x614(0x04)
	float QMiningReducedPlayRatePct; // 0x618(0x04)
	double QMiningLastHitTime; // 0x620(0x08)
	USoundCue* ActiveMiningSucceedSound; // 0x628(0x08)
	USoundCue* ActiveMiningFailedSound; // 0x630(0x08)
	bool CanBezerk; // 0x646(0x01)
	UStatusEffect* BezerkStatusEffect; // 0x648(0x08)
	bool PowerAttackEnabled; // 0x652(0x01)
	TMap<enum class EPickaxePartLocation, FPickaxeMeshInstance> EquippedParts; // 0x658(0x50)
	UMaterialInterface* EquippedMaterial; // 0x6a8(0x08)

	void SpecialTargetDamageEffects(FVector ImpactPoint, FVector ImpactNormal);
	void SetSpecialCoolDownDuration(float newCooldownDuration);
	void Server_TriggerBezerk();
	void Server_SetState(enum class EPickaxeState NewState);
	void Server_RemoveDebrisInstance(FVector_NetQuantize HitPos, int32_t DebrisIndex, int32_t remappedIndex);
	void Server_HitBlock(FVector_NetQuantize Position, int32_t Material, bool removeDebris, bool isSpecial);
	void Server_DoPowerAttack();
	void Server_DigBlock2(FVector carvePos, FVector carveDirection, int32_t TerrainMaterial, bool isSpecial);
	void Server_DamageTarget(UPrimitiveComponent* TargetComponent, bool isSpecial, FVector_NetQuantize ImpactPoint, FVector_NetQuantizeNormal ImpactNormal, UFSDPhysicalMaterial* PhysMaterial, char BoneIndex);
	void RefreshSpecialCooldown();
	void OnRep_State(enum class EPickaxeState oldState);
	void OnLoadoutChanged();
	float GetSpecialCooldownProgress();
	void All_SimulateHitBlock(FVector_NetQuantize Position, int32_t materia, bool removeDebris, bool isSpecial);
	void All_SimulateDigDebris(FVector_NetQuantize Position, UParticleSystem* Particles, USoundCue* cue);
	void All_SimulateDigBlock(FVector_NetQuantize Position, bool spawnParticles, int32_t Material, float Density, bool isSpecial);
	void All_SimulateDamageTarget(UPrimitiveComponent* TargetComponent, bool isSpecial, FVector_NetQuantize ImpactPoint, FVector_NetQuantizeNormal ImpactNormal, UFSDPhysicalMaterial* PhysMaterial, char BoneIndex);
	void All_DoPowerAttack();
};

// Class FSD.PickaxePreviewActor
// Size: 0x298 (Inherited: 0x220)
struct APickaxePreviewActor : AActor {
	USceneComponent* TP_Root; // 0x230(0x08)
	TMap<enum class EPickaxePartLocation, FPickaxeMeshInstance> EquippedParts; // 0x238(0x50)
	UItemID* ItemID; // 0x288(0x08)
	UMaterialInterface* EquippedMaterial; // 0x290(0x08)

	void PreviewParts(enum class EPickaxePartLocation PreviewLocation, UPickaxePart* PreviewPart);
	void EquipParts();
};

// Class FSD.PickaxePart
// Size: 0x98 (Inherited: 0x60)
struct UPickaxePart : USavablePrimaryDataAsset {
	FText Title; // 0x60(0x18)
	UPickaxePartItem* Item; // 0x78(0x08)
	UItemAquisitionSource* AquisitionSource; // 0x80(0x08)
	bool UnlockedFromStart; // 0x88(0x01)
	UDLCBase* RequiredDLC; // 0x90(0x08)

	enum class EPickaxePartLocation GetPrefferedLocation();
};

// Class FSD.PickaxePartItem
// Size: 0x30 (Inherited: 0x28)
struct UPickaxePartItem : UObject {
};

// Class FSD.PickaxeMaterialPart
// Size: 0x80 (Inherited: 0x30)
struct UPickaxeMaterialPart : UPickaxePartItem {
	TSoftObjectPtr<UMaterialInterface> Material; // 0x30(0x28)
	TSoftObjectPtr<UMaterialInterface> IconMaterial; // 0x58(0x28)
};

// Class FSD.PickaxeMeshPart
// Size: 0x58 (Inherited: 0x30)
struct UPickaxeMeshPart : UPickaxePartItem {
	TSoftObjectPtr<UStaticMesh> Mesh; // 0x30(0x28)
};

// Class FSD.PickaxeHeadPart
// Size: 0x58 (Inherited: 0x58)
struct UPickaxeHeadPart : UPickaxeMeshPart {
};

// Class FSD.PickaxeBladePart
// Size: 0x60 (Inherited: 0x58)
struct UPickaxeBladePart : UPickaxeMeshPart {
	bool RestrictedToBackside; // 0x58(0x01)
};

// Class FSD.PickaxeShaftPart
// Size: 0x58 (Inherited: 0x58)
struct UPickaxeShaftPart : UPickaxeMeshPart {
};

// Class FSD.PickaxeHandlePart
// Size: 0x58 (Inherited: 0x58)
struct UPickaxeHandlePart : UPickaxeMeshPart {
};

// Class FSD.PickaxePommelPart
// Size: 0x58 (Inherited: 0x58)
struct UPickaxePommelPart : UPickaxeMeshPart {
};

// Class FSD.PickaxeSettings
// Size: 0x100 (Inherited: 0x30)
struct UPickaxeSettings : UDataAsset {
	TMap<UPlayerCharacterID*, APickaxePreviewActor*> PickaxePreviewActors; // 0x30(0x50)
	UAnimMontage* Salute_FP; // 0x80(0x08)
	UAnimMontage* Salute_TP; // 0x88(0x08)
	TArray<UPickaxePart*> parts; // 0x90(0x10)
	TMap<UItemID*, FDefaultPickaxeParts> DefaultParts; // 0xa0(0x50)
};

// Class FSD.PickaxePartEquip
// Size: 0x28 (Inherited: 0x28)
struct UPickaxePartEquip : UInterface {
};

// Class FSD.PillarSettings
// Size: 0x68 (Inherited: 0x30)
struct UPillarSettings : UDataAsset {
	TArray<FPillarSegment> PillarSegments; // 0x30(0x10)
	FRandRange PointRange; // 0x40(0x08)
	FRandRange PointNoiseRange; // 0x48(0x08)
	FRandRange PillarRangeScale; // 0x50(0x08)
	FRandRange PillarNoiseRangeScale; // 0x58(0x08)
	UFloodFillSettings* Noise; // 0x60(0x08)
};

// Class FSD.PillarGenerationComponent
// Size: 0x410 (Inherited: 0x3f0)
struct UPillarGenerationComponent : UGenerationComponent {
	TArray<FVector> Points; // 0x3f0(0x10)
	bool Visible; // 0x400(0x01)
	UPillarSettings* PillarSettings; // 0x408(0x08)
};

// Class FSD.PillarGenerationItem
// Size: 0x230 (Inherited: 0x228)
struct APillarGenerationItem : AGenerationItem {
	UPillarGenerationComponent* PillarComponent; // 0x228(0x08)
};

// Class FSD.PilotingStateComponent
// Size: 0x120 (Inherited: 0x100)
struct UPilotingStateComponent : UCharacterStateComponent {
	AActor* Vehicle; // 0x100(0x08)

	void Server_MoveRight(float Value);
	void Server_MoveForward(float Value);
	void OnRep_Vehicle();
};

// Class FSD.PipelineBuilderItem
// Size: 0x3e8 (Inherited: 0x3e0)
struct APipelineBuilderItem : ATrackBuilderItem {
	UItemPlacerAggregator* SegmentPlacer; // 0x3e0(0x08)
};

// Class FSD.PipelineFinish
// Size: 0x248 (Inherited: 0x220)
struct APipelineFinish : AActor {
	UTrackBuilderConnectPoint* PipelineEndConnection; // 0x220(0x08)
	USingleUsableComponent* UsableOrderExtractor; // 0x228(0x08)
	APipelineExtractorPod* ExtractPodClass; // 0x230(0x08)
	APipelineExtractorPod* ExtractorPod; // 0x238(0x08)
	bool bPipelineCompleted; // 0x240(0x01)

	void ReceivePipelineCompleted();
	void ReceiveExtractorPodSpawned(APipelineExtractorPod* InExtractorPod);
	void OnRep_PipelineCompleted();
	void OnRep_ExtractorPod();
	void OnExtractorPodStateChanged(ARessuplyPod* InExtractorPod, enum class ERessuplyPodState InState);
	void OnExtractorPodOrdered(APlayerCharacter* InUser, enum class EInputKeys Key);
	void OnConnectedWithSegment(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment);
	void OnConnectedSegmentActivated(APipelineSegment* InSegment);
	FVector GetLandingOffset();
};

// Class FSD.PipelineExtractorPod
// Size: 0x2e8 (Inherited: 0x2d8)
struct APipelineExtractorPod : ARessuplyPod {
	TWeakObjectPtr<APipelineSegment> ConnectedSegment; // 0x2d8(0x08)
	float TargetRotation; // 0x2e0(0x04)

	void SetTargetRotation(APipelineSegment* InPipelineSegment);
	void ReceiveConnectedToSegment(APipelineSegment* InConnectedSegment);
	void OnRep_ConnectedSegment();
	void ExtractorPodOrderedEvent(APlayerCharacter* InUser);
};

// Class FSD.PipelineExtractorPodAnimInstance
// Size: 0x2a0 (Inherited: 0x270)
struct UPipelineExtractorPodAnimInstance : UAnimInstance {
	float ConnectionRotation; // 0x268(0x04)
	enum class EPipelineExtractorPodAnimState AnimState; // 0x26c(0x01)
	enum class ERessuplyPodState PodState; // 0x26d(0x01)
	enum class EPipelineBuildState PipelineState; // 0x26e(0x01)
	enum class ERefineryState RefineryState; // 0x26f(0x01)
	float RotationSpeed; // 0x270(0x04)
	TWeakObjectPtr<APipelineExtractorPod> Pod; // 0x274(0x08)
	TWeakObjectPtr<APipelineSegment> ConnectedSegment; // 0x27c(0x08)
	TWeakObjectPtr<APipelineStart> PipelineStart; // 0x284(0x08)
	TWeakObjectPtr<AFSDRefinery> Refinery; // 0x28c(0x08)
};

// Class FSD.PipelineSegment
// Size: 0x3a8 (Inherited: 0x290)
struct APipelineSegment : ATrackBuilderSegment {
	FMulticastInlineDelegate OnPipelineBroken; // 0x290(0x10)
	FMulticastInlineDelegate OnPipelineRepaired; // 0x2a0(0x10)
	FMulticastInlineDelegate OnPipelineActivated; // 0x2b0(0x10)
	FMulticastInlineDelegate OnPipelineStateChanged; // 0x2c0(0x10)
	UStaticMesh* StaticMeshUnassembled; // 0x2d0(0x08)
	UStaticMesh* StaticMeshAssembled; // 0x2d8(0x08)
	UStaticMesh* StaticMeshFinal; // 0x2e0(0x08)
	FVector EditorEndLocation; // 0x2e8(0x0c)
	enum class ETraceTypeQuery CarvingTraceType; // 0x2f4(0x01)
	UMaterialInterface* NumberMaterial; // 0x2f8(0x08)
	USingleUsableComponent* RepairSegmentUsable; // 0x308(0x08)
	USingleUsableComponent* ActivateSegmentUsable; // 0x310(0x08)
	UDroneUseComponent* DroneUsable; // 0x318(0x08)
	USimpleHealthComponent* SegmentHealthComponent; // 0x320(0x08)
	USplineComponent* MovementSpline; // 0x328(0x08)
	USplineComponent* MovementSplineRight; // 0x330(0x08)
	USplineComponent* MovementSplineLeft; // 0x338(0x08)
	USplineMeshComponent* PipelineMesh; // 0x340(0x08)
	USplineMeshComponent* PipelineOuterMesh; // 0x348(0x08)
	USkeletalMeshComponent* PipelineCapMesh; // 0x350(0x08)
	USkeletalMeshComponent* EndPostMesh; // 0x358(0x08)
	UStaticMeshComponent* EndPostMeshStatic; // 0x360(0x08)
	UPathfinderSplineSegmentCollisionComponent* PathfinderComponent; // 0x368(0x08)
	bool bSegmentBroken; // 0x370(0x01)
	float SegmentActivatedProgress; // 0x374(0x04)
	enum class EPipelineBuildState PipelineState; // 0x378(0x01)
	TWeakObjectPtr<APipelineStart> PipelineStart; // 0x37c(0x08)
	float MinValidLength; // 0x384(0x04)
	float MaxValidLength; // 0x388(0x04)
	float TooSharpExtraLength; // 0x38c(0x04)
	float TooSteepExtraLength; // 0x390(0x04)
	float BlockedSphereSize; // 0x394(0x04)
	int32_t BlockedExtraRaytraceRotationOffset; // 0x398(0x04)
	float BlockedExtraRaytraces; // 0x39c(0x04)
	float BlockedExtraRaytraceDist; // 0x3a0(0x04)
	float BlockedRayTraceSuccesses; // 0x3a4(0x04)

	void UpdateSplineMesh(USplineMeshComponent* InMesh, float InProgress, bool InMoveEndCap);
	void SetSegmentBroken(APlayerCharacter* InUser, bool InSegmentBroken);
	void SetPipelineNumberMaterial(UMaterialInterface* InNumberMaterial);
	void SetEndPostVisible(bool InVisible);
	void ReceiveSegmentBrokenChanged(bool InSegmentBroken);
	void ReceiveSegmentActivatedProgress(float InProgress);
	void ReceiveSegmentActivated();
	void ReceivePlacementFinished();
	void ReceivePlacementBegin();
	void PipelineStateDelegate__DelegateSignature(enum class EPipelineBuildState InPipelineState);
	void PipelineSegmentDelegate__DelegateSignature(APipelineSegment* InPipelineSegment);
	void OnRepaired(APlayerCharacter* InUser);
	void OnRep_SegmentBroken();
	void OnRep_SegmentActivatedProgress();
	APipelineStart* GetPipelineStart();
	APipelineSegment* GetNextPipelineSegment(bool bForward);
	bool GetIsSegmentActivated();
	void CallbackSegmentRepaired(APlayerCharacter* InUser, enum class EInputKeys Key);
	void CallbackSegmentDestroyed(UHealthComponentBase* InHealth);
	void CallbackSegmentActivatedProgress(float InProgress);
	void CallbackSegmentActivated(APlayerCharacter* InUser, enum class EInputKeys Key);
	void CallbackPipelineStateChanged(APipelineStart* InPipelineStart, enum class EPipelineBuildState InState);
	void CallbackNextSegmentChanged(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment);
	void CallbackDroneUsed(int32_t TimesUsed);
};

// Class FSD.PipelineSegmentEndPostAnimInstance
// Size: 0x280 (Inherited: 0x270)
struct UPipelineSegmentEndPostAnimInstance : UAnimInstance {
	float AssemblyAnimLength; // 0x268(0x04)
	float AssemblyTimeTarget; // 0x26c(0x04)
	float AssemblyTime; // 0x270(0x04)
	bool bAssembling; // 0x274(0x01)
};

// Class FSD.PipelineStart
// Size: 0x270 (Inherited: 0x220)
struct APipelineStart : AActor {
	FMulticastInlineDelegate OnBuildStateChanged; // 0x220(0x10)
	int32_t PipelineID; // 0x230(0x04)
	UTrackBuilderUsable* PipelineStartUsable; // 0x238(0x08)
	enum class EPipelineBuildState BuildState; // 0x240(0x01)
	APipelineFinish* PipelineFinish; // 0x248(0x08)
	AFSDRefinery* Refinery; // 0x250(0x08)
	TArray<TWeakObjectPtr<APipelineSegment>> BrokenSegments; // 0x258(0x10)

	void ReceiveBuildStateChanged(enum class EPipelineBuildState InBuildState);
	void PipelineStartStateDelegate__DelegateSignature(APipelineStart* InPipelineStart, enum class EPipelineBuildState InPipelineState);
	void PipelineCompleted(APipelineFinish* InPipelineFinish);
	void OnRep_BuildState();
	void OnNextSegmentChanged(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment);
	TArray<APipelineSegment*> GetAllPipelineSegments();
};

// Class FSD.PlaceableInterface
// Size: 0x28 (Inherited: 0x28)
struct UPlaceableInterface : UInterface {
};

// Class FSD.PlaceableItem
// Size: 0x3b0 (Inherited: 0x388)
struct APlaceableItem : AAnimatedItem {
	UCapacityHoldingItemAggregator* Capacity; // 0x398(0x08)
	UItemPlacerAggregator* ItemPlacer; // 0x3a0(0x08)
	AActor* PlacableClass; // 0x3a8(0x08)

	void Server_SpawnItem(FVector Location);
	void ReceiveItemSpawned(AActor* SpawnedActor);
	void OnCarriedAmountChanged(int32_t newAmount);
};

// Class FSD.PlanetZoneSetup
// Size: 0x40 (Inherited: 0x30)
struct UPlanetZoneSetup : UDataAsset {
	TArray<UPlanetZone*> PlanetZones; // 0x30(0x10)

	UPlanetZone* GetPlanetZoneForBiome(UBiome* Biome);
};

// Class FSD.PlanetZone
// Size: 0x70 (Inherited: 0x30)
struct UPlanetZone : UDataAsset {
	TArray<UBiome*> Biomes; // 0x38(0x10)
	TArray<FRequiredMissionItem> RequiredMissions; // 0x48(0x10)
	bool MustBeUnlocked; // 0x58(0x01)
	FGuid SaveGameID; // 0x5c(0x10)

	bool IsUnlocked(UFSDSaveGame* SaveGame);
	FGuid GetSavegameID();
	TArray<UBiome*> GetBiomes();
};

// Class FSD.PlasmaCarbine
// Size: 0x738 (Inherited: 0x6d8)
struct APlasmaCarbine : AAmmoDrivenWeapon {
	float RateOfFireBoostOnFullShield; // 0x6d8(0x04)
	bool RemoveShieldOnOverheat; // 0x6dc(0x01)
	bool RemoveShieldOnReload; // 0x6dd(0x01)
	float HeatEffectsThreshold; // 0x6e0(0x04)
	UAnimMontage* FP_CharacterOverheatEndMontage; // 0x6e8(0x08)
	UAnimMontage* TP_CharacterOverheatEndMontage; // 0x6f0(0x08)
	UAnimMontage* WPN_ItemOverheatEndMontage; // 0x6f8(0x08)
	UAnimMontage* FP_CharacterReloadEndMontage; // 0x700(0x08)
	UAnimMontage* TP_CharacterReloadEndMontage; // 0x708(0x08)
	UAnimMontage* WPN_ItemReloadEndMontage; // 0x710(0x08)

	void ApplyShieldDamage();
};

// Class FSD.PlayerAnimInstance
// Size: 0x390 (Inherited: 0x270)
struct UPlayerAnimInstance : UAnimInstance {
	bool IsFirstPerson; // 0x270(0x01)
	float WalkTreshhold; // 0x274(0x04)
	APlayerCharacter* Character; // 0x278(0x08)
	UParticleSystem* DefaultFootstepParticle; // 0x280(0x08)
	USoundCue* DefaultFootStepSound; // 0x288(0x08)
	UItemCharacterAnimationSet* AnimationSetA; // 0x290(0x08)
	UItemCharacterAnimationSet* AnimationSetB; // 0x298(0x08)
	bool AnimationSetAIsPrimary; // 0x2a0(0x01)
	enum class ECharacterState CharacterState; // 0x2a1(0x01)
	float Speed; // 0x2a4(0x04)
	float WalkAnimationSpeed; // 0x2a8(0x04)
	float RunAnimationSpeed; // 0x2ac(0x04)
	float WalkRate; // 0x2b0(0x04)
	float RunRate; // 0x2b4(0x04)
	float Direction; // 0x2b8(0x04)
	FRotator AimRotation; // 0x2bc(0x0c)
	bool IsInitialized; // 0x2c8(0x01)
	float Pitch; // 0x2cc(0x04)
	bool IsStandingDown; // 0x2d0(0x01)
	bool IsInAir; // 0x2d1(0x01)
	bool IsMoving; // 0x2d2(0x01)
	bool IsWalking; // 0x2d3(0x01)
	bool IsSprinting; // 0x2d4(0x01)
	bool IsAiming; // 0x2d5(0x01)
	bool IsAlive; // 0x2d6(0x01)
	bool IsLyingDown; // 0x2d7(0x01)
	bool OnZipline; // 0x2d8(0x01)
	bool IsGrinding; // 0x2d9(0x01)
	bool IsParalyzed; // 0x2da(0x01)
	bool IsGrabbed; // 0x2db(0x01)
	bool IsAttached; // 0x2dc(0x01)
	bool BeingRevived; // 0x2dd(0x01)
	bool IsLookingAtMap; // 0x2de(0x01)
	bool IsControllingEnemy; // 0x2df(0x01)
	FVector ControllingEnemyRootOffset; // 0x2e0(0x0c)
	FVector ControllingEnemyDirectionAlpha; // 0x2ec(0x0c)
	float GliderAnimationLength; // 0x2f8(0x04)
	FGliderAnimSync GliderAnimSync; // 0x2fc(0x20)
	bool IsAllowedToPlayMovementAnim; // 0x31c(0x01)
	float CropBeard; // 0x320(0x04)
	UAnimMontage* ActiveUseMontage; // 0x328(0x08)
	UUseAnimationSetting* CurrentUseSetting; // 0x338(0x08)
	UAnimMontage* EndUseMontageToPlay; // 0x340(0x08)
	float AimDuration; // 0x348(0x04)
	float ReviveProgress; // 0x34c(0x04)
	float ReviveExplicitTime; // 0x350(0x04)
	float IdleTimeForInspect; // 0x360(0x04)
	float RepeatDealayForInspect; // 0x364(0x04)
	enum class ECharacterMoveDirection CharacterMoveDirection; // 0x368(0x01)
	float MoveAdjustmentAngle; // 0x36c(0x04)
	UItemCharacterAnimationSet* CarryAnimationSet; // 0x370(0x08)
	UItemCharacterAnimationSet* DefaultAnimationSet; // 0x378(0x08)

	bool StopUseMontage(bool stopImmediately);
	void StopInspectWeapon();
	void StartInspectWeapon();
	void SetAiming();
	void PlayUseMontages(UUseAnimationSetting* useSetting);
	bool IsPlayingMontageInGroup(FName GroupName);
	UItemCharacterAnimationSet* GetAnimationSet();
};

// Class FSD.PlayerFPAnimInstance
// Size: 0x440 (Inherited: 0x390)
struct UPlayerFPAnimInstance : UPlayerAnimInstance {
	FRotator WeaponRecoil; // 0x388(0x0c)
	float HeadBobScale; // 0x394(0x04)
	float WeaponSwayRecoverySpeed; // 0x398(0x04)
	float WeaponSwayAlphaRecoverySpeed; // 0x39c(0x04)
	FRotator WeaponSwayAngle; // 0x3a0(0x0c)
	float WeaponSwayMaxAngle; // 0x3ac(0x04)
	FRotator CameraAntiSwayAngle; // 0x3b0(0x0c)
	float WeaponSwayAlpha; // 0x3bc(0x04)
	float WeaponSwayToApply; // 0x3c0(0x04)
	FVector CameraOffset; // 0x3c4(0x0c)
	FVector NegativeCameraOffset; // 0x3e0(0x0c)
	bool HeadOnlyMode; // 0x3ec(0x01)
	FRotator HeadRotation; // 0x3f0(0x0c)
	UAnimSequence* FP_Idle; // 0x400(0x08)
	UAnimSequence* FP_Walk; // 0x408(0x08)
	UAnimSequence* FP_Sprint; // 0x410(0x08)
	UAnimSequence* FP_JumpStart; // 0x418(0x08)
	UAnimSequence* FP_JumpLoop; // 0x420(0x08)
	UAnimSequence* FP_JumpLand; // 0x428(0x08)
	UAnimSequence* FP_JumpLand_Aim; // 0x430(0x08)
	UAnimSequence* FP_Downed; // 0x438(0x08)
};

// Class FSD.PlayerTPAnimInstance
// Size: 0x5e0 (Inherited: 0x390)
struct UPlayerTPAnimInstance : UPlayerAnimInstance {
	float RigidBodyBlend; // 0x388(0x04)
	bool RigidBodyOn; // 0x38c(0x01)
	float UpperBodyBlend; // 0x390(0x04)
	float AimingValue; // 0x394(0x04)
	FRotator CounerMoveadjustmentAngleRotator; // 0x398(0x0c)
	bool FullBodyAnimActive; // 0x3a4(0x01)
	float FullBodyBlendTime; // 0x3a8(0x04)
	float BodyTurnRecoverySpeed; // 0x3ac(0x04)
	float BodyTurnMaxAngle; // 0x3b0(0x04)
	float BodyTurnLerpEXP; // 0x3b4(0x04)
	float TurnAnimationDuration; // 0x3b8(0x04)
	bool bCaveLeechBiting; // 0x3c8(0x01)
	float CaveLeechBiteReactDelay; // 0x3cc(0x04)
	bool IsResettingBodyTurn; // 0x3d4(0x01)
	FRotator BodyTurn; // 0x3d8(0x0c)
	FRotator CounterBodyTurn; // 0x3e4(0x0c)
	bool TurningLeft; // 0x3f0(0x01)
	bool TurningRight; // 0x3f1(0x01)
	float TurnProgress; // 0x3f4(0x04)
	bool HasPickedUpItem; // 0x3f8(0x01)
	bool IsLyingDownNoTransition; // 0x3f9(0x01)
	int32_t DanceMove; // 0x3fc(0x04)
	UAnimSequence* DanceSequence; // 0x400(0x08)
	bool IsDancing; // 0x408(0x01)
	float PickedUpItemBlend; // 0x40c(0x04)
	float AttachedBodyTurnFactor; // 0x410(0x04)
	float AttachedHeadTurnFactor; // 0x414(0x04)
	FRotator AttachedBodyRotation; // 0x418(0x0c)
	FRotator AttachedHeadRotation; // 0x424(0x0c)
	UBlendSpace1D* TP_LookUpDown; // 0x438(0x08)
	UBlendSpace1D* TP_LookUpDown_Aim; // 0x440(0x08)
	UBlendSpace1D* A_TP_LookUpDown_Aim; // 0x448(0x08)
	UBlendSpace1D* B_TP_LookUpDown_Aim; // 0x450(0x08)
	UAnimSequence* TP_JumpLoop; // 0x458(0x08)
	UAnimSequence* TP_JumpLoop_Aim; // 0x460(0x08)
	UAnimSequence* TP_JumpStart; // 0x468(0x08)
	UAnimSequence* TP_JumpStart_Aim; // 0x470(0x08)
	UAnimSequence* TP_Sprint; // 0x478(0x08)
	UAnimSequence* A_TP_Idle; // 0x480(0x08)
	UAnimSequence* B_TP_Idle; // 0x488(0x08)
	UAnimSequence* A_TP_Idle_Aim; // 0x490(0x08)
	UAnimSequence* B_TP_Idle_Aim; // 0x498(0x08)
	UAnimSequence* TP_LookForward; // 0x4a0(0x08)
	UAnimSequence* A_TP_LookForward; // 0x4a8(0x08)
	UAnimSequence* B_TP_LookForward; // 0x4b0(0x08)
	UAnimSequence* A_TP_LookForward_Aim; // 0x4b8(0x08)
	UAnimSequence* B_TP_LookForward_Aim; // 0x4c0(0x08)
	UAnimSequence* A_TP_Walk_Forward; // 0x4c8(0x08)
	UAnimSequence* B_TP_Walk_Forward; // 0x4d0(0x08)
	UAnimSequence* A_TP_Run_Forward; // 0x4d8(0x08)
	UAnimSequence* B_TP_Run_Forward; // 0x4e0(0x08)
	UAnimSequence* A_TP_Walk_Forward_Aim; // 0x4e8(0x08)
	UAnimSequence* B_TP_Walk_Forward_Aim; // 0x4f0(0x08)
	UAnimSequence* A_TP_Run_Forward_Aim; // 0x4f8(0x08)
	UAnimSequence* B_TP_Run_Forward_Aim; // 0x500(0x08)
	UAnimSequence* A_TP_Walk_Right; // 0x508(0x08)
	UAnimSequence* B_TP_Walk_Right; // 0x510(0x08)
	UAnimSequence* A_TP_Run_Right; // 0x518(0x08)
	UAnimSequence* B_TP_Run_Right; // 0x520(0x08)
	UAnimSequence* A_TP_Walk_Right_Aim; // 0x528(0x08)
	UAnimSequence* B_TP_Walk_Right_Aim; // 0x530(0x08)
	UAnimSequence* A_TP_Run_Right_Aim; // 0x538(0x08)
	UAnimSequence* B_TP_Run_Right_Aim; // 0x540(0x08)
	UAnimSequence* A_TP_Walk_Left; // 0x548(0x08)
	UAnimSequence* B_TP_Walk_Left; // 0x550(0x08)
	UAnimSequence* A_TP_Run_Left; // 0x558(0x08)
	UAnimSequence* B_TP_Run_Left; // 0x560(0x08)
	UAnimSequence* A_TP_Walk_Left_Aim; // 0x568(0x08)
	UAnimSequence* B_TP_Walk_Left_Aim; // 0x570(0x08)
	UAnimSequence* A_TP_Run_Left_Aim; // 0x578(0x08)
	UAnimSequence* B_TP_Run_Left_Aim; // 0x580(0x08)
	UAnimSequence* A_TP_Walk_Back; // 0x588(0x08)
	UAnimSequence* B_TP_Walk_Back; // 0x590(0x08)
	UAnimSequence* A_TP_Run_Back; // 0x598(0x08)
	UAnimSequence* B_TP_Run_Back; // 0x5a0(0x08)
	UAnimSequence* A_TP_Walk_Back_Aim; // 0x5a8(0x08)
	UAnimSequence* B_TP_Walk_Back_Aim; // 0x5b0(0x08)
	UAnimSequence* A_TP_Run_Back_Aim; // 0x5b8(0x08)
	UAnimSequence* B_TP_Run_Back_Aim; // 0x5c0(0x08)
	UAnimSequence* TP_Revived; // 0x5c8(0x08)
	UAnimSequence* TP_Downed; // 0x5d0(0x08)
	UAnimSequence* TP_Downed_Loop; // 0x5d8(0x08)

	void SetOverrideFullBody(bool overrideEnabled);
};

// Class FSD.PlayerCameraDrone
// Size: 0x3e0 (Inherited: 0x280)
struct APlayerCameraDrone : APawn {
	UPawnMovementComponent* Movement; // 0x280(0x08)
	int32_t MenuTab; // 0x288(0x04)
	bool SplineMeshIsVisible; // 0x28c(0x01)
	float SplineSpeed; // 0x290(0x04)
	float MouseSensitivity; // 0x294(0x04)
	float CameraRoll; // 0x298(0x04)
	bool CameraDoesShake; // 0x29c(0x01)
	bool IsFollowingPlayerRotation; // 0x29d(0x01)
	FVector FollowPositionOffset; // 0x2a0(0x0c)
	bool UseFreeRotation; // 0x2ac(0x01)
	bool UseDOF; // 0x2ad(0x01)
	AActor* Flare; // 0x2b0(0x08)
	AActor* BounceFlare; // 0x2d8(0x08)
	AActor* Spline; // 0x348(0x08)
	AActor* SplineMesh; // 0x350(0x08)

	bool ToggleSplineMeshVisibility();
	void SetRotationalPivotToPlayer();
	void SetFlareLightSettings(float Intensity, float range, float Color);
	bool SetCameraShakeAmount(float Value);
	void SetBounceFlareLightSettings(float Intensity, float range, float Color);
	void SaveLightConfig();
	void ResetFollowVariables();
	void ResetAllLights();
	void OnFlareHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, FHitResult Hit);
	void LoadLightConfig();
	FVector GetFlareLightSettings();
	UCameraComponent* GetCamera();
	FVector GetBounceFlareLightSettings();
	void CreateHUD();
	void ClearFocusPoint();
	void BeginCountdown();
};

// Class FSD.PlayerCharacter
// Size: 0xe80 (Inherited: 0x4c0)
struct APlayerCharacter : ACharacter {
	FMulticastInlineDelegate OnStartedUsingItem; // 0x4d8(0x10)
	FMulticastInlineDelegate OnStoppedUsingItem; // 0x4e8(0x10)
	FMulticastInlineDelegate OnFirePressed; // 0x4f8(0x10)
	FMulticastInlineDelegate OnFireReleased; // 0x508(0x10)
	FMulticastInlineDelegate OnGrenadePressed; // 0x518(0x10)
	FMulticastInlineDelegate OnPerkInitialized; // 0x528(0x10)
	FMulticastInlineDelegate OnInstantRevivePossibleEvent; // 0x538(0x10)
	FMulticastInlineDelegate OnCollectedEverything; // 0x548(0x10)
	FMulticastInlineDelegate OnCollectedSchematic; // 0x558(0x10)
	FMulticastInlineDelegate OnCollectedSkin; // 0x568(0x10)
	FMulticastInlineDelegate OnCollectedDrink; // 0x578(0x10)
	FMulticastInlineDelegate OnCollectedVictoryPose; // 0x588(0x10)
	FMulticastInlineDelegate OnCollectedPickaxePart; // 0x598(0x10)
	FMulticastInlineDelegate OnCollectedVanityItem; // 0x5a8(0x10)
	FMulticastInlineDelegate OnCameraModeChanged; // 0x5b8(0x10)
	FMulticastInlineDelegate OnDownCameraTargetChanged; // 0x5c8(0x10)
	FMulticastInlineDelegate OnActionHoldProgress; // 0x5d8(0x10)
	FMulticastInlineDelegate OnThrowCarriableProgress; // 0x5e8(0x10)
	FMulticastInlineDelegate OnJumpPressed; // 0x5f8(0x10)
	FMulticastInlineDelegate OnJumpReleased; // 0x608(0x10)
	FMulticastInlineDelegate OnSecondaryFirePressed; // 0x618(0x10)
	FMulticastInlineDelegate OnSecondaryFireReleased; // 0x628(0x10)
	FMulticastInlineDelegate OnManualMiningBegin; // 0x638(0x10)
	FMulticastInlineDelegate OnManualMiningEnd; // 0x648(0x10)
	FMulticastInlineDelegate OnLaserPointerPressed; // 0x658(0x10)
	FMulticastInlineDelegate OnLaserPointerReleased; // 0x668(0x10)
	FMulticastInlineDelegate OnTerrainScannerPressed; // 0x678(0x10)
	FMulticastInlineDelegate OnTerrainScannerReleased; // 0x688(0x10)
	FMulticastInlineDelegate OnFlareThrown; // 0x698(0x10)
	FMulticastInlineDelegate OnDropItem; // 0x6a8(0x10)
	FMulticastInlineDelegate OnUpdateMeshes; // 0x6b8(0x10)
	FMulticastInlineDelegate OnOpenChat; // 0x6c8(0x10)
	FMulticastInlineDelegate OnAcceptInvite; // 0x6d8(0x10)
	FMulticastInlineDelegate OnRejectInvite; // 0x6e8(0x10)
	FMulticastInlineDelegate OnIgnoreInvite; // 0x6f8(0x10)
	FMulticastInlineDelegate OnToggleOutline; // 0x708(0x10)
	FMulticastInlineDelegate OnToggleMapTool; // 0x718(0x10)
	FMulticastInlineDelegate OnToggleScanTool; // 0x728(0x10)
	FMulticastInlineDelegate OnDepthChanged; // 0x738(0x10)
	FMulticastInlineDelegate OnCharacterStateChanged; // 0x748(0x10)
	FMulticastInlineDelegate OnCharacterDeathChange; // 0x758(0x10)
	FMulticastInlineDelegate OnDamagedEnemy; // 0x768(0x10)
	FMulticastInlineDelegate OnLaserPointerEvent; // 0x778(0x10)
	FMulticastInlineDelegate OnSecondaryLaserPointerEvent; // 0x788(0x10)
	FMulticastInlineDelegate OnSaluteEvent; // 0x798(0x10)
	FMulticastInlineDelegate OnPlayerShout; // 0x7a8(0x10)
	FMulticastInlineDelegate OnBoscoSalute; // 0x7b8(0x10)
	FMulticastInlineDelegate OnRevivedEvent; // 0x7d8(0x10)
	FMulticastInlineDelegate OnReviveCallEvent; // 0x7e8(0x10)
	FMulticastInlineDelegate OnRevivedOtherCharacter; // 0x7f8(0x10)
	FMulticastInlineDelegate OnHeadlightOnChanged; // 0x808(0x10)
	FMulticastInlineDelegate OnCallDonkey; // 0x818(0x10)
	FGameplayTagContainer GameplayTags; // 0x828(0x20)
	UZipLineStateComponent* ZipLineStateComponent; // 0x848(0x08)
	TArray<AActor*> EscapableGrabberEnemies; // 0x850(0x10)
	FMulticastInlineDelegate OnEnemyStartedTracking; // 0x860(0x10)
	FMulticastInlineDelegate OnEnemyEndedTracking; // 0x870(0x10)
	FMulticastInlineDelegate OnKilledGrabber; // 0x880(0x10)
	FMulticastInlineDelegate OnPerkActivationTimerFinished; // 0x890(0x10)
	UPerkHUDActivationWidget* BoundPerkActivationW; // 0x8a0(0x08)
	float PerkActivationTimer; // 0x8a8(0x04)
	FMulticastInlineDelegate OnCanEscapeGrabberChanged; // 0x8b0(0x10)
	AActor* GrabbedByClass; // 0x8c0(0x08)
	USoundCue* PowerAttackRefreshedSound; // 0x8c8(0x08)
	FMulticastInlineDelegate OnCoolDownProgress; // 0x8d0(0x10)
	bool bIsBeingBittenByCaveLeech; // 0x8e0(0x01)
	UWidgetInteractionComponent* WidgetInteraction; // 0x8e8(0x08)
	TArray<FPlatformComponent> PlatformComponentClasses; // 0x8f0(0x10)
	FDownCameraSettings DownCameraSettings; // 0x914(0x18)
	TArray<TWeakObjectPtr<AShieldGeneratorActor>> ActiveShieldGenerators; // 0x940(0x10)
	FGuid SaveGameID; // 0x954(0x10)
	FVector EstimatedVelocity; // 0x964(0x0c)
	FHoldButton FlareHeadlightButton; // 0x980(0x28)
	FHoldButton CycleItemButton; // 0x9a8(0x28)
	FHoldButton ToggleHUDButton; // 0x9d0(0x28)
	float EquipLaserpointerHoldDuration; // 0x9f8(0x04)
	bool IsPressingMovementInputKey; // 0x9fc(0x01)
	UPlayerCharacterID* characterID; // 0xa18(0x08)
	ATutorialManager* TutorialManagerType; // 0xa20(0x08)
	ATutorialManager* TutorialManagerSpacerig; // 0xa28(0x08)
	USkeletalMeshComponent* FPMesh; // 0xa30(0x08)
	UCameraComponent* FirstPersonCamera; // 0xa38(0x08)
	USceneComponent* FirstPersonRoot; // 0xa40(0x08)
	UActorTrackingComponent* ActorTracking; // 0xa48(0x08)
	UCharacterIntoxicationComponent* IntoxicationComponent; // 0xa50(0x08)
	UMissionStatsCollector* MissionStatsCollector; // 0xa58(0x08)
	USpringArmComponent* ThirdPersonSpringArm; // 0xa60(0x08)
	UCameraComponent* ThirdPersonCamera; // 0xa68(0x08)
	UPointLightComponent* ThirdPersonLight; // 0xa70(0x08)
	USpringArmComponent* FollowSpringArm; // 0xa78(0x08)
	UCameraComponent* FollowCamera; // 0xa80(0x08)
	UCameraComponent* DownCamera; // 0xa88(0x08)
	UCharacterCameraController* CameraController; // 0xa90(0x08)
	UPlayerHealthComponent* HealthComponent; // 0xa98(0x08)
	UCharacterSightComponent* SightComponent; // 0xaa0(0x08)
	UInventoryComponent* InventoryComponent; // 0xaa8(0x08)
	UCharacterUseComponent* UseComponent; // 0xab0(0x08)
	USingleUsableComponent* UsableComponent; // 0xab8(0x08)
	UOutlineComponent* OutlineComponent; // 0xac0(0x08)
	UTrailComponent* TrailComponent; // 0xac8(0x08)
	UCharacterRecoilComponent* RecoilComponent; // 0xad0(0x08)
	UStatusEffectsComponent* StatusEffectsComponent; // 0xad8(0x08)
	UPawnStatsComponent* PawnStatsComponent; // 0xae0(0x08)
	UPlayerAfflictionComponent* PawnAfflictionComponent; // 0xae8(0x08)
	UPlayerAttackPositionComponent* AttackerPositioningComponent; // 0xaf0(0x08)
	UCommunicationComponent* CommunicationComponent; // 0xaf8(0x08)
	UPlayerTemperatureComponent* TemperatureComponent; // 0xb00(0x08)
	UPlayerReactiveTerrainTrackerComponent* ReactiveTerrainTracker; // 0xb08(0x08)
	UInstantUsable* TrackGrindUsableComponent; // 0xb10(0x08)
	float RunningSpeed; // 0xb18(0x04)
	float RunBoost; // 0xb1c(0x04)
	float RunBoostChargeTime; // 0xb20(0x04)
	USoundCue* RunBoostActivationSound; // 0xb28(0x08)
	UParticleSystem* RunBoostParticles; // 0xb30(0x08)
	UPawnAffliction* RunBoostAffliction; // 0xb40(0x08)
	UPhysicsAsset* HangingPhysicsAsset; // 0xb48(0x08)
	float HangingSimulationBlend; // 0xb50(0x04)
	bool IsPlayableCharacter; // 0xb5c(0x01)
	UAudioComponent* SprintSoundComponent; // 0xb60(0x08)
	USoundCue* SpringSound; // 0xb68(0x08)
	FAnalogAimSettings AimSettings; // 0xb70(0x50)
	float DownedCameraMinPitch; // 0xbc0(0x04)
	float DownedCameraMaxPitch; // 0xbc4(0x04)
	float TurnToFaceScannerAngularSpeed; // 0xbc8(0x04)
	float CarryingMovementSpeedPenalty; // 0xbcc(0x04)
	float CarryingMaxFallVelocity; // 0xbd0(0x04)
	float MaxThrowProgress; // 0xbd4(0x04)
	float MaxThrowHoldDuration; // 0xbd8(0x04)
	float CarryingThrowMinForce; // 0xbe0(0x04)
	float CarryingThrowMaxForce; // 0xbe4(0x04)
	UStatusEffect* CarryingThrowingStatusEffect; // 0xbf0(0x08)
	float ThrowCarriableProgress; // 0xbfc(0x04)
	TMap<char, UCharacterStateComponent*> CharacterStates; // 0xc00(0x50)
	TWeakObjectPtr<ATutorialManager> TutorialManager; // 0xc50(0x08)
	UCharacterStateComponent* ActiveCharacterState; // 0xc58(0x08)
	bool IsInDropPod; // 0xc63(0x01)
	bool IsInEscapePod; // 0xc64(0x01)
	float ButtonMemoryDuration; // 0xc68(0x04)
	bool IsRunning; // 0xc6c(0x01)
	bool CanDash; // 0xc6d(0x01)
	float DashInputWindow; // 0xc74(0x04)
	float DashFowardMovementMinRequirement; // 0xc78(0x04)
	float DashRightMovementMaxRequirement; // 0xc7c(0x04)
	float DashControllerMinValueRequired; // 0xc80(0x04)
	float DashCooldown; // 0xc84(0x04)
	UStatusEffect* DashStatusEffect; // 0xc88(0x08)
	float ForwardInput; // 0xc90(0x04)
	float RightInput; // 0xc94(0x04)
	float StoppedRunningTime; // 0xca4(0x04)
	float ShoutPressedTime; // 0xca8(0x04)
	bool bIsUsingItemPressed; // 0xcac(0x01)
	bool bIsUsingPressed; // 0xcad(0x01)
	float UsingDelay; // 0xcb0(0x04)
	bool HeadLightOn; // 0xcb4(0x01)
	bool IsUsing; // 0xcb5(0x01)
	float JumpPressedTime; // 0xcb8(0x04)
	bool CanMove; // 0xcbc(0x01)
	bool CanAim; // 0xcbd(0x01)
	bool CanUseItem; // 0xcbe(0x01)
	bool CanChangeItems; // 0xcbf(0x01)
	bool CanMine; // 0xcc0(0x01)
	bool IsStandingDown; // 0xcc1(0x01)
	bool InDanceRange; // 0xcc2(0x01)
	bool IsDancing; // 0xcc3(0x01)
	float DanceStartTime; // 0xcc4(0x04)
	UFSDAchievement* HappyFeetAchievement; // 0xcc8(0x08)
	int32_t DanceMove; // 0xcd0(0x04)
	enum class ECharacterCameraMode CameraMode; // 0xcd4(0x01)
	bool IsInCharacterSelectionWorld; // 0xcd5(0x01)
	float IdleTime; // 0xcd8(0x04)
	UAnimMontage* FPDrinkSalute; // 0xce0(0x08)
	UAnimMontage* TPDrinkSalute; // 0xce8(0x08)
	UDialogDataAsset* SaluteShout; // 0xcf0(0x08)
	UDialogDataAsset* DrinkShout; // 0xcf8(0x08)
	UAnimMontage* CurrentSaluteMontage; // 0xd00(0x08)
	TArray<UMaterialInterface*> CachedMaterials; // 0xd10(0x10)
	bool BlockTrackGrindOnLanded; // 0xd20(0x01)
	FHeroInfo HeroInfo; // 0xd38(0x88)
	FString SteamClassID; // 0xdc0(0x10)
	UMaterialInstanceDynamic* RadarMaterialInstance; // 0xdd0(0x08)
	int32_t RadarMaterialAngleParameterIndex; // 0xdd8(0x04)
	FVector LastUpdateVisibiltyPos; // 0xddc(0x0c)
	FVector SpawnLocation; // 0xde8(0x0c)
	UFSDPhysicalMaterial* FallbackPhysicalMaterial; // 0xdf8(0x08)
	bool ClientReady; // 0xe01(0x01)
	UCharacterStateComponent* NextCharacterState; // 0xe08(0x08)
	bool PlayerIsLeavingInDroppod; // 0xe18(0x01)
	bool CanInstantRevive; // 0xe24(0x01)
	bool HasInitializedPerks; // 0xe26(0x01)
	UCharacterVanityComponent* CharacterVanity; // 0xe30(0x08)
	FCameraSpringSettings CameraSpringSettings; // 0xe40(0x3c)

	void UseZipLine(AZipLineProjectile* ZipLine, FVector Start, FVector End);
	void Unparalyze();
	void ToggleScanTool(bool Visible);
	void ToggleHUDReleased();
	void ToggleHUDPressed();
	void ToggleHeadLight();
	void ThrowFlareReleased();
	void ThrowFlarePressed();
	void ThrowFlare();
	void StopUsingItem();
	void StartTutorials(bool ResetTutorials);
	void StartPerkActivation(UPerkHUDActivationWidget* PerkActivationWidget, float HoldTime);
	UAudioComponent* SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, float PriorityOverride, FName AttachPointName, FVector Location, FRotator Rotation, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
	UAudioComponent* SpawnSoundAtLocation(USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
	UAudioComponent* SpawnSound2D(USoundBase* Sound, float PriorityOverride, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool SendVibration);
	void ShowSimpleHoldProgress(APlayerController* PlayerController, FText InDescription, float InProgress);
	void SetStandingDown(bool standingDown);
	void SetRadarMaterialInstance(UMaterialInstanceDynamic* matInstance);
	void SetOutsideShieldGenerator(AShieldGeneratorActor* Shield);
	void SetIsCharacterSelectionModel();
	void SetInsideShieldGenerator(AShieldGeneratorActor* Shield);
	void SetInCharacterSelectionWorld();
	void SetHeadLight(bool On);
	void SetFallbackPhysicalMaterial(UFSDPhysicalMaterial* PhysMat);
	void SetCameraMode(enum class ECharacterCameraMode NewCameraMode);
	void SetAttached(USceneComponent* AttachTo, bool DelayUntilLanded);
	void Server_TriggerDash();
	void Server_ThrowCarriedItem(FVector_NetQuantize force);
	void Server_StartSalute(UAnimMontage* startSalute);
	void Server_Shouted();
	void Server_SetUsing(bool characterIsUsing);
	void Server_SetRunning(bool characterIsRunning);
	void Server_SetRunBoostActive(bool IsActive);
	void Server_SetIsThrowingCarriable(bool isThrowing);
	void Server_SetIsPressingMovementInput(bool aIsPushingInput);
	void Server_SetIsJumpPressed(bool InJumpPressed);
	void Server_SetDispenserReward(AEventRewardDispenser* Dispenser, USchematic* Reward);
	void Server_SetClientReady();
	void Server_InstantRevive(APlayerCharacter* ReviveTarget, enum class EInputKeys Key);
	void Server_EscapeFromGrabber();
	void Server_CancelThrowingCarriable();
	void Server_CallDonkey();
	void Server_AddImpulseToActor(AFSDPhysicsActor* Target, FVector_NetQuantize Impulse, FVector_NetQuantize Location, FVector_NetQuantize AngularImpulse);
	void Server_AddImpulse(FVector_NetQuantizeNormal Direction, float force);
	void SendLevelUpStatistics(int32_t currentRank);
	void ReviveProgress(float Progress);
	void RequestChangeInGravityScale(float newGravityScale);
	void RejectInvite();
	void ReceiveOnHeadlightOn();
	void ReceiveEscapedFromGrabber();
	void Receive_ShowFieldMedicInstantReviveEffects();
	void PrepareForEndScreen();
	void PilotVehicle(AActor* Vehicle);
	void Paralyze(AActor* ParalyzedBy);
	void OpenChat();
	void OnResourceFull(UCappedResource* Resource);
	void OnRep_IsStandingDown();
	void OnRep_IsDancing();
	void OnRep_HeadLightOn();
	void OnRep_DanceMove();
	void OnRep_CharacterState(UCharacterStateComponent* oldState);
	void OnPerkActivationFinished();
	void OnItemEquipped(AItem* Item);
	void OnCharacterUsed(APlayerCharacter* User, enum class EInputKeys Key);
	void OnCharacterBeginUse(APlayerCharacter* User, enum class EInputKeys Key);
	void MouseWheelUp();
	void MouseWheelDown();
	bool LockIfState(enum class ECharacterState LockIf, enum class ECharacterState LockTo, bool canMoveAndAim);
	void KilledGrabber__DelegateSignature(AActor* Grabber);
	void JumpRelease();
	void JumpPress();
	void ItemUseDelegate__DelegateSignature(AItem* Item);
	bool IsWithinDistance(AActor* Source, float Distance);
	bool IsWalking();
	bool IsStateActive(enum class ECharacterState State);
	bool IsSaluting();
	bool IsParalyzed();
	bool IsMovementInputPressed();
	bool IsMining();
	bool IsLyingDown();
	bool IsJumpPressed();
	bool IsInState(enum class ECharacterState aState);
	bool IsFrozen();
	bool IsFirstPerson();
	bool IsDown();
	bool IsAlive();
	void IgnoreInvite();
	bool HasBeenRevived();
	UTrailComponent* GetTrailComponent();
	UPlayerTPAnimInstance* GetTPAnimInstance();
	float GetTimeSinceLastRevival();
	enum class ECharacterState GetPreviousState();
	AFSDPlayerState* GetPlayerState();
	FString GetPlayerName();
	AFSDPlayerController* GetPlayerController();
	UInventoryList* GetInventoryList();
	FText GetHeroSwitchToMessage();
	FText GetHeroName();
	UTexture2D* GetHeroIcon();
	FLinearColor GetHeroColor();
	UPlayerFPAnimInstance* GetFPAnimInstance();
	AItem* GetEquippedItem();
	float GetDownTime();
	APlayerCharacter* GetDownCameraTarget();
	USceneComponent* GetDownCameraRotationPoint();
	USceneComponent* GetDownCameraAttachPoint();
	enum class ECharacterState GetCurrentState();
	float GetClassXP();
	UCharacterVanityComponent* GetCharacterVanity();
	UCharacterStateComponent* GetCharacterStateComponent(enum class ECharacterState State);
	float GetBeginRevivedProgress();
	FString GetAnalyticsClass();
	FRotator GetAimRotation();
	FVector GetActorGroundLocation();
	TArray<AShieldGeneratorActor*> GetActiveShieldGenerators();
	UPlayerAnimInstance* GetActiveAnimInstance();
	void ForceIsPressingMovementInputKey();
	void FirePressedDelegate__DelegateSignature();
	void ExitVehicle();
	void CycleItemUp();
	void CycleItemReleased();
	void CycleItemPressed();
	void CycleItemDown();
	void ConsumeCycleItemButton();
	void Client_TargetDamaged(UObject* Health, float Damage, float DamageModifier, bool IsWeakPoint, bool IsRadial);
	void Client_AddImpulse(FVector_NetQuantizeNormal Direction, float force);
	void CheckWithoutAPaddleAchievement();
	void CheatRevive();
	void CheatGodMode();
	void CharacterTrackingDelegate__DelegateSignature(AActor* InTrackingEnemy);
	void ChangeState(enum class ECharacterState NewState);
	void ChangeIfDifferentState(enum class ECharacterState NewState);
	void CanEscapeGrabberDelegate__DelegateSignature(bool bCanEscape);
	bool CanEscapeFromGrabber();
	void CallDonkeyReleased();
	void CallDonkeyPressed();
	void BP_OnUpdateMeshes();
	void BP_OnControllerReady();
	void AnnounceSchematicCollected(USchematic* InSchematic);
	void All_StartSalute(UAnimMontage* saluteMontage);
	void All_ShowImpactEffects(UParticleSystem* Particles, FVector_NetQuantize Location, FVector_NetQuantizeNormal Orientation);
	void All_ShowFieldMedicInstantReviveEffects();
	void AddImpulseToActor(AFSDPhysicsActor* Target, FVector_NetQuantize Impulse, FVector_NetQuantize Location, FVector_NetQuantize AngularImpulse);
	void AddImpulseFromVector(FVector Vector);
	void AddImpulseFromDirectionAndForce(FVector Direction, float force);
	float AddClassXP(float Amount);
	void AcknowledgeCharacterState(enum class ECharacterState eState);
	void AcceptInvite();
};

// Class FSD.PlayerCharacterFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPlayerCharacterFunctionLibrary : UBlueprintFunctionLibrary {

	bool SetPlayerVoiceMuted(UObject* WorldContextObject, AFSDPlayerState* PlayerState, bool Mute, bool TrySystemWide, int32_t localUserNum);
	bool IsPlayerVoiceMuted(UObject* WorldContextObject, AFSDPlayerState* PlayerState, int32_t localUserNum);
	APlayerCharacter* GetRandomPlayer(UObject* WorldContextObject, bool MustBeAlive, bool MustNotBeParalyzed);
	APlayerCharacter* GetNearestVisiblePlayer(AActor* From, float MaxDistance, bool MustBeAlive, bool MustNotBeParalyzed);
	APlayerCharacter* GetNearestPlayerToPosition(UObject* WorldContextObject, FVector Position, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool XYOnly);
	APlayerCharacter* GetNearestPlayerFrom(UObject* WorldContext, FVector From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool XYOnly);
	APlayerCharacter* GetNearestPlayer(AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool XYOnly);
};

// Class FSD.PlayerHealthComponent
// Size: 0x388 (Inherited: 0x248)
struct UPlayerHealthComponent : UHealthComponent {
	FMulticastInlineDelegate OnFullHealthCannotHeal; // 0x250(0x10)
	FMulticastInlineDelegate OnHealedFromCrystalEvent; // 0x260(0x10)
	FMulticastInlineDelegate OnHealthRegeneratingChanged; // 0x270(0x10)
	FMulticastInlineDelegate OnPlayerHit; // 0x290(0x10)
	float MaxHealth; // 0x2a0(0x04)
	float MaxArmor; // 0x2a4(0x04)
	float ArmorDamage; // 0x2a8(0x04)
	float ReviveHealthReturnRatio; // 0x2b0(0x04)
	float ReviveArmorReturnRatio; // 0x2b4(0x04)
	float HealthPerCrystalVolume; // 0x2b8(0x04)
	FHealthRegenerationParams HealthRegeneration; // 0x2bc(0x10)
	UCurveFloat* ArmorRegenCurve; // 0x2d0(0x08)
	float ShieldRegenDelay; // 0x2d8(0x04)
	APlayerCharacter* Character; // 0x2e0(0x08)
	UParticleSystem* GenericImpactParticles; // 0x2e8(0x08)
	UParticleSystem* ShieldLinkEffect; // 0x2f0(0x08)
	FAudioWithCooldown AudioFriendlyFire; // 0x2f8(0x10)
	UParticleSystemComponent* ShieldLinkInstance; // 0x308(0x08)
	float InvulnerabilityDuration; // 0x314(0x04)
	float ReviveInvulnerabilityTime; // 0x318(0x04)
	UPlayerDamageTakenMutator* DamageTakenMutator; // 0x358(0x08)
	UStatusEffect* IronWillStatusEffectClass; // 0x368(0x08)
	UStatusEffect* IronWillStatusEffect; // 0x370(0x08)
	bool IronWillActive; // 0x378(0x01)
	float IronWillTimeToActivate; // 0x37c(0x04)

	UStatusEffect* SetIronWillStatusEffect(UStatusEffect* steClass);
	void Server_TryActivateIronWill();
	void OnRep_MaxHealth();
	void OnRep_MaxArmor();
	void OnRep_ArmorDamage(float oldDamage);
	bool IsLowHealth();
	float GetRemainingIronWillActivationTime();
	bool GetIsHealthRegenerating();
	bool GetIronWillActive();
	float GetHealthRegeneratingTargetRatio();
	void Client_SetHealthRegenerating(bool isRegenerating);
	void Client_OnFriendlyFire(AController* EventInstigator, AActor* DamageCauser);
	void Client_HealthFullCannotHeal();
	bool CanActivateIronWill();
};

// Class FSD.PlayerImpactCooldownComponent
// Size: 0x108 (Inherited: 0xb0)
struct UPlayerImpactCooldownComponent : UActorComponent {
	float CoolDownTime; // 0xb0(0x04)

	bool CheckCanImpact(AActor* Actor);
};

// Class FSD.PlayerMovementComponent
// Size: 0x6a0 (Inherited: 0x610)
struct UPlayerMovementComponent : UCharacterMovementComponent {
	bool DebugFastMove; // 0x610(0x01)
	USoundBase* SlidingOnIceSound; // 0x618(0x08)
	float LedgeClimbZVelocity; // 0x630(0x04)
	float MovementPenalty; // 0x634(0x04)
	APlayerCharacter* Character; // 0x640(0x08)
	TWeakObjectPtr<UCharacterStateComponent> CurrentPhysUpdateState; // 0x648(0x08)

	void RemoveGravityModifier(AActor* SourceActor);
	void AddGravityModifier(AActor* SourceActor, float effect);
};

// Class FSD.PlayerProximityTracker
// Size: 0xf8 (Inherited: 0xb0)
struct UPlayerProximityTracker : UActorComponent {
	float MaxDistanceBetweenPlayers; // 0xb0(0x04)
	float PlayerSpheresUpdateRatePerSecond; // 0xb4(0x04)
	TArray<FPlayerSphere> PlayerSpheres; // 0xb8(0x10)
	TArray<FProximityTriggerItem> LocalPlayerProximityTriggers; // 0xc8(0x10)
	TArray<FProximityTriggerItem> AnyPlayerProximityTriggers; // 0xd8(0x10)

	void Receive_RegisterForLocalPlayerProximity(UObject* WorldContextObject, FVector Location, float Distance, FDelegate proximityCallback, bool triggerOnlyOnce);
	void Receive_RegisterForAnyPlayerProximity(UObject* WorldContextObject, FVector Location, float Distance, FDelegate proximityCallback, bool triggerOnlyOnce);
	FPlayerSphere GetPrimarySphere();
	TArray<FPlayerSphere> GetPlayerSpheres();
};

// Class FSD.PlayerRejoinState
// Size: 0x120 (Inherited: 0xb0)
struct UPlayerRejoinState : UActorComponent {
	APlayerCharacter* CharacterClass; // 0xb0(0x08)

	void Server_Reset();
	void Server_AddIntValue_Internal(FGuid ItemKey, FName ValueKey, int32_t Value);
	void Server_AddFloatValue_Internal(FGuid ItemKey, FName ValueKey, float Value);
	void Client_SetValues(TArray<FRejoinFloat> floatValues, TArray<FRejoinInt> intValues);
};

// Class FSD.ResourcesComponent
// Size: 0x108 (Inherited: 0xb0)
struct UResourcesComponent : UActorComponent {
	FMulticastInlineDelegate OnResourceChanged; // 0xb0(0x10)
	FMulticastInlineDelegate OnResourceIncreased; // 0xc0(0x10)
	FMulticastInlineDelegate OnResourceFull; // 0xd0(0x10)
	FMulticastInlineDelegate OnResourceAdded; // 0xe0(0x10)
	TArray<UCappedResource*> Resources; // 0xf0(0x10)
	float ResourceCap; // 0x100(0x04)

	void ResourceIncreased(UCappedResource* Resource, float Delta);
	void ResourceFull(UCappedResource* Resource);
	void ResourceChanged(UCappedResource* Resource, float currentAmount);
	void OnRep_Resources();
	int32_t GetXPFromResourceMap(TMap<UResourceData*, float> Resources);
	int32_t GetXpFromMining();
	TMap<UResourceData*, float> GetSeparateResourcesFromMap(TMap<UResourceData*, float> Resources);
	UCappedResource* GetResource(UResourceData* Data, bool createIfAmountIsZero);
	float GetCapacityPct();
	TArray<UCappedResource*> GetAllResources();
};

// Class FSD.PlayerResourceComponent
// Size: 0x108 (Inherited: 0x108)
struct UPlayerResourceComponent : UResourcesComponent {

	UPlayerResourceComponent* GetFromPlayer(APlayerCharacter* PlayerCharacter);
};

// Class FSD.PlayerStatsComponent
// Size: 0x160 (Inherited: 0xb0)
struct UPlayerStatsComponent : UActorComponent {
	FMulticastInlineDelegate OnKillAdded; // 0xb0(0x10)
	int32_t TotalKills; // 0xc0(0x04)
	int32_t TotalRevived; // 0xc4(0x04)
	int32_t TotalDeaths; // 0xc8(0x04)
	int32_t TotalSupplypodsRequested; // 0xcc(0x04)
	float TotalGoldMined; // 0xd0(0x04)
	float TotalMOMsMined; // 0xd4(0x04)
	float TotalMineralsMined; // 0xd8(0x04)
	float TotalXPGained; // 0xdc(0x04)
	bool EscapedInPod; // 0xe0(0x01)
	APlayerCharacter* LastPlayedClass; // 0xe8(0x08)
	FEndMissionResult EndMissionResult; // 0xf0(0x60)
	FMulticastInlineDelegate OnEndMissionResultReady; // 0x150(0x10)

	void SendMissionAnalytics(bool trackMorkite);
	void SendEndMissionResult(FEndMissionResult Result);
	void OnResourceMined(UCappedResource* Resource, float Amount);
	void OnRep_EndMissionResult();
	bool IsEndMissionResultReady();
	bool GetSurvivedInPod();
	void EndMissionResultDelegate__DelegateSignature(FEndMissionResult Result);
};

// Class FSD.PlayerTemperatureComponent
// Size: 0x180 (Inherited: 0xc8)
struct UPlayerTemperatureComponent : UTemperatureComponent {
	FMulticastInlineDelegate OnTemperatureChanged; // 0xc8(0x10)
	FMulticastInlineDelegate OnTemperatureStateChanged; // 0xd8(0x10)
	FMulticastInlineDelegate OnTemperatureChangeRate; // 0xe8(0x10)
	FMulticastInlineDelegate OnDefrosting; // 0xf8(0x10)
	FMulticastInlineDelegate OnBarVisibilityChanged; // 0x108(0x10)
	float MinimumTemperature; // 0x118(0x04)
	float MaximumTemperature; // 0x11c(0x04)
	float DefrostTemperature; // 0x120(0x04)
	float BurnTemperature; // 0x124(0x04)
	float DouseFireTemperature; // 0x128(0x04)
	float TemperaturRegainSpeed; // 0x12c(0x04)
	float DefrostingRequired; // 0x130(0x04)
	UStatusEffect* OnDefrostedStatusEffect; // 0x138(0x08)
	float NormalTemperature; // 0x140(0x04)
	float CurrentTemperature; // 0x144(0x04)
	float TargetTemperature; // 0x148(0x04)
	int8_t TemperatureChangeSpeed; // 0x155(0x01)
	float DefrostProgress; // 0x158(0x04)
	bool barVisible; // 0x15c(0x01)
	APlayerCharacter* Character; // 0x170(0x08)
	enum class EPlayerTemperatureState TemperatureState; // 0x178(0x01)

	void SetNormalTemperature();
	void SetFrozenTemperature();
	void OnRep_TemperatureState(enum class EPlayerTemperatureState oldState);
	void OnRep_TemperatureChangeSpeed(int8_t OldSpeed);
	void OnRep_DefrostProgress();
	void OnRep_CurrentTemperature(float OldTemperature);
	void OnDeath(UHealthComponentBase* Health);
	int32_t GetTemperatureChangedSpeed();
	float GetDefrostProgress();
	float GetCurrentTemperatureNormalized();
	void Defrost(float Amount);
};

// Class FSD.PlayerTriggerBox
// Size: 0x278 (Inherited: 0x228)
struct APlayerTriggerBox : ATriggerBox {
	FMulticastInlineDelegate OnPlayerEntered; // 0x228(0x10)
	FMulticastInlineDelegate OnPlayerExited; // 0x238(0x10)
	FMulticastInlineDelegate OnAllPlayersEntered; // 0x248(0x10)
	FMulticastInlineDelegate OnAllPlayersExited; // 0x258(0x10)
	TArray<APlayerCharacter*> PlayersInside; // 0x268(0x10)

	void TriggerBoxPlayerEvent__DelegateSignature(APlayerCharacter* Player);
	void TriggerBoxEvent__DelegateSignature();
	bool IsAnyPlayerInside(bool excludingDeadPlayers);
	void BP_OnPlayerExited(APlayerCharacter* Player);
	void BP_OnPlayerEntered(APlayerCharacter* Player);
	void BP_OnAllPlayersExited();
	void BP_OnAllPlayersEntered();
	bool AreAllPlayersInside(bool excludingDeadPlayers);
};

// Class FSD.PlayerTriggerComponent
// Size: 0xe0 (Inherited: 0xb0)
struct UPlayerTriggerComponent : UActorComponent {
	FMulticastInlineDelegate OnTriggerBeginEvent; // 0xb0(0x10)
	FMulticastInlineDelegate OnTriggerEndEvent; // 0xc0(0x10)
	UPrimitiveComponent* collider; // 0xd0(0x08)

	void SetCollider(UPrimitiveComponent* collider);
	void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
};

// Class FSD.PLSTester
// Size: 0x298 (Inherited: 0x220)
struct APLSTester : AActor {
	int32_t PLSSeed; // 0x220(0x04)
	int32_t MissionSeed; // 0x224(0x04)
	int32_t GlobalSeed; // 0x228(0x04)
	int32_t GlobalMissionIndex; // 0x22c(0x04)
	UMissionComplexity* limitComplexity; // 0x230(0x08)
	UMissionDuration* limitDuration; // 0x238(0x08)
	UMissionMutator* Mutator; // 0x240(0x08)
	TArray<UMissionWarning*> Warnings; // 0x248(0x10)
	UBiome* Biome; // 0x258(0x08)
	UMissionTemplate* MissionTemplate; // 0x260(0x08)
	UMissionTemplate* CustomMissionTemplate; // 0x268(0x08)
	UDifficultySetting* OverrideDifficulty; // 0x270(0x08)
	int32_t SimulatePlayerCount; // 0x278(0x04)
	FText CustomMissionName; // 0x280(0x18)
};

// Class FSD.DeepDiveTester
// Size: 0x240 (Inherited: 0x220)
struct ADeepDiveTester : AActor {
	UBiome* Biome; // 0x220(0x08)
	int32_t Seed; // 0x228(0x04)
	enum class EMissionStructure MissionStructure; // 0x22c(0x01)
	TArray<FDeepDiveTesterItem> Stages; // 0x230(0x10)
};

// Class FSD.PostProcessingManager
// Size: 0x250 (Inherited: 0x220)
struct APostProcessingManager : AActor {
	TArray<TWeakObjectPtr<AFSDPostProcessingActor>> RegisteredActors; // 0x220(0x10)
	TArray<FPostProcessingBlendable> CurrentBlendables; // 0x230(0x10)
	TArray<UMaterialInstanceDynamic*> Materials; // 0x240(0x10)
};

// Class FSD.PresenceSubSystem
// Size: 0x58 (Inherited: 0x30)
struct UPresenceSubSystem : UGameInstanceSubsystem {
	UDiscordWrapper* DiscordWI; // 0x30(0x08)
	UCommunityGoalWrapper* CommunityWI; // 0x38(0x08)
};

// Class FSD.ProceduralController
// Size: 0xb0 (Inherited: 0xb0)
struct UProceduralController : UActorComponent {

	void Server_RequestTunnelData();
	void SendTunnelData();
	void SendRoomData();
	void SendRequestedPLSData();
	void SendRequestedCarverData(enum class EDebrisItemPass pass);
	void RequestPLSData();
	void RequestCarverData(enum class EDebrisItemPass pass);
	void ReceivedTunnelData(TArray<FTunnelNode> Tunnels);
	void ReceivedRoomData(int32_t Seed, TArray<FRoomNode> Rooms, TArray<FPathObstacle> obstacles);
	void Client_SendTunnelData(TArray<FTunnelNode> Tunnels);
	void Client_SendRoomData(int32_t Seed, TArray<FRoomNode> Rooms, TArray<FPathObstacle> obstacles);
	void Client_RecieveCarverSizes(int32_t pass, int32_t carverCount);
	void Client_ReceivePLSLevelCarver(int32_t pass, FLevelGenerationCarverLists levelCarvers);
	void Client_ReceivePLSInfluencers(FGeneratedInfluenceSets influenceSet);
	void Client_ReceivePLSDebris(TArray<FGeneratedDebrisItem> levelDebris);
};

// Class FSD.ProceduralObjectColliders
// Size: 0x100 (Inherited: 0xb0)
struct UProceduralObjectColliders : UActorComponent {
};

// Class FSD.ProceduralSettings
// Size: 0x38 (Inherited: 0x30)
struct UProceduralSettings : UDataAsset {
	URoomDecorationObject* MiningpodCalldownLocationDecoration; // 0x30(0x08)
};

// Class FSD.CaveInfluencer
// Size: 0x30 (Inherited: 0x30)
struct UCaveInfluencer : UDataAsset {
};

// Class FSD.ProceduralTunnelComponent
// Size: 0xd8 (Inherited: 0xb0)
struct UProceduralTunnelComponent : UActorComponent {
	UTunnelParameters* TunnelParameters; // 0xb0(0x08)
	bool CreateDirt; // 0xb8(0x01)
	UCaveInfluencer* DirtInfluencer; // 0xc0(0x08)
	float DirtInfluencerRange; // 0xc8(0x04)
};

// Class FSD.ProfilingSubSystem
// Size: 0x40 (Inherited: 0x30)
struct UProfilingSubSystem : UWorldSubsystem {
	TArray<FProfileEntry> Entries; // 0x30(0x10)

	float GetTotalTime();
	TArray<FProfileEntry> GetEntries();
	TArray<FProfileCategoryTiming> GetCategoryTimings();
};

// Class FSD.FakePhysicsProjectile
// Size: 0x3a0 (Inherited: 0x2e8)
struct AFakePhysicsProjectile : AProjectileBase {
	FFakeMoverState MoverState; // 0x2e8(0x60)
	FFakeMoveState posVel; // 0x348(0x24)
	UFakeMoverSettings* MoveSettings; // 0x370(0x08)
	float InitialSpeed; // 0x378(0x04)
	float DampOmega; // 0x37c(0x04)
	float SyncTime; // 0x380(0x04)

	void SphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void OnRep_PosVel(FFakeMoveState posVel);
};

// Class FSD.ProjectileAttack
// Size: 0x50 (Inherited: 0x28)
struct UProjectileAttack : UObject {
	FFloatInterval Delay; // 0x28(0x08)
	bool TriggerOnEvent; // 0x30(0x01)
	FFloatInterval HorizontalAngleOffset; // 0x34(0x08)
	FFloatInterval VerticalAngleOffset; // 0x3c(0x08)
	FName OverrideSocketName; // 0x44(0x08)
};

// Class FSD.NormalProjectileAttack
// Size: 0x60 (Inherited: 0x50)
struct UNormalProjectileAttack : UProjectileAttack {
	AProjectile* Projectile; // 0x50(0x08)
	float RandomAngle; // 0x58(0x04)
};

// Class FSD.BallisticProjectileAttack
// Size: 0x60 (Inherited: 0x50)
struct UBallisticProjectileAttack : UProjectileAttack {
	AProjectile* Projectile; // 0x50(0x08)
	float ProjectileArc; // 0x58(0x04)
	float Gravity; // 0x5c(0x04)
};

// Class FSD.ProjectileAttackBaseComponent
// Size: 0x178 (Inherited: 0xf0)
struct UProjectileAttackBaseComponent : UAttackBaseComponent {
	TArray<UProjectileAttack*> Projectiles; // 0xf0(0x10)
	TArray<UAnimMontage*> Montages; // 0x100(0x10)
	FName SocketName; // 0x110(0x08)
	bool UseSocketForRotation; // 0x118(0x01)
	bool ProjectilesIgnoreEachOther; // 0x119(0x01)
	FMulticastInlineDelegate OnAttackStartedEvent; // 0x148(0x10)
	FMulticastInlineDelegate OnProjectileFiredEvent; // 0x158(0x10)
	FMulticastInlineDelegate OnAttackEndedEvent; // 0x168(0x10)

	bool TriggerMontage(AActor* Target);
	UAnimMontage* SelectMontage();
	void OnPerformAttack();
	void OnMontageEnded(UAnimMontage* Montage, bool interrupted);
	void MulticastProjectileFired();
	void CancelMontage();
};

// Class FSD.ProjectileAttackComponent
// Size: 0x180 (Inherited: 0x178)
struct UProjectileAttackComponent : UProjectileAttackBaseComponent {
	bool ManualyComplete; // 0x178(0x01)

	void AddAttackMontage(UAnimMontage* attackMontage);
};

// Class FSD.ExplosionBaseComponent
// Size: 0xc8 (Inherited: 0xb0)
struct UExplosionBaseComponent : UActorComponent {
	float CarveDiameterCM; // 0xb0(0x04)
	float CarveNoiseCM; // 0xb4(0x04)
	float CarveBurnThicknessCM; // 0xb8(0x04)
	float CarveNormalOffsetCM; // 0xbc(0x04)
	float CarveNormalSqueeze; // 0xc0(0x04)

	void DamageOnlyFromHit(FHitResult HitResult, UDamageComponent* DamageComponent);
	void DamageOnly(FVector Location, FName BoneName, UPrimitiveComponent* Target, UPhysicalMaterial* PhysicalMaterial, UDamageComponent* DamageComponent);
	void DamageArmorClients(FHitResult HitResult, UDamageComponent* DamageComponent);
	void DamageAndCarveFromHit(FHitResult HitResult, UDamageComponent* DamageComponent);
	void DamageAndCarve(FVector Location, FVector ImpactNormal, FName BoneName, UPrimitiveComponent* Target, UPhysicalMaterial* PhysicalMaterial, UDamageComponent* DamageComponent);
	void CarveOnly(FVector Location, FVector ImpactNormal);
};

// Class FSD.ExplosionComponent
// Size: 0xc8 (Inherited: 0xc8)
struct UExplosionComponent : UExplosionBaseComponent {
};

// Class FSD.ProjectileExplosion
// Size: 0xf0 (Inherited: 0xc8)
struct UProjectileExplosion : UExplosionBaseComponent {
	FScaledEffect ExplosionEffect; // 0xc8(0x10)
	USoundCue* ExplosionSound; // 0xd8(0x08)
	UForceFeedbackEffect* ForceFeedbackEffect; // 0xe0(0x08)
	UForceFeedbackAttenuation* ForceFeedbackAttanuation; // 0xe8(0x08)

	void SpawnEffectsFromHit(FHitResult Hit);
	void SpawnEffects(FVector Location, FVector Normal);
};

// Class FSD.ProjectileLauncherBaseComponent
// Size: 0x158 (Inherited: 0x110)
struct UProjectileLauncherBaseComponent : UWeaponFireComponent {
	bool UseSpread; // 0x110(0x01)
	float VerticalSpread; // 0x114(0x04)
	float HorizontalSpread; // 0x118(0x04)
	FMulticastInlineDelegate OnProjectileSpawned; // 0x120(0x10)
	TArray<UItemUpgrade*> ProjectileUpgrades; // 0x130(0x10)
	float ArcStartAngle; // 0x140(0x04)
	bool TransferCharacterVelocityToProjectile; // 0x144(0x01)

	void Server_StopFire();
	void Server_Fire(FVector Origin, FVector_NetQuantizeNormal Direction, FVector_NetQuantizeNormal initialBonusVelocity, AProjectileBase* DormentProjectile);
	void ProjectileSpawned__DelegateSignature(AProjectileBase* Projectile);
	void All_ShowHit();
};

// Class FSD.ProjectileLauncherComponent
// Size: 0x170 (Inherited: 0x158)
struct UProjectileLauncherComponent : UProjectileLauncherBaseComponent {
	AProjectileBase* projectileClass; // 0x158(0x08)

	void SetProjectileClass(AProjectileBase* NewProjectileClass);
};

// Class FSD.ChargedProjectileLauncherComponent
// Size: 0x180 (Inherited: 0x158)
struct UChargedProjectileLauncherComponent : UProjectileLauncherBaseComponent {
	AProjectileBase* NormalProjectileClass; // 0x158(0x08)
	AProjectileBase* ChargedProjectileClass; // 0x160(0x08)
	float ProjectileChangeChargeValue; // 0x168(0x04)

	void SetProjectileClassCharged(AProjectileBase* NewProjectileClass);
	void SetProjectileClass(AProjectileBase* NewProjectileClass);
};

// Class FSD.PromotionRewardsSettings
// Size: 0x90 (Inherited: 0x30)
struct UPromotionRewardsSettings : UDataAsset {
	TArray<FClaimableRewardEntry> FirstPromotionRewards; // 0x30(0x10)
	TMap<int32_t, FPromotionRewardsRank> PromotionRanks; // 0x40(0x50)
};

// Class FSD.PromotionRewardsLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPromotionRewardsLibrary : UBlueprintFunctionLibrary {

	bool ClaimPromotionRewards(UObject* WorldContext, APlayerController* PlayerController, TArray<FClaimableRewardEntry> OutRewards, bool OutFirstPromotion);
};

// Class FSD.ProspectorRobot
// Size: 0x3e8 (Inherited: 0x3a0)
struct AProspectorRobot : AEnemyDeepPathfinderCharacter {
	float WorkingArmSpeed; // 0x3a0(0x04)
	float EnginePowerMultiplier; // 0x3a4(0x04)
	AActor* Target; // 0x3b0(0x08)
	float HeadResponsiveness; // 0x3b8(0x04)
	float HeadSearchSpeed; // 0x3bc(0x04)
	float HeadSearchMaxAngle; // 0x3c0(0x04)
	UMaterialInstanceDynamic* EngineMaterial; // 0x3d8(0x08)
	enum class EProspectorRobotState ProspectorState; // 0x3e0(0x01)

	void SetTarget(AActor* Target);
	void SetArmSpeed(float Speed);
	void OnStateEnd(enum class EProspectorRobotState oldState);
	void OnStateBegin(enum class EProspectorRobotState NewState);
	void OnRep_ProspectorState(enum class EProspectorRobotState oldState);
	bool IsStateActive(enum class EProspectorRobotState State);
	void ChangeState(enum class EProspectorRobotState NewState);
};

// Class FSD.ProspectorAnimInstance
// Size: 0x2f0 (Inherited: 0x2c0)
struct UProspectorAnimInstance : UEnemyAnimInstance {
	FVector2D TiltResult; // 0x2cc(0x08)
	FVector2D LookingResult; // 0x2d4(0x08)
	enum class EProspectorRobotState ProspectorState; // 0x2e4(0x01)
	float ArmBusyness; // 0x2e8(0x04)
};

// Class FSD.PushingState
// Size: 0x108 (Inherited: 0x100)
struct UPushingState : UCharacterStateComponent {
	UUseAnimationSetting* PushingAnimation; // 0x100(0x08)
};

// Class FSD.RadarPointComponent
// Size: 0xd0 (Inherited: 0xb0)
struct URadarPointComponent : UActorComponent {
	FMulticastInlineDelegate OnRemove; // 0xb0(0x10)
	float PointPriority; // 0xc0(0x04)
	UUserWidget* WidgetClass; // 0xc8(0x08)

	void MapToRadarPosition(FVector playerPos, FVector playerForward, FVector Pos, bool snap, FVector radarPos, float alpha);
};

// Class FSD.NetworkedRadarPointComponent
// Size: 0xd0 (Inherited: 0xd0)
struct UNetworkedRadarPointComponent : URadarPointComponent {
};

// Class FSD.RagdollManager
// Size: 0xc0 (Inherited: 0xb0)
struct URagdollManager : UActorComponent {
	TArray<FRagdollItem> Items; // 0xb0(0x10)

	void StartRagdoll(AActor* Actor, TArray<UMaterialInstanceDynamic*> Materials, float desiredDuration);
};

// Class FSD.RandomSelectorItem
// Size: 0x230 (Inherited: 0x228)
struct ARandomSelectorItem : AGenerationItem {
	int32_t Min; // 0x228(0x04)
	int32_t Max; // 0x22c(0x04)
};

// Class FSD.RandRangeFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct URandRangeFunctionLibrary : UBlueprintFunctionLibrary {

	bool TryPickRandomText(TArray<FText> TextArray, FRandomStream RandomStream, FText OutResult);
	FText PickRandomText(TArray<FText> TextArray, FRandomStream RandomStream);
	int32_t GetValueFromStream(FIRandRange RandRange, FRandomStream RandomStream);
	float GetFloatValue(FRandRange RandRange);
	float GetFloatFromStream(FRandRange RandRange, FRandomStream RandomStream);
};

// Class FSD.RandIntervalFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct URandIntervalFunctionLibrary : UBlueprintFunctionLibrary {

	float GetFloatValue(FRandInterval RandInterval);
};

// Class FSD.RDGComponent
// Size: 0xc0 (Inherited: 0xb0)
struct URDGComponent : UActorComponent {
	FMulticastInlineDelegate OnDetonated; // 0xb0(0x10)
};

// Class FSD.RDGLauncher
// Size: 0x6e8 (Inherited: 0x6d8)
struct ARDGLauncher : AAmmoDrivenWeapon {
	TArray<URDGComponent*> ActiveGrenades; // 0x6d8(0x10)

	void Server_DetonateAll();
	void RegisterGrenade(URDGComponent* Grenade);
};

// Class FSD.ReactiveTerrain
// Size: 0x28 (Inherited: 0x28)
struct UReactiveTerrain : UObject {

	void Receive_OnActorLeft(UStatusEffectsComponent* StatusEffects);
	void Receive_OnActorEntered(UStatusEffectsComponent* StatusEffects);
};

// Class FSD.StatusEffectReactiveTerrain
// Size: 0x30 (Inherited: 0x28)
struct UStatusEffectReactiveTerrain : UReactiveTerrain {
	UStatusEffect* StatusEffect; // 0x28(0x08)
};

// Class FSD.ReactiveTerrainTrackerComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UReactiveTerrainTrackerComponent : UActorComponent {
};

// Class FSD.PlayerReactiveTerrainTrackerComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UPlayerReactiveTerrainTrackerComponent : UReactiveTerrainTrackerComponent {
	UFSDPhysicalMaterial* CurrentPhysicalMaterial; // 0xb0(0x08)
};

// Class FSD.PathfinderReactiveTerrainTrackerComponent
// Size: 0xd0 (Inherited: 0xb0)
struct UPathfinderReactiveTerrainTrackerComponent : UReactiveTerrainTrackerComponent {
	FRandRange CheckInterval; // 0xb0(0x08)
	UFSDPhysicalMaterial* CurrentPhysicalMaterial; // 0xb8(0x08)
	UStatusEffectsComponent* StatusEffectsComponent; // 0xc0(0x08)
};

// Class FSD.RecallableActor
// Size: 0x420 (Inherited: 0x380)
struct ARecallableActor : ADeepPathfinderCharacter {
	FMulticastInlineDelegate OnStateChanged; // 0x388(0x10)
	FMulticastInlineDelegate OnReturnFinish; // 0x398(0x10)
	FMulticastInlineDelegate OnRelocateFinished; // 0x3a8(0x10)
	float AcceptanceRadius; // 0x3b8(0x04)
	float AutoRecallDistance; // 0x3bc(0x04)
	float RelocateLandingHeight; // 0x3c0(0x04)
	AActor* RelocationMarkerType; // 0x3c8(0x08)
	TWeakObjectPtr<AActor> RecallTarget; // 0x3d0(0x08)
	enum class ERecallableActorState State; // 0x3d8(0x01)
	FTransform RelocateTransform; // 0x3e0(0x30)
	bool RelocateLanded; // 0x410(0x01)
	TWeakObjectPtr<AActor> RelocationMarker; // 0x414(0x08)
	bool bInitialized; // 0x41c(0x01)

	void SetRecallTarget(AActor* NewTarget);
	void Relocate(FVector NewLocation, FRotator NewRotation);
	void ReceiveOnStateChanged();
	void RecallableActorStateChanged__DelegateSignature(ARecallableActor* Sender, enum class ERecallableActorState State);
	void Recall();
	void OnReturnSucceeded();
	void OnReturnFailed();
	void OnRep_State(enum class ERecallableActorState oldState);
	void OnRep_RecallTarget();
	void OnRelocated();
	void OnRecallTargetChanged(AActor* NewTarget);
	void OnPathFinished(bool success);
	void OnMoving();
	void OnMoveRequested();
	void OnMoveFinished(bool returnedHome);
	bool GetIsReturning();
	bool GetIsMovingOrMoveRequested();
	bool GetIsMoving();
	bool GetIsMoveRequested();
	void BeginMove();
};

// Class FSD.RecallableItem
// Size: 0x3a8 (Inherited: 0x388)
struct ARecallableItem : AAnimatedItem {
	ARecallableActor* ItemType; // 0x390(0x08)
	TArray<TWeakObjectPtr<ARecallableActor>> ActiveItems; // 0x398(0x10)

	void ServerSpawnItem(FVector Location, FRotator Rotation);
	void ReceiveOnItemSpawned(ARecallableActor* Item);
	void OnRep_ActiveItems();
	void ItemReturnFinished(AActor* Item, bool success);
	bool CanSpawnItem(FVector Location, FRotator Rotation);
};

// Class FSD.SentryGun
// Size: 0x400 (Inherited: 0x220)
struct ASentryGun : AActor {
	FMulticastInlineDelegate OnEnabledChanged; // 0x230(0x10)
	FMulticastInlineDelegate OnAmmoCountChanged; // 0x240(0x10)
	FMulticastInlineDelegate OnMaxAmmoCountChanged; // 0x250(0x10)
	USkeletalMeshComponent* SentryGunMesh; // 0x260(0x08)
	TArray<FSentryGunMuzzleSetup> SentryGunMuzzels; // 0x268(0x10)
	AProjectile* projectileClass; // 0x288(0x08)
	USoundCue* ShootingSound; // 0x290(0x08)
	UParticleSystem* MuzzleFlash; // 0x298(0x08)
	FTracerData TracerData; // 0x2a0(0x30)
	UParticleSystem* Tracer; // 0x2d0(0x08)
	float MinTracerDistance; // 0x2d8(0x04)
	float AngleRestriction; // 0x2dc(0x04)
	bool Enabled; // 0x2e0(0x01)
	TArray<FOverlapResult> OverlapCache; // 0x2e8(0x10)
	FRotator MinRotation; // 0x2f8(0x0c)
	FRotator MaxRotation; // 0x304(0x0c)
	float AquisitionRange; // 0x310(0x04)
	float RotationSpeed; // 0x314(0x04)
	float ShotCoolDown; // 0x318(0x04)
	float TargetLeading; // 0x31c(0x04)
	int32_t BurstCount; // 0x320(0x04)
	float BurstShotCoolDown; // 0x324(0x04)
	float IdleScanAngle; // 0x328(0x04)
	float IdleScanSpeed; // 0x32c(0x04)
	float FinalShotFadeOut; // 0x330(0x04)
	USoundBase* AudioOnTurn; // 0x338(0x08)
	FGameplayTagContainer DissallowedTargetTags; // 0x340(0x20)
	int32_t AmmoCount; // 0x378(0x04)
	int32_t MaxAmmoCount; // 0x37c(0x04)
	float Damage; // 0x380(0x04)
	float TargetYaw; // 0x384(0x04)
	float TargetPitch; // 0x388(0x04)
	TWeakObjectPtr<UHealthComponentBase> LastTarget; // 0x38c(0x08)
	TWeakObjectPtr<UHealthComponentBase> PrioritizedTarget; // 0x394(0x08)
	UWeaponFireComponent* WeaponFire; // 0x3b8(0x08)
	UAudioComponent* ShootingAudioComponent; // 0x3f0(0x08)

	void UseAmmo(int32_t Amount);
	void ReceiveAmmoChanged(int32_t Delta, int32_t currentAmount);
	void OnRep_MaxAmmoCount(int32_t OldCount);
	void OnRep_LastTarget();
	void OnRep_AmmoCount(int32_t OldCount);
	void OnProjectileFired(FVector Location);
	void OnNewTargetRequested(FLaserPointerTarget HitInfo);
	FTransform GetMuzzleTransform();
	FName GetMuzzleName();
	int32_t GetMaxAmmoCount();
	float GetDeployProgress();
	float GetAmmoLeftPct();
	int32_t GetAmmoLeft();
	void Force_Fire(AActor* Target);
	void EnabledChanged__DelegateSignature(bool IsEnabled);
	void AmmoSpent();
};

// Class FSD.RedeployableSentryGun
// Size: 0x4b0 (Inherited: 0x400)
struct ARedeployableSentryGun : ASentryGun {
	FMulticastInlineDelegate OnStateChanged; // 0x400(0x10)
	FMulticastInlineDelegate OnDeployFinished; // 0x410(0x10)
	FMulticastInlineDelegate OnDismantleFinished; // 0x420(0x10)
	FMulticastInlineDelegate OnDeployProgressEvent; // 0x430(0x10)
	UActorTrackingComponent* ActorTrackingIcon; // 0x440(0x08)
	UOutlineComponent* outline; // 0x448(0x08)
	TWeakObjectPtr<APlayerCharacter> SentryGunOwner; // 0x450(0x08)
	bool bOutlineAndIconVisible; // 0x458(0x01)
	enum class ERedeployableSentryGunState State; // 0x459(0x01)
	float PlasmaLineMaxRange; // 0x470(0x04)
	TArray<ASentryElectroBeam*> PlasmaLines; // 0x478(0x10)
	ASentryElectroBeam* PlasmaBeamClass; // 0x488(0x08)
	AActor* ElectrocutionActorClass; // 0x490(0x08)
	AActor* ElectrocutionActor; // 0x498(0x08)
	AActor* EMPDischargeActorClass; // 0x4a0(0x08)
	float EMPDiscargeCooldown; // 0x4a8(0x04)

	void ToggleOutlineAndIcon(bool Visible);
	void SetSentryGunOwner(APlayerCharacter* Character);
	void ReceiveOnStateChanged();
	void ReceiveOnSentryGunOwnerChanged();
	void ReceiveOnDismantled();
	void ReceiveOnDismantle();
	void ReceiveOnDeployed();
	void ReceiveOnDeploy();
	void OnStateChanged__DelegateSignature(ARedeployableSentryGun* Sender, enum class ERedeployableSentryGunState NewState);
	void OnRep_State(enum class ERedeployableSentryGunState oldState);
	void OnRep_SentryGunOwner();
	void OnElectrocutionActorDestroyed(AActor* Actor);
	void OnDismantleFinished__DelegateSignature();
	void OnDeployProgress__DelegateSignature(float Progress);
	void OnDeployFinished__DelegateSignature();
	bool GetIsDismantled();
	bool GetIsDeployed();
	float GetAnimDuration(USkeletalMeshComponent* Mesh);
	void DismantleFinished();
	void Dismantle();
	void DeployFinished();
	void Deploy();
	void ActivateSpecialAttack();
};

// Class FSD.RefineryObjective
// Size: 0x208 (Inherited: 0x178)
struct URefineryObjective : UObjective {
	FMulticastInlineDelegate OnRefinerySpawned; // 0x178(0x10)
	TSoftClassPtr<UObject> refineryClass; // 0x188(0x28)
	TWeakObjectPtr<AFSDRefinery> Refinery; // 0x1b0(0x08)
	enum class ERefineryState RefineryState; // 0x1b8(0x01)
	UDebrisPositioning* RefineryPlacement; // 0x1c0(0x08)
	TSoftClassPtr<UObject> RawMaterialClass; // 0x1c8(0x28)
	UDebrisPositioning* RawMaterialPlacement; // 0x1f0(0x08)
	int32_t RawMaterialCount; // 0x1f8(0x04)
	bool bMissionCompleted; // 0x1fc(0x01)
	bool bIsFinalBattle; // 0x1fd(0x01)
	int32_t OptionalTunnelRoomID; // 0x200(0x04)

	void SpawnWells(AProceduralSetup* setup, FVector rigLocation, float minDistanceBetween, TArray<FVector2D> minMaxDistancesToRig);
	void RefineryDelegate__DelegateSignature(AFSDRefinery* InRefinery);
	void ReceiveRefinerySpawned(AFSDRefinery* InRefinery);
	void OnRep_Refinery();
	void OnRefineryStateChanged(enum class ERefineryState InRefineryState);
	FVector GetRefinerySpawnLocation(AFSDRefinery* refineryClass);
	void AddMissionCriticalItems(AProceduralSetup* setup);
};

// Class FSD.RegisterInviteNotificationBlueprintCallProxy
// Size: 0x98 (Inherited: 0x30)
struct URegisterInviteNotificationBlueprintCallProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnInviteReceived; // 0x30(0x10)
	FMulticastInlineDelegate OnInviteAccepted; // 0x40(0x10)
	FMulticastInlineDelegate OnInviteRejected; // 0x50(0x10)
	UObject* WorldContextObject; // 0x60(0x08)

	URegisterInviteNotificationBlueprintCallProxy* RegisterInvitiNotification(UObject* WorldContextObject);
};

// Class FSD.RegisterSessionInviteNotificationBlueprintCallProxy
// Size: 0x58 (Inherited: 0x30)
struct URegisterSessionInviteNotificationBlueprintCallProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSessionUserInviteAccepted; // 0x30(0x10)
	UObject* WorldContextObject; // 0x40(0x08)

	URegisterSessionInviteNotificationBlueprintCallProxy* RegisterSessionInviteNotification(UObject* WorldContextObject);
};

// Class FSD.RejectInviteBlueprintCallProxy
// Size: 0x90 (Inherited: 0x30)
struct URejectInviteBlueprintCallProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	UObject* WorldContextObject; // 0x50(0x08)

	URejectInviteBlueprintCallProxy* RejectInvite(UObject* WorldContextObject, FString ListName, FString UserId);
};

// Class FSD.RepairableComponent
// Size: 0xf0 (Inherited: 0xb0)
struct URepairableComponent : UActorComponent {
	FMulticastInlineDelegate OnFullyRepairedEvent; // 0xb0(0x10)
	FMulticastInlineDelegate OnAllResourcesAquiredEvent; // 0xc0(0x10)
	FMulticastInlineDelegate OnRepairedEvent; // 0xd0(0x10)
	UGemResourceData* RequiresCarriedResource; // 0xe0(0x08)
	int32_t ResourcesRequired; // 0xe8(0x04)
	bool IsFullyRepaired; // 0xec(0x01)

	bool TryRepair(APlayerCharacter* User);
	void OnRep_ResourcesRequired();
	int32_t GetResourcesRequired();
	void Cheat_Repair();
};

// Class FSD.RepairObjective
// Size: 0x1e8 (Inherited: 0x178)
struct URepairObjective : UObjective {
	int32_t RepairedObjectives; // 0x178(0x04)
	int32_t ObjectivesToRepair; // 0x17c(0x04)
	TSoftClassPtr<UObject> RepairObjectiveClass; // 0x180(0x28)
	UGemResourceData* RepairObjectiveResource; // 0x1a8(0x08)
	UDebrisPositioning* Positioning; // 0x1b0(0x08)
	int32_t RepairResourcesPerActor; // 0x1b8(0x04)
	float RepairResourceDistanceFromActor; // 0x1bc(0x04)
	float MinRepairObjectiveDistanceToLandingZone; // 0x1c0(0x04)
	TArray<AActor*> RepairedObjectivesList; // 0x1c8(0x10)

	void OnRep_RepairedObjectives();
	void OnRep_ObjectivesToRepair();
	void OnObjectiveRepaired(URepairableComponent* repairable);
	void AllObjectivesRepaired();
};

// Class FSD.ResourceBank
// Size: 0x158 (Inherited: 0xf0)
struct UResourceBank : UUsableComponentBase {
	FMulticastInlineDelegate OnBeginDeposite; // 0xf0(0x10)
	FMulticastInlineDelegate OnDepositing; // 0x100(0x10)
	FMulticastInlineDelegate OnEndDeposite; // 0x110(0x10)
	bool OpenForDeposit; // 0x120(0x01)
	AFSDGameState* GameState; // 0x128(0x08)
	float DepositesPerSecond; // 0x130(0x04)
	float DepositeAmount; // 0x134(0x04)
	bool CanGetStrict; // 0x13c(0x01)
	bool AddToTeamInventory; // 0x13d(0x01)
	USoundBase* AudioBeginDepositing; // 0x140(0x08)
	USoundBase* AudioDepositing; // 0x148(0x08)
	USoundBase* AudioEndDepositing; // 0x150(0x08)

	void ResourceBankEvent__DelegateSignature(APlayerCharacter* User);
	void All_Depositing(APlayerCharacter* Character);
};

// Class FSD.RestrictedResourceBank
// Size: 0x160 (Inherited: 0x158)
struct URestrictedResourceBank : UResourceBank {
	UResourceData* RequiredResource; // 0x158(0x08)
};

// Class FSD.ResourceChunk
// Size: 0x290 (Inherited: 0x238)
struct AResourceChunk : AFSDPhysicsActor {
	float CollectDuration; // 0x238(0x04)
	bool CanBeCollectedNormally; // 0x23c(0x01)
	bool CanBeCollected; // 0x23d(0x01)
	USimpleObjectInfoComponent* InfoComponent; // 0x240(0x08)
	float ResourceAmount; // 0x248(0x04)
	USoundCue* PickupSound; // 0x250(0x08)
	UResourceData* ResourceData; // 0x258(0x08)
	TArray<APlayerCharacter*> OverlappingPlayers; // 0x260(0x10)
	TWeakObjectPtr<APlayerCharacter> CollectedBy; // 0x270(0x08)

	void SetCollectOpen();
	void OnRep_CollectedBy();
	UResourceData* GetResourceData();
	float GetResourceAmount();
	void CalcMovement(float InProgress, FVector InVector, FVector OutVelocity, FVector OutAngularVelocity);
};

// Class FSD.ResourceCreator
// Size: 0x30 (Inherited: 0x30)
struct UResourceCreator : UDataAsset {
};

// Class FSD.VeinResourceCreator
// Size: 0x78 (Inherited: 0x30)
struct UVeinResourceCreator : UResourceCreator {
	UVeinResourceData* Resource; // 0x30(0x08)
	UDebrisPositioning* Positioning; // 0x38(0x08)
	enum class ECarveFilterType CarveType; // 0x40(0x01)
	float SegmentMaxDot; // 0x44(0x04)
	float VeinWorldHorizontalMaxDot; // 0x48(0x04)
	float VeinWorldHorizontalMinDot; // 0x4c(0x04)
	FRandRange VeinLength; // 0x50(0x08)
	UFloodFillSettings* Noise; // 0x58(0x08)
	float range; // 0x60(0x04)
	float NoiseRange; // 0x64(0x04)
	TArray<TSoftObjectPtr<UDebrisBase>> Debris; // 0x68(0x10)
};

// Class FSD.PatchResourceCreator
// Size: 0x70 (Inherited: 0x30)
struct UPatchResourceCreator : UResourceCreator {
	UDebrisPositioning* Positioning; // 0x30(0x08)
	enum class ECarveFilterType CarveType; // 0x38(0x01)
	UFloodFillSettings* PatchNoise; // 0x40(0x08)
	UFloodFillSettings* CarverNoise; // 0x48(0x08)
	float range; // 0x50(0x04)
	float NoiseRange; // 0x54(0x04)
	float NoiseScale; // 0x58(0x04)
	float Size; // 0x5c(0x04)
	TArray<UDebrisBase*> VeinDebris; // 0x60(0x10)
};

// Class FSD.CarvedResourceCreator
// Size: 0x98 (Inherited: 0x30)
struct UCarvedResourceCreator : UResourceCreator {
	UCarvedResourceData* Resource; // 0x30(0x08)
	bool ScaleToResourceDistribution; // 0x38(0x01)
	UDebrisPositioning* Positioning; // 0x40(0x08)
	FIRandRange NumCarvers; // 0x48(0x08)
	float ExpensiveNoise; // 0x50(0x04)
	float CarveOffsetRadius; // 0x54(0x04)
	AActor* SpawnAttachClass; // 0x58(0x08)
	float AttachSpawnOffsetDistance; // 0x60(0x04)
	UTerrainMaterial* TerrainMaterial; // 0x68(0x08)
	enum class ECarveFilterType Filter; // 0x70(0x01)
	enum class CarveOptionsCellSize CarveCellSize; // 0x71(0x01)
	TArray<FUDebrisCarveMesh> Meshes; // 0x78(0x10)
	TArray<FResourceDebris> Debris; // 0x88(0x10)
};

// Class FSD.BaseResource
// Size: 0x30 (Inherited: 0x30)
struct UBaseResource : UDataAsset {
};

// Class FSD.ResourceObjective
// Size: 0x1c0 (Inherited: 0x178)
struct UResourceObjective : UResourceBasedObjective {
	UResourceData* Resource; // 0x178(0x08)
	float ResourcesRequired; // 0x180(0x04)
	float ResourcesCollected; // 0x184(0x04)
	float ResourceBuffer; // 0x188(0x04)
	float RoundToNearest; // 0x18c(0x04)
	FText ObjectivesText; // 0x190(0x18)
	FText CreditsRewardText; // 0x1a8(0x18)

	void OnResourceChanged(UCappedResource* CappedResource, float Amount);
	void OnRep_ResourcesCollected(float prevAmount);
	float GetRequiredAmount(float missionScaling);
};

// Class FSD.RessuplyPodSpawn
// Size: 0x2d8 (Inherited: 0x2d8)
struct ARessuplyPodSpawn : ARessuplyPod {

	void SetController(AFSDPlayerController* Controller);
	void SetCharacter(APlayerCharacter* Character);
};

// Class FSD.RessuplyPodItem
// Size: 0x3e8 (Inherited: 0x388)
struct ARessuplyPodItem : AAnimatedItem {
	AActor* ResupplyBeacon; // 0x388(0x08)
	UItemPlacerAggregator* ItemPlacerClass; // 0x390(0x08)
	UItemPlacerAggregator* ItemPlacerInstance; // 0x398(0x08)
	ARessuplyPod* SupplyPodClass; // 0x3a0(0x08)
	int32_t ResourceCost; // 0x3a8(0x04)
	FText OrderDescription; // 0x3b0(0x18)
	FText LogText; // 0x3c8(0x18)
	float CoolDown; // 0x3e0(0x04)
	bool Used; // 0x3e4(0x01)

	void Server_Call_Resupply(FVector Location);
	void ReceiveItemPlacerSpawned(UItemPlacerAggregator* InItemPlacer);
	void OnRep_Used();
	int32_t GetResourceCost(UObject* WorldContextObject);
	UItemPlacerAggregator* GetActiveAggregator();
};

// Class FSD.UnlockReward
// Size: 0x30 (Inherited: 0x30)
struct UUnlockReward : UReward {
};

// Class FSD.UnlockPlanetZoneReward
// Size: 0x38 (Inherited: 0x30)
struct UUnlockPlanetZoneReward : UUnlockReward {
	UPlanetZone* ZoneToUnlock; // 0x30(0x08)
};

// Class FSD.UnlockMissionTypeReward
// Size: 0x38 (Inherited: 0x30)
struct UUnlockMissionTypeReward : UUnlockReward {
	UMissionTemplate* MissionToUnlock; // 0x30(0x08)
};

// Class FSD.UnlockComplexityReward
// Size: 0x40 (Inherited: 0x30)
struct UUnlockComplexityReward : UUnlockReward {
	UMissionTemplate* mission; // 0x30(0x08)
	UMissionComplexity* Complexity; // 0x38(0x08)
};

// Class FSD.UnlockDurationReward
// Size: 0x40 (Inherited: 0x30)
struct UUnlockDurationReward : UUnlockReward {
	UMissionTemplate* mission; // 0x30(0x08)
	UMissionDuration* Duration; // 0x38(0x08)
};

// Class FSD.UnlockDifficultyReward
// Size: 0x38 (Inherited: 0x30)
struct UUnlockDifficultyReward : UUnlockReward {
	UDifficultySetting* Difficulty; // 0x30(0x08)
};

// Class FSD.ResourceReward
// Size: 0x40 (Inherited: 0x30)
struct UResourceReward : UReward {
	UResourceData* Resource; // 0x30(0x08)
	int32_t Amount; // 0x38(0x04)
};

// Class FSD.WeeklyResourceReward
// Size: 0x40 (Inherited: 0x30)
struct UWeeklyResourceReward : UReward {
	int32_t ResourceCount; // 0x30(0x04)
	FIRandRange Amount; // 0x34(0x08)

	TMap<UResourceData*, float> GetRewards(AFSDPlayerController* Player);
};

// Class FSD.RetirementReward
// Size: 0x38 (Inherited: 0x30)
struct URetirementReward : UUnlockReward {
	UPlayerCharacterID* characterID; // 0x30(0x08)
};

// Class FSD.ItemBlueprintReward
// Size: 0x58 (Inherited: 0x30)
struct UItemBlueprintReward : UUnlockReward {
	TSoftClassPtr<UObject> ItemToUnlock; // 0x30(0x28)

	AActor* GetActorDefaultObject();
	AActor* GetActorClass();
};

// Class FSD.SchematicReward
// Size: 0x40 (Inherited: 0x30)
struct USchematicReward : UUnlockReward {
	enum class ESchematicType SchematicType; // 0x30(0x01)
	USchematic* RewardedSchematic; // 0x38(0x08)
};

// Class FSD.SkinUnlock
// Size: 0x48 (Inherited: 0x30)
struct USkinUnlock : UUnlockReward {
	UItemID* OptionalItemID; // 0x30(0x08)
	UPlayerCharacterID* OptionalCharacterID; // 0x38(0x08)
	UItemSkin* Skin; // 0x40(0x08)
};

// Class FSD.PermanentItemUpgradeReward
// Size: 0x40 (Inherited: 0x30)
struct UPermanentItemUpgradeReward : UUnlockReward {
	AActor* Item; // 0x30(0x08)
	UItemUpgrade* Upgrade; // 0x38(0x08)
};

// Class FSD.OverclockingUnlockReward
// Size: 0x38 (Inherited: 0x30)
struct UOverclockingUnlockReward : UUnlockReward {
	AActor* Item; // 0x30(0x08)
};

// Class FSD.PureTextReward
// Size: 0x48 (Inherited: 0x30)
struct UPureTextReward : UUnlockReward {
	FText Text; // 0x30(0x18)
};

// Class FSD.VanityReward
// Size: 0x48 (Inherited: 0x30)
struct UVanityReward : UUnlockReward {
	UVanityItem* VanityItem; // 0x30(0x08)
	UPlayerCharacterID* OptionalCharacterID; // 0x38(0x08)
	bool UseContextAsTargetCharacter; // 0x40(0x01)
};

// Class FSD.VanityCollectionReward
// Size: 0x50 (Inherited: 0x30)
struct UVanityCollectionReward : UUnlockReward {
	TArray<UVanityItem*> vanityItems; // 0x30(0x10)
	UPlayerCharacterID* OptionalCharacterID; // 0x40(0x08)
	bool UseContextAsTargetCharacter; // 0x48(0x01)
};

// Class FSD.VictoryPoseReward
// Size: 0x40 (Inherited: 0x30)
struct UVictoryPoseReward : UUnlockReward {
	UVictoryPose* VictoryPose; // 0x30(0x08)
	UPlayerCharacterID* OptionalCharacterID; // 0x38(0x08)
};

// Class FSD.PickaxePartReward
// Size: 0x38 (Inherited: 0x30)
struct UPickaxePartReward : UUnlockReward {
	UPickaxePart* PicaxePart; // 0x30(0x08)
};

// Class FSD.PickaxeSetReward
// Size: 0x68 (Inherited: 0x30)
struct UPickaxeSetReward : UUnlockReward {
	UPickaxePart* BladeFront; // 0x30(0x08)
	UPickaxePart* OptionalBladeBack; // 0x38(0x08)
	UPickaxePart* Pommel; // 0x40(0x08)
	UPickaxePart* Handle; // 0x48(0x08)
	UPickaxePart* Shaft; // 0x50(0x08)
	UPickaxePart* Head; // 0x58(0x08)
	UPickaxePart* Material; // 0x60(0x08)
};

// Class FSD.SeasonTokenReward
// Size: 0x38 (Inherited: 0x30)
struct USeasonTokenReward : UReward {
	int32_t Amount; // 0x30(0x04)
};

// Class FSD.RewardWidget
// Size: 0x238 (Inherited: 0x230)
struct URewardWidget : UUserWidget {
	UReward* Reward; // 0x230(0x08)

	void PlayReceiveAnim();
};

// Class FSD.RichTextInputDecorator
// Size: 0x38 (Inherited: 0x30)
struct URichTextInputDecorator : UCustomRichTextDecorator {
	URichTextInputWidget* DecoratorWidgetClass; // 0x30(0x08)
};

// Class FSD.RichTextInputWidget
// Size: 0x518 (Inherited: 0x230)
struct URichTextInputWidget : UUserWidget {
	FName InputName; // 0x230(0x08)
	TMap<FName, FString> MetaData; // 0x238(0x50)
	FText Content; // 0x288(0x18)
	FTextBlockStyle TextStyle; // 0x2a0(0x268)
	enum class EFSDInputSource InputSource; // 0x508(0x01)
	URichTextBlock* RichTextBlock; // 0x510(0x08)

	void ScaleTextBlockToHeight(UTextBlock* InTextBlock, float LineHeight);
	void ReceiveInputUnknown();
	void ReceiveInputDetails(FInputDisplay InDisplay);
	void OnInputSourceChanged(enum class EFSDInputSource InSource);
	void OnCustomKeyBindsChanged();
	FVector2D MeasureTextSize(FText Text, float Scale);
	float GetLineHeight();
	void ApplyTextStyle(UTextBlock* InTextBlock, FTextBlockStyle InTextStyle);
};

// Class FSD.RichTextStylable
// Size: 0x730 (Inherited: 0x668)
struct URichTextStylable : URichTextBlock {
	FSlateFontInfo Font; // 0x668(0x50)
	FSlateColor FontColor; // 0x6b8(0x28)
	TMap<FName, FTextStyleOverride> Styles; // 0x6e0(0x50)
};

// Class FSD.RichTextSizable
// Size: 0x6a0 (Inherited: 0x668)
struct URichTextSizable : URichTextBlock {
	bool bOverrideDefaultSize; // 0x668(0x01)
	int32_t OverrideDefaultFontSize; // 0x66c(0x04)
	bool bOverrideDefaultColor; // 0x670(0x01)
	FSlateColor OverrideDefaultFontColor; // 0x678(0x28)

	void SetDefaultFontSize(int32_t inFontSize);
	void SetDefaultFontColor(FLinearColor InColor);
};

// Class FSD.FSDRichTextFunctionlibrary
// Size: 0x28 (Inherited: 0x28)
struct UFSDRichTextFunctionlibrary : UBlueprintFunctionLibrary {

	void SplitRichText(FRichTextParseResult Parser, int32_t SplitIndex, bool bKeepLeftFormatting, bool bKeepRightFormatting, FText OutLeftText, FText OutRightText);
	FRichTextParseResult ParseRichText(FText InText);
	FText MidRichText(FRichTextParseResult Parser, int32_t StartIndex, int32_t count, bool bKeepFormatting);
};

// Class FSD.RockEnemiesEvent
// Size: 0x3d8 (Inherited: 0x358)
struct ARockEnemiesEvent : AGameEvent {
	AProjectile* PowerUpClass; // 0x358(0x08)
	float PowerUpGenerationTime; // 0x368(0x04)
	TArray<int32_t> KillAmountPerPlayer; // 0x370(0x10)
	TArray<int32_t> MaxEnemyCountPerPlayer; // 0x380(0x10)
	TArray<APawn*> SpawnedRockEnemies; // 0x390(0x10)
	USkeletalMeshComponent* Mesh; // 0x3a0(0x08)
	UParticleSystem* MuzzleEffect; // 0x3a8(0x08)
	int32_t PowerUpsPerGeneration; // 0x3b0(0x04)
	int32_t GruntPointsAward; // 0x3b4(0x04)
	int32_t TankPointsAward; // 0x3b8(0x04)
	UEnemyGroupDescriptor* RockEnemies; // 0x3d0(0x08)

	void StopPowerupGeneration();
	void StartPowerupGeneration();
	void SpawnRockEnemies(float Difficulty, TArray<FVector> Locations);
	void ShowFireEffects(int32_t selectedBone);
	void RockEnemySpawned(APawn* spawnedEnemy);
	void RockEnemyDied(UHealthComponentBase* Health);
	void OnShoot();
	void EnemySpawnedAfterComplete(APawn* spawnedEnemy);
};

// Class FSD.RoomCarverComponent
// Size: 0x200 (Inherited: 0x1f0)
struct URoomCarverComponent : USceneComponent {
	URoomGenerator* RoomGenerator; // 0x1f0(0x08)
};

// Class FSD.RoomDecorationObject
// Size: 0x40 (Inherited: 0x30)
struct URoomDecorationObject : UDataAsset {
	UDebrisPositioning* Positioning; // 0x30(0x08)
	AActor* Actor; // 0x38(0x08)
};

// Class FSD.RoomFeature
// Size: 0x40 (Inherited: 0x28)
struct URoomFeature : UObject {
	TArray<URoomFeature*> RoomFeatures; // 0x28(0x10)
};

// Class FSD.RandomSelector
// Size: 0x48 (Inherited: 0x40)
struct URandomSelector : URoomFeature {
	int32_t Min; // 0x40(0x04)
	int32_t Max; // 0x44(0x04)
};

// Class FSD.FloodFillLine
// Size: 0x70 (Inherited: 0x40)
struct UFloodFillLine : URoomFeature {
	UFloodFillSettings* WallNoiseOverride; // 0x40(0x08)
	UFloodFillSettings* CeilingNoiseOverride; // 0x48(0x08)
	UFloodFillSettings* FloorNoiseOverride; // 0x50(0x08)
	bool UseDetailNoise; // 0x58(0x01)
	TArray<FRoomLinePoint> Points; // 0x60(0x10)
};

// Class FSD.FloodFillPillar
// Size: 0x70 (Inherited: 0x40)
struct UFloodFillPillar : URoomFeature {
	UFloodFillSettings* NoiseOverride; // 0x40(0x08)
	TArray<FRandLinePoint> Points; // 0x48(0x10)
	FRandRange RangeScale; // 0x58(0x08)
	FRandRange NoiseRangeScale; // 0x60(0x08)
	FRandRange EndcapScale; // 0x68(0x08)
};

// Class FSD.FloodFillProceduralPillar
// Size: 0x58 (Inherited: 0x40)
struct UFloodFillProceduralPillar : URoomFeature {
	TArray<FVector> Points; // 0x40(0x10)
	UPillarSettings* PillarSettings; // 0x50(0x08)
};

// Class FSD.FloodFillBox
// Size: 0x78 (Inherited: 0x40)
struct UFloodFillBox : URoomFeature {
	UFloodFillSettings* Noise; // 0x40(0x08)
	FVector Position; // 0x48(0x0c)
	FVector Extends; // 0x54(0x0c)
	FRotator Rotation; // 0x60(0x0c)
	bool IsCarver; // 0x6c(0x01)
	float NoiseRange; // 0x70(0x04)
};

// Class FSD.EntranceFeature
// Size: 0x60 (Inherited: 0x40)
struct UEntranceFeature : URoomFeature {
	FVector Location; // 0x40(0x0c)
	FRotator Direction; // 0x4c(0x0c)
	enum class ECaveEntranceType EntranceType; // 0x58(0x01)
	enum class ECaveEntrancePriority Priority; // 0x59(0x01)
};

// Class FSD.ResourceFeature
// Size: 0x60 (Inherited: 0x40)
struct UResourceFeature : URoomFeature {
	FVector Location; // 0x40(0x0c)
	UResourceData* Resource; // 0x50(0x08)
	float BaseAmount; // 0x58(0x04)
};

// Class FSD.SpawnActorFeature
// Size: 0x90 (Inherited: 0x40)
struct USpawnActorFeature : URoomFeature {
	FVector Location; // 0x40(0x0c)
	AActor* ActorToSpawn; // 0x50(0x08)
	FVector AdjustmentDirection; // 0x58(0x0c)
	enum class EItemAdjustmentType Adjustment; // 0x64(0x01)
	FVector ScaleMin; // 0x68(0x0c)
	FVector ScaleMax; // 0x74(0x0c)
	FRotator RotationDelta; // 0x80(0x0c)
};

// Class FSD.SpawnTriggerFeature
// Size: 0x90 (Inherited: 0x40)
struct USpawnTriggerFeature : URoomFeature {
	AActor* TriggerClass; // 0x40(0x08)
	FTransform Transform; // 0x50(0x30)
	FName Message; // 0x80(0x08)
};

// Class FSD.SpawnTrigger
// Size: 0x228 (Inherited: 0x220)
struct ASpawnTrigger : AActor {
	FName Message; // 0x220(0x08)
};

// Class FSD.SubRoomFeature
// Size: 0x68 (Inherited: 0x40)
struct USubRoomFeature : URoomFeature {
	URoomGenerator* RoomGenerator; // 0x40(0x08)
	FVector Location; // 0x48(0x0c)
	FRotator Rotation; // 0x54(0x0c)
	float Scale; // 0x60(0x04)
};

// Class FSD.RandomSubRoomFeature
// Size: 0xb0 (Inherited: 0x40)
struct URandomSubRoomFeature : URoomFeature {
	URoomGeneratorGroup* RoomGroup; // 0x40(0x08)
	FGameplayTagQuery tagQuery; // 0x48(0x48)
	int32_t Layer; // 0x90(0x04)
	FVector Location; // 0x94(0x0c)
	FRotator Rotation; // 0xa0(0x0c)
	float Scale; // 0xac(0x04)
};

// Class FSD.DropPodCalldownLocationFeature
// Size: 0x58 (Inherited: 0x40)
struct UDropPodCalldownLocationFeature : URoomFeature {
	FVector Location; // 0x40(0x0c)
	AActor* CalldownClass; // 0x50(0x08)
};

// Class FSD.RoomGeneratorBase
// Size: 0x58 (Inherited: 0x30)
struct URoomGeneratorBase : UDataAsset {
	float Bounds; // 0x30(0x04)
	bool CanOnlyBeUsedOnce; // 0x34(0x01)
	enum class ERoomMirroringSupport MirrorSupport; // 0x35(0x01)
	FGameplayTagContainer RoomTags; // 0x38(0x20)
};

// Class FSD.RoomGenerator
// Size: 0x68 (Inherited: 0x58)
struct URoomGenerator : URoomGeneratorBase {
	TArray<URoomFeature*> RoomFeatures; // 0x58(0x10)

	TArray<URoomFeature*> GetAllRoomFeatures();
};

// Class FSD.RoomGeneratorGroup
// Size: 0x40 (Inherited: 0x30)
struct URoomGeneratorGroup : UDataAsset {
	TArray<URoomGenerator*> Rooms; // 0x30(0x10)

	URoomGenerator* GetRandomRoomWithTags(FRoomGeneratorGroupInstance groupInstance, FGameplayTagQuery queury, FRandomStream RandomStream);
	URoomGenerator* GetRandomRoom(FRandomStream RandomStream);
	FRoomGeneratorGroupInstance CreateGroupInstance();
};

// Class FSD.RotateToFace
// Size: 0x210 (Inherited: 0x1f0)
struct URotateToFace : USceneComponent {
	FVector TargetOffset; // 0x1f0(0x0c)
	AActor* Target; // 0x200(0x08)
	int32_t Face; // 0x208(0x04)

	void SetTarget(AActor* Target);
	void SetShouldFaceAway(bool FaceAway);
};

// Class FSD.SalvageObjective
// Size: 0x268 (Inherited: 0x178)
struct USalvageObjective : UObjective {
	int32_t SalvageActorCount; // 0x178(0x04)
	UGemResourceData* LegResource; // 0x180(0x08)
	int32_t LegCountPerActor; // 0x188(0x04)
	float LegDistanceToActor; // 0x18c(0x04)
	FMulticastInlineDelegate OnDisableLegSpheres; // 0x190(0x10)
	UDebrisPositioning* Positioning; // 0x1a0(0x08)
	TArray<TSoftObjectPtr<UDebrisBase>> Debris; // 0x1a8(0x10)
	TSoftClassPtr<UObject> SalvageActor; // 0x1b8(0x28)
	TSoftClassPtr<UObject> DamagedPodClass; // 0x1e0(0x28)
	UDebrisPositioning* DamagedPodPositioning; // 0x208(0x08)
	float DamagedPodMinDistanceToDropZone; // 0x210(0x04)
	AMiningPod* DamagedPod; // 0x218(0x08)
	int32_t ActorsToSalvage; // 0x220(0x04)
	int32_t ActorsSalvaged; // 0x224(0x04)
	int32_t RepairPoints; // 0x228(0x04)
	int32_t PointsRepaired; // 0x22c(0x04)
	float MinSalvageActorDistanceToLandingZone; // 0x230(0x04)
	TArray<AMiniMule*> AllSalvageActors; // 0x238(0x10)
	TArray<AMiniMule*> SalvagedActors; // 0x248(0x10)

	void PointRepaired();
	void OnRep_PointsRepaired();
	void OnRep_ActorsToSalvage(int32_t prevAmount);
	void OnRep_ActorsSalvaged(int32_t prevAmount);
	void OnActorRepaired(URepairableComponent* repairable);
	FTransform FindRepairPointLocation(AProceduralSetup* setup, FVector podLocation, float Radius, float maxVerticalDistance, UDebrisPositioning* DebrisPositioning, AActor* terrainPlacement, TArray<FVector> locationsToAvoid, UCurveFloat* AvoidCostCurve);
	void AllActorsSalvaged();
};

// Class FSD.SalvageFuelPod
// Size: 0x2d8 (Inherited: 0x2d8)
struct ASalvageFuelPod : ARessuplyPod {

	void ReceiveFuelLineStarted(bool InFuelLineStarted);
	void ReceiveFuelLineConnected(AFuelLineEndPoint* InFuelLine);
	void ReceiveFirstFuelLineSegment(AFuelLineSegment* InFirstSegment);
};

// Class FSD.SavableObject
// Size: 0x40 (Inherited: 0x28)
struct USavableObject : UObject {
	bool EnableDangerousSaveGameIDEditing; // 0x28(0x01)
	FGuid SaveGameID; // 0x2c(0x10)
};

// Class FSD.SavableActor
// Size: 0x238 (Inherited: 0x220)
struct ASavableActor : AActor {
	bool EnableDangerousSaveGameIDEditing; // 0x220(0x01)
	FGuid SaveGameID; // 0x224(0x10)
};

// Class FSD.SaveGameIDInterface
// Size: 0x28 (Inherited: 0x28)
struct USaveGameIDInterface : UInterface {
};

// Class FSD.RefundableInterface
// Size: 0x28 (Inherited: 0x28)
struct URefundableInterface : USaveGameIDInterface {
};

// Class FSD.ItemIDInterface
// Size: 0x28 (Inherited: 0x28)
struct UItemIDInterface : UInterface {
};

// Class FSD.SaveGameLibrary
// Size: 0x28 (Inherited: 0x28)
struct USaveGameLibrary : UBlueprintFunctionLibrary {

	bool TryGetSaveGameSnapShot(UObject* WorldContext, FString Filename, int32_t userIdx, FSaveGameSnapShot OutSnapShot);
	TMap<FString, FDateTime> GetUserSaveGameSlots(FString UserId);
	TMap<FString, FDateTime> GetAllSaveGameSlots();
};

// Class FSD.SaveGameStateComponent
// Size: 0x210 (Inherited: 0xb0)
struct USaveGameStateComponent : UActorComponent {
	FMulticastInlineDelegate OnEquippedPerksChanged; // 0xb0(0x10)
	FMulticastInlineDelegate OnItemUpgradeCrafted; // 0xc0(0x10)
	FMulticastInlineDelegate OnItemUpgradeEquipped; // 0xd0(0x10)
	FMulticastInlineDelegate OnItemUpgradeUnequipped; // 0xe0(0x10)
	FMulticastInlineDelegate OnPlayerProgressChanged; // 0xf0(0x10)
	FMulticastInlineDelegate OnLoadoutChangedEvent; // 0x100(0x10)
	FMulticastInlineDelegate OnCharacterStatsChanged; // 0x110(0x10)
	FMulticastInlineDelegate OnCreditsChanged; // 0x120(0x10)
	int32_t Credits; // 0x130(0x04)
	TArray<FSaveGameStatePerkItem> EquippedPerks; // 0x138(0x10)
	UVictoryPose* VictoryPose; // 0x148(0x08)
	FItemLoadout EquippedLoadout; // 0x150(0x84)
	FActiveCampaingMission ActiveCampaignMission; // 0x1d4(0x0c)
	TArray<FItemUpgradeSelection> ItemUpgradeSelections; // 0x1e8(0x10)
	FPlayerProgress PlayerProgress; // 0x1f8(0x08)
	TArray<FCharacterProgress> CharacterStats; // 0x200(0x10)

	void SetCampaign();
	void Server_SetVictoryPose(UVictoryPose* pose);
	void Server_SetPlayerProgress(FPlayerProgress Progress);
	void Server_SetLoadout(FItemLoadout Loadout, TArray<FItemUpgradeSelection> weaponLoadouts);
	void Server_SetEquippedPerks(TArray<FSaveGameStatePerkItem> perks);
	void Server_SetCredits(int32_t Amount);
	void Server_SetCharacterStats(TArray<FCharacterProgress> Stats);
	void Server_SetActiveCampaignMission(FActiveCampaingMission Data);
	void RefreshLoadoutFromSave(UPlayerCharacterID* characterID);
	void OnRep_PlayerProgress();
	void OnRep_ItemUpgradeSelections();
	void OnRep_Credits();
	void OnRep_CharacterStats();
	void OnRep_ActiveCampaignMission();
	void ItemUpgradeEquipSignature__DelegateSignature(AActor* itemClass, UItemUpgrade* Upgrade);
	void ItemUpgradeCraftSignature__DelegateSignature(UItemUpgrade* Upgrade);
	FCharacterProgress GetCharacterStat(UPlayerCharacterID* characterID);
	UGeneratedMission* GetActiveCampaignMission();
	void CreditsChangedDelegate__DelegateSignature();
};

// Class FSD.SchematicRarity
// Size: 0x38 (Inherited: 0x30)
struct USchematicRarity : UDataAsset {
	float Rarity; // 0x30(0x04)
};

// Class FSD.Schematic
// Size: 0x108 (Inherited: 0x58)
struct USchematic : USavableDataAsset {
	FMulticastInlineDelegate OnSchematicAddedToInventory; // 0x58(0x10)
	FMulticastInlineDelegate OnSchematicReset; // 0x68(0x10)
	FMulticastInlineDelegate OnSchematicBuilt; // 0x78(0x10)
	USchematicCategory* Category; // 0x88(0x08)
	USchematicPricingTier* PricingTier; // 0x90(0x08)
	USchematicRarity* Rarity; // 0x98(0x08)
	UPlayerCharacterID* UsedByCharacter; // 0xa0(0x08)
	USchematicItem* Item; // 0xa8(0x08)
	TMap<UResourceData*, int32_t> CraftingCost; // 0xb0(0x50)
	bool CostIsLocked; // 0x100(0x01)

	void SetCraftingMaterialCost();
	void SetCostLocked(bool IsLocked);
	void SchematicDelegate__DelegateSignature(USchematic* Schematic);
	bool HasBeenForged(UObject* WorldContext);
	bool HasBeenAwardedOrForged(UObject* WorldContext);
	bool HasBeenAwarded(UObject* WorldContext);
	FText GetTitle();
	enum class ESchematicState GetSchematicState(UObject* WorldContext);
	USchematicItem* GetSchematicItem();
	TMap<UResourceData*, int32_t> GetResourceCost();
	FColor GetIconTint();
	UTexture* GetIcon(UObject* WorldContextObject);
	FText GetDescription();
	bool CanAffordSchematic(UObject* WorldContext);
	void BuildSchematic(UObject* WorldContext);
	void AddSchematicToPlayerInventory(UObject* WorldContext);
};

// Class FSD.SchematicBankBase
// Size: 0x38 (Inherited: 0x30)
struct USchematicBankBase : UDataAsset {
};

// Class FSD.SchematicBank
// Size: 0x88 (Inherited: 0x38)
struct USchematicBank : USchematicBankBase {
	TSet<USchematic*> Schematics; // 0x38(0x50)

	void AddSchematic(USchematic* Schematic);
};

// Class FSD.SchematicBankInterface
// Size: 0x28 (Inherited: 0x28)
struct USchematicBankInterface : UInterface {
};

// Class FSD.SchematicCategory
// Size: 0xf0 (Inherited: 0x58)
struct USchematicCategory : USavableDataAsset {
	FText CategoryName; // 0x58(0x18)
	TSoftObjectPtr<UTexture2D> FrameTexture; // 0x70(0x28)
	FLinearColor FrameTint; // 0x98(0x10)
	FLinearColor BackgroundTint; // 0xa8(0x10)
	enum class ESchematicType SchematicType; // 0xb8(0x01)
	TSoftObjectPtr<UDialogDataAsset> ShoutForging; // 0xc0(0x28)
	UEventRewardType* RewardType; // 0xe8(0x08)
};

// Class FSD.SchematicBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct USchematicBlueprintLibrary : UBlueprintFunctionLibrary {

	void PriceAllSchematics(bool lockPrices);
	bool IsSchematicOwnedOrForged(UObject* WorldContextObject, USchematic* Schematic);
	bool IsSchematicOwned(UObject* WorldContextObject, USchematic* Schematic);
	bool IsSchematicForged(UObject* WorldContextObject, USchematic* Schematic);
	bool HasAnyUnlockableSchematics(UObject* WorldContextObject, UPlayerCharacterID* characterID, TSet<USchematicCategory*> Categories);
	TArray<USchematic*> GetRewardableSchematics(UObject* WorldContextObject, UPlayerCharacterID* characterID, USchematicCategory* Category);
	TArray<USchematic*> GetForgedSchematic(UObject* WorldContextObject);
	USchematicCategory* FindItemUpgradeSchematicCategory(UItemUpgrade* Upgrade);
	void AddSkinSchematicCollectionToSettings(UItemSkinSchematicCollection* Collection);
};

// Class FSD.SchematicItem
// Size: 0x28 (Inherited: 0x28)
struct USchematicItem : UObject {

	FText GetTitle();
	FColor GetIconTint();
	UTexture* GetIcon(UObject* WorldContextObject);
	FText GetDescription();
};

// Class FSD.OverclockShematicItem
// Size: 0x38 (Inherited: 0x28)
struct UOverclockShematicItem : USchematicItem {
	UItemID* OwningItem; // 0x28(0x08)
	UItemUpgrade* Overclock; // 0x30(0x08)

	UUpgradableGearComponent* GetOwningGearComponent();
};

// Class FSD.VanitySchematicItem
// Size: 0x30 (Inherited: 0x28)
struct UVanitySchematicItem : USchematicItem {
	UVanityItem* Item; // 0x28(0x08)

	UVanityItem* GetVanityItem();
};

// Class FSD.VictoryPoseSchematicItem
// Size: 0x30 (Inherited: 0x28)
struct UVictoryPoseSchematicItem : USchematicItem {
	UVictoryPose* VictoryPose; // 0x28(0x08)
};

// Class FSD.DrinkableSchematicItem
// Size: 0x30 (Inherited: 0x28)
struct UDrinkableSchematicItem : USchematicItem {
	UDrinkableDataAsset* Drinkable; // 0x28(0x08)
};

// Class FSD.SkinSchematicItem
// Size: 0x38 (Inherited: 0x28)
struct USkinSchematicItem : USchematicItem {
	UItemID* ItemID; // 0x28(0x08)
	UItemSkin* Skin; // 0x30(0x08)
};

// Class FSD.ResourceSchematicItem
// Size: 0x40 (Inherited: 0x28)
struct UResourceSchematicItem : USchematicItem {
	int32_t Credits; // 0x28(0x04)
	UResourceData* Resource; // 0x30(0x08)
	int32_t ResourceAmount; // 0x38(0x04)
};

// Class FSD.BlankSchematicItem
// Size: 0x60 (Inherited: 0x28)
struct UBlankSchematicItem : USchematicItem {
	FText Title; // 0x28(0x18)
	FText Description; // 0x40(0x18)
	UTexture2D* Icon; // 0x58(0x08)
};

// Class FSD.SchematicSettings
// Size: 0x340 (Inherited: 0x30)
struct USchematicSettings : UDataAsset {
	UDataTable* PricingTable; // 0x30(0x08)
	USchematic* BlankSchematic; // 0x38(0x08)
	TSet<USchematicBank*> SchematicBanks; // 0x40(0x50)
	TSet<UOverclockBank*> OverclockBanks; // 0x90(0x50)
	TSet<UItemSkinSchematicCollection*> SkinSchematicCollections; // 0xe0(0x50)
	TSet<USchematicBankBase*> VanitySchematicBanks; // 0x130(0x50)
	TMap<enum class ESchematicType, FSchematicType> SchematicTypes; // 0x180(0x50)
	USchematicBank* EndlessSchematics; // 0x1d0(0x08)
	TSet<USchematicCategory*> Categories; // 0x1d8(0x50)
	TArray<USchematicCategory*> OverclockCategories; // 0x228(0x10)
	TArray<USchematicCategory*> VanityCategories; // 0x238(0x10)
	TArray<USchematicCategory*> EndlessCategories; // 0x248(0x10)
	USchematicPricingTier* OverclockPricingTier; // 0x258(0x08)
	TArray<USchematicPricingTier*> VanityPricingTiers; // 0x260(0x10)
	TArray<USchematicRarity*> VanityRarity; // 0x270(0x10)
	TArray<USchematicRarity*> OverclockRarity; // 0x280(0x10)
	TArray<USchematicRarity*> EndlessRarity; // 0x290(0x10)

	FSchematicType GetSchematicTypeData(enum class ESchematicType InType);
	TSet<USchematic*> GetSchematics();
};

// Class FSD.ForginSettings
// Size: 0x48 (Inherited: 0x30)
struct UForginSettings : UDataAsset {
	int32_t XPRequiredPerLevel; // 0x30(0x04)
	TArray<enum class ESchematicType> MasteryRewardCycle; // 0x38(0x10)
};

// Class FSD.Season
// Size: 0x168 (Inherited: 0x58)
struct USeason : USavableDataAsset {
	FText SeasonName; // 0x58(0x18)
	int32_t SeasonNumber; // 0x70(0x04)
	TArray<FSeasonLevel> Levels; // 0x78(0x10)
	FSeasonLevel RewardAfterAllLevels; // 0x88(0x10)
	TArray<FUnassignedReward> UnassignedRewards; // 0x98(0x10)
	UTreeOfVanity* TreeOfVanity; // 0xa8(0x08)
	UGameDLC* SeasonDLC; // 0xb0(0x08)
	FRuntimeFloatCurve SpawnChanceByMissionLength; // 0xb8(0x88)
	TArray<FSeasonalEventEntry> SeasonalEvents; // 0x140(0x10)
	int32_t NumberOfScripChallenges; // 0x150(0x04)
	TArray<UMissionStat*> ScripChallenges; // 0x158(0x10)

	void AddUnassignedReward(int32_t Index, UReward* Reward);
	void AddLevel(int32_t Index, UReward* Reward, UReward* specialReward);
};

// Class FSD.SeasonChallenge
// Size: 0x118 (Inherited: 0x58)
struct USeasonChallenge : USavableDataAsset {
	FText ChallengeText; // 0x58(0x18)
	TSoftObjectPtr<UTexture2D> Icon; // 0x70(0x28)
	TSoftObjectPtr<UTexture2D> IconOutlined; // 0x98(0x28)
	FLinearColor Color; // 0xc0(0x10)
	TArray<FTrackedStatInfo> TrackedStats; // 0xd0(0x10)
	TArray<FChallengeVariation> Variations; // 0xe0(0x10)
	int32_t NumberOfChoices; // 0xf0(0x04)
	float ChallengeWeight; // 0xf4(0x04)
	bool bIsSpecialChallenge; // 0xf8(0x01)
	int32_t MaxOccurences; // 0xfc(0x04)
	USeasonChallenge* ChallengeAfterMaxOccurences; // 0x100(0x08)
	TArray<UCampaign*> RequiredCampaigns; // 0x108(0x10)

	UTexture2D* GetIconOutlined();
	UTexture2D* GetIcon();
};

// Class FSD.SeasonEditorRewardWidget
// Size: 0x238 (Inherited: 0x230)
struct USeasonEditorRewardWidget : UUserWidget {
	UReward* Reward; // 0x230(0x08)
};

// Class FSD.SeasonSettings
// Size: 0x68 (Inherited: 0x30)
struct USeasonSettings : UDataAsset {
	USeason* CurrentSeason; // 0x30(0x08)
	int32_t MaxActiveChallenges; // 0x38(0x04)
	TArray<USeasonChallenge*> SeasonChallenges; // 0x40(0x10)
	int32_t XPPerLevel; // 0x50(0x04)
	UCurveFloat* XPToPerforcemancePointsCurve; // 0x58(0x08)
	int32_t TreeOfVanitySnapSize; // 0x60(0x04)
	float SpecialChallengeChange; // 0x64(0x04)
};

// Class FSD.SeasonReplicatorComponent
// Size: 0xb0 (Inherited: 0xb0)
struct USeasonReplicatorComponent : UActorComponent {

	void CompleteSeasonEvent(USeasonEventData* inEvent);
};

// Class FSD.SeasonsSubsystem
// Size: 0xf0 (Inherited: 0x30)
struct USeasonsSubsystem : UGameInstanceSubsystem {
	FMulticastInlineDelegate OnXPChanged; // 0x30(0x10)
	FMulticastInlineDelegate OnTokensChanged; // 0x40(0x10)
	FMulticastInlineDelegate OnVanityTreeReset; // 0x50(0x10)
	FMulticastInlineDelegate OnScripChallengeUpdated; // 0x60(0x10)
	FMulticastInlineDelegate OnClaimStatusChanged; // 0x70(0x10)
	int32_t ForceSeasonEventIndex; // 0x80(0x04)
	FSeasonMissionResult TempSeasonMissionResult; // 0x90(0x30)
	FSeasonMissionResult LatestMissionSeasonResult; // 0xc0(0x30)

	FTimespan TimeToNewChallenge();
	void RerollChallenge(int32_t Index);
	void OnStatChanged(UMissionStat* Stat, float Value);
	void OnScripChallengeCompleted(UMissionStat* Stat, float Value);
	void IsRewardClaimed(int32_t Level, bool isNormalClaimed, bool isSpecialClaimed);
	bool IsNodeUnlocked(int32_t TreeOfVanityNodeID);
	bool IsNodeBought(int32_t TreeOfVanityNodeID);
	void InitliazeStats();
	bool HasClaimedLevelRewards(int32_t startLevel, int32_t numberOfLevels);
	bool HasClaimedAllRewards();
	int32_t GetSeasonXPFromMissionXP(AFSDPlayerState* PlayerState);
	int32_t GetSeasonXP();
	int32_t GetSeasonNumber();
	FText GetSeasonName();
	FSeasonMissionResult GetSeasonMissionResult();
	void GetSeasonLevelFromXP(int32_t XP, int32_t Level, float currentLevelPercent, int32_t currentLevelXP, int32_t levelXPTotal);
	void GetSeasonLevel(int32_t Level, float currentLevelPercent, int32_t currentLevelXP, int32_t levelXPTotal);
	void GetSeasonBought(bool isBought);
	void GetScriptChallengeInfo(int32_t Completed, int32_t claimed, int32_t Total);
	int32_t GetNumberOfTokens(UObject* WorldContextObject);
	int32_t GetNumberOfSeasonLevels();
	FSeasonLevel GetNextReward();
	int32_t GetLevelXP(int32_t Level);
	FSeasonLevel GetLevelReward(int32_t Level);
	void GetLevelProgress(int32_t Level, float levelPercent, int32_t levelXP, int32_t levelXPTotal);
	TArray<UDataAsset*> GetAssetReferences(int32_t challengeIndex, USeasonChallenge* outChallenge);
	TArray<FChallengeInfo> GetActiveChallenges(bool canGenerateNewChallenge);
	UTextureRenderTarget2D* GenerateVanityRewardIcon(UVanityItem* Item, UPlayerCharacterID* Character, FTransform Offset, bool rebuildMesh, FVector2D Size);
	UTextureRenderTarget2D* GenerateSkinRewardIcon(UItemSkin* Skin, UPlayerCharacterID* Character, bool bShowCloseUp, FTransform Offset, bool rebuildMesh, FVector2D Size);
	UTextureRenderTarget2D* GeneratePickaxeRewardIcon(UPickaxePart* part, enum class EPickaxePartLocation PickaxePartLocation, UPlayerCharacterID* Character, FTransform Offset, bool rebuildMesh, FVector2D Size);
	void CompleteSeasonEvent_Server(USeasonEventData* inEvent);
	bool ClaimScripChallenge();
	bool ClaimReward(UObject* WorldContext, AFSDPlayerController* Player, int32_t Level, bool isNormalReward);
	void CHEAT_SetSeasonMissionResult(int32_t XPFromMission, int32_t numberOfChallenges, USeasonEventData* Event);
	void CHEAT_ResetTimeToNewChallenge();
	void CHEAT_ResetReroll();
	void CHEAT_AddChallenge();
	bool CanRerollChallenge();
	bool BuyTreeNode(UObject* WorldContextObject, AFSDPlayerController* Player, int32_t TreeOfVanityNodeID);
};

// Class FSD.SeasonEventData
// Size: 0xa0 (Inherited: 0x58)
struct USeasonEventData : USavableDataAsset {
	FText Name; // 0x58(0x18)
	int32_t PerformancePoints; // 0x70(0x04)
	int32_t PerformancePointsOnFail; // 0x74(0x04)
	TSoftObjectPtr<UTexture2D> Icon; // 0x78(0x28)
};

// Class FSD.SendInviteBlueprintCallProxy
// Size: 0x88 (Inherited: 0x30)
struct USendInviteBlueprintCallProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	UObject* WorldContextObject; // 0x50(0x08)

	USendInviteBlueprintCallProxy* SendInvite(UObject* WorldContextObject, FString ListName, FString UserId);
};

// Class FSD.SendSessionInviteToFriendBlueprintCallProxy
// Size: 0x68 (Inherited: 0x30)
struct USendSessionInviteToFriendBlueprintCallProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	UObject* WorldContextObject; // 0x50(0x08)

	USendSessionInviteToFriendBlueprintCallProxy* SendSessionInviteToFriend(UObject* WorldContextObject, FString FriendId);
};

// Class FSD.SentryAttachment
// Size: 0x220 (Inherited: 0x220)
struct ASentryAttachment : AActor {
};

// Class FSD.SentryGunAnimInstance
// Size: 0x290 (Inherited: 0x270)
struct USentryGunAnimInstance : UAnimInstance {
	ASentryGun* SentryGun; // 0x268(0x08)
	ARedeployableSentryGun* RedeployableSentryGun; // 0x270(0x08)
	FRotator TurretRotation; // 0x278(0x0c)
	float YawOffset; // 0x284(0x04)
	float BuildProgress; // 0x288(0x04)
};

// Class FSD.RecallableSentryGun
// Size: 0x440 (Inherited: 0x420)
struct ARecallableSentryGun : ARecallableActor {
	FMulticastInlineDelegate OnSentryIndexChanged; // 0x420(0x10)
	int32_t SentryIndex; // 0x430(0x04)

	void SentryIndexChanged__DelegateSignature(int32_t Index);
	void ReceiveOnSentryReady(ASentryGun* SentryGun, APlayerCharacter* PlayerCharacter);
	void OnRep_SentryIndex();
	void GetStateDescription(FText Description);
	ASentryGun* GetSentryGunClass();
	ASentryGun* GetSentryGun();
};

// Class FSD.ReloadSentryUsableComponent
// Size: 0x188 (Inherited: 0x118)
struct UReloadSentryUsableComponent : UUsableComponent {
	FText OutOfAmmoText; // 0x118(0x18)
	FText AmmoFullText; // 0x130(0x18)
	USoundBase* AudioOutOfAmmo; // 0x148(0x08)
	USoundBase* AudioReloading; // 0x150(0x08)
	UAudioComponent* ReloadingAudioComponent; // 0x158(0x08)
	bool Usable; // 0x160(0x01)
	bool bReloading; // 0x161(0x01)
	UAudioComponent* ReloadAudioComponent; // 0x168(0x08)
	float AmmoPerSec; // 0x170(0x04)
	TWeakObjectPtr<APlayerCharacter> OwningPlayerCharacter; // 0x178(0x08)
	ASentryGun* SentryGun; // 0x180(0x08)

	void SetOwningPlayerCharacter(APlayerCharacter* Player);
	void SetCanUse(bool isUsable);
	void OnRep_Reloading();
	void OnReloadAudioFinished();
};

// Class FSD.SentryGunItem
// Size: 0x3c0 (Inherited: 0x3b0)
struct ASentryGunItem : APlaceableItem {
	TArray<UItemUpgrade*> upgrades; // 0x3b0(0x10)
};

// Class FSD.RecallableSentryGunItem
// Size: 0x430 (Inherited: 0x3a8)
struct ARecallableSentryGunItem : ARecallableItem {
	FMulticastInlineDelegate OnActiveItemsChanged; // 0x3a8(0x10)
	FMulticastInlineDelegate OnSelectedItemChanged; // 0x3b8(0x10)
	int32_t MaxSentryCount; // 0x3c8(0x04)
	float MinDistanceBetweenSentries; // 0x3cc(0x04)
	FText RecallHoldDescription; // 0x3d0(0x18)
	float RecallHoldDuration; // 0x3e8(0x04)
	UCapacityHoldingItemAggregator* AmmoCapacity; // 0x3f0(0x08)
	UItemPlacerAggregator* ItemPlacer; // 0x3f8(0x08)
	TArray<UItemUpgrade*> upgrades; // 0x400(0x10)
	AItem* LoadoutClass; // 0x410(0x08)
	float SupplyStatusWeight; // 0x418(0x04)
	float SentryAngleRestriction; // 0x41c(0x04)
	bool bIsUpgraded; // 0x420(0x01)

	void ReceiveItemUpgraded();
	void RecallableSentryGunSignature__DelegateSignature(ARecallableSentryGun* SentryGun);
	void RecallableSentryGunItemSignature__DelegateSignature(ARecallableSentryGunItem* Item);
	bool HasAmmoLeft();
	ARecallableSentryGun* GetSelectedSentryGun();
	TArray<ARecallableSentryGun*> GetActiveSentryGuns();
	bool AreAllSentriesPlaced();
};

// Class FSD.SessionHandling
// Size: 0x28 (Inherited: 0x28)
struct USessionHandling : UBlueprintFunctionLibrary {

	void StopVoice(UObject* WorldContextObject);
	void StartVoice(UObject* WorldContextObject);
	bool StartSearchForFriends(int32_t localUserNum, UFSDGameInstance* GameInstance);
	void StartCheckForInstalledDLC(UObject* WorldContextObject);
	void SortServerList(UObject* WorldContextObject, enum class EServerSortOrder order, bool Reverse, bool sortByFriends, TArray<FBlueprintSessionResult> servers);
	void ShowStoreUI(UObject* WorldContextObject);
	void ShowInviteUI(UObject* WorldContextObject);
	void JoinOfficialXboxClub(UObject* WorldContextObject);
	bool IsVoiceChatting();
	bool IsInActiveSession();
	bool IsDisconnectReasonAKick(enum class EDisconnectReason reason);
	FString GetVoiceStatus();
	FText GetSessionJoinError(UObject* WorldContextObject);
	bool GetOnlinePlayerName(int32_t localUserNum, FString Name);
	enum class EFSDNATType GetNATType(UObject* WorldContextObject);
	enum class EMissionStructure GetMissionStructure(FBlueprintSessionResult Result);
	FString GetLoginStatus(int32_t localUserNum);
	FString GetHostUsername(UObject* WorldContextObject);
	FString GetHostUniqueId(UObject* WorldContextObject);
	bool GetFriendsList(int32_t localUserNum, TArray<FFriendInfo> Players);
	FString GetFriendlyServerNameSanitized(UObject* WorldContextObject);
	FString GetFriendlyServerName(UObject* WorldContextObject);
	bool GetCurrentSessionState(FString sessionState, FString ID);
	bool FSDUpdateSessionInfo(UObject* WorldContextObject);
	enum class EFSDMissionStatus FSDMissionStatus(FBlueprintSessionResult Result);
	void FSDListen(UObject* WorldContextObject);
	bool FSDIsSessionValid(FBlueprintSessionResult Result);
	bool FSDIsPrivateServer(FBlueprintSessionResult Result);
	bool FSDIsPasswordRequired(FBlueprintSessionResult Result);
	bool FSDIsModdedServer(FBlueprintSessionResult Result);
	bool FSDIsModdedSandboxServer(FBlueprintSessionResult Result);
	bool FSDIsFullServer(FBlueprintSessionResult Result);
	bool FSDIsEliteDeepDive(FBlueprintSessionResult Result);
	bool FSDIsClassLocked(FBlueprintSessionResult Result);
	bool FSDHasHiddenModsNotInstalledOnClient(FBlueprintSessionResult Result);
	bool FSDHasGameStarted(FBlueprintSessionResult Result);
	TArray<FString> FSDGetVerifiedModsInstalled(FBlueprintSessionResult Result);
	bool FSDGetServerStartTime(FBlueprintSessionResult Result, FDateTime StartTime);
	FString FSDGetServerNameSanitized(FBlueprintSessionResult Result);
	FString FSDGetServerName(FBlueprintSessionResult Result);
	FString FSDGetServerID(FBlueprintSessionResult Result);
	FString FSDGetRegion(FBlueprintSessionResult Result);
	TArray<UPlayerCharacterID*> FSDGetPlayerClassIDs(FBlueprintSessionResult Result);
	TArray<APlayerCharacter*> FSDGetPlayerClasses(FBlueprintSessionResult Result);
	int32_t FSDGetNumPlayers(FBlueprintSessionResult Result);
	TArray<FString> FSDGetModsInstalled(FBlueprintSessionResult Result, bool ExcludeVerifiedMods);
	int32_t FSDGetMissionSeed(FBlueprintSessionResult Result);
	FString FSDGetMapName(FBlueprintSessionResult Result);
	FString FSDGetHostUserID(FBlueprintSessionResult Result);
	int32_t FSDGetGlobalMissionSeed(FBlueprintSessionResult Result);
	float FSDGetDistanceFloat(FBlueprintSessionResult Result);
	enum class EServerDistance FSDGetDistance(FBlueprintSessionResult Result);
	UDifficultySetting* FSDGetDifficulty(FBlueprintSessionResult Result);
	FString FSDGetBuildId(FBlueprintSessionResult Result);
	bool FSDCancelFindSessions(UObject* WorldContextObject);
	bool FindBestQuickJoinServer(UObject* WorldContextObject, TArray<FBlueprintSessionResult> sessions, UDifficultySetting* Difficulty, UBiome* Biome, UMissionTemplate* MissionTemplate, FBlueprintSessionResult OutResult);
	bool AllowLinkToExternalFeedback(UObject* WorldContextObject);
};

// Class FSD.SharkEnemy
// Size: 0x4f0 (Inherited: 0x3a0)
struct ASharkEnemy : AEnemyDeepPathfinderCharacter {
	UPawnSensingComponent* PawnSensing; // 0x3a0(0x08)
	USphereComponent* CollisionSphere; // 0x3a8(0x08)
	USphereComponent* NearTargetSphere; // 0x3b0(0x08)
	UParticleSystemComponent* TearingGroundParticles; // 0x3b8(0x08)
	UParticleSystemComponent* AirTrailParticles; // 0x3c0(0x08)
	UInDangerComponent* Danger; // 0x3c8(0x08)
	UEnemyComponent* EnemyComponent; // 0x3d0(0x08)
	UDamageComponent* Damage; // 0x3d8(0x08)
	UDamageComponent* BumpDamage; // 0x3e0(0x08)
	UFakePhysGrabberComponent* RestrictedGrabberComponent; // 0x3e8(0x08)
	float RagdollSpeedFactor; // 0x3f0(0x04)
	USoundCue* ImpactCue; // 0x3f8(0x08)
	USoundCue* JumpSound; // 0x400(0x08)
	float DiveForSeconds; // 0x40c(0x04)
	FVector_NetQuantize RagdollImpact; // 0x414(0x0c)
	float LaunchPower; // 0x430(0x04)
	float GrabTime; // 0x440(0x04)
	float StopSpeedThreshold; // 0x450(0x04)
	float UpsideDownTime; // 0x454(0x04)
	float RaiseSpeed; // 0x458(0x04)
	float TiltInSpeed; // 0x45c(0x04)
	float TiltOutSpeed; // 0x460(0x04)
	float SafeTimeAfterVounerable; // 0x464(0x04)
	float RaiseHeight; // 0x468(0x04)
	float AttackDuration; // 0x46c(0x04)
	float HitLaunchPower; // 0x470(0x04)
	float ChanceToGrab; // 0x474(0x04)
	float MinTimeBetweenBumps; // 0x478(0x04)
	float ChanceForJump; // 0x480(0x04)
	float MinJumpCooldown; // 0x484(0x04)
	float MaxJumpCooldown; // 0x488(0x04)
	float JumpForce; // 0x48c(0x04)
	float TimeBeforeGroundCheck; // 0x490(0x04)
	float MinCirclingTime; // 0x4a0(0x04)
	float MaxCirclingTime; // 0x4a4(0x04)
	UFakeMoverSettings* CircleSetttings; // 0x4a8(0x08)
	UFakeMoverSettings* AttackSettings; // 0x4b0(0x08)
	UFakeMoverSettings* PostHitSettings; // 0x4b8(0x08)
	UFakeMoverSettings* JumpSettings; // 0x4c0(0x08)
	UFakeMoverSettings* VounerableSettings; // 0x4c8(0x08)
	float MaxInGroundTime; // 0x4d0(0x04)
	float MinInGroundTime; // 0x4d4(0x04)
	float StartParticleTime; // 0x4d8(0x04)
	float EndParticleTime; // 0x4dc(0x04)
	UParticleSystem* DiveParticles; // 0x4e0(0x08)
	enum class ESharkEnemyState State; // 0x4e9(0x01)

	void SetVulnerable();
	void ReleasePlayer(AActor* playerchar);
	void PopRecentlyBumpedPlayer();
	void OnStateChangedEvent(enum class ESharkEnemyState CurrentState);
	void OnSeePawn(APawn* APawn);
	void OnRep_State();
	void OnRep_RagdollImpact();
	void OnRep_DiveTime();
	void OnNearTarget(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void OnLandedEvent();
	void OnJumpEvent();
	void OnGrabbedEvent();
	void OnDeath(UHealthComponentBase* aHealthComponent);
	void OnDamaged(float aAmount);
	void OnCollided(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void Jumped();
	void ImpactSound();
	void DiveShow();
	void DiveHide();
	void ActivateDanger();
};

// Class FSD.SharkAnimInstance
// Size: 0x410 (Inherited: 0x410)
struct USharkAnimInstance : USpiderAnimInstance {
	enum class ESharkEnemyState SharkState; // 0x408(0x01)
	bool IsCloseToGround; // 0x409(0x01)
	bool AttackConnected; // 0x40a(0x01)
	float BendValue; // 0x40c(0x04)
};

// Class FSD.ThrowableItem
// Size: 0x400 (Inherited: 0x388)
struct AThrowableItem : AAnimatedItem {
	AThrowableActor* ThrowableClass; // 0x390(0x08)
	UAnimMontage* FPThrowMontage; // 0x398(0x08)
	UAnimMontage* TPThrowMontage; // 0x3a0(0x08)
	float ThrowVelocity; // 0x3a8(0x04)
	float InheritOwnerVelocityScale; // 0x3ac(0x04)
	float ThrowAngle; // 0x3b0(0x04)
	float CooldownAfterThrow; // 0x3b4(0x04)
	float CooldownAfterDetonation; // 0x3b8(0x04)
	bool CanThrowBeforeEquipAnimFinish; // 0x3bc(0x01)
	float ThrowDelay; // 0x3c0(0x04)
	float ThrowZOffset; // 0x3c4(0x04)
	float CooldownLeft; // 0x3c8(0x04)
	TArray<UItemUpgrade*> upgrades; // 0x3d0(0x10)
	AItem* LoadoutItem; // 0x3e0(0x08)
	TArray<TWeakObjectPtr<AThrowableActor>> ThrownActors; // 0x3e8(0x10)

	void Simulate_Throw(AThrowableActor* ActorClass);
	void Server_Throw(AThrowableActor* ActorClass);
	void ReceiveItemThrown(AThrowableActor* thrownActor);
	void ReceiveItemSpawned(AThrowableActor* thrownActor);
	void OnThrownActorDestroyed(AActor* Actor);
	FVector GetThrowLocation();
};

// Class FSD.ShieldGeneratorItem
// Size: 0x478 (Inherited: 0x400)
struct AShieldGeneratorItem : AThrowableItem {
	UCapacityHoldingItemAggregator* ChargeCapacity; // 0x410(0x08)
	UCapacityHoldingItemAggregator* CarryCapacity; // 0x418(0x08)
	float RechargeDuration; // 0x420(0x04)
	int32_t UnchargedCount; // 0x424(0x04)
	float RechargeProgress; // 0x428(0x04)
	float SupplyStatusWeight; // 0x42c(0x04)
	UDialogDataAsset* ShoutRecarged; // 0x430(0x08)
	FCoolDownProgressStyle RechargeProgressUI; // 0x438(0x40)

	void ReceiveGeneratorReturned();
	void ReceiveGeneratorRechargeProgress(float Progress);
	void ReceiveGeneratorRecharged();
	void OnRep_UnchargedCount(int32_t OldCount);
	bool GetIsRecharging();
	void GeneratorReturned();
};

// Class FSD.ThrowableActor
// Size: 0x230 (Inherited: 0x220)
struct AThrowableActor : AActor {
	UProjectileMovementComponent* Movement; // 0x220(0x08)
	bool IsMoving; // 0x228(0x01)
	bool IgnoreFellOutOfWorld; // 0x229(0x01)
	bool IgnoreOwnersCollision; // 0x22a(0x01)

	void ReceiveIgnoreCharacter(APlayerCharacter* Character);
	void ReceiveHitObject();
	void OnRep_IsMoving();
};

// Class FSD.ShieldGeneratorActor
// Size: 0x240 (Inherited: 0x230)
struct AShieldGeneratorActor : AThrowableActor {
	float GeneratorRadius; // 0x230(0x04)
	float DeployDelay; // 0x234(0x04)
	bool bPushStatusEffectOnExit; // 0x238(0x01)
	float GeneratorLifetime; // 0x23c(0x04)
};

// Class FSD.ShootingPlantAnimInstance
// Size: 0x2e0 (Inherited: 0x2c0)
struct UShootingPlantAnimInstance : UEnemyAnimInstance {
	AActor* Target; // 0x2b8(0x08)
	float Yaw; // 0x2c0(0x04)
	float Pitch; // 0x2c4(0x04)
	float YawSpeed; // 0x2c8(0x04)
	float PitchSpeed; // 0x2cc(0x04)
	bool IsVisible; // 0x2d0(0x01)
};

// Class FSD.ShowroomItem
// Size: 0x248 (Inherited: 0x220)
struct AShowroomItem : AActor {
	TSoftClassPtr<UObject> ShowroomStage; // 0x220(0x28)
};

// Class FSD.EnemyShowroomItem
// Size: 0x250 (Inherited: 0x248)
struct AEnemyShowroomItem : AShowroomItem {
	enum class EShowroomScaling Scaling; // 0x248(0x01)
};

// Class FSD.ShowroomController
// Size: 0xb8 (Inherited: 0xb0)
struct UShowroomController : UActorComponent {
	AShowroomStage* Stage; // 0xb0(0x08)

	void SetLightChannels(AActor* Actor);
	void RotateShowroom(float Pitch, float Yaw);
	void ResetShowroomRotation();
	FRotator GetShowroomRotation();
};

// Class FSD.EnemyShowroomController
// Size: 0xc0 (Inherited: 0xb8)
struct UEnemyShowroomController : UShowroomController {
	AEnemyShowroomItem* EnemyInstance; // 0xb8(0x08)

	void Receive_PlayAttack(UAnimSequenceBase* attackAnimation);
	void PlayAttack(UAnimSequenceBase* Animation);
	UEnemyShowroomController* DisplayEnemy(UObject* WorldContextObject, TSoftClassPtr<UObject> EnemyPreviewActor);
};

// Class FSD.ShowroomCameraKey
// Size: 0x30 (Inherited: 0x30)
struct UShowroomCameraKey : UDataAsset {
};

// Class FSD.ShowroomSceneCaptureComponent
// Size: 0x880 (Inherited: 0x880)
struct UShowroomSceneCaptureComponent : USceneCaptureComponent2D {
	UShowroomCameraKey* CameraKey; // 0x878(0x08)
};

// Class FSD.CharacterShowroomController
// Size: 0xc0 (Inherited: 0xb8)
struct UCharacterShowroomController : UShowroomController {
	APlayerCharacter* CharacterInstance; // 0xb8(0x08)

	void Receive_CharacterShown();
	void EquipWeapon(enum class EItemCategory Category);
	UCharacterShowroomController* DisplayCharacter(UObject* WorldContextObject, UPlayerCharacterID* characterID, UShowroomCameraKey* Key);
};

// Class FSD.ShowroomManager
// Size: 0xd8 (Inherited: 0xb0)
struct UShowroomManager : UActorComponent {
	FVector ShowroomLocation; // 0xb0(0x0c)
	AShowroomStage* CurrentStage; // 0xc0(0x08)
	AShowroomStage* StageInstance; // 0xc8(0x08)
	UTextureRenderTarget2D* RenderTarget; // 0xd0(0x08)

	UShowroomController* GetController();
	void ClearShowroom();
};

// Class FSD.ShowroomSettings
// Size: 0xa8 (Inherited: 0x30)
struct UShowroomSettings : UDataAsset {
	TSoftClassPtr<UObject> EnemyShowroomController; // 0x30(0x28)
	TSoftClassPtr<UObject> CharacterShowroomController; // 0x58(0x28)
	TSoftClassPtr<UObject> CharacterStage; // 0x80(0x28)
};

// Class FSD.ShowroomStage
// Size: 0x268 (Inherited: 0x220)
struct AShowroomStage : AActor {
	USceneCaptureComponent2D* SceneCapure; // 0x220(0x08)
	USceneCaptureComponent2D* ActiveCaptureComponent; // 0x228(0x08)
	UShowroomController* ControllerClass; // 0x230(0x08)
	UShowroomController* ControllerInstance; // 0x238(0x08)
	USceneCaptureComponent2D* SceneCapture; // 0x240(0x08)
	float MinPitch; // 0x248(0x04)
	float MaxPitch; // 0x24c(0x04)
	USceneComponent* CameraFocusPoint; // 0x250(0x08)

	void ReceiveInitialize(UTextureRenderTarget2D* RenderTarget);
	USceneCaptureComponent2D* GetActiveCaptureComponent();
	UTextureRenderTarget2D* CreateRenderTarget();
};

// Class FSD.Shredder
// Size: 0x3b8 (Inherited: 0x3a0)
struct AShredder : AEnemyDeepPathfinderCharacter {
	float FoldoutRange; // 0x3a0(0x04)
	float SpinRange; // 0x3a4(0x04)
	AActor* CurrentTarget; // 0x3b0(0x08)
};

// Class FSD.ShredderAnimInstance
// Size: 0x2c0 (Inherited: 0x2c0)
struct UShredderAnimInstance : UEnemyAnimInstance {
	bool InFoldoutRange; // 0x2b8(0x01)
	bool InSpinRange; // 0x2b9(0x01)
};

// Class FSD.SimpleHealthComponent
// Size: 0x1d0 (Inherited: 0x148)
struct USimpleHealthComponent : UHealthComponentBase {
	float Damage; // 0x148(0x04)
	float MaxHealth; // 0x14c(0x04)
	bool InvulnerableToNonDefinedResistances; // 0x150(0x01)
	bool bShowHealthBar; // 0x151(0x01)
	FVector HealthBarOffsetWorld; // 0x154(0x0c)
	TWeakObjectPtr<UEnemyComponent> EnemyComponent; // 0x160(0x08)
	TMap<UPawnStat*, float> Resistances; // 0x168(0x50)
	TArray<UDamageTag*> RequiredDamageTags; // 0x1b8(0x10)
	bool AutomaticFlushNetDormancy; // 0x1c8(0x01)

	void OnRep_Damage(float oldDamage);
	float HealFromDeath(float Amount);
};

// Class FSD.MaggotAnimationSharingStateProcessor
// Size: 0x50 (Inherited: 0x50)
struct UMaggotAnimationSharingStateProcessor : UAnimationSharingStateProcessor {
};

// Class FSD.PipelineAnimationSharingProcessor
// Size: 0x50 (Inherited: 0x50)
struct UPipelineAnimationSharingProcessor : UAnimationSharingStateProcessor {
};

// Class FSD.SkinEffect
// Size: 0x28 (Inherited: 0x28)
struct USkinEffect : UObject {

	void Receive_AddToItem(UMeshComponent* Mesh, AActor* Skinnable, bool IsFirstPerson);
};

// Class FSD.MaterialSkinEffect
// Size: 0x38 (Inherited: 0x28)
struct UMaterialSkinEffect : USkinEffect {
	TArray<TSoftObjectPtr<UMaterialInterface>> Materials; // 0x28(0x10)
};

// Class FSD.SkeletalMeshSkinEffect
// Size: 0x50 (Inherited: 0x28)
struct USkeletalMeshSkinEffect : USkinEffect {
	TSoftObjectPtr<USkeletalMesh> Mesh; // 0x28(0x28)
};

// Class FSD.Skinnable
// Size: 0x28 (Inherited: 0x28)
struct USkinnable : UInterface {
};

// Class FSD.SkinnableComponent
// Size: 0xc0 (Inherited: 0xb0)
struct USkinnableComponent : UActorComponent {
	UItemSkin* EquippedSkinColor; // 0xb0(0x08)
	UItemSkin* EquippedSkinMesh; // 0xb8(0x08)

	void UpdateSkin(AFSDPlayerState* Player);
	void OnLoadoutChanged();
	TArray<UItemSkin*> GetSkinsForItem(UItemID* ItemID, enum class EItemSkinType SkinType);
	UItemSkin* GetEquippedSkinMesh(UItemID* ItemID, AFSDPlayerState* Player);
	UItemSkin* GetEquippedSkinColor(UItemID* ItemID, AFSDPlayerState* Player);
	UItemSkin* GetEquippedSkin(UItemID* ItemID, enum class EItemSkinType SkinType, AFSDPlayerState* Player);
	TArray<UItemSkin*> GetEquippableColorSkins(UItemID* ItemID, AFSDPlayerState* Player);
	UItemSkin* GetDefaultItemSkin(UItemID* ItemID, enum class EItemSkinType itemSkinType);
	UItemSkin* GetBaseColorSkinForMeshSkin(UItemID* ItemID, UItemSkin* meshSkin);
	void EquipSkin(UItemSkin* Skin, UItemID* ItemID, AFSDPlayerState* Player);
};

// Class FSD.DroneSkinnableComponent
// Size: 0xc0 (Inherited: 0xc0)
struct UDroneSkinnableComponent : USkinnableComponent {
};

// Class FSD.SoundClassManager
// Size: 0x40 (Inherited: 0x30)
struct USoundClassManager : UGameInstanceSubsystem {
};

// Class FSD.SoundMixManagerComponent
// Size: 0xc0 (Inherited: 0xb0)
struct USoundMixManagerComponent : UActorComponent {
	TArray<FSoundMixManagerItem> SoundMixes; // 0xb0(0x10)
};

// Class FSD.SpaceRigBar
// Size: 0x270 (Inherited: 0x220)
struct ASpaceRigBar : AActor {
	FMulticastInlineDelegate OnNewDrinkableSpecial; // 0x220(0x10)
	UInstantUsable* BarUsable; // 0x230(0x08)
	UBoxComponent* BarUsableCollider; // 0x238(0x08)
	UBarMenuWidget* BarMenuWidget; // 0x240(0x08)
	TArray<FVector> DrinkServingLocations; // 0x248(0x10)
	TArray<FDrinkableBarSlot> DrinkableBarSlots; // 0x258(0x10)
	UDrinkableDataAsset* DrinkableSpecial; // 0x268(0x08)

	void SpawnDrinkables(UDrinkableDataAsset* Drinkable, APlayerCharacter* User);
	void ReceiveFinishedSpawningDrinkables(UDrinkableDataAsset* DrinkableData, APlayerCharacter* Customer);
	void ReceiveDrinkableSpawned(ADrinkableActor* Drinkable, APlayerCharacter* Customer, int32_t LocationIndex);
	void ReceiveBeginSpawningDrinkables(UDrinkableDataAsset* DrinkableData, APlayerCharacter* Customer);
	void PlayBartenderTip(APlayerCharacter* User);
	void PayTip(APlayerCharacter* Character, int32_t Credits);
	void OnRep_DrinkableSpecial();
	bool HasUnclaimedDrinkables();
	bool HasSpaceForMoreDrinkables();
	int32_t GetAvailableDrinkableSlots();
	void DrinkableSignature__DelegateSignature(UDrinkableDataAsset* Drinkable);
};

// Class FSD.SpaceRigBarMenuItem
// Size: 0x258 (Inherited: 0x250)
struct USpaceRigBarMenuItem : UFSDUserWidget {
	UDrinkableDataAsset* Drink; // 0x250(0x08)

	void Unselect();
	void Select();
};

// Class FSD.SpawnActorWithDebrisPosComponent
// Size: 0xc0 (Inherited: 0xb0)
struct USpawnActorWithDebrisPosComponent : UActorComponent {
	float MinDistanceBetweenSpwans; // 0xb0(0x04)
	bool AddTerrainPlacementBlockers; // 0xb4(0x01)
	bool AvoidImportantLocations; // 0xb5(0x01)
	float MinDistanceToImportantLocations; // 0xb8(0x04)

	bool PlaceActorsWithCallback(int32_t NumToSpawn, int32_t NumToSpawnMin, int32_t NumAllowedChecks, AActor* SpawnedActorClass, AProceduralSetup* setup, float Radius, UDebrisPositioning* DebrisPositioning, TArray<FVector> locationsToAvoid, UCurveFloat* AvoidCostCurve, FDelegate OnSpawned, FVector CustomLocation);
	bool PlaceActors(int32_t NumToSpawn, int32_t NumToSpawnMin, int32_t NumAllowedChecks, AActor* SpawnedActorClass, AProceduralSetup* setup, float Radius, UDebrisPositioning* DebrisPositioning, TArray<FVector> locationsToAvoid, UCurveFloat* AvoidCostCurve, TArray<AActor*> OutSpawnedActors, FVector CustomLocation);
	void AddTerrainPlacement(AActor* Actor, AProceduralSetup* setup);
};

// Class FSD.SpawningBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct USpawningBlueprintLibrary : UBlueprintFunctionLibrary {

	void SpawnEnemyGroupDescriptorSpreadOut(UObject* WorldContextObject, UEnemyGroupDescriptor* descriptor, float Difficulty, TArray<FVector> Locations, bool Alert, enum class DeepPathFinderSize pfSize);
	void SpawnEnemyGroupDescriptor(UObject* WorldContextObject, UEnemyGroupDescriptor* descriptor, float Difficulty, FVector Location, bool Alert, enum class DeepPathFinderSize pfSize);
	void SpawnEnemiesFromPool(UObject* WorldContextObject, float Difficulty, TArray<FVector> Locations, bool Alert, bool isConstantPreassure);
	void SpawnEnemiesAtLocationWithCallback(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32_t count, FVector Location, FDelegate Callback, bool Alert, bool scaleToDifficulty, enum class DeepPathFinderSize pfSize);
	void SpawnEnemiesAtLocation(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32_t count, FVector Location, bool Alert, bool scaleToDifficulty, enum class DeepPathFinderSize pfSize);
	void SpawnEnemiesAtEachLocation(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, TArray<FVector> Locations, enum class DeepPathFinderSize pfSize);
	TArray<FVector> GetSpawnPointsInRange(UObject* WorldContextObject, float distanceToPlayers, int32_t spawnPointCount, enum class DeepPathFinderSize pfSize);
	TArray<FVector> GetSpawnPointsInCircle(UObject* WorldContextObject, FVector Location, float Radius, int32_t count, bool scaleToDificulty, float maxSpawnAngle, enum class DeepPathFinderSize pfSize);
	TArray<FVector> GetSpawnPointsFromLocation(UObject* WorldContextObject, FVector Location, float Distance, int32_t spawnPointCount, enum class DeepPathFinderSize pfSize);
	TArray<FVector> GetSpawnPointsAroundLocation(UObject* WorldContextObject, FVector Location, float Distance, int32_t spawnPointCount, enum class DeepPathFinderSize pfSize);
	FVector GetSpawnPointInRange(UObject* WorldContextObject, float distanceToPlayers, enum class DeepPathFinderSize pfSize);
	FVector GetSpawnPointFromLocation(UObject* WorldContextObject, FVector Location, float Distance, enum class DeepPathFinderSize pfSize);
};

// Class FSD.SpecialAttackComponent
// Size: 0x120 (Inherited: 0xf0)
struct USpecialAttackComponent : UAttackBaseComponent {
	TArray<UAnimMontage*> Montages; // 0xf0(0x10)
	FMulticastInlineDelegate OnAttackActionNotify; // 0x110(0x10)

	void TriggerAttack(FName Name);
	UAnimMontage* SelectMontage();
	void Receive_OnPerformAttack();
	void Receive_OnAborted();
	void OnMontageEnded(UAnimMontage* Montage, bool interrupted);
	void OnFrozen(bool IsFrozen);
};

// Class FSD.SpecialDamageAttackComponent
// Size: 0x128 (Inherited: 0x120)
struct USpecialDamageAttackComponent : USpecialAttackComponent {
	UDamageComponent* Damage; // 0x120(0x08)
};

// Class FSD.SpecialEventBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct USpecialEventBlueprintLibrary : UBlueprintFunctionLibrary {

	USchematic* TryGivePendingReward(UObject* WorldContextObject);
	void StorePendingReward(UObject* WorldContextObject, TArray<USchematic*> schematicsToChooseFrom);
	void SpawnEventRewardFrame(UObject* WorldContextObject, FVector Location);
	bool HasPendingReward(UObject* WorldContextObject);
	TArray<USchematic*> GetSpecialEventsRewardSchematics(UObject* WorldContextObject);
	void ClearPendingReward(UObject* WorldContextObject);
};

// Class FSD.SpecialEventSpawner
// Size: 0x28 (Inherited: 0x28)
struct USpecialEventSpawner : UObject {
};

// Class FSD.SimpleSpecialEventSpawner
// Size: 0x60 (Inherited: 0x28)
struct USimpleSpecialEventSpawner : USpecialEventSpawner {
	UDebrisPositioning* Positioning; // 0x28(0x08)
	TSoftClassPtr<UObject> EventActor; // 0x30(0x28)
	float EventAvoidanceRadius; // 0x58(0x04)
};

// Class FSD.EncounterSpecialEventSpawner
// Size: 0x38 (Inherited: 0x28)
struct UEncounterSpecialEventSpawner : USpecialEventSpawner {
	FEncounterSpecialItem Encounter; // 0x28(0x10)
};

// Class FSD.SpecialEvent
// Size: 0x40 (Inherited: 0x30)
struct USpecialEvent : UDataAsset {
	float Weight; // 0x30(0x04)
	USpecialEventSpawner* EventSpawner; // 0x38(0x08)
};

// Class FSD.SpecialEventSettings
// Size: 0x108 (Inherited: 0x30)
struct USpecialEventSettings : UDataAsset {
	TArray<USpecialEvent*> SpecialEvents; // 0x30(0x10)
	TSoftClassPtr<UObject> EventRewardFrameClass; // 0x40(0x28)
	UDebrisPositioning* EventRewardFramePositioning; // 0x68(0x08)
	float EventRewardRadius; // 0x70(0x04)
	float CreditsReward; // 0x74(0x04)
	float XPReward; // 0x78(0x04)
	FRuntimeFloatCurve SpawnChanceMissionLengthCurve; // 0x80(0x88)
};

// Class FSD.ShootingSpiderAnimInstance
// Size: 0x430 (Inherited: 0x410)
struct UShootingSpiderAnimInstance : USpiderAnimInstance {
	float LookAtBlend; // 0x408(0x04)
	bool CheckCurve; // 0x40c(0x01)
	TWeakObjectPtr<AActor> TargetActor; // 0x410(0x08)
	FVector LookAtLocation; // 0x418(0x0c)
};

// Class FSD.SpiderEnemy
// Size: 0x3e8 (Inherited: 0x3a0)
struct ASpiderEnemy : AEnemyDeepPathfinderCharacter {
	UPawnStatsComponent* PawnStats; // 0x3a8(0x08)
	TArray<UAnimSequenceBase*> HitReactions; // 0x3b0(0x10)
	float FirstHitReactBlendIn; // 0x3c0(0x04)
	float OverrideHitReactBlendIn; // 0x3c4(0x04)
	UStaticMesh* GoreMesh; // 0x3d0(0x08)
	bool ApplyDifficultySpeedModifier; // 0x3d8(0x01)
	float AttackDamageModifier; // 0x3dc(0x04)
	bool LimitRagdollSpeed; // 0x3e0(0x01)
	float MaxRagdollSpeed; // 0x3e4(0x04)

	void PlayHitReaction();
	void OnDamaged(float Damage);
	UStaticMeshComponent* CreateHeadGore();
	void AlertNearbyEnemies();
};

// Class FSD.EnemyBufferComponent
// Size: 0x170 (Inherited: 0xb0)
struct UEnemyBufferComponent : UActorComponent {
	UStatusEffect* StatusEffect; // 0xb0(0x08)
	FName BufferParticleSocket; // 0xb8(0x08)
	UParticleSystem* Particles; // 0xc0(0x08)
	float ParticleTangentSize; // 0xc8(0x04)
	FMulticastInlineDelegate OnBuffingChangedEvent; // 0xd0(0x10)
	float BuffRadius; // 0xe0(0x04)
	int32_t MaxBuffedTargets; // 0xe4(0x04)
	FGameplayTagQuery BuffQuery; // 0xe8(0x48)
	TArray<AFSDPawn*> BuffTargets; // 0x130(0x10)
	TArray<UParticleSystemComponent*> ParticleInstances; // 0x140(0x10)

	void SetBuffingEnabled(bool Enabled);
	void OnPawnDied(UHealthComponentBase* Health);
	void OnOwnerDied(UHealthComponentBase* Health);
};

// Class FSD.AlignEnemyComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UAlignEnemyComponent : UActorComponent {
	bool RotateWhileStationary; // 0xb0(0x01)

	void SetRotateWhileStationary(bool Value);
	void OnRep_RotateWhileStationary();
};

// Class FSD.SplineDecoratorComponent
// Size: 0x580 (Inherited: 0x530)
struct USplineDecoratorComponent : UInstancedStaticMeshComponent {
	float DistanceBetweenInstances; // 0x528(0x04)
	int32_t StartIndex; // 0x52c(0x04)
	int32_t EndIndex; // 0x530(0x04)
	bool bUpdateContinuously; // 0x534(0x01)
	FVector VerticalOffset; // 0x538(0x0c)
	FVector Scale; // 0x544(0x0c)
	float DistanceProgress; // 0x550(0x04)
	USplineComponent* SplineComponent; // 0x558(0x08)
	TArray<FTransform> NewInstancesTransforms; // 0x560(0x10)
	float Phase; // 0x570(0x04)

	void Update(float DeltaTime);
	void SetUpdateContinuously(bool InContinuously);
	void SetSplineComponentAndMaterial(USplineComponent* InSplineComponent, int32_t ElementIndex, UMaterialInterface* Material);
	void SetSplineComponent(USplineComponent* InSplineComponent);
};

// Class FSD.SplinePlant
// Size: 0x448 (Inherited: 0x220)
struct ASplinePlant : AActor {
	USplineComponent* PlantSpline; // 0x220(0x08)
	USceneComponent* PlantEndPoint; // 0x228(0x08)
	UAudioComponent* AudioComponent; // 0x230(0x08)
	TSoftObjectPtr<USoundCue> CueExtending; // 0x238(0x28)
	TSoftObjectPtr<USoundCue> CueRetracting; // 0x260(0x28)
	USoundCue* AudioExtending; // 0x288(0x08)
	USoundCue* AudioRetracting; // 0x290(0x08)
	bool bEnabledSegmentCollision; // 0x298(0x01)
	float CarveRadius; // 0x29c(0x04)
	TSoftObjectPtr<UStaticMesh> SegmentMeshPtr; // 0x2a0(0x28)
	enum class ESplineMeshAxis SegmentForwardAxis; // 0x2c8(0x01)
	float SegmentLength; // 0x2cc(0x04)
	FRuntimeFloatCurve SegmentWidthCurve; // 0x2d0(0x88)
	float SegmentWidthScale; // 0x358(0x04)
	FRuntimeFloatCurve SegmentHeightCurve; // 0x360(0x88)
	float SegmentHeightScale; // 0x3e8(0x04)
	float PreviewLengthPercent; // 0x3ec(0x04)
	int32_t PreviewSeed; // 0x3f0(0x04)
	TArray<USplineMeshComponent*> SegmentMeshCache; // 0x3f8(0x10)
	TArray<USplineMeshComponent*> CollisionMeshCache; // 0x408(0x10)
	USplineComponent* SplineInstance; // 0x418(0x08)
	UStaticMesh* SegmentMesh; // 0x420(0x08)
	int32_t Seed; // 0x428(0x04)

	void SetTargetPlantLengthPercent(float InTargetPercent, float InPercentPerSecond, float InEaseExp);
	void SetTargetPlantLength(float InTargetLength, float InDistancePerSecond, float InEaseExp);
	void SetPlantLengthPercent(float InPercent);
	void ResetSpline();
	void ResetScale();
	void ReceivePrepareSpline(USplineComponent* InSplineComponent, int32_t InSeed);
	void ReceiveMovementUpdated(float InDistanceProgress);
	void ReceiveMovementStarted(float InTargetDistance);
	void ReceiveMovementFinished(float InDistanceProgress);
	float GetPlantTargetLengthPercent();
	float GetPlantLengthPercent();
	FTransform GetNearestLocationToLocalPlayer();
	float GetFullPlantLength();
};

// Class FSD.StabberVineRoot
// Size: 0x340 (Inherited: 0x340)
struct AStabberVineRoot : AEnemyPawn {

	void RemoveVine(AStabberVine* vine);
};

// Class FSD.StabberVine
// Size: 0x4d0 (Inherited: 0x4d0)
struct AStabberVine : ATentacleBase {
};

// Class FSD.StatHat
// Size: 0xb8 (Inherited: 0x30)
struct UStatHat : UGameInstanceSubsystem {

	void AddStatValue(FString Key, float Value);
	void AddStatCount(FString Key, int32_t count);
};

// Class FSD.StatusEffectExclusiveKey
// Size: 0x30 (Inherited: 0x30)
struct UStatusEffectExclusiveKey : UDataAsset {
};

// Class FSD.StatusEffect
// Size: 0xf8 (Inherited: 0x28)
struct UStatusEffect : UObject {
	UPawnAffliction* PawnAffliction; // 0x28(0x08)
	TArray<UStatusEffectItem*> StatusEffects; // 0x30(0x10)
	float MaxResistance; // 0x40(0x04)
	UDamageClass* DamageClass; // 0x48(0x08)
	UStatusEffectExclusiveKey* ExclusiveKey; // 0x50(0x08)
	FRandRange ApplyEffectsInterval; // 0x58(0x08)
	bool CanStack; // 0x60(0x01)
	float Duration; // 0x64(0x04)
	bool ApplyDurationAfterPop; // 0x68(0x01)
	bool RemoveOnDeath; // 0x69(0x01)
	bool RemoveOnTemperatureStateChange; // 0x6a(0x01)
	FGameplayTagQuery GameplayTagQuery; // 0x70(0x48)
	FGameplayTagContainer ExcludeTargetsWithTags; // 0xb8(0x20)
	FGameplayTagContainer TargetRequiredTags; // 0xd8(0x20)

	bool ShouldInstantiate();
	float GetStatusEffectDuration(UStatusEffect* StatusEffect);
	bool CanTrigger(AActor* Target);
};

// Class FSD.StatusEffectItem
// Size: 0x28 (Inherited: 0x28)
struct UStatusEffectItem : UObject {
};

// Class FSD.DotStatusEffectItem
// Size: 0x30 (Inherited: 0x28)
struct UDotStatusEffectItem : UStatusEffectItem {
	FRandRange damageAmount; // 0x28(0x08)
};

// Class FSD.DotEnemyArmorStatusEffectItem
// Size: 0x30 (Inherited: 0x28)
struct UDotEnemyArmorStatusEffectItem : UStatusEffectItem {
	FRandRange damageAmount; // 0x28(0x08)
};

// Class FSD.PlayerArmorStatusEffectItem
// Size: 0x30 (Inherited: 0x28)
struct UPlayerArmorStatusEffectItem : UStatusEffectItem {
	FRandRange ChangeAmount; // 0x28(0x08)
};

// Class FSD.HealingStatusEffectItem
// Size: 0x48 (Inherited: 0x28)
struct UHealingStatusEffectItem : UStatusEffectItem {
	bool HealPercentage; // 0x28(0x01)
	float NoDamageTimeRequired; // 0x2c(0x04)
	UPawnAffliction* PawnAffliction; // 0x30(0x08)
	FRandRange Amount; // 0x38(0x08)
	bool IgnoreCanTakeDamage; // 0x40(0x01)
};

// Class FSD.StatChangeStatusEffectItem
// Size: 0x38 (Inherited: 0x28)
struct UStatChangeStatusEffectItem : UStatusEffectItem {
	UPawnStat* Stat; // 0x28(0x08)
	float StatChange; // 0x30(0x04)
	bool AffectedByResistances; // 0x34(0x01)
};

// Class FSD.TemperatureStatusEffectItem
// Size: 0x30 (Inherited: 0x28)
struct UTemperatureStatusEffectItem : UStatusEffectItem {
	FRandRange TemperatureChangeAmount; // 0x28(0x08)
};

// Class FSD.HeatSourceStatusEffectItem
// Size: 0x30 (Inherited: 0x28)
struct UHeatSourceStatusEffectItem : UStatusEffectItem {
	float Temperature; // 0x28(0x04)
	enum class ETemperatureIntensity Intensity; // 0x2c(0x01)
};

// Class FSD.PheromoneStatusEffectItem
// Size: 0x28 (Inherited: 0x28)
struct UPheromoneStatusEffectItem : UStatusEffectItem {
};

// Class FSD.MakeAttackableStatusEffectItem
// Size: 0x38 (Inherited: 0x28)
struct UMakeAttackableStatusEffectItem : UStatusEffectItem {
	float AttackCostModifier; // 0x28(0x04)
	UAttackerPositioningComponent* ComponentClass; // 0x30(0x08)
};

// Class FSD.FSDPawnStatusEffectItem
// Size: 0x30 (Inherited: 0x28)
struct UFSDPawnStatusEffectItem : UStatusEffectItem {
	float StaggerDurationMultiplier; // 0x28(0x04)
	float AttackSpeedModifier; // 0x2c(0x04)
};

// Class FSD.ReplenishOxygenStatusEffectItem
// Size: 0x28 (Inherited: 0x28)
struct UReplenishOxygenStatusEffectItem : UStatusEffectItem {
};

// Class FSD.EnemyTemperatureStatusEffectItem
// Size: 0x38 (Inherited: 0x28)
struct UEnemyTemperatureStatusEffectItem : UStatusEffectItem {
	float WarmingRate; // 0x28(0x04)
	float UnFreezeTemperature; // 0x2c(0x04)
	float TemperatureChangeScaleModifier; // 0x30(0x04)
};

// Class FSD.EnemyDetonationStatusEffectItem
// Size: 0x30 (Inherited: 0x28)
struct UEnemyDetonationStatusEffectItem : UStatusEffectItem {
	bool FireDetonation; // 0x28(0x01)
	bool IceDetonation; // 0x29(0x01)
};

// Class FSD.ShoutStatusEffectItem
// Size: 0x30 (Inherited: 0x28)
struct UShoutStatusEffectItem : UStatusEffectItem {
	UDialogDataAsset* BeginShout; // 0x28(0x08)
};

// Class FSD.StatusEffectsComponent
// Size: 0x120 (Inherited: 0xb0)
struct UStatusEffectsComponent : UActorComponent {
	TArray<FActiveStatusEffectBank> ActiveStatusEffects; // 0xb0(0x10)
	UHealthComponentBase* OwnerHealth; // 0xc0(0x08)
	TSet<UStatusEffectExclusiveKey*> ActiveExclusiveKeys; // 0xc8(0x50)
	bool IgnoreAll; // 0x118(0x01)

	bool TryPushActiveStatusEffect(UStatusEffect* StatusEffect, AActor* Target, AActor* Owner);
	bool TryPopActiveStatusEffect(UStatusEffect* StatusEffect, AActor* Target, AActor* Owner);
	bool PushActiveStatusEffectInstance(UStatusEffect* StatusEffect, AActor* Owner);
	bool PushActiveStatusEffect(UStatusEffect* StatusEffect, AActor* Owner);
	void PopAllActiveStatusEffects(AActor* Owner);
	bool PopActiveStatusEffectInstance(UStatusEffect* StatusEffect, AActor* Owner);
	bool PopActiveStatusEffect(UStatusEffect* StatusEffect, AActor* Owner);
	void OnDeath(UHealthComponentBase* HealthComponent);
	bool HasActiveEffect(UStatusEffect* StatusEffect);
	UStatusEffect* CreateStatusEffectInstance(UStatusEffect* StatusEffect, UObject* Owner);
};

// Class FSD.StatusEffectTriggerComponent
// Size: 0x100 (Inherited: 0xb0)
struct UStatusEffectTriggerComponent : UActorComponent {
	FMulticastInlineDelegate OnEffectTriggered; // 0xb0(0x10)
	FMulticastInlineDelegate OnActorEnterLeave; // 0xc0(0x10)
	TArray<UStatusEffect*> StatusEffects; // 0xd0(0x10)
	TArray<UStatusEffect*> LeaveTriggerEffects; // 0xe0(0x10)
	UPrimitiveComponent* collider; // 0xf0(0x08)
	bool RemoveStatusEffectOnEndOverlap; // 0xf8(0x01)

	void OnOverlapEnd(AActor* MyActor, AActor* OtherActor);
	void OnOverlapBegin(AActor* MyActor, AActor* OtherActor);
	void OnComponentOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void OnComponentOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
};

// Class FSD.StayAwayFromWallsComponent
// Size: 0x250 (Inherited: 0x1f0)
struct UStayAwayFromWallsComponent : USceneComponent {
	AFSDGameState* GameState; // 0x1f8(0x08)
	float MaxSpeed; // 0x228(0x04)
	float Acceleration; // 0x22c(0x04)
	float BackAcceleration; // 0x230(0x04)
	float PointOffset; // 0x234(0x04)
	float AvoidSpeed; // 0x238(0x04)
	float GoBackSpeed; // 0x23c(0x04)
	bool Active; // 0x240(0x01)

	void SetIsActive(bool IsActive);
};

// Class FSD.Steerable
// Size: 0x28 (Inherited: 0x28)
struct USteerable : UInterface {
};

// Class FSD.StickyFlame
// Size: 0x268 (Inherited: 0x220)
struct AStickyFlame : AActor {
	UParticleSystemComponent* FlameParticles; // 0x220(0x08)
	UAudioComponent* Audio; // 0x228(0x08)
	UStatusEffectTriggerComponent* StatusTriggerComponent; // 0x230(0x08)
	FDecalData Decal; // 0x238(0x18)
	float FlameLifetime; // 0x250(0x04)
	float FlameExtinguishTime; // 0x254(0x04)
	float AudioFadeOutTime; // 0x258(0x04)
	bool IsActive; // 0x25c(0x01)

	void OnRep_IsActive();
	void OnExtinguisFlame();
};

// Class FSD.StickyFlameSpawner
// Size: 0xe8 (Inherited: 0xb0)
struct UStickyFlameSpawner : UActorComponent {
	FMulticastInlineDelegate OnStickyFlameSpawned; // 0xb0(0x10)
	AStickyFlame* StickyFlameActor; // 0xc0(0x08)
	float FlameLifetime; // 0xc8(0x04)
	float StickyFlameIntervals; // 0xcc(0x04)
	float StickyFlameMinDistance; // 0xd0(0x04)
	float StickyFlameLastTime; // 0xd4(0x04)
	FVector StickyFlameLastLocation; // 0xd8(0x0c)

	bool TrySpawnStickyFlameHit(FHitResult Hit);
	bool TrySpawnStickyFlame(FVector Location, FVector Normal);
	void StickyFlameSignature__DelegateSignature(AStickyFlame* StickyFlame);
	void ServerSpawnStickyFlame(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal);
};

// Class FSD.STLMeshCarver
// Size: 0x70 (Inherited: 0x28)
struct USTLMeshCarver : UObject {
	FBox AABB; // 0x28(0x1c)
	FDeepCSGFloatTree BSPTree; // 0x48(0x18)
	TArray<FVector> Vertices; // 0x60(0x10)
};

// Class FSD.SubHealthComponent
// Size: 0xf0 (Inherited: 0xb0)
struct USubHealthComponent : UActorComponent {
	FMulticastInlineDelegate OnDamageTaken; // 0xb8(0x10)
	FMulticastInlineDelegate OnHealthChanged; // 0xc8(0x10)
	FMulticastInlineDelegate OnCanTakeDamageChanged; // 0xd8(0x10)
	enum class EHealthbarType HealthbarType; // 0xe8(0x01)
	enum class EEnemyHealthScaling EnemyHealthScaling; // 0xea(0x01)

	void SetCanTakeDamage(bool canTakeDamage);
	bool IsDead();
	bool IsAlive();
	float GetHealthPct();
	float GetHealth();
	bool GetCanTakeDamage();
};

// Class FSD.DestructibleSubHealthComponent
// Size: 0x118 (Inherited: 0xf0)
struct UDestructibleSubHealthComponent : USubHealthComponent {
	float MaxHealth; // 0xf0(0x04)
	float RadialDamageResistance; // 0xf4(0x04)
	bool AllowInderectDamage; // 0xf8(0x01)
	bool PassthroughDamageWhenDisabled; // 0xf9(0x01)
	float Damage; // 0xfc(0x04)
	USceneComponent* ArmorComponent; // 0x100(0x08)
	FMulticastInlineDelegate OnDestroyed; // 0x108(0x10)

	void SubHealthDestroyed__DelegateSignature(UDestructibleSubHealthComponent* subHealth);
	void ResetHealth();
	void OnRep_Damage(float oldDamage);
};

// Class FSD.PassthroughSubHealthComponent
// Size: 0xf8 (Inherited: 0xf0)
struct UPassthroughSubHealthComponent : USubHealthComponent {
	USceneComponent* ArmorComponent; // 0xf0(0x08)
};

// Class FSD.TargetDummyPawn
// Size: 0x250 (Inherited: 0x220)
struct ATargetDummyPawn : AActor {
	FGameplayTagContainer GameplayTags; // 0x230(0x20)
};

// Class FSD.TeamResourcesComponent
// Size: 0x108 (Inherited: 0x108)
struct UTeamResourcesComponent : UResourcesComponent {
};

// Class FSD.Teleporter
// Size: 0x238 (Inherited: 0x220)
struct ATeleporter : AActor {
	ATeleporter* ConnectedTeleporter; // 0x228(0x08)
	float MinTeleporterRange; // 0x230(0x04)
	float MaxTeleporterRange; // 0x234(0x04)
};

// Class FSD.TemporaryBuff
// Size: 0x70 (Inherited: 0x30)
struct UTemporaryBuff : UDataAsset {
	FText Description; // 0x30(0x18)
	TSoftObjectPtr<UTexture2D> Icon; // 0x48(0x28)

	void DeActivateBuff(AFSDPlayerController* Player);
	void ActivateBuffOnPlayer(APlayerCharacter* Player);
	void ActivateBuffOnController(AFSDPlayerController* Player);
};

// Class FSD.StatTemporaryBuff
// Size: 0xc0 (Inherited: 0x70)
struct UStatTemporaryBuff : UTemporaryBuff {
	TMap<UPawnStat*, float> ModifiedStats; // 0x70(0x50)
};

// Class FSD.TentacleAnimInstance
// Size: 0xa50 (Inherited: 0x270)
struct UTentacleAnimInstance : UAnimInstance {
	FTentacleAnimInstanceProxy AnimInstanceProxy; // 0x270(0x7d0)
	bool UseActorRotationDuringExtension; // 0xa40(0x01)
};

// Class FSD.TerrainDetectComponent
// Size: 0x220 (Inherited: 0x1f0)
struct UTerrainDetectComponent : USceneComponent {
	FMulticastInlineDelegate OnPointRemoved; // 0x1f8(0x10)
	bool StartDetectOnBeginPlay; // 0x208(0x01)
	bool OnlyDetectOnServer; // 0x209(0x01)
	bool KillActorOnPointRemoved; // 0x20a(0x01)
	FVector ActiveDetectPos; // 0x20c(0x0c)
	int32_t DetectorId; // 0x218(0x04)

	void UpdateDetectLocation();
	void StopDetect();
	void StartDetect();
};

// Class FSD.TerrainDetectBoxComponent
// Size: 0x440 (Inherited: 0x420)
struct UTerrainDetectBoxComponent : UBoxComponent {
	FMulticastInlineDelegate OnBoxExcavated; // 0x420(0x10)
	bool StartDetectOnBeginPlay; // 0x430(0x01)
	bool OnlyDetectOnServer; // 0x431(0x01)
	int32_t NumCornersToExcavate; // 0x434(0x04)
	int32_t NumCornersExcavated; // 0x438(0x04)
	bool KillActorOnPointRemoved; // 0x43c(0x01)

	void StartDetect();
};

// Class FSD.TerrainDetectInterface
// Size: 0x28 (Inherited: 0x28)
struct UTerrainDetectInterface : UInterface {
};

// Class FSD.TerrainFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTerrainFunctionLibrary : UBlueprintFunctionLibrary {

	void CreateExplosionCrater2(UObject* WorldContextObject, FVector Location, float CarveDiameter, float carveNoiseSize, float carveBurnThickness, FVector Normal, float NormalOffset, float NormalSqueeze, bool allowCustomBurntMaterial, bool DissolvePlatforms, UTerrainMaterial* overrideBurnedMaterial);
	void CreateExplosionCrater(UObject* WorldContextObject, FVector Location, float CarveDiameter, float carveNoiseSize, float carveBurnThickness, bool allowCustomBurntMaterial, UTerrainMaterial* overrideBurnedMaterial);
};

// Class FSD.ProceduralFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UProceduralFunctionLibrary : UBlueprintFunctionLibrary {

	void SpawnTerrainImpact(UObject* WorldContextObject, UFXSystemAsset* particle, FVector Location, FRotator Rotation);
	AProceduralSetup* GetProceduralSetup(UObject* WorldContextObject);
	int32_t GetObjectiveXP(UObjective* objectiveClass, float missionLength);
	int32_t GetObjectiveCredits(UObjective* objectiveClass, float missionLength);
	UBiome* GetBiome(AProceduralSetup* levelSetup);
	void CreateEntrances(AProceduralSetup* pls, FRoomNode Room, int32_t exitCount, int32_t entranceCount, UDebrisPositioning* exitPositioning, UDebrisPositioning* entrancePositioning);
	bool AllControllersFinishedTransitionToPlay(UObject* WorldContextObject);
};

// Class FSD.SmartRockTerrainMaterial
// Size: 0x30 (Inherited: 0x30)
struct USmartRockTerrainMaterial : UTerrainMaterialBase {
};

// Class FSD.TerrainMaterial
// Size: 0x220 (Inherited: 0xa0)
struct UTerrainMaterial : UTerrainMaterialCore {
	char Collide : 1; // 0xa0(0x01)
	char Diggable : 1; // 0xa0(0x01)
	char CanBeDrilled : 1; // 0xa0(0x01)
	char ExplosionProof : 1; // 0xa0(0x01)
	char MeltsInFire : 1; // 0xa0(0x01)
	char PlatformDissolvable : 1; // 0xa0(0x01)
	UResourceData* ResourceData; // 0xa8(0x08)
	int32_t HitsNeededToMine; // 0xb0(0x04)
	TArray<FDecalData> HitDecal; // 0xb8(0x10)
	bool CanHaveDecals; // 0xc8(0x01)
	float PickAxeDigSize; // 0xcc(0x04)
	bool RemoveDebrisOnFirstHit; // 0xd0(0x01)
	UDialogDataAsset* ShoutLookAt; // 0xd8(0x08)
	UDialogDataAsset* ShoutOnDig; // 0xe0(0x08)
	UTerrainType* TerrainType; // 0xe8(0x08)
	FText InGameName; // 0xf8(0x18)
	FText InGameDescription; // 0x110(0x18)
	char Precious : 1; // 0x128(0x01)
	TSoftObjectPtr<UFXSystemAsset> DigParticles; // 0x130(0x28)
	TSoftObjectPtr<UMaterialInstance> DigParticlesMaterialOverride; // 0x158(0x28)
	TSoftObjectPtr<UFXSystemAsset> PartialDigParticles; // 0x180(0x28)
	TSoftObjectPtr<UMaterialInstance> PartialDigParticlesMaterialOverride; // 0x1a8(0x28)
	TSoftObjectPtr<USoundCue> CrumbleSound; // 0x1d0(0x28)
	TSoftObjectPtr<USoundCue> PartialMineSound; // 0x1f8(0x28)

	UFXSystemComponent* SpawnPartialDigParticles(UObject* WorldContextObject, FVector Location, FRotator Rotation);
	UFXSystemComponent* SpawnDigParticles(UObject* WorldContextObject, FVector Location, FRotator Rotation, float Density);
	bool IsPrecious();
	UMaterialInstance* GetObjectMaterial();
	FText GetInGameName();
	UMaterialInstance* GetDigParticlesMaterialOverride();
};

// Class FSD.TerrainType
// Size: 0x70 (Inherited: 0x30)
struct UTerrainType : UDataAsset {
	char Collide : 1; // 0x30(0x01)
	char Diggable : 1; // 0x30(0x01)
	char Precious : 1; // 0x30(0x01)
	USoundCue* DebrisStandardSoundCue; // 0x38(0x08)
	TSoftObjectPtr<UParticleSystem> DebrisStandardParticles; // 0x48(0x28)
};

// Class FSD.TerrainMaterialsCollection
// Size: 0x60 (Inherited: 0x30)
struct UTerrainMaterialsCollection : UDataAsset {
	TArray<UTerrainMaterial*> Materials; // 0x30(0x10)
	TArray<UTerrainType*> TerrainTypes; // 0x40(0x10)
};

// Class FSD.TerrainModifyingProjectile
// Size: 0x390 (Inherited: 0x338)
struct ATerrainModifyingProjectile : AProjectile {
	FMulticastInlineDelegate OnRevertToNormal; // 0x338(0x10)
	UTerrainMaterial* Terrain; // 0x348(0x08)
	UTerrainMaterial* OriginalGroundMaterial; // 0x350(0x08)
	UStaticMesh* CarveMesh; // 0x358(0x08)
	FVector CarveMeshScale; // 0x360(0x0c)
	FVector LastHitLocation; // 0x36c(0x0c)
	float Radius; // 0x378(0x04)
	bool Revert; // 0x37c(0x01)
	float TimeOnGround; // 0x380(0x04)
	float ExpensiveCarveNoise; // 0x384(0x04)

	void Tick(float DeltaSeconds);
	float GetRadius();
	void BeginPlay();
};

// Class FSD.TerrainPlacementComponent
// Size: 0x230 (Inherited: 0x1f0)
struct UTerrainPlacementComponent : USceneComponent {
	TArray<FTerrainPlacementBox> TerrainCheckers; // 0x1f0(0x10)
	enum class EDebrisColliderType CapsuleType; // 0x200(0x01)
	FDebrisCapsule Capsule; // 0x204(0x20)
	int32_t BlockerIDHack; // 0x224(0x04)

	void RemoveBlockers();
	void AddBlockers(AProceduralSetup* ProceduralSetup, FTransform Transform);
};

// Class FSD.TerrainScannerItem
// Size: 0x3f8 (Inherited: 0x388)
struct ATerrainScannerItem : AAnimatedItem {
	int32_t TerrainScannerZoomDirection; // 0x388(0x04)
	FName ScannerAttachSocketName; // 0x38c(0x08)
	float TerrainScannerStartAngle; // 0x398(0x04)
	float TerrainScannerScale; // 0x39c(0x04)
	float DelayedTerrainScannerScale; // 0x3a0(0x04)
	float DelayedTerrainScannerZoom; // 0x3a4(0x04)
	bool IsLookingAtMap; // 0x3a9(0x01)
	bool UpdateMapToolActors; // 0x3aa(0x01)
	TArray<UAnimMontage*> UseLoopsFP; // 0x3b0(0x10)
	UAnimMontage* EndFP; // 0x3c0(0x08)
	TArray<UAnimMontage*> UseLoopsTP; // 0x3c8(0x10)
	UAnimMontage* EndTP; // 0x3d8(0x08)
	USceneComponent* TerrainScannerRoot; // 0x3e8(0x08)
	USceneCaptureComponent2D* TerrainScannerCapture; // 0x3f0(0x08)

	void Server_SetIslookingAtMap(bool lookingAtMap);
	void OnRep_IsLookingAtMap();
};

// Class FSD.TerrainScannerStaticMesh
// Size: 0x490 (Inherited: 0x480)
struct UTerrainScannerStaticMesh : UStaticMeshComponent {
	bool bVisibleAtBeginPlay; // 0x480(0x01)
	bool bHideOnDeath; // 0x481(0x01)
	bool bUseFogOfWar; // 0x482(0x01)
	bool bVisibleOnScanner; // 0x483(0x01)

	void SetVisibleOnScanner(bool InShowOnScanner);
	void OnOwnerDeath(UHealthComponentBase* InHealthComponent);
};

// Class FSD.TerrainScannerSplineMesh
// Size: 0x520 (Inherited: 0x520)
struct UTerrainScannerSplineMesh : USplineMeshComponent {
	bool bVisibleAtBeginPlay; // 0x518(0x01)
	bool bHideOnDeath; // 0x519(0x01)
	bool bUseFogOfWar; // 0x51a(0x01)
	bool bVisibleOnScanner; // 0x51b(0x01)

	void SetVisibleOnScanner(bool InShowOnScanner);
	void OnOwnerDeath(UHealthComponentBase* InHealthComponent);
};

// Class FSD.TetherComponent
// Size: 0x158 (Inherited: 0xb0)
struct UTetherComponent : UActorComponent {
	FMulticastInlineDelegate OnPowerChanged; // 0xb0(0x10)
	FMulticastInlineDelegate OnConnectionChanged; // 0xc0(0x10)
	FMulticastInlineDelegate OnTetherMessage; // 0xd0(0x10)
	FMulticastInlineDelegate OnConnectionRangeUpdated; // 0xe0(0x10)
	UMeshComponent* TetherMesh; // 0xf8(0x08)
	bool AutoSetup; // 0x100(0x01)
	TArray<UTetherComponent*> ConnectionHistory; // 0x108(0x10)
	FName ConnectionPointName; // 0x128(0x08)
	UTetherComponent* ForwardConnection; // 0x130(0x08)
	UTetherComponent* backConnection; // 0x138(0x08)
	float ConnectionDistance; // 0x140(0x04)
	enum class ETetherConnectionMode ConnectionMode; // 0x144(0x04)
	int32_t ConnectionPriority; // 0x148(0x04)
	int32_t ConnectionHistorySize; // 0x14c(0x04)
	bool GeneratesPower; // 0x150(0x01)
	bool PeriodicConnectionValidation; // 0x151(0x01)
	bool hasPower; // 0x152(0x01)

	void ToggleConnectionValidation(bool Enabled, bool reactivate);
	void StopLoSTimer();
	void StartLoSTimer();
	void SetupConnectionpoint(UMeshComponent* Mesh, FName SocketName);
	void SetConnectionRange(float range);
	void ResetConnectionHistory();
	void OnRep_HasPower();
	void OnRep_ForwardConnection();
	void OnRep_BackConnection();
	void MessageTetherLine(FName Message, float Delay, enum class ETetherMessageDirection messageDirection);
	void MessageBody(FTetherMessageSettings Message);
	bool IsStartOfLine();
	bool IsFullyConnected();
	bool IsEndOfLine();
	bool IsConnected();
	UTetherComponent* GetTetherlineEnd(bool front);
	bool GetHasPower();
	UTetherComponent* GetForwardConnection();
	float GetConnectionRange();
	FVector GetConnectionPoint();
	TArray<UTetherComponent*> GetConnectionHistory();
	UTetherComponent* GetBackConnection();
	void DisconnectFromTetherLine(bool Deactivate);
	bool ConnectToTetherLine();
};

// Class FSD.Tether
// Size: 0x2b0 (Inherited: 0x260)
struct ATether : ACarriableItem {
	USkeletalMeshComponent* BaseMesh; // 0x260(0x08)
	UInstantUsable* UsableComponent; // 0x268(0x08)
	UCarriableComponent* Carry; // 0x270(0x08)
	USphereComponent* UseTrigger; // 0x278(0x08)
	UNiagaraComponent* TetherBeam; // 0x280(0x08)
	USphereComponent* PysicalCollision; // 0x288(0x08)
	UDamageComponent* ExplosionDamage; // 0x290(0x08)
	UParticleSystem* ExplosionParticle; // 0x298(0x08)
	USoundCue* ExplosionSound; // 0x2a0(0x08)
	bool IsOnGround; // 0x2a8(0x01)
	float KnockBackForce; // 0x2ac(0x04)

	void SetIsOnGround(bool IsOnGround);
	void OnDronePickup();
	void OnDroneDrop();
	void OnClosed();
	void Explode();
};

// Class FSD.TetherStation
// Size: 0x240 (Inherited: 0x220)
struct ATetherStation : AActor {
	USceneComponent* SceneRoot; // 0x220(0x08)
	USkeletalMeshComponent* BaseMesh; // 0x228(0x08)
	AFacilityGeneratorLine* FacilityGeneratorLineType; // 0x230(0x08)
	bool AreGeneratorsReady; // 0x238(0x01)
	bool FacilityActive; // 0x239(0x01)

	void SpawnGeneratorLines(FTransform startL, FTransform startR, FTransform endL, FTransform endR, AFacilityGeneratorLine* outLineL, AFacilityGeneratorLine* outLineR);
	void SetGeneratorsReady(bool ready);
	void Onrep_FacilityActive();
	void OnRep_AreGeneratorsReady();
	void OnGeneratorsReady();
	void OnActivated();
	void DisableShields();
	void ActivateFacility();
};

// Class FSD.TetherAnimInstance
// Size: 0x270 (Inherited: 0x270)
struct UTetherAnimInstance : UAnimInstance {
	bool SearchingForConnection; // 0x268(0x01)
};

// Class FSD.Throwable
// Size: 0x28 (Inherited: 0x28)
struct UThrowable : UInterface {
};

// Class FSD.ThrownGrenadeItem
// Size: 0x3b0 (Inherited: 0x338)
struct AThrownGrenadeItem : AItem {
	FMulticastInlineDelegate OnGrenadeThrown; // 0x340(0x10)
	UPlayerAnimInstance* FPAnimInstance; // 0x350(0x08)
	UPlayerAnimInstance* TPAnimInstance; // 0x358(0x08)
	UItemCharacterAnimationSet* CharacterAnimationSet; // 0x360(0x08)
	FVector ThrowOffset; // 0x368(0x0c)
	float ThrowAngle; // 0x374(0x04)
	int32_t MaxGrenades; // 0x378(0x04)
	int32_t Grenades; // 0x37c(0x04)
	float GrenadeCooldownRemaining; // 0x380(0x04)
	enum class EThrownGrenadeItemState State; // 0x384(0x04)
	AGrenade* GrenadeClass; // 0x388(0x08)
	UGrenadeAnimationSet* DefaultGrenadeAnimationSet; // 0x390(0x08)
	UStaticMeshComponent* GrenadeMeshInstance; // 0x3a0(0x08)
	bool HasRejoinedInitialized; // 0x3a9(0x01)

	void Server_ThrowGrenade();
	void Server_SetState(enum class EThrownGrenadeItemState itemState);
	void Server_Resupply(float percentage);
	void ResupplyGrenades(float percentage);
	void OnRep_State();
	void OnRep_GrenadeCount();
	void OnGrenadeThrown__DelegateSignature();
	void OnDeath(UHealthComponentBase* Health);
	void GrenadeThrowFinished();
	float GetGrenadeThrowVelocity();
	FRotator GetGrenadeThrowRotation();
	float GetGrenadeGravity();
	float GetGrenadeDuration();
};

// Class FSD.TickableActionBase
// Size: 0x40 (Inherited: 0x30)
struct UTickableActionBase : UBlueprintAsyncActionBase {
};

// Class FSD.MiniTimerAction
// Size: 0x68 (Inherited: 0x40)
struct UMiniTimerAction : UTickableActionBase {
	FMulticastInlineDelegate Completed; // 0x40(0x10)
	FMulticastInlineDelegate OnTick; // 0x50(0x10)

	void TickDelegate__DelegateSignature(float DeltaTime, float NormalizedTime);
	UMiniTimerAction* MiniTimer(UObject* WorldContext, float InDuration);
};

// Class FSD.MultiTextCounterAction
// Size: 0xb8 (Inherited: 0x40)
struct UMultiTextCounterAction : UTickableActionBase {
	FMulticastInlineDelegate Completed; // 0x40(0x10)
	FMulticastInlineDelegate OnTick; // 0x50(0x10)
	UTextBlock* TotalBlock; // 0x60(0x08)
	FText TotalFormat; // 0x68(0x18)
	TArray<FTextCounterEntry> Entries; // 0x80(0x10)
	float CountSpeed; // 0x90(0x04)
	USoundCue* CountingSound; // 0x98(0x08)
	UAudioComponent* AudioComponent; // 0xa0(0x08)
	UObject* WorldContext; // 0xa8(0x08)

	void TickDelegate__DelegateSignature();
	UMultiTextCounterAction* StartMultiTextCounter(UObject* InWorldContext, UTextBlock* InTotalBlock, FText InTotalFormat, float InCountSpeed, USoundCue* InCountingSound, TArray<FTextCounterEntry> InEntries);
};

// Class FSD.PendingLatentActionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPendingLatentActionLibrary : UBlueprintFunctionLibrary {

	void WaitOneFrame(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
};

// Class FSD.MoveComponentToAction
// Size: 0xd0 (Inherited: 0x40)
struct UMoveComponentToAction : UTickableActionBase {
	TWeakObjectPtr<USceneComponent> Component; // 0x40(0x08)
	FMulticastInlineDelegate Completed; // 0xc0(0x10)

	UMoveComponentToAction* EaseComponentTo(UObject* WorldContext, USceneComponent* InComponent, FTransform InEndTransform, enum class EEasingFunc InEasingMode, bool InWorldSpace, float InDuration);
	void CompletedDelegate__DelegateSignature(USceneComponent* Component);
};

// Class FSD.TowerEventModule
// Size: 0x388 (Inherited: 0x2f0)
struct ATowerEventModule : AFSDPawn {
	USceneComponent* Root; // 0x2f8(0x08)
	USkeletalMeshComponent* Mesh; // 0x300(0x08)
	UEnemyHealthComponent* Health; // 0x308(0x08)
	UArmorHealthDamageComponent* ArmorDamage; // 0x310(0x08)
	UWeakpointGlowComponent* WeakpointGlow; // 0x318(0x08)
	UParticleSystemComponent* SmokeParticles; // 0x320(0x08)
	FRotator MainBodyRotation; // 0x328(0x0c)
	USkeletalMesh* DestroyedMesh; // 0x338(0x08)
	USoundCue* ExplosionSound; // 0x340(0x08)
	UParticleSystem* ExplosionEffect; // 0x348(0x08)
	ATowerEventModule* PreviousModule; // 0x350(0x08)
	ATowerEventModule* NextModule; // 0x358(0x08)
	UStaticMesh* ArmorMesh; // 0x360(0x08)
	int32_t ArmorPieces; // 0x368(0x04)
	float ArmorLifetime; // 0x36c(0x04)
	float ArmorPopForce; // 0x370(0x04)
	float ArmorShedDelay; // 0x374(0x04)
	TArray<UStaticMeshComponent*> ArmorMeshes; // 0x378(0x10)

	void OnAttack();
	void HideArmorPlates();
	void DestroyArmor();
};

// Class FSD.AimingTowerEventModule
// Size: 0x3a0 (Inherited: 0x388)
struct AAimingTowerEventModule : ATowerEventModule {
	FRotator AimRotation; // 0x388(0x0c)
	AActor* CurrentTarget; // 0x398(0x08)
};

// Class FSD.TracerManager
// Size: 0xc8 (Inherited: 0x30)
struct UTracerManager : UWorldSubsystem {
	float StartScale; // 0x50(0x04)
	float WhizByStartDistance; // 0x54(0x04)
	float WhizByMaxDistanceFromTrajectory; // 0x58(0x04)
	float WhizBySpeed; // 0x5c(0x04)

	void AddTracer(FVector Origin, FVector Destination, float Speed, UParticleSystem* particle, float MinDistance, float Offset, UParticleSystem* Trail);
};

// Class FSD.TrackBuilderMovement
// Size: 0xb8 (Inherited: 0xb0)
struct UTrackBuilderMovement : UActorComponent {
	float MovementSpeed; // 0xb0(0x04)
};

// Class FSD.TrackMovementStateComponent
// Size: 0x250 (Inherited: 0x100)
struct UTrackMovementStateComponent : UCharacterStateComponent {
	UAudioComponent* AudioStartComponent; // 0x100(0x08)
	UAudioComponent* AudioDuringComponent; // 0x108(0x08)
	UAudioComponent* AudioStopComponent; // 0x110(0x08)
	USoundBase* AudioOnStart; // 0x118(0x08)
	USoundBase* AudioOnDuring; // 0x120(0x08)
	USoundBase* AudioOnStop; // 0x128(0x08)
	float AudioOnFadeOut; // 0x130(0x04)
	UDialogDataAsset* StateUpdateShout; // 0x138(0x08)
	float StateUpdateShoutFrequencySecsMin; // 0x140(0x04)
	float StateUpdateShoutFrequencySecsMax; // 0x144(0x04)
	float AudioDuringSlidingSpeedParam; // 0x148(0x04)
	float SpeedTarget; // 0x14c(0x04)
	float SpeedMin; // 0x150(0x04)
	float SpeedMax; // 0x154(0x04)
	float AccelerationBase; // 0x158(0x04)
	float AccelerationMultiplier; // 0x15c(0x04)
	float DecelerationMultiplier; // 0x160(0x04)
	float AccelerationOnSlopeMultiplier; // 0x164(0x04)
	float DecelerationOnSlopeMultiplier; // 0x168(0x04)
	float StoppingDeceleration; // 0x16c(0x04)
	float StoppingDistance; // 0x170(0x04)
	TSoftClassPtr<UObject> ConnectorClass; // 0x178(0x28)
	AZipLineConnector* Connector; // 0x1a0(0x08)
	enum class EExitTrackMode ExitMode; // 0x1a8(0x01)
	FPipelineMovementData TrackMovementData; // 0x1ac(0x1c)

	void ServerExitMode(enum class EExitTrackMode eMode);
	void ServerAddTemporaryAcceration(float Acceleration, float Duration);
	void OnRep_TrackMovementdata(FPipelineMovementData oldState);
	void JumpPressed();
};

// Class FSD.TrailComponent
// Size: 0x230 (Inherited: 0x1f0)
struct UTrailComponent : USceneComponent {
	float MinRadius; // 0x1f0(0x04)
	float MinStep; // 0x1f4(0x04)
	float MaxStep; // 0x1f8(0x04)
	bool MinimizePath; // 0x1fc(0x01)
	TArray<FVector> Trail; // 0x200(0x10)
	enum class ETraceTypeQuery Query; // 0x210(0x01)
	bool bDrawPath; // 0x211(0x01)
	float MaxDrawDistance; // 0x214(0x04)
	float PathLineWidth; // 0x218(0x04)
	float PathNodeSize; // 0x21c(0x04)
	FColor DrawColor; // 0x220(0x04)

	int32_t TrailLength();
	void ToggleDrawPath(bool Visible);
	void Reset();
	FVector GetTrailPoint(int32_t Index);
	FVector GetNextTrailPointFrom(FVector From);
	int32_t GetNearestTrailIndex(FVector Location);
	UTrailComponent* GetNearestPlayerTrail(UWorld* World, FVector From, float MinDist, float MaxDist);
	FColor GetDrawColor();
};

// Class FSD.TreasureBox
// Size: 0x2f0 (Inherited: 0x288)
struct ATreasureBox : ATreasureContainer {
	URepairableComponent* repairable; // 0x288(0x08)
	URepairableUsable* RepairUsable; // 0x290(0x08)
	USingleUsableComponent* HammeringUsable; // 0x298(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x2a0(0x08)
	UStaticMeshComponent* MiddlePlane; // 0x2a8(0x08)
	USkeletalMeshComponent* BoxMesh; // 0x2b0(0x08)
	float CollectActivationDelay; // 0x2b8(0x04)
	UAnimSequenceBase* OpenBoxAnim; // 0x2c0(0x08)
	float DelayToOpenAfterRepair; // 0x2c8(0x04)
	AActor* ResourceClass; // 0x2d0(0x08)
	UTreasureRewarder* boxRewarder; // 0x2d8(0x08)
	float HologramRotationSpeed; // 0x2e0(0x04)
	int32_t ItemsInserted; // 0x2e8(0x04)
	bool IsTreasureAvailable; // 0x2ed(0x01)

	void PlaceResources(AProceduralSetup* setup, float Radius, UDebrisPositioning* DebrisPositioning, TArray<FVector> locationsToAvoid, UCurveFloat* AvoidCostCurve);
	void OnUsedEvent(APlayerCharacter* User, enum class EInputKeys Key);
	void OnRepairedEvent(URepairableComponent* repaired);
	void OnHammerProgress(float Progress);
	void OnHammered(APlayerCharacter* User, enum class EInputKeys Key);
	void OnFullyRepairedEvent(URepairableComponent* repaired);
	void OnAllResourcesCollectedEvent(URepairableComponent* repaired);
	void BP_OnCollectedTreasure(APlayerCharacter* collector);
	void AfterRepairDelay();
	void ActivateCollection();
};

// Class FSD.TreasureBoxAnimInstance
// Size: 0x280 (Inherited: 0x270)
struct UTreasureBoxAnimInstance : UAnimInstance {
	float BuildProgress; // 0x268(0x04)
	float PhysicsAlpha; // 0x26c(0x04)
	bool IsTreasureAvailable; // 0x270(0x01)
	bool IsLeftInserted; // 0x271(0x01)
	bool IsRightInserted; // 0x272(0x01)
};

// Class FSD.TreasureFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTreasureFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsBoxInWall(UObject* WorldContextObject, AProceduralSetup* setup, float SizeX, float SizeY, float sizeZ, FTransform transorm);
	bool GiveSimilarSkin(UObject* WorldContextObject, UItemSkin* targetSkin, UItemID* targetItem, UItemSkin* outGivenSkin, UItemID* outSkinnedItem);
	void GiveRandomSkin(UObject* WorldContextObject, UItemSkin* outGivenSkin, UItemID* outSkinnedItem);
};

// Class FSD.TreasureRewarder
// Size: 0xb0 (Inherited: 0xb0)
struct UTreasureRewarder : UActorComponent {
};

// Class FSD.SkinTreasureRewarder
// Size: 0xc0 (Inherited: 0xb0)
struct USkinTreasureRewarder : UTreasureRewarder {
	UItemSkin* GivenSkin; // 0xb0(0x08)
	UItemID* GivenSkinID; // 0xb8(0x08)
};

// Class FSD.DrinkTreasureRewarder
// Size: 0xb8 (Inherited: 0xb0)
struct UDrinkTreasureRewarder : UTreasureRewarder {
	UDrinkableDataAsset* GivenDrink; // 0xb0(0x08)
};

// Class FSD.VictoryPoseRewarder
// Size: 0xc0 (Inherited: 0xb0)
struct UVictoryPoseRewarder : UTreasureRewarder {
	UVictoryPose* GivenPose; // 0xb0(0x08)
	UPlayerCharacterID* GivenCharacterID; // 0xb8(0x08)
};

// Class FSD.PickaxePartRewarder
// Size: 0xb8 (Inherited: 0xb0)
struct UPickaxePartRewarder : UTreasureRewarder {
	UPickaxePart* PickaxePart; // 0xb0(0x08)
};

// Class FSD.VanityItemRewarder
// Size: 0xc0 (Inherited: 0xb0)
struct UVanityItemRewarder : UTreasureRewarder {
	UVanityItem* GivenVanityItem; // 0xb0(0x08)
	UPlayerCharacterID* GivenCharacterID; // 0xb8(0x08)
};

// Class FSD.TreasureSettings
// Size: 0x158 (Inherited: 0x30)
struct UTreasureSettings : UDataAsset {
	TArray<UItemSkinSet*> SkinSets; // 0x30(0x10)
	TArray<UDrinkableDataAsset*> Drinks; // 0x40(0x10)
	TArray<UVictoryPose*> VictoryPoses; // 0x50(0x10)
	TArray<enum class ETreasureType> CrateTreasureTypes; // 0x60(0x10)
	FText CrateTreasureEmptyMsg; // 0x70(0x18)
	TArray<enum class ETreasureType> LostPackTreasureTypes; // 0x88(0x10)
	FText LostPackEmptyMsg; // 0x98(0x18)
	UItemAquisitionSource* CrateAquisitionSource; // 0xb0(0x08)
	UItemAquisitionSource* LostPackAquisitionSource; // 0xb8(0x08)
	FRuntimeFloatCurve TreasureChanceMissionLengthCurve; // 0xc0(0x88)
	TArray<USpecialEvent*> TreasureEvents; // 0x148(0x10)
};

// Class FSD.TreeOfVanity
// Size: 0x68 (Inherited: 0x58)
struct UTreeOfVanity : USavableDataAsset {
	TArray<FVanityNode> Nodes; // 0x58(0x10)

	void ClearNodes();
	void AddNode(UReward* Reward, int32_t NodeID, TArray<int32_t> ConnectedNodes, bool isStartingNode, bool isBig, FVector2D Position);
};

// Class FSD.TreeOfVanityItemWidget
// Size: 0x278 (Inherited: 0x230)
struct UTreeOfVanityItemWidget : UUserWidget {
	UReward* Reward; // 0x230(0x08)
	bool bIsPrimaryReward; // 0x238(0x01)
	bool bIsStartingNode; // 0x239(0x01)
	TArray<UTreeOfVanityItemWidget*> ConnectedNodes; // 0x240(0x10)
	int32_t NodeID; // 0x250(0x04)
	bool bIsClickable; // 0x254(0x01)
	UReward* DefaultReward; // 0x258(0x08)
	TArray<UUserWidget*> NodeConnections; // 0x260(0x10)
	bool bIsBought; // 0x270(0x01)

	void SetIsBought(bool inIsBought);
	void SetData(UReward* InReward, bool inIsPrimaryReward, bool inIsStartingNode, TArray<UTreeOfVanityItemWidget*> inConnectedNodes, int32_t inNodeID);
	void OnDataUpdated();
	bool GetIsBought();
};

// Class FSD.TremorAttackComponent
// Size: 0x178 (Inherited: 0x128)
struct UTremorAttackComponent : USpecialDamageAttackComponent {
	bool IsAttackActive; // 0x140(0x01)
	UBoxComponent* CollisionComponent; // 0x148(0x08)
	UParticleSystemComponent* ParticlesComponent; // 0x150(0x08)
	float InitialParticlesDelay; // 0x158(0x04)
	float PostParticleDelay; // 0x15c(0x04)
	float TargetMaxDistanceFromGround; // 0x160(0x04)
	float TimeBetweenDamageTicks; // 0x164(0x04)
	float LaunchForce; // 0x168(0x04)
	float Duration; // 0x16c(0x04)

	void StopParticles();
	void StartParticles();
	void OnTargetExitedTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void OnTargetEnteredTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void OnRep_IsAttackActive();
	bool IsInited();
	void InitTremorAttack(UBoxComponent* Box, UParticleSystemComponent* Particles);
};

// Class FSD.TunnelParameters
// Size: 0x50 (Inherited: 0x30)
struct UTunnelParameters : UDataAsset {
	UFloodFillSettings* PathfinderNoise; // 0x30(0x08)
	float PathZPenalty; // 0x38(0x04)
	float PathDirectionPenalty; // 0x3c(0x04)
	float PathEntranceAnglePenalty; // 0x40(0x04)
	float ObstacleCostScale; // 0x44(0x04)
	bool AllowBlockedEntrances; // 0x48(0x01)
	bool PickBestMatchingEntrance; // 0x49(0x01)
};

// Class FSD.TunnelSegmentSetting
// Size: 0x90 (Inherited: 0x30)
struct UTunnelSegmentSetting : UDataAsset {
	UTerrainMaterial* Material; // 0x30(0x08)
	UFloodFillSettings* PathfinderNoise; // 0x38(0x08)
	UFloodFillSettings* CielingNoise; // 0x40(0x08)
	UFloodFillSettings* WallNoise; // 0x48(0x08)
	UFloodFillSettings* FloorNoise; // 0x50(0x08)
	FVector2D VRange; // 0x58(0x08)
	FVector2D HRange; // 0x60(0x08)
	FVector2D Cielingheight; // 0x68(0x08)
	FVector2D FloorHeight; // 0x70(0x08)
	FVector2D CielingNoiseRange; // 0x78(0x08)
	FVector2D WallNoiseRange; // 0x80(0x08)
	FVector2D FloorNoiseRange; // 0x88(0x08)
};

// Class FSD.TunnelSettings
// Size: 0x90 (Inherited: 0x30)
struct UTunnelSettings : UDataAsset {
	UTerrainMaterial* Material; // 0x30(0x08)
	UFloodFillSettings* PathfinderNoise; // 0x38(0x08)
	UFloodFillSettings* CielingNoise; // 0x40(0x08)
	UFloodFillSettings* WallNoise; // 0x48(0x08)
	UFloodFillSettings* FloorNoise; // 0x50(0x08)
	FVector2D VRange; // 0x58(0x08)
	FVector2D HRange; // 0x60(0x08)
	FVector2D Cielingheight; // 0x68(0x08)
	FVector2D FloorHeight; // 0x70(0x08)
	FVector2D CielingNoiseRange; // 0x78(0x08)
	FVector2D WallNoiseRange; // 0x80(0x08)
	FVector2D FloorNoiseRange; // 0x88(0x08)
};

// Class FSD.TunnelSetting
// Size: 0x70 (Inherited: 0x30)
struct UTunnelSetting : UDataAsset {
	UFloodFillSettings* PathfinderNoise; // 0x30(0x08)
	UTunnelSegmentSetting* BaseSegmentSetting; // 0x38(0x08)
	UTunnelSegmentSetting* TightBendSegmentSetting; // 0x40(0x08)
	UTunnelSegmentSetting* DirtSegmentSetting; // 0x48(0x08)
	UTunnelSegmentSetting* DirtOffsetSetting; // 0x50(0x08)
	TArray<FTunnelSettingItem> VariationSegments; // 0x58(0x10)
	float Weight; // 0x68(0x04)
};

// Class FSD.TutorialContentWidget
// Size: 0x260 (Inherited: 0x250)
struct UTutorialContentWidget : UFSDUserWidget {
	FMulticastInlineDelegate OnTutorialFinished; // 0x250(0x10)

	void OnTutorialFinished__DelegateSignature(UTutorialContentWidget* TutorialWidget);
	void OnShown();
	void OnRemoveWidget();
};

// Class FSD.TutorialLevelWidget
// Size: 0x278 (Inherited: 0x250)
struct UTutorialLevelWidget : UFSDUserWidget {
	float DelayBetweenTutorials; // 0x258(0x04)

	void ShowTutorialWidget(UTutorialContentWidget* TutorialWidget, bool ignoreQueue);
	void RemoveTutorialWidget(UTutorialContentWidget* TutorialWidget);
	void RemoveAllTutorials();
	void OnTutorialFinished(UTutorialContentWidget* TutorialWidget);
	void OnNewActiveTutorial(UTutorialContentWidget* Widget);
};

// Class FSD.TutorialManager
// Size: 0x260 (Inherited: 0x220)
struct ATutorialManager : AActor {
	float MinimumTimeBetweenTutorials; // 0x220(0x04)
	bool ResetTutorialsOnStart; // 0x224(0x01)
	bool ShowTutorialsDebug; // 0x225(0x01)
	TWeakObjectPtr<AFSDPlayerController> PlayerController; // 0x228(0x08)
	TWeakObjectPtr<APlayerCharacter> PlayerCharacter; // 0x230(0x08)
	TWeakObjectPtr<UFSDSaveGame> SaveGame; // 0x238(0x08)
	TArray<TWeakObjectPtr<UTutorialComponent>> Tutorials; // 0x240(0x10)
	TWeakObjectPtr<UTutorialComponent> ActiveTutorial; // 0x250(0x08)
};

// Class FSD.TutorialWidget
// Size: 0x258 (Inherited: 0x250)
struct UTutorialWidget : UFSDUserWidget {
	float RemainingVisibleTime; // 0x250(0x04)

	void Show(FText Text, FText Title, FText TaskText, UTexture2D* Image, float Duration);
	void OnShow(FText Text, FText Title, FText TaskText, UTexture2D* Image);
	void OnHide(bool watched);
	void Hide(bool watched);
	void ChangeHintDuration(float NewDuration);
};

// Class FSD.BTTask_TunnelToTarget
// Size: 0xa8 (Inherited: 0x70)
struct UBTTask_TunnelToTarget : UBTTaskNode {
	FBlackboardKeySelector TargetKey; // 0x70(0x28)
	float BurrowSpeed; // 0x98(0x04)
	float BurrowDuration; // 0x9c(0x04)
	FFloatInterval DurationClamp; // 0xa0(0x08)
};

// Class FSD.HeightenedSenseComponent
// Size: 0xe8 (Inherited: 0xc0)
struct UHeightenedSenseComponent : UFloatPerkComponent {
	UPawnAffliction* HeightenSenseAffliction; // 0xc0(0x08)
	float AlertDistance; // 0xc8(0x04)
	TArray<FHeightenedSenseTracker> ActiveTrackers; // 0xd0(0x10)
	bool bAfflictionActivated; // 0xe0(0x01)

	void RemoveTracker(AActor* TrackerActor);
	void AddTracker(AActor* TrackerActor);
};

// Class FSD.UIFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UUIFunctionLibrary : UBlueprintFunctionLibrary {

	void SetLoadoutIcon(UObject* WorldContextObject, UPlayerCharacterID* characterID, int32_t loadoutIndex, int32_t IconIndex);
	void RemoveItemUINotification(UObject* WorldContextObject, TArray<UObject*> Item, bool MatchChildNotifications);
	bool IsInItemUINotificationSet(UObject* WorldContextObject, UObject* Item);
	int64_t GetUnixTimeStamp();
	int32_t GetLoadoutIcon(UObject* WorldContextObject, UPlayerCharacterID* characterID, int32_t loadoutIndex);
	TArray<FText> FormatNewsTexts(TArray<FText> texts, int32_t RandomSeed, UNewsTextLists* wordList, UMissionNameBank* MissionNameBank);
	void ClearAllItemUINotifications(UObject* WorldContextObject);
	void CheckItemUINotification(UObject* WorldContextObject, TArray<UObject*> Item, bool HasNotification, bool MatchChildNotifications);
	void AddItemUINotification(UObject* WorldContextObject, TArray<UObject*> Item);
};

// Class FSD.UpgradableGearComponent
// Size: 0x200 (Inherited: 0xb0)
struct UUpgradableGearComponent : UActorComponent {
	UItemData* ItemData; // 0xb0(0x08)
	TArray<FUpgradeTier> UpgradeTiers; // 0xb8(0x10)
	UOverclockBank* OverclockBank; // 0xc8(0x08)
	TArray<UItemUpgrade*> AllOverclocks; // 0xd0(0x10)
	UTexture2D* IconLine; // 0xe0(0x08)
	UTexture2D* IconBG; // 0xe8(0x08)
	UTexture2D* IconDetailed; // 0xf0(0x08)
	TSoftObjectPtr<UTexture2D> PreviewImage; // 0xf8(0x28)
	TSoftClassPtr<UObject> PreviewActor; // 0x120(0x28)
	FText Name; // 0x148(0x18)
	FText Category; // 0x160(0x18)
	FText Description; // 0x178(0x18)
	int32_t CreditCost; // 0x190(0x04)
	TMap<UResourceData*, float> ResourceCost; // 0x198(0x50)
	int32_t RequiredCharacterLevel; // 0x1e8(0x04)
	TArray<FMasteryItem> masteryLevels; // 0x1f0(0x10)

	void SetGearStatText(FGearStatEntry Entry, FText Text);
	bool PurchaseItem(UObject* WorldContextObject, UItemID* ItemID);
	bool PlayerOwnesUpgradeInAllTiers(AActor* itemClass, UObject* WorldContextObject);
	void MirrorUpgradePreviewStatus(FGearStatEntry From, FGearStatEntry to);
	bool IsUpgradeEquipped(AActor* itemClass, UItemUpgrade* Upgrade, AFSDPlayerState* Player);
	bool IsTierUnLocked(AActor* itemClass, int32_t tierIndex, AFSDPlayerState* Player, UPlayerCharacterID* characterID);
	bool IsOverclockingEnabled(UObject* WorldContextObject, AFSDPlayerState* Player, UPlayerCharacterID* characterID, AActor* itemClass);
	bool IsItemUnlocked(UObject* WorldContextObject, UItemID* Item);
	bool IsItemOwned(UObject* WorldContextObject, UItemID* Item);
	bool IsItemEquipped(UObject* WorldContextObject, UItemID* ItemID);
	int32_t GetUpgradeTier(AActor* itemClass, UItemUpgrade* ItemUpgrade);
	FString GetSourceGearName();
	TMap<UResourceData*, float> GetResourceCost();
	int32_t GetRequiredCharacterLevel();
	UTexture2D* GetPreviewImage();
	AActor* GetPreviewActorClass();
	TArray<UItemUpgrade*> GetOverClocks();
	int32_t GetMasteryProgress(UObject* WorldContextObject, UItemID* ItemID, int32_t maxMastery);
	TArray<FMasteryItem> GetMasteryLevels(UItemID* ItemID);
	bool GetMasteryForLevel(TArray<FMasteryItem> masteryLevels, int32_t Level, FMasteryItem outLevel);
	TArray<FUpgradeTier> GetItemUpgradeTiers(AActor* itemClass);
	enum class EItemUpgradeStatus GetItemUpgradeStatus(UObject* WorldContextObject, AActor* itemClass, UItemUpgrade* ItemUpgrade, UPlayerCharacterID* characterID);
	TArray<UItemUpgrade*> GetItemUpgrades(AActor* itemClass, UItemUpgrade* upgradeClass, AFSDPlayerState* Player, char upgradeIndex);
	AActor* GetItemPreviewClassFromActor(AActor* Actor);
	AActor* GetItemPreviewClass(UItemID* ItemID);
	bool GetItemMasteryForLevel(UItemID* ItemID, int32_t Level, FMasteryItem outLevel);
	UTexture2D* GetIconLine();
	UTexture2D* GetIconDetailed();
	UTexture2D* GetIconBG();
	FText GetGearStatValue(FGearStatEntry Entry);
	TArray<FGearStatEntry> GetGearStats(AFSDPlayerState* PlayerState, AActor* ActorClass);
	FString GetGearSourceName(UItemID* ItemID);
	FText GetGearName();
	FText GetGearDescription();
	FText GetGearCategory();
	TArray<UItemUpgrade*> GetEquippedUpgrades(AActor* itemClass, AFSDPlayerState* Player);
	UItemUpgrade* GetEquippedUpgradeAtTier(AActor* itemClass, int32_t tierIndex, UPlayerCharacterID* characterID, AFSDPlayerState* Player);
	UItemUpgrade* GetEquippedOverclock(UObject* WorldContextObject, AActor* itemClass);
	TArray<UItemUpgrade*> GetEquippableOverclocks(UObject* WorldContextObject, AActor* itemClass, UPlayerCharacterID* characterID);
	int32_t GetCreditCost();
	TArray<FCraftingCost> GetCraftingCost();
	int32_t GetCharacterLevelRequiredForItem(UItemID* ItemID);
	TArray<UItemUpgrade*> GetAllUpgrades();
	void ClearEquippedUpgrade(AActor* itemClass, int32_t tierIndex, AFSDPlayerState* Player);
	void CheckMasteryUnlocks(UItemID* ItemID, AFSDPlayerController* Player);
	bool CanItemOverclock(UObject* WorldContextObject, AActor* itemClass);
	bool CanAffordUpgrade(UObject* WorldContextObject, UItemUpgrade* Upgrade);
	bool CanAffordItem(UObject* WorldContextObject, UItemID* ItemID);
};

// Class FSD.UpgradableItemComponent
// Size: 0x200 (Inherited: 0x200)
struct UUpgradableItemComponent : UUpgradableGearComponent {
};

// Class FSD.UpgradableBoscoComponent
// Size: 0x200 (Inherited: 0x200)
struct UUpgradableBoscoComponent : UUpgradableGearComponent {
};

// Class FSD.UseAnimationSetting
// Size: 0x78 (Inherited: 0x30)
struct UUseAnimationSetting : UDataAsset {
	UAnimMontage* BeginFP; // 0x30(0x08)
	TArray<UAnimMontage*> LoopsFP; // 0x38(0x10)
	UAnimMontage* EndFP; // 0x48(0x08)
	UAnimMontage* BeginTP; // 0x50(0x08)
	TArray<UAnimMontage*> LoopsTP; // 0x58(0x10)
	UAnimMontage* EndTP; // 0x68(0x08)
	bool IsManuallyControlled; // 0x70(0x01)
};

// Class FSD.BPInstantUsable
// Size: 0x150 (Inherited: 0x150)
struct UBPInstantUsable : UInstantUsable {

	bool BPCanUse(APlayerCharacter* User, USceneComponent* UseCollider);
};

// Class FSD.ShieldBoostUsable
// Size: 0x150 (Inherited: 0x150)
struct UShieldBoostUsable : UInstantUsable {

	void OnCharacterBoosted(APlayerCharacter* User, enum class EInputKeys Key);
};

// Class FSD.RepairableUsable
// Size: 0x150 (Inherited: 0x150)
struct URepairableUsable : UInstantUsable {
};

// Class FSD.SingleUsableComponent
// Size: 0x1f8 (Inherited: 0x118)
struct USingleUsableComponent : UUsableComponent {
	FMulticastInlineDelegate OnUsedBy; // 0x118(0x10)
	FMulticastInlineDelegate OnUseBegin; // 0x128(0x10)
	FMulticastInlineDelegate OnProgress; // 0x138(0x10)
	FMulticastInlineDelegate OnUsableChanged; // 0x148(0x10)
	FMulticastInlineDelegate OnUserCountChanged; // 0x158(0x10)
	FMulticastInlineDelegate OnFailed; // 0x168(0x10)
	USoundCue* AudioBeginUse; // 0x178(0x08)
	USoundCue* AudioFailedUse; // 0x180(0x08)
	USoundCue* AudioCompletedUse; // 0x188(0x08)
	UDialogDataAsset* BoscoLaserpointerShout; // 0x190(0x08)
	bool CoopUse; // 0x198(0x01)
	UPawnStat* UseSpeedStat; // 0x1a0(0x08)
	float CoopUseMultiplier; // 0x1a8(0x04)
	bool Usable; // 0x1ac(0x01)
	bool TurnOffAfterUse; // 0x1ad(0x01)
	bool MultipleUse; // 0x1ae(0x01)
	bool bShowUsingUI; // 0x1b0(0x01)
	TSoftObjectPtr<UTexture2D> UsableIcon; // 0x1b8(0x28)
	float useDuration; // 0x1e0(0x04)
	float Progress; // 0x1e4(0x04)
	float DesiredProgress; // 0x1e8(0x04)
	int32_t userCount; // 0x1ec(0x04)
	UAudioComponent* AudioBeginUseInstance; // 0x1f0(0x08)

	void Use(APlayerCharacter* User, enum class EInputKeys Key, float DeltaTime);
	void SetCanUse(bool CanUse);
	void OnRep_UserCount();
	void OnRep_Usable();
	void OnRep_DesiredProgress();
	void Cheat_Use(APlayerCharacter* User, enum class EInputKeys Key);
	void All_PlayFailedAudio();
};

// Class FSD.ContinuousUsableComponent
// Size: 0x138 (Inherited: 0x118)
struct UContinuousUsableComponent : UUsableComponent {
	FMulticastInlineDelegate UseTick; // 0x118(0x10)
	float TimeBetweenTicks; // 0x128(0x04)
	bool Usable; // 0x12c(0x01)

	void SetCanUse(bool CanUse);
};

// Class FSD.OncePerPlayerUsableComponent
// Size: 0x178 (Inherited: 0x150)
struct UOncePerPlayerUsableComponent : UInstantUsable {
	FMulticastInlineDelegate OnUsersChangedEvent; // 0x150(0x10)
	TArray<FUniqueNetIdRepl> Users; // 0x160(0x10)

	void OnUsersChanged(TArray<FUniqueNetIdRepl> userList);
	void OnRep_Users();
};

// Class FSD.EventRewarderUsableComponent
// Size: 0x218 (Inherited: 0x1f8)
struct UEventRewarderUsableComponent : USingleUsableComponent {
	FText RewardUseText; // 0x1f8(0x18)

	FText CreateUseText(int32_t blankSchematicCount);
};

// Class FSD.SpecialEventUsableComponent
// Size: 0x1f8 (Inherited: 0x1f8)
struct USpecialEventUsableComponent : USingleUsableComponent {
};

// Class FSD.ControlEnemyUsable
// Size: 0x160 (Inherited: 0x150)
struct UControlEnemyUsable : UInstantUsable {
};

// Class FSD.UsableAggregator
// Size: 0xf0 (Inherited: 0xc8)
struct UUsableAggregator : UItemAggregator {
	FMulticastInlineDelegate OnVisibilityChanged; // 0xc8(0x10)
	FText UsingText; // 0xd8(0x18)

	float GetProgress();
};

// Class FSD.UsingStateComponent
// Size: 0x100 (Inherited: 0x100)
struct UUsingStateComponent : UCharacterStateComponent {
};

// Class FSD.ValidationFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UValidationFunctionLibrary : UBlueprintFunctionLibrary {

	void SetSelectedAssets(TArray<FString> Paths);
};

// Class FSD.ValidatorStrategy
// Size: 0x40 (Inherited: 0x28)
struct UValidatorStrategy : UObject {
};

// Class FSD.SimpleNameStrategy
// Size: 0x70 (Inherited: 0x40)
struct USimpleNameStrategy : UValidatorStrategy {
};

// Class FSD.PrefixNameStrategy
// Size: 0x70 (Inherited: 0x70)
struct UPrefixNameStrategy : USimpleNameStrategy {
};

// Class FSD.PostfixNameStrategy
// Size: 0x70 (Inherited: 0x70)
struct UPostfixNameStrategy : USimpleNameStrategy {
};

// Class FSD.PreOrPostfixNameStrategy
// Size: 0x70 (Inherited: 0x70)
struct UPreOrPostfixNameStrategy : USimpleNameStrategy {
};

// Class FSD.ContainsNameStrategy
// Size: 0x70 (Inherited: 0x70)
struct UContainsNameStrategy : USimpleNameStrategy {
};

// Class FSD.NotContainsNameStrategy
// Size: 0x70 (Inherited: 0x70)
struct UNotContainsNameStrategy : USimpleNameStrategy {
};

// Class FSD.ValidDependenciesStrategy
// Size: 0x60 (Inherited: 0x40)
struct UValidDependenciesStrategy : UValidatorStrategy {
};

// Class FSD.VanityAnimInstance
// Size: 0x2a0 (Inherited: 0x270)
struct UVanityAnimInstance : UAnimInstance {
	enum class EVanitySlot VanitySlot; // 0x268(0x01)
	bool ArmorCoversBeard; // 0x269(0x01)
	FVector ArmorChestThickness; // 0x26c(0x0c)
	FRotator ArmorChestRotation; // 0x278(0x0c)
	FVector ExternalForce; // 0x284(0x0c)
	float ExternalForceMultiplier; // 0x290(0x04)
	float MaxForce; // 0x294(0x04)
};

// Class FSD.VanityTestCharacter
// Size: 0x520 (Inherited: 0x4c0)
struct AVanityTestCharacter : ACharacter {
	float ArmorThickness; // 0x4b8(0x04)
	float BeardThickness; // 0x4bc(0x04)
	bool ArmorCoversBeard; // 0x4c0(0x01)
	TMap<enum class EVanitySlot, FVanityTestCharacterItem> vanityItems; // 0x4c8(0x50)
	USkeletalMesh* WeaponMesh; // 0x518(0x08)

	void SetupVanity();
};

// Class FSD.VanityCharacter
// Size: 0x2b8 (Inherited: 0x220)
struct AVanityCharacter : AActor {
	UChildActorComponent* ChildActorComponent; // 0x220(0x08)
	UAnimSequenceBase* Animation; // 0x228(0x08)
	USkinColorVanityItem* skinColor; // 0x230(0x08)
	UBeardColorVanityItem* BeardColor; // 0x238(0x08)
	UBeardColorVanityItem* DynamicBeardColor; // 0x240(0x08)
	UHeadVanityItem* Head; // 0x248(0x08)
	UEyeBrowsVanityItem* EyeBrows; // 0x250(0x08)
	USideburnsVanityItem* Sideburns; // 0x258(0x08)
	UMoustacheVanityItem* Moustache; // 0x260(0x08)
	UBeardVanityItem* Beard; // 0x268(0x08)
	UArmorVanityItem* Armor; // 0x270(0x08)
	UArmorMaterialVanityItem* ArmorColor; // 0x278(0x08)
	USkeletalMeshComponent* Mesh; // 0x280(0x08)
	USkeletalMeshComponent* BodyMesh; // 0x288(0x08)
	UBeardColorVanityItem* DefaultHairColor; // 0x290(0x08)
	UMaterialInterface* DefaultArmorMaterial; // 0x298(0x08)
	AItem* itemClass; // 0x2a0(0x08)
	UItemSkin* Framework; // 0x2a8(0x08)
	UItemSkin* Paintjob; // 0x2b0(0x08)

	void DisplayVanity();
	void Clean();
};

// Class FSD.IconGenerationBase
// Size: 0x240 (Inherited: 0x220)
struct AIconGenerationBase : AActor {
	USceneCaptureComponent2D* ActiveCaptureComponent; // 0x220(0x08)
	UMaterialInterface* DownScaleMaterial; // 0x228(0x08)
};

// Class FSD.IconGenerationCameraKey
// Size: 0x30 (Inherited: 0x30)
struct UIconGenerationCameraKey : UDataAsset {
};

// Class FSD.IconSceneCaptureComponent
// Size: 0x880 (Inherited: 0x880)
struct UIconSceneCaptureComponent : USceneCaptureComponent2D {
	UIconGenerationCameraKey* CameraKey; // 0x878(0x08)
};

// Class FSD.IconGenerationCharacter
// Size: 0x270 (Inherited: 0x240)
struct AIconGenerationCharacter : AIconGenerationBase {
	USkeletalMeshComponent* Mesh; // 0x240(0x08)
	USkeletalMeshComponent* BodyMesh; // 0x248(0x08)
	UBeardColorVanityItem* HairColor; // 0x250(0x08)
	UMaterialInterface* ArmorMaterial; // 0x258(0x08)
	TArray<UIconSceneCaptureComponent*> CaptureComponents; // 0x260(0x10)
};

// Class FSD.PickaxeIconSceneCaptureComponent
// Size: 0x880 (Inherited: 0x880)
struct UPickaxeIconSceneCaptureComponent : USceneCaptureComponent2D {
	bool bIsFullView; // 0x878(0x01)
	enum class EPickaxePartLocation CameraKey; // 0x879(0x01)
};

// Class FSD.IconGenerationPickaxe
// Size: 0x250 (Inherited: 0x240)
struct AIconGenerationPickaxe : AIconGenerationBase {
	TArray<UPickaxeIconSceneCaptureComponent*> CaptureComponents; // 0x240(0x10)
};

// Class FSD.WeaponIconSceneCaptureComponent
// Size: 0x880 (Inherited: 0x880)
struct UWeaponIconSceneCaptureComponent : USceneCaptureComponent2D {
	UIconGenerationCameraKey* CameraKey; // 0x878(0x08)
};

// Class FSD.IconGenerationWeapon
// Size: 0x250 (Inherited: 0x240)
struct AIconGenerationWeapon : AIconGenerationBase {
	TArray<UWeaponIconSceneCaptureComponent*> CaptureComponents; // 0x240(0x10)
};

// Class FSD.VanityItem
// Size: 0x1a0 (Inherited: 0x60)
struct UVanityItem : USavablePrimaryDataAsset {
	FMulticastInlineDelegate OnUnlockFlagChanged; // 0x70(0x10)
	int32_t SortingPriority; // 0x80(0x04)
	FText ItemName; // 0x88(0x18)
	FText ItemDescription; // 0xa0(0x18)
	FString NotesInternal; // 0xb8(0x10)
	UTexture2D* Icon; // 0xc8(0x08)
	bool IsPartOfRandomization; // 0xd0(0x01)
	UIconGenerationCameraKey* IconGenerationCameraKey; // 0xd8(0x08)
	UDLCBase* RequiredDLC; // 0xe0(0x08)
	UDLCBase* CraftingRestrictionDLC; // 0xe8(0x08)
	bool bUnLockedFlag; // 0xf0(0x01)
	int32_t CraftingPlayerRankRequired; // 0xf4(0x04)
	TMap<UResourceData*, float> CraftingCost; // 0xf8(0x50)
	int32_t CraftingCreditsCost; // 0x148(0x04)
	TSet<UPlayerCharacterID*> RestrictToCharacters; // 0x150(0x50)

	bool RemoveFromOwned(UObject* WorldContext);
	void PreviewItem(AFSDPlayerState* PlayerState, bool Show);
	void MarkAsUnLocked();
	bool IsOwned(UObject* WorldContextObject, UPlayerCharacterID* characterID);
	bool IsEquipped(UObject* WorldContextObject, UPlayerCharacterID* characterID);
	void GiftItem(UObject* WorldContextObject, UPlayerCharacterID* characterID);
	enum class EVanitySlot GetVanitySlot();
	TArray<FCraftingCost> GetResourceCost();
	int32_t GetRequiredPlayerRank();
	bool GetIsUnLockedFromStart();
	UTexture* GetIcon(UObject* WorldContextObject);
	int32_t GetCraftingCreditsCost();
	FText GetCraftableName();
	UTexture2D* GetCraftableIcon();
	FText GetCraftableDescription();
	void CraftItem(UObject* WorldContextObject, UPlayerCharacterID* characterID);
	void ClearUnLockedMark();
	bool CanCraft(UObject* WorldContextObject);
	void ApplyItemPermanently(UObject* WorldContextObject, UPlayerCharacterID* characterID);
	void ApplyItem(APlayerCharacter* Player, bool isPermanent);
};

// Class FSD.ItemMaterialVanityItem
// Size: 0x1a8 (Inherited: 0x1a0)
struct UItemMaterialVanityItem : UVanityItem {
	UMaterialInterface* Material; // 0x1a0(0x08)
};

// Class FSD.SkinColorVanityItem
// Size: 0x1a8 (Inherited: 0x1a8)
struct USkinColorVanityItem : UItemMaterialVanityItem {
};

// Class FSD.BeardColorVanityItem
// Size: 0x1c8 (Inherited: 0x1a0)
struct UBeardColorVanityItem : UVanityItem {
	UMaterialInterface* HairColor; // 0x1a0(0x08)
	UMaterialInterface* EyebrowColor; // 0x1a8(0x08)
	UMaterialInterface* MoustacheColor; // 0x1b0(0x08)
	UMaterialInterface* SideburnColor; // 0x1b8(0x08)
	UMaterialInterface* BeardColor; // 0x1c0(0x08)
};

// Class FSD.HeadVanityItem
// Size: 0x220 (Inherited: 0x1a0)
struct UHeadVanityItem : UVanityItem {
	TSoftObjectPtr<USkeletalMesh> Mesh; // 0x1a0(0x28)
	TSoftClassPtr<UObject> AnimInstance; // 0x1c8(0x28)
	enum class EHeadVanityType HeadVanityType; // 0x1f0(0x01)
	bool HideEyebrows; // 0x1f1(0x01)
	bool HideSideburns; // 0x1f2(0x01)
	bool HideMoustache; // 0x1f3(0x01)
	bool HideBeard; // 0x1f4(0x01)
	bool HideAll; // 0x1f5(0x01)
	bool HideHead; // 0x1f6(0x01)
	enum class ECharacterHeadMesh HeadMesh; // 0x1f7(0x01)
	TSoftObjectPtr<UMaterialInterface> MaterialOverride; // 0x1f8(0x28)
};

// Class FSD.BeardVanityItem
// Size: 0x1f8 (Inherited: 0x1a0)
struct UBeardVanityItem : UVanityItem {
	TSoftObjectPtr<USkeletalMesh> Mesh; // 0x1a0(0x28)
	float BeardThickness; // 0x1c8(0x04)
	bool RequiresSlimArmor; // 0x1cc(0x01)
	bool UseHairColor; // 0x1cd(0x01)
	bool UseArmorColor; // 0x1ce(0x01)
	TSoftClassPtr<UObject> AnimInstance; // 0x1d0(0x28)
};

// Class FSD.ArmorVanityItem
// Size: 0x290 (Inherited: 0x1a0)
struct UArmorVanityItem : UVanityItem {
	TSoftObjectPtr<USkeletalMesh> Mesh; // 0x1a0(0x28)
	TSoftObjectPtr<USkeletalMesh> BeardCompatibleMesh; // 0x1c8(0x28)
	TSoftObjectPtr<USkeletalMesh> FPMesh; // 0x1f0(0x28)
	TSoftClassPtr<UObject> AnimInstance; // 0x218(0x28)
	bool CropBeard; // 0x240(0x01)
	float ArmorThickness; // 0x244(0x04)
	TSoftObjectPtr<UMaterialInterface> MaterialOverride; // 0x248(0x28)
	bool CanOnlyUseDefaultArmorMaterial; // 0x270(0x01)
	UArmorMaterialVanityItem* DefaultArmorMaterial; // 0x278(0x08)
	TArray<FTattooArmorItem> Tattoos; // 0x280(0x10)

	void PreviewArmor(AFSDPlayerState* PlayerState, bool Show, bool useDefaultArmorMaterial);
};

// Class FSD.ArmorMaterialVanityItem
// Size: 0x208 (Inherited: 0x1a0)
struct UArmorMaterialVanityItem : UVanityItem {
	TSoftObjectPtr<UMaterialInterface> Material; // 0x1a0(0x28)
	TSoftObjectPtr<UMaterialInterface> IconMaterial; // 0x1c8(0x28)
	UArmorVanityItem* LockedToArmor; // 0x1f0(0x08)
	TArray<UArmorVanityItem*> BannedArmors; // 0x1f8(0x10)
};

// Class FSD.EyeBrowsVanityItem
// Size: 0x1f0 (Inherited: 0x1a0)
struct UEyeBrowsVanityItem : UVanityItem {
	TSoftObjectPtr<USkeletalMesh> Mesh; // 0x1a0(0x28)
	TSoftClassPtr<UObject> AnimInstance; // 0x1c8(0x28)
};

// Class FSD.MoustacheVanityItem
// Size: 0x1f8 (Inherited: 0x1a0)
struct UMoustacheVanityItem : UVanityItem {
	TSoftObjectPtr<USkeletalMesh> Mesh; // 0x1a0(0x28)
	TSoftClassPtr<UObject> AnimInstance; // 0x1c8(0x28)
	bool RequiresSlimArmor; // 0x1f0(0x01)
};

// Class FSD.SideburnsVanityItem
// Size: 0x1f8 (Inherited: 0x1a0)
struct USideburnsVanityItem : UVanityItem {
	TSoftObjectPtr<USkeletalMesh> Mesh; // 0x1a0(0x28)
	TSoftClassPtr<UObject> AnimInstance; // 0x1c8(0x28)
	bool RequiresSlimArmor; // 0x1f0(0x01)
};

// Class FSD.VanityTattoo
// Size: 0x70 (Inherited: 0x30)
struct UVanityTattoo : UDataAsset {
	TSoftObjectPtr<UTexture2D> Texture; // 0x30(0x28)
	FVector2D Location; // 0x58(0x08)
	float RotationAngle; // 0x60(0x04)
	float ScaleBase; // 0x64(0x04)
	float ScaleStretch; // 0x68(0x04)
};

// Class FSD.VanitySchematicBank
// Size: 0x90 (Inherited: 0x38)
struct UVanitySchematicBank : USchematicBankBase {
	USchematicCategory* SchematicCategory; // 0x38(0x08)
	TMap<UVanityItem*, FSchematicBankItem> vanityItems; // 0x40(0x50)

	void AppendItems(TArray<UVanityItem*> toArray);
};

// Class FSD.VeinResourceData
// Size: 0x108 (Inherited: 0xf0)
struct UVeinResourceData : UResourceData {
	UTerrainMaterial* TerrainMaterial; // 0xf0(0x08)
	float UnitsPerLenth; // 0xf8(0x04)
	bool ScaleToResourceDistribution; // 0xfc(0x01)
	UVeinResourceCreator* ResourceCreator; // 0x100(0x08)

	UTerrainMaterial* GetTerrainMaterial();
};

// Class FSD.VictoryPoseFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UVictoryPoseFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsRandomVictoryPose(UVictoryPose* VictoryPose);
	TArray<UVictoryPose*> GetOwnedVictoryPoses(UObject* WorldContextObject, UPlayerCharacterID* characterID);
	UVictoryPose* GetEquippedVictoryPose(UObject* WorldContextObject, UPlayerCharacterID* characterID);
};

// Class FSD.VictoryPose
// Size: 0x170 (Inherited: 0x60)
struct UVictoryPose : USavablePrimaryDataAsset {
	FText Title; // 0x60(0x18)
	FText Description; // 0x78(0x18)
	bool UnlockedFromStart; // 0x90(0x01)
	TArray<TSoftObjectPtr<UAnimSequence>> Walks; // 0x98(0x10)
	TSoftObjectPtr<UAnimSequence> pose; // 0xa8(0x28)
	TSoftClassPtr<UObject> Prop_Actor; // 0xd0(0x28)
	TSoftObjectPtr<UAnimSequence> Prop_Walk; // 0xf8(0x28)
	TSoftObjectPtr<UAnimSequence> Prop_Pose; // 0x120(0x28)
	TSoftObjectPtr<UAnimSequence> Prop_Idle; // 0x148(0x28)

	void Unlock(UObject* WorldContextObject, UPlayerCharacterID* characterID);
	void ResetUnlock(UObject* WorldContextObject, UPlayerCharacterID* characterID);
	bool IsUnlockedNotFromStart(UObject* WorldContextObject, UPlayerCharacterID* characterID);
	bool IsUnlocked(UObject* WorldContextObject, UPlayerCharacterID* characterID);
	void Equip(UObject* WorldContextObject, UPlayerCharacterID* characterID);
};

// Class FSD.VictoryPoseSchematicBank
// Size: 0x90 (Inherited: 0x38)
struct UVictoryPoseSchematicBank : USchematicBankBase {
	USchematicCategory* SchematicCategory; // 0x38(0x08)
	TMap<UVictoryPose*, FSchematicBankItem> VictoryPoses; // 0x40(0x50)
};

// Class FSD.VictoryPoseSettings
// Size: 0x70 (Inherited: 0x30)
struct UVictoryPoseSettings : UDataAsset {
	UTexture2D* GenericVictoryPoseIcon; // 0x30(0x08)
	TArray<UVictoryPose*> LoadedVictoryPoses; // 0x38(0x10)
	UVictoryPose* RandomVictoryPose; // 0x48(0x08)
	TArray<UActorComponent*> ModReferencesHack; // 0x50(0x10)
	TArray<AActor*> ModProxyHack; // 0x60(0x10)

	TArray<UVictoryPose*> GetVictoryPoses();
};

// Class FSD.WalkingStateComponent
// Size: 0x160 (Inherited: 0x100)
struct UWalkingStateComponent : UCharacterStateComponent {
	bool SlidingEnabled; // 0x100(0x01)
	bool ShowDebug; // 0x101(0x01)
	float SlideAngle; // 0x104(0x04)
	float SlideAcceleration; // 0x108(0x04)
	float MaxSlideSpeed; // 0x10c(0x04)
	float MaxClimbDistance; // 0x110(0x04)
	USoundBase* AudioSliding; // 0x118(0x08)
	USoundBase* IceSliding; // 0x120(0x08)
	UAudioComponent* AudioComponentSliding; // 0x128(0x08)
	UAudioComponent* AudioComponentIceSliding; // 0x130(0x08)

	void TrackGrindCallback(APlayerCharacter* User, enum class EInputKeys Key);
	void Server_StartTrackMovement(UTrackBuilderMovement* InMovement);
	void Server_SetIsSliding(bool isSliding);
	void JumpPress();
};

// Class FSD.WeakpointGlowComponent
// Size: 0x168 (Inherited: 0xb0)
struct UWeakpointGlowComponent : UActorComponent {
	FName EmissiveParam; // 0xb0(0x08)
	TArray<FWeakpointChannel> Channels; // 0xb8(0x10)
	FRuntimeFloatCurve WeakpointHitCurve; // 0xd0(0x88)
	UFSDPhysicalMaterial* WeakPointMaterial; // 0x158(0x08)
	bool AddFirstChannelAutomatically; // 0x160(0x01)
	int32_t ReplaceMatIndex; // 0x164(0x04)

	bool StopLoopingGlow(int32_t aGlowID, bool aFade);
	void ShowBodypartHit(float Amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, FName BoneName);
	void SetUpWeakPointGlowOnMeshByBone(UMeshComponent* Mesh, int32_t MaterialIndex, FName Bone, UHealthComponentBase* HealthComponent);
	int32_t SetUpWeakPointGlowOnMesh(UMeshComponent* Mesh, int32_t MaterialIndex, UFSDPhysicalMaterial* PhysicalMaterial, UHealthComponentBase* HealthComponent);
	void SetChannelEnabled(bool Enabled, int32_t Channel);
	void EnableWeakpointRegistration(bool Enabled);
	void All_ShowWeakPointHit(char Channel);
	void AddWeakpointGlow(bool loopIndefinitely, float loopTime, UCurveFloat* GrowCurve, UCurveFloat* FadeCurve, int32_t UniqueId, int32_t Channel);
};

// Class FSD.WeaponFireOwner
// Size: 0x28 (Inherited: 0x28)
struct UWeaponFireOwner : UInterface {

	APlayerCharacter* GetPlayerCharacter();
	FQuat GetMuzzleQuat();
	FVector GetMuzzleLocation();
	bool GetIsLocallyControlled();
	bool GetIsFirstPerson();
};

// Class FSD.AssaultRifle
// Size: 0x6f8 (Inherited: 0x6d8)
struct AAssaultRifle : AAmmoDrivenWeapon {
	float KillsResetAccuracyDuration; // 0x6d8(0x04)
	bool KillsTriggersStatusEffect; // 0x6dc(0x01)
	UStatusEffect* KillTriggeredStatusEffect; // 0x6f0(0x08)

	void OnTimerElapsed();
	void OnEnemyKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat);
	void Client_ResetAccuracy();
};

// Class FSD.FlareGun
// Size: 0x6d8 (Inherited: 0x6d8)
struct AFlareGun : AAmmoDrivenWeapon {
};

// Class FSD.SawedOffShotgun
// Size: 0x728 (Inherited: 0x6d8)
struct ASawedOffShotgun : AAmmoDrivenWeapon {
	UDamageComponent* DamageComponent; // 0x6d8(0x08)
	UDamageComponent* ShockWaveDamageComponent; // 0x6e0(0x08)
	float FearFactorOnFire; // 0x6e8(0x04)
	float FearFactorOnFireRadius; // 0x6ec(0x04)
	bool ShotgunJumpEnabled; // 0x6f0(0x01)
	float ShotgunJumpForce; // 0x6f4(0x04)
	bool ShockwaveEnabled; // 0x6f8(0x01)
	float ShockWaveDistance; // 0x6fc(0x04)
	float ShockWaveRadius; // 0x700(0x04)
	float ShockWaveLength; // 0x704(0x04)

	void SetShockWaveDamageComponent(UDamageComponent* Component);
};

// Class FSD.BurstWeapon
// Size: 0x710 (Inherited: 0x6d8)
struct ABurstWeapon : AAmmoDrivenWeapon {
	UDamageComponent* Damage; // 0x6d8(0x08)
	UDamageComponent* BurstFireBonusDamage; // 0x6e0(0x08)

	void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UFSDPhysicalMaterial* PhysicalMaterial);
	void OnReadyToFire();
};

// Class FSD.Revoler
// Size: 0x6f0 (Inherited: 0x6d8)
struct ARevoler : AAmmoDrivenWeapon {
	float OnKillFearFactor; // 0x6d8(0x04)
	float OnKillFearRange; // 0x6dc(0x04)

	void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat);
};

// Class FSD.BasicPistol
// Size: 0x6f0 (Inherited: 0x6d8)
struct ABasicPistol : AAmmoDrivenWeapon {
	float ConsecutiveHitsDamageBonus; // 0x6d8(0x04)
	float ConsecutiveHitsMaxBonus; // 0x6e8(0x04)

	void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UFSDPhysicalMaterial* PhysicalMaterial);
};

// Class FSD.ElectricalSMG
// Size: 0x718 (Inherited: 0x6d8)
struct AElectricalSMG : AAmmoDrivenWeapon {
	UStatusEffect* AoEStatusEffect; // 0x6d8(0x08)
	UParticleSystem* AoEParticle; // 0x6e0(0x08)
	USoundCue* AoESound; // 0x6e8(0x08)
	float AoEStatusEffectChance; // 0x6f0(0x04)
	float AoEStatusEffectRange; // 0x6f4(0x04)

	void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UFSDPhysicalMaterial* PhysicalMaterial);
	void OnStatusEffectPushed(UHealthComponentBase* Health);
	void All_OnAoETriggered(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal);
};

// Class FSD.AutoShotgun
// Size: 0x6e8 (Inherited: 0x6d8)
struct AAutoShotgun : AAmmoDrivenWeapon {
	UStatusEffect* CQCKillBuff; // 0x6e0(0x08)

	void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysicalMaterial);
	void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UFSDPhysicalMaterial* PhysicalMaterial);
};

// Class FSD.LineCutter
// Size: 0x700 (Inherited: 0x6d8)
struct ALineCutter : AAmmoDrivenWeapon {
	bool StopUsingReversesProjectile; // 0x6d8(0x01)
	bool RotateProjectileUntillStop; // 0x6d9(0x01)
	bool ExplodeLastProjectileOnNextFireAttempt; // 0x6da(0x01)
	TArray<UItemUpgrade*> upgrades; // 0x6e0(0x10)
	TWeakObjectPtr<ALineCutterProjectile> LastProjectile; // 0x6f0(0x08)
	float MinExplosiveGoodbyeActivationTimme; // 0x6f8(0x04)

	void Server_StopRotatingProjectile();
	void Server_ReverseLastProjectile();
	void Server_DestroyOldProjectile();
	void OnRep_LastProjectile();
	void OnProjectileLaunched(AProjectileBase* Projectile);
	void OnFireWhileLastProjectileAlive(ALineCutterProjectile* Projectile);
};

// Class FSD.Magazine
// Size: 0x238 (Inherited: 0x220)
struct AMagazine : AActor {
	USoundCue* ImpactGroundSound; // 0x228(0x08)

	void OnItemSkinned(USkinEffect* Skin);
	void ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult Hit);
};

// Class FSD.WeaponHitCountEffect
// Size: 0x30 (Inherited: 0x28)
struct UWeaponHitCountEffect : UObject {
	bool UsesDamageEffects; // 0x28(0x01)
};

// Class FSD.WeaponHitCounterComponent
// Size: 0xd0 (Inherited: 0xb0)
struct UWeaponHitCounterComponent : UActorComponent {
	UWeaponHitCountEffect* HitEffect; // 0xb0(0x08)
	bool RequiresWeakpointHit; // 0xb8(0x01)

	void Server_OnReloading();
	void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UFSDPhysicalMaterial* PhysicalMaterial);
	void OnStoppedUsing();
	void OnReloading();
	void All_ShowDamageEffects(TArray<TWeakObjectPtr<AActor>> Targets);
};

// Class FSD.DamageHitCountEffect
// Size: 0x60 (Inherited: 0x30)
struct UDamageHitCountEffect : UWeaponHitCountEffect {
	float DamagePerHit; // 0x30(0x04)
	UDamageClass* DamageClass; // 0x38(0x08)
	UParticleSystem* DamageParticle; // 0x40(0x08)
	USoundCue* DamageSound; // 0x48(0x08)
	bool DeadBugWalkingTargetMarking; // 0x50(0x01)
	UStatusEffect* DeadBugWalkingSTE; // 0x58(0x08)
};

// Class FSD.StatusHitCountEffect
// Size: 0x40 (Inherited: 0x30)
struct UStatusHitCountEffect : UWeaponHitCountEffect {
	UStatusEffect* StatusEffect; // 0x30(0x08)
	float ChancePerHit; // 0x38(0x04)
};

// Class FSD.RicochetHitCountEffect
// Size: 0x30 (Inherited: 0x30)
struct URicochetHitCountEffect : UWeaponHitCountEffect {
};

// Class FSD.ChargedHitCountEffect
// Size: 0x50 (Inherited: 0x30)
struct UChargedHitCountEffect : UWeaponHitCountEffect {
	float DamagePerHit; // 0x34(0x04)
	UDamageClass* DamageClass; // 0x38(0x08)
	UParticleSystem* DamageParticle; // 0x40(0x08)
	USoundCue* DamageSound; // 0x48(0x08)
};

// Class FSD.WeaponHitEffectComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UWeaponHitEffectComponent : UActorComponent {
	float EffectChance; // 0xb0(0x04)
	AActor* ActorToSpawn; // 0xb8(0x08)

	void Server_SpawnEffect(FVector_NetQuantize Location, FRotator Rotation);
	void OnHit(FHitResult HitResult, bool isAlwaysPenetrated);
};

// Class FSD.WeightRoomSelectorLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWeightRoomSelectorLibrary : UBlueprintFunctionLibrary {

	void SetupWeightedRoomSelector(FWeightedRoomSelector Target, TArray<URoomGenerator*> Rooms);
	URoomGenerator* SelectRandomRoom(FWeightedRoomSelector Target, FRandomStream RandomStream);
	URoomGenerator* GetRandomRoom(TArray<URoomGenerator*> Rooms, bool removeChosenRoom, FRandomStream RandomStream);
};

// Class FSD.WidgetToRenderTargetComponent
// Size: 0x190 (Inherited: 0xb0)
struct UWidgetToRenderTargetComponent : UActorComponent {
	UUserWidget* WidgetClass; // 0xb0(0x08)
	FIntPoint DrawSize; // 0xb8(0x08)
	bool bManuallyRedraw; // 0xc0(0x01)
	bool bRedrawRequested; // 0xc1(0x01)
	float RedrawTime; // 0xc4(0x04)
	float LastWidgetRenderTime; // 0xc8(0x04)
	bool bWindowFocusable; // 0xcc(0x01)
	FIntPoint CurrentDrawSize; // 0xd0(0x08)
	bool bDrawAtDesiredSize; // 0xd8(0x01)
	FVector2D Pivot; // 0xdc(0x08)
	UMaterialInterface* BaseMaterial; // 0xe8(0x08)
	ULocalPlayer* OwnerPlayer; // 0xf0(0x08)
	FLinearColor BackgroundColor; // 0xf8(0x10)
	FLinearColor TintColorAndOpacity; // 0x108(0x10)
	float OpacityFromTexture; // 0x118(0x04)
	bool bIsTwoSided; // 0x11c(0x01)
	bool TickWhenOffscreen; // 0x11d(0x01)
	UUserWidget* Widget; // 0x120(0x08)
	UTextureRenderTarget2D* RenderTarget; // 0x148(0x08)
	UMaterialInstanceDynamic* MaterialInstance; // 0x150(0x08)
	bool bEditTimeUsable; // 0x158(0x01)

	void SetWidget(UUserWidget* Widget);
	void SetOwnerPlayer(ULocalPlayer* LocalPlayer);
	void SetBackgroundColor(FLinearColor NewBackgroundColor);
	void RequestRedraw();
	UUserWidget* GetUserWidgetObject();
	UTextureRenderTarget2D* GetRenderTarget();
	ULocalPlayer* GetOwnerPlayer();
	UMaterialInstanceDynamic* GetMaterialInstance();
};

// Class FSD.WindowManager
// Size: 0x190 (Inherited: 0xb0)
struct UWindowManager : UActorComponent {
	FMulticastInlineDelegate OnFirstWindowOpened; // 0xb0(0x10)
	FMulticastInlineDelegate OnLastWindowClosed; // 0xc0(0x10)
	USoundCue* AudioWindowOpen; // 0xd0(0x08)
	TArray<UWindowWidget*> WindowStack; // 0xd8(0x10)
	TMap<UWindowWidget*, UWindowWidget*> WindowList; // 0xe8(0x50)
	TMap<UUserWidget*, TWeakObjectPtr<UUserWidget>> WidgetSingletonCache; // 0x138(0x50)
	bool ResolutionDownscaleActive; // 0x188(0x01)

	void SetSingletonWidgetVisibility(UUserWidget* WidgetClass, enum class ESlateVisibility Visibility);
	void ReplaceWindow(UWindowWidget* Window);
	UWindowWidget* OpenWindowFromClass(UWindowWidget* windowClass, int32_t ZOrder, bool ShowCursor);
	void OpenWindow(UWindowWidget* Window, bool PlayAudio, bool ShowCursor);
	UWindowWidget* OpenSingleUseWindow(UWindowWidget* windowClass, int32_t ZOrder);
	bool IsWindowOpen(UWindowWidget* Window);
	bool IsTopWindow(UWindowWidget* Window);
	UUserWidget* GetOrCreateSingletonWidget(UUserWidget* WidgetClass, bool WidgetCreated);
	UWindowWidget* GetCurrentWindow();
	void CloseWindow(UWindowWidget* Window);
	void CloseTopWindow();
	void CloseAllWindows();
	void CenterCursor();
	bool AnyWindowsOpen();
};

// Class FSD.WoodLouse
// Size: 0x588 (Inherited: 0x3a0)
struct AWoodLouse : AEnemyDeepPathfinderCharacter {
	USceneComponent* RollingCenter; // 0x3a0(0x08)
	UPawnSensingComponent* PawnSensing; // 0x3a8(0x08)
	enum class EWoodLouseState forceState; // 0x3b1(0x01)
	float RollingCenterOffsetOnStanding; // 0x3b4(0x04)
	float RollingCenterOffsetOnFold; // 0x3b8(0x04)
	float ChanceToWalk; // 0x3c0(0x04)
	bool DebugAngle; // 0x3c4(0x01)
	UFakeMoverSettings* FakeMoverSettings; // 0x3e8(0x08)
	AProjectile* BurstProjectileClass; // 0x3f0(0x08)
	float BurstTime; // 0x3f8(0x04)
	TArray<UStatusEffect*> StatusEffectsOnRoll; // 0x400(0x10)
	FBumpPlayerHit LastHit; // 0x410(0x18)
	float TiltModifier; // 0x428(0x04)
	float BurstXOffset; // 0x42c(0x04)
	float BurstYOffset; // 0x430(0x04)
	float BurstZOffset; // 0x434(0x04)
	float HighDifficultyCustomProjectileGravity; // 0x438(0x04)
	int32_t BurstCount; // 0x43c(0x04)
	bool InvounerableOnRoll; // 0x444(0x01)
	bool LockToRollMode; // 0x445(0x01)
	bool LockToWalkMode; // 0x446(0x01)
	float ForgetRange; // 0x448(0x04)
	float ForgetTime; // 0x44c(0x04)
	float RefreshTimeMax; // 0x454(0x04)
	float RefreshTimeMin; // 0x458(0x04)
	float BumpPower; // 0x45c(0x04)
	float DirectionalBumpPower; // 0x460(0x04)
	enum class EWoodLouseState CurrentState; // 0x464(0x01)
	AActor* CurrentTarget; // 0x488(0x08)
	float FoldedStateMaxTime; // 0x490(0x04)
	float FoldedStateMinTime; // 0x494(0x04)
	float UnfoldedStateMaxTime; // 0x498(0x04)
	float UnflodedStateMinTime; // 0x49c(0x04)
	USoundBase* BumpSound; // 0x4a8(0x08)
	float TimeBetweenBumpingSamePlayer; // 0x4b0(0x04)
	float MinBumpDamage; // 0x4b4(0x04)
	float MaxBumpDamage; // 0x4b8(0x04)
	float BumpDamage; // 0x4bc(0x04)
	UDamageClass* BumpDamageType; // 0x4c0(0x08)
	float MaxBumpPower; // 0x4c8(0x04)
	float BumpRange; // 0x4cc(0x04)
	float AcceptableAngles; // 0x4d4(0x04)
	float RollSpeedModifier; // 0x4d8(0x04)
	float RollAlpha; // 0x4dc(0x04)
	float TiltAlpha; // 0x4e0(0x04)
	USoundBase* RollingSound; // 0x4e8(0x08)
	FName RollingSpeedParamName; // 0x4f0(0x08)
	TWeakObjectPtr<UAudioComponent> RollingSoundComponent; // 0x4f8(0x08)
	UFakeMoverSettings* RollMoveSettings; // 0x500(0x08)
	UFakeMoverSettings* StopRollMoveSettings; // 0x508(0x08)
	FGameplayTagQuery TargetQuery; // 0x510(0x48)
	bool RotateTowardsTarget; // 0x570(0x01)
	float SeeTargetSafetyTime; // 0x574(0x04)
	bool WantsToStandUp; // 0x57c(0x01)
	bool IsShooting; // 0x57d(0x01)
	bool CanStandOnAnySurface; // 0x57e(0x01)

	void SwitchedState(enum class EWoodLouseState CurrentState);
	void StopSpecial();
	void StartSpecial();
	void SetWantsToStandUp(bool aWantsToStandUp);
	void SetState(enum class EWoodLouseState aState);
	void SetRotateToTarget(bool aRotateToTarget);
	void SeePawn(APawn* aSenPawn);
	void OnRep_State();
	void OnRep_LastHit();
	enum class EWoodLouseState GetRollerState();
	void BumpedTarget();
};

// Class FSD.WoodLouseAnimInstance
// Size: 0x430 (Inherited: 0x410)
struct UWoodLouseAnimInstance : USpiderAnimInstance {
	FVector2D AngleToTarget; // 0x40c(0x08)
	float InterpSpeed; // 0x414(0x04)
	float BreakRollingWhenTimeLeft; // 0x418(0x04)
	enum class EWoodLouseState RollerState; // 0x41c(0x01)
	bool IsWalking; // 0x41d(0x01)
	bool IsUpRight; // 0x41e(0x01)
	bool IsDoingSpecialAttack; // 0x41f(0x01)
	bool IsUnFolded; // 0x420(0x01)
	bool IsGroundValid; // 0x421(0x01)
	bool IsInRollState; // 0x422(0x01)
	bool IdleToDownTurnLeftLock; // 0x423(0x01)
	bool DownTurnLeftToIdleLock; // 0x424(0x01)
	bool DownWalkToDownTurnLeftLock; // 0x425(0x01)
	bool WoodlouseWalk; // 0x426(0x01)
	bool IdleToDownWalkLock; // 0x427(0x01)
	bool DownWalkToDownTurnRightLock; // 0x428(0x01)
	bool IdleToDownTurnRightLock; // 0x429(0x01)
};

// Class FSD.YesNoPromptWidget
// Size: 0x288 (Inherited: 0x270)
struct UYesNoPromptWidget : UWindowWidget {
	bool bDestroyOnClick; // 0x270(0x01)
	bool bCloseAllWindows; // 0x271(0x01)
	FDelegate OnClickedCallback; // 0x274(0x10)

	void Show(FText Title, FText Message, FDelegate OnYesNoClicked);
	void SetMappedResources(TMap<UResourceData*, int32_t> Resources);
	void OnYesNoClickedDelegate__DelegateSignature(bool Yes);
	void OnShow(FText Title, FText Message);
	void OnClicked(bool Yes);
	void Clicked(bool YesClicked);
};

// Class FSD.YesNoPromptAction
// Size: 0x68 (Inherited: 0x30)
struct UYesNoPromptAction : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate Yes; // 0x30(0x10)
	FMulticastInlineDelegate No; // 0x40(0x10)
	FDelegate YesNoDelegate; // 0x50(0x10)
	TWeakObjectPtr<UYesNoPromptWidget> ActivePrompt; // 0x60(0x08)

	void YesNoOutputPin__DelegateSignature();
	UYesNoPromptAction* PromptYesNo(UObject* WorldContext, FYesNoPromptSettings Prompt);
	UYesNoPromptAction* PromptPurchase(UObject* WorldContext, FYesNoPromptSettings Prompt, TMap<UResourceData*, int32_t> Resources);
	void PromptCallback(bool YesClicked);
};

// Class FSD.ZipLineProjectile
// Size: 0x278 (Inherited: 0x220)
struct AZipLineProjectile : AActor {
	UTimelineComponent* Timeline; // 0x220(0x08)
	float LightIntensity; // 0x228(0x04)
	float MaterialGlow; // 0x22c(0x04)
	FDelegate Callback; // 0x230(0x10)
	UCurveFloat* LightCurve; // 0x240(0x08)
	TArray<UPointLightComponent*> PointLights; // 0x248(0x10)
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x258(0x10)
	UStatusEffect* OnUseStatusEffect; // 0x268(0x08)
	UStatusEffect* OnReleaseStatusEffect; // 0x270(0x08)

	void OnTimelineTick(float NewValue);
	void OnShoot(FVector Origin, FVector EndLocation);
};

// Class FSD.ZiplineLauncherComponent
// Size: 0x120 (Inherited: 0x110)
struct UZiplineLauncherComponent : UWeaponFireComponent {
	enum class ECollisionChannel HitCollisionChannel; // 0x110(0x01)
	float ProjectileLocationOffset; // 0x114(0x04)
	AZipLineProjectile* projectileClass; // 0x118(0x08)

	void Server_Fire(FVector_NetQuantize Origin, FVector_NetQuantize Destination);
	void All_ShowHit();
};

// Class FSD.ZipLineItem
// Size: 0x730 (Inherited: 0x6d8)
struct AZipLineItem : AAmmoDrivenWeapon {
	float MaxDistance; // 0x6d8(0x04)
	float MinDistance; // 0x6dc(0x04)
	float MinAngle; // 0x6e0(0x04)
	float MaxAngle; // 0x6e4(0x04)
	FGameplayTagQuery ExcludeSurfaceTags; // 0x6e8(0x48)

	bool CanFireWeapon(FText FailMsg, UDialogDataAsset* FailShout);
};

// Class FSD.AngleIndicatorWidget
// Size: 0x260 (Inherited: 0x250)
struct UAngleIndicatorWidget : UFSDUserWidget {
	float pixelsPerAngle; // 0x250(0x04)
	float AlphaFade; // 0x254(0x04)
	float MinAngle; // 0x258(0x04)
	float MaxAngle; // 0x25c(0x04)
};

// Class FSD.ZipLineConnector
// Size: 0x250 (Inherited: 0x220)
struct AZipLineConnector : AActor {
	TWeakObjectPtr<APlayerCharacter> Character; // 0x220(0x08)
	FVector ZipLineLocation; // 0x228(0x0c)
	FVector ZipLineDirection; // 0x234(0x0c)
	FRotator RotationOffset; // 0x240(0x0c)
	bool bSpeeding; // 0x24c(0x01)

	void ReceiveUpdateZipLinePoint(FVector WorldLocation, FVector Directioy, bool Speeding);
	void ReceiveDisconnected();
	void ReceiveConnected(FVector WorldLocation, FVector Direction);
};

// Class FSD.ZipLineStateComponent
// Size: 0x230 (Inherited: 0x100)
struct UZipLineStateComponent : UCharacterStateComponent {
	FZipLineConnectorHandler ZipLineConnector; // 0x100(0x30)
	float VerticalOffset; // 0x130(0x04)
	float HorizontalOffset; // 0x134(0x04)
	float TravelSpeed; // 0x138(0x04)
	float AccelAndDecelAlpha; // 0x13c(0x04)
	float JumpForce; // 0x140(0x04)
	float SpeedBoostActivationDuration; // 0x144(0x04)
	float SpeedBoostActivionMinAngle; // 0x148(0x04)
	float BaseSpeedBoost; // 0x14c(0x04)
	float AdditionalSpeedBoostPerAngle; // 0x150(0x04)
	float SpeedBoostCoolDownDuration; // 0x154(0x04)
	float AccelerationAlpha; // 0x158(0x04)
	float DecelerationAlpha; // 0x15c(0x04)
	float MinStartDistanceToEnd; // 0x160(0x04)
	float ReleaseDistance; // 0x164(0x04)
	bool bCanActivateSpeedBoost; // 0x168(0x01)
	bool bShowSpeedBoostActivator; // 0x169(0x01)
	float SpeedBoostActivationProgress; // 0x16c(0x04)
	USoundBase* AudioOnStart; // 0x178(0x08)
	USoundBase* AudioOnDuring; // 0x180(0x08)
	USoundBase* AudioOnChangingDirection; // 0x188(0x08)
	USoundBase* AudioOnStop; // 0x190(0x08)
	USoundBase* AudioOnSpeedBoostActivated; // 0x198(0x08)
	UDialogDataAsset* ShoutStartUsing; // 0x1a0(0x08)
	UDialogDataAsset* ShoutSpeedBoostActivated; // 0x1a8(0x08)
	TWeakObjectPtr<AZipLineProjectile> ZipLineProjectile; // 0x1b0(0x08)
	FZipLine ZipLine; // 0x1b8(0x38)
	float DamageBeforeFalling; // 0x204(0x04)
	float friendlyFireModifier; // 0x208(0x04)
	float DamageResetTime; // 0x20c(0x04)
	UAudioComponent* AudioComponent; // 0x210(0x08)

	void ServerSetSpeedBoostActivated(bool InBoostActivated);
	void ServerJumpPressed(bool JumpForward);
	void ServerForwardInputChanged(float Input);
	void ServerChangeDirection();
	void ReceiveSpeedBoostDeactivated();
	void ReceiveSpeedBoostActivated();
	void OnRep_ZipLine();
	void OnPlayerHit(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	bool GetSpeedBoostActivated();
	FVector GetJumpVector(FVector LookVector, FVector CurrentVelocity);
	void All_SpeedBoostChanged(bool bActive);
};


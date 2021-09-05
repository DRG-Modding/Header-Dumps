// Class FSD.AcceptInviteBlueprintCallProxy
// Size: 0x88 (Inherited: 0x30)
struct UAcceptInviteBlueprintCallProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	UObject* WorldContextObject; // 0x50(0x08)

	UAcceptInviteBlueprintCallProxy* AcceptInvite(UObject* WorldContextObject, FString ListName, FString UserId);
};

// Class FSD.Objective
// Size: 0x150 (Inherited: 0xb0)
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
	int32_t IsPrimaryObjective; // 0x138(0x04)
	float MissionScale; // 0x13c(0x04)
	TArray<UBiome*> BannedInBiomes; // 0x140(0x10)

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
	FObjectiveMissionIcon GetObjectiveMissionIconFromClass(UObjective* objectiveClass);
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
// Size: 0x158 (Inherited: 0x150)
struct UActivationOjective : UObjective {
	int32_t ObjectivesFound; // 0x150(0x04)
	int32_t ObjectivesToFind; // 0x154(0x04)

	void OnRep_ObjectivesToFind(int32_t prevAmount);
	void OnRep_ObjectivesFound(int32_t prevAmount);
};

// Class FSD.ActivationObject
// Size: 0x230 (Inherited: 0x220)
struct AActivationObject : AActor {
	USingleUsableComponent* Usable; // 0x220(0x08)
	bool HasBeenUsed; // 0x228(0x01)

	void OnUsedBy(APlayerCharacter* User);
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
	int32_t GetPlayerCount(UObject* WorldContextObject);
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
	AActor* FindClosestEnemyFromLocation(FVector fromLocation, float Range, bool LineOfSightCheck, UObject* WorldContextObject, FVector Offset);
	AActor* FindClosestEnemyFromActor(AActor* FromActor, float Range, bool LineOfSightCheck, FGameplayTagQuery tagQuery, FVector Offset);
	void FadeMaterials(UObject* WorldContextObject, UMeshComponent* Mesh, float Duration);
	float EvaluateRuntimeCurve(UObject* WorldContextObject, FRuntimeFloatCurve Curve, float Time);
	void DamagePlayersInArea(FVector Origin, AActor* Instigator, float Damage, float Radius, UDamageClass* DamageClass);
	UHealthComponentBase* DamageIfInRange(float MaxDistance, float Damage, AActor* Target, AActor* Attacker, UDamageClass* DamageClass);
	void DamageAllInAreaExcept(FVector Origin, AActor* Instigator, float Damage, float BlastRadius, float MaxDamageRadius, float minDamagePercent, TArray<AActor*> IgnoreActors, float friendlyFireModifier, UDamageClass* DamageClass);
	void DamageAllInArea(FVector Origin, AActor* Instigator, float Damage, float BlastRadius, float MaxDamageRadius, float minDamagePercent, float friendlyFireModifier, UDamageClass* DamageClass);
	TArray<UMaterialInstanceDynamic*> CreateDynamicMaterialInstances(UMeshComponent* Mesh);
	float AddHeroXP(UObject* WorldContextObject, UPlayerCharacterID* characterID, float amount);
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

// Class FSD.GameModeFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGameModeFunctionLibrary : UBlueprintFunctionLibrary {

	FTransform FindRandomEscapePodLocation(UObject* WorldContextObject);
	FTransform FindEscapePodLocationAtDistance(UObject* WorldContextObject, float Distance, float aboveDistanceBias, AActor* optionalFrom);
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
// Size: 0x150 (Inherited: 0x150)
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
// Size: 0x2e8 (Inherited: 0x280)
struct AFSDPawn : APawn {
	FMulticastInlineDelegate OnFrozenEvent; // 0x290(0x10)
	UStatusEffectsComponent* StatusEffects; // 0x2a0(0x08)
	UEnemyTemperatureComponent* Temperature; // 0x2a8(0x08)
	FGameplayTagContainer GameplayTags; // 0x2b0(0x20)
	UEnemyDescriptor* SpawnedFromDescriptor; // 0x2d0(0x08)
	bool IsFrozen; // 0x2d8(0x01)
	bool CanFlee; // 0x2d9(0x01)
	bool FleeInsteadOfBackingOff; // 0x2da(0x01)
	bool IsFleeing; // 0x2db(0x01)
	UPawnStatsComponent* PawnStatsInstance; // 0x2e0(0x08)

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
	void OnEnemyScaled(float NewScale);
	void OnArmorPartsDestroyedFromRadialDamage(TArray<char> destroyedParts);
	void OnAlerted();
	void MakeRagdollMesh(USkeletalMeshComponent* Mesh);
	void MakeElite();
	bool GetIsAlerted();
	UHealthComponentBase* GetHealthComponent();
	AFSDAIController* GetFSDAIController();
	enum class EPawnAttitude GetAttitude();
	void Freeze(AActor* Source);
	void BackOffFromLocation(FVector fromLocation);
	void All_ArmorPartsDestroyed(TArray<char> parts);
};

// Class FSD.DeepPathfinderCharacter
// Size: 0x378 (Inherited: 0x2e8)
struct ADeepPathfinderCharacter : AFSDPawn {
	UDeepPathfinderMovement* PathfinderMovement; // 0x2f8(0x08)
	USkeletalMeshComponent* Mesh; // 0x300(0x08)
	FName CenterMassSocketName; // 0x308(0x08)
	UDeepPatherFinderCharacterAfflictionComponent* affliction; // 0x310(0x08)
	float AnimationOffset; // 0x318(0x04)
	bool CanPlayerStandOn; // 0x31c(0x01)
	bool UseDormancy; // 0x31d(0x01)
	float StaggerDurationMultiplier; // 0x320(0x04)
	float StaggerImunityWindow; // 0x324(0x04)
	bool StaggerPauseLogic; // 0x328(0x01)
	bool IsHidden; // 0x329(0x01)
	bool IsStaggered; // 0x32a(0x01)
	bool FrozenPauseLogic; // 0x32b(0x01)
	float AttackerRadius; // 0x348(0x04)
	TArray<UMaterialInterface*> CachedMaterials; // 0x350(0x10)
	float AllowedInFormationChance; // 0x360(0x04)

	bool TryJoinFormation();
	void SetHidden(bool shouldHide);
	void OnPausedMovementElapsed();
	void OnControlledByPlayer(bool IsControlled, bool IsLocallyControlled);
	void LeaveFormation();
};

// Class FSD.FlyingDeepPathfinderCharacter
// Size: 0x3a8 (Inherited: 0x378)
struct AFlyingDeepPathfinderCharacter : ADeepPathfinderCharacter {
	UPhysicalMaterial* FrozenMaterial; // 0x388(0x08)
	UPhysicsAsset* FrozenAsset; // 0x390(0x08)
	USoundCue* FrozenDeathSound; // 0x398(0x08)
	UParticleSystem* FrozenDeathparticles; // 0x3a0(0x08)

	void TriggerFrozenRagdoll();
	void OnFreezeImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void BP_FreezeImpact();
};

// Class FSD.FlyingEnemyDeepPathfinderCharacter
// Size: 0x3c8 (Inherited: 0x3a8)
struct AFlyingEnemyDeepPathfinderCharacter : AFlyingDeepPathfinderCharacter {
	UEnemyHealthComponent* HealthComponent; // 0x3b0(0x08)
	FQueuedMontage QueuedMontage; // 0x3b8(0x10)

	void OnRep_QueuedMontage();
};

// Class FSD.AFlyingBug
// Size: 0x478 (Inherited: 0x3c8)
struct AAFlyingBug : AFlyingEnemyDeepPathfinderCharacter {
	UEnemyComponent* EnemyComponent; // 0x3c8(0x08)
	UPawnStatsComponent* PawnStats; // 0x3d0(0x08)
	UOutlineComponent* outline; // 0x3d8(0x08)
	UPawnSensingComponent* Senses; // 0x3e0(0x08)
	UPawnAlertComponent* Alert; // 0x3e8(0x08)
	USphereComponent* ExplosionSphere; // 0x3f0(0x08)
	UAudioComponent* WingSoundComponent; // 0x3f8(0x08)
	FMulticastInlineDelegate OnStartFizzle; // 0x400(0x10)
	TArray<UAnimSequenceBase*> HitReactions; // 0x410(0x10)
	FVector_NetQuantize RagdollImpact; // 0x420(0x0c)
	AActor* RotateTarget; // 0x440(0x08)
	UPhysicsAsset* PhysicalAssetAfterDeath; // 0x448(0x08)
	USoundBase* ChatterSound; // 0x450(0x08)
	float FirstHitReactBlendIn; // 0x458(0x04)
	float OverrideHitReactBlendIn; // 0x45c(0x04)
	float DistanceForAttackMode; // 0x460(0x04)
	float MinChatterDelay; // 0x464(0x04)
	float MaxChatterDelay; // 0x468(0x04)
	float AttackModeRotationSpeed; // 0x46c(0x04)
	bool UsesAttackStance; // 0x470(0x01)
	bool SetLifeTime; // 0x471(0x01)
	bool AttackStance; // 0x472(0x01)
	bool LookStraight; // 0x473(0x01)
	bool UseDefaultRagdoll; // 0x474(0x01)

	void StartFizzle();
	void SetRotateTarget(AActor* aTarget);
	void SetExternallyControlled(bool isExternallyControlled);
	void SetAttackStance(bool isAttackStance);
	void Ragdoll(bool applyForce, FVector force);
	void PlayVoice();
	void OnRep_RagdollImpact();
	void OnRep_AttackStance();
	void OnRagdoll();
	void OnDamaged(float amount);
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

	void SetMeshScale(float NewScale);
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
	UAttackerPositioningComponent* GetAttackableTarget(AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool accountForAttackers, AActor* ignoreTarget, bool IsFlying);
	APlayerCharacter* ConsiderChangingTarget(APlayerCharacter* CurrentTarget, AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool CurrentTargetMustBeAlive, bool IsFlying);
	void AlertEnemy(APawn* enemy);
	void AlertEnemiesInRange(UObject* WorldContextObject, FVector Origin, float Range, APawn* alerter);
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
	FTransform DebreePositionPoint(AProceduralSetup* setup, FVector fromLocation, float Radius, UDebrisPositioning* DebrisPositioning, AActor* terrainPlacement, TArray<FVector> locationsToAvoid, UCurveFloat* avoidCostCurve, float maxPathLength);
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
// Size: 0x318 (Inherited: 0x220)
struct AItem : AActor {
	FVector FPCameraOffset; // 0x258(0x0c)
	bool EnableDangerousSaveGameIDEditing; // 0x264(0x01)
	FGuid SavegameID; // 0x268(0x10)
	UItemID* ItemID; // 0x278(0x08)
	APlayerCharacter* Character; // 0x280(0x08)
	UUpgradableItemComponent* UpgradableItem; // 0x288(0x08)
	UCameraShake* CameraShake; // 0x290(0x08)
	bool CameraShakeOnStartUsing; // 0x298(0x01)
	bool CameraShakeOnEquip; // 0x299(0x01)
	UCurveFloat* HeatCurve; // 0x2a8(0x08)
	float ManualHeatPerUse; // 0x2b0(0x04)
	float CooldownRate; // 0x2b4(0x04)
	float ManualCooldownDelay; // 0x2b8(0x04)
	float UnjamDuration; // 0x2bc(0x04)
	float CurrentTemperature; // 0x2c4(0x04)
	USoundBase* AudioTemperature; // 0x2c8(0x08)
	float AudioTemperatureFadeout; // 0x2d0(0x04)
	FName TemperatureFloatParam; // 0x2d4(0x08)
	UAudioComponent* TemperatureAudioComponent; // 0x2e0(0x08)
	bool Overheated; // 0x2e8(0x01)
	UDialogDataAsset* ShoutOverheated; // 0x2f0(0x08)
	bool bAimAssistEnabled; // 0x2f8(0x01)
	float MovementRateWhileUsing; // 0x2fc(0x04)
	bool CanPlayLedgeClimbWhileUsing; // 0x300(0x01)
	bool CanInspectItem; // 0x301(0x01)
	bool CanSprintWithItem; // 0x302(0x01)
	UItemsBarIcon* CustomIconWidget; // 0x308(0x08)
	bool IsEquipped; // 0x310(0x01)
	bool IsUsing; // 0x311(0x01)

	void UpdateSkin();
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
// Size: 0x368 (Inherited: 0x318)
struct AAnimatedItem : AItem {
	USkinnableComponent* Skinnable; // 0x318(0x08)
	UPlayerAnimInstance* FPAnimInstance; // 0x320(0x08)
	UPlayerAnimInstance* TPAnimInstance; // 0x328(0x08)
	USkeletalMeshComponent* FPMesh; // 0x330(0x08)
	USkeletalMeshComponent* TPMesh; // 0x338(0x08)
	UAnimMontage* FP_EquipAnimation; // 0x340(0x08)
	UAnimMontage* TP_EquipAnimation; // 0x348(0x08)
	float EquipDuration; // 0x350(0x04)
	UItemCharacterAnimationSet* CharacterAnimationSet; // 0x358(0x08)

	void OnReceiveEquippedFinished();
	FTransform GetMuzzle();
	USkeletalMeshComponent* GetItemMesh();
};

// Class FSD.AmmoDrivenWeapon
// Size: 0x690 (Inherited: 0x368)
struct AAmmoDrivenWeapon : AAnimatedItem {
	FMulticastInlineDelegate OnClipCountChanged; // 0x388(0x10)
	FMulticastInlineDelegate OnTryReloadEvent; // 0x398(0x10)
	FMulticastInlineDelegate OnReloadingEvent; // 0x3a8(0x10)
	FMulticastInlineDelegate OnStoppedUsingEvent; // 0x3b8(0x10)
	UWeaponFireComponent* WeaponFire; // 0x3c8(0x08)
	UAmmoDriveWeaponAggregator* Aggregator; // 0x3d0(0x08)
	bool LoopFireAnimation; // 0x3d8(0x01)
	float LoopFireAnimationBlendoutTime; // 0x3dc(0x04)
	UAnimMontage* FP_FireAnimation; // 0x3e0(0x08)
	UAnimMontage* TP_FireAnimation; // 0x3e8(0x08)
	UAnimMontage* FP_ReloadAnimation; // 0x3f0(0x08)
	FItemAnimationItem OverheatAnimation; // 0x3f8(0x18)
	TArray<FItemAnimationItem> GunslingAnimations; // 0x410(0x10)
	UAnimMontage* TP_ReloadAnimation; // 0x420(0x08)
	UAnimMontage* WPN_Fire; // 0x428(0x08)
	UAnimMontage* WPN_FireLastBullet; // 0x430(0x08)
	UAnimMontage* WPN_Reload; // 0x438(0x08)
	UAnimMontage* WPN_Reload_TP; // 0x440(0x08)
	UFXSystemAsset* MuzzleParticles; // 0x448(0x08)
	UFXSystemAsset* TPMuzzleParticles; // 0x450(0x08)
	bool UseTriggeredMuzzleParticles; // 0x458(0x01)
	FTracerData Tracer; // 0x468(0x30)
	UParticleSystem* TracerParticles; // 0x498(0x08)
	UParticleSystem* TrailParticles; // 0x4a0(0x08)
	float MinTracerDistance; // 0x4a8(0x04)
	float TracerSpeed; // 0x4ac(0x04)
	float TracerOffset; // 0x4b0(0x04)
	UFXSystemAsset* CasingParticles; // 0x4b8(0x08)
	bool UseTriggeredCasingParticleSystem; // 0x4c0(0x01)
	ULightComponent* MuzzleFlashLight; // 0x4d0(0x08)
	FRuntimeFloatCurve MuzzleFlashLightCurve; // 0x4d8(0x88)
	USoundCue* FireSound; // 0x568(0x08)
	USoundCue* RicochetSound; // 0x570(0x08)
	UFXSystemAsset* RicochetParticle; // 0x578(0x08)
	float FireSoundDelayToTail; // 0x580(0x04)
	USoundCue* FireSoundTail; // 0x590(0x08)
	bool IsFireSoundTail2D; // 0x598(0x01)
	UForceFeedbackEffect* FireForceFeedbackEffect; // 0x5a0(0x08)
	UAudioComponent* FireSoundInstance; // 0x5a8(0x08)
	float FireSoundFadeDuration; // 0x5b0(0x04)
	USoundCue* ReloadSound; // 0x5b8(0x08)
	int32_t BulletsRemainingForNearEmptySound; // 0x5c0(0x04)
	USoundCue* NearEmptySound; // 0x5c8(0x08)
	USoundCue* WeaponEmptySound; // 0x5d0(0x08)
	UDialogDataAsset* ShoutShotFired; // 0x5d8(0x08)
	UDialogDataAsset* ShoutOutOfAmmo; // 0x5e0(0x08)
	UDialogDataAsset* ShoutReloading; // 0x5e8(0x08)
	int32_t MaxAmmo; // 0x5f0(0x04)
	int32_t ClipSize; // 0x5f4(0x04)
	int32_t ShotCost; // 0x5f8(0x04)
	float RateOfFire; // 0x5fc(0x04)
	int32_t BurstCount; // 0x600(0x04)
	float BurstCycleTime; // 0x604(0x04)
	float ReloadDuration; // 0x608(0x04)
	int32_t AmmoCount; // 0x60c(0x04)
	int32_t ClipCount; // 0x610(0x04)
	float AutoReloadDuration; // 0x614(0x04)
	USoundCue* AutoReloadCompleteCue; // 0x618(0x08)
	FMulticastInlineDelegate OnItemAutoReloaded; // 0x620(0x10)
	float SupplyStatusWeight; // 0x634(0x04)
	float CycleTimeLeft; // 0x638(0x04)
	float ReloadTimeLeft; // 0x640(0x04)
	bool AutomaticReload; // 0x644(0x01)
	bool CanReload; // 0x645(0x01)
	FRecoilSettings RecoilSettings; // 0x648(0x28)
	bool HasAutomaticFire; // 0x670(0x01)
	bool IsFiring; // 0x671(0x01)
	enum class EAmmoWeaponState WeaponState; // 0x68a(0x01)

	void Upgraded_Blueprint_Implementation(TArray<UItemUpgrade*> Upgrades);
	void Server_StopReload();
	void Server_ReloadWeapon();
	void Server_PlayBurstFire(char shotCount);
	void Server_Gunsling(char Index);
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
	void CustomEvent1();
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

	bool IsFull();
	bool IsEmpty();
};

// Class FSD.PlatformGunAnimInstance
// Size: 0x290 (Inherited: 0x280)
struct UPlatformGunAnimInstance : UAmmoDrivenWeaponAnimInstance {
	float SpinRate; // 0x278(0x04)
	float NormalSpinRate; // 0x27c(0x04)
	float LerpSpeed; // 0x280(0x04)
	float FiredSpinRate; // 0x284(0x04)

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
// Size: 0xe0 (Inherited: 0xb0)
struct UBaseArmorDamageComponent : UActorComponent {
	bool ArmorDamageEnabled; // 0xb0(0x01)
	TArray<UParticleSystem*> ArmorBreakParticles; // 0xb8(0x10)
	TArray<UFSDPhysicalMaterial*> ArmorPhysMats; // 0xc8(0x10)
	USkeletalMeshComponent* Mesh; // 0xd8(0x08)
};

// Class FSD.SimpleArmorDamageComponent
// Size: 0x148 (Inherited: 0xe0)
struct USimpleArmorDamageComponent : UBaseArmorDamageComponent {
	FMulticastInlineDelegate OnRadialArmorPartsDestroyedEvent; // 0xe0(0x10)
	float ArmorStrength; // 0xf0(0x04)
	TMap<FName, FDestructableBodypartItem> PhysBoneToArmor; // 0xf8(0x50)

	void DamageArmor_All(TArray<char> parts);
};

// Class FSD.ArmorHealthDamageComponent
// Size: 0x148 (Inherited: 0xe0)
struct UArmorHealthDamageComponent : UBaseArmorDamageComponent {
	FMulticastInlineDelegate OnArmorPartDestroyedEvent; // 0xe0(0x10)
	TMap<FName, FArmorHealthItem> PhysBoneToArmor; // 0xf0(0x50)
	uint32_t ArmorDamageIndex; // 0x140(0x04)
	bool AffectedByAmorBreak; // 0x144(0x01)

	bool SetHealthOnBodypartItem(FName BoneName, float newHealth);
	void SetHealthOnAllItems(float newHealth);
	void RegrowAllArmor(float baseHealth);
	void OnRep_ArmorDamageIndex(uint32_t OldValue);
};

// Class FSD.CompositeArmorComponent
// Size: 0xf0 (Inherited: 0xe0)
struct UCompositeArmorComponent : UBaseArmorDamageComponent {
	TArray<FCompositeArmorItem> ArmorItems; // 0xe0(0x10)

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

// Class FSD.ThrowableItem
// Size: 0x3e0 (Inherited: 0x368)
struct AThrowableItem : AAnimatedItem {
	AThrowableActor* ThrowableClass; // 0x370(0x08)
	UAnimMontage* FPThrowMontage; // 0x378(0x08)
	UAnimMontage* TPThrowMontage; // 0x380(0x08)
	float ThrowVelocity; // 0x388(0x04)
	float InheritOwnerVelocityScale; // 0x38c(0x04)
	float ThrowAngle; // 0x390(0x04)
	float CooldownAfterThrow; // 0x394(0x04)
	float CooldownAfterDetonation; // 0x398(0x04)
	bool CanThrowBeforeEquipAnimFinish; // 0x39c(0x01)
	float ThrowDelay; // 0x3a0(0x04)
	float ThrowZOffset; // 0x3a4(0x04)
	float CooldownLeft; // 0x3a8(0x04)
	TArray<UItemUpgrade*> Upgrades; // 0x3b0(0x10)
	AItem* LoadoutItem; // 0x3c0(0x08)
	TArray<TWeakObjectPtr<AThrowableActor>> ThrownActors; // 0x3c8(0x10)

	void Simulate_Throw(AThrowableActor* ActorClass);
	void Server_Throw(AThrowableActor* ActorClass);
	void ReceiveItemThrown(AThrowableActor* thrownActor);
	void ReceiveItemSpawned(AThrowableActor* thrownActor);
	void OnThrownActorDestroyed(AActor* Actor);
	FVector GetThrowLocation();
};

// Class FSD.ArmorRegeneratorItem
// Size: 0x458 (Inherited: 0x3e0)
struct AArmorRegeneratorItem : AThrowableItem {
	UCapacityHoldingItemAggregator* ChargeCapacity; // 0x3f0(0x08)
	UCapacityHoldingItemAggregator* CarryCapacity; // 0x3f8(0x08)
	float RechargeDuration; // 0x400(0x04)
	int32_t UnchargedCount; // 0x404(0x04)
	float RechargeProgress; // 0x408(0x04)
	float SupplyStatusWeight; // 0x40c(0x04)
	UDialogDataAsset* ShoutRecarged; // 0x410(0x08)
	FCoolDownProgressStyle RechargeProgressUI; // 0x418(0x40)

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

// Class FSD.ArmorRegeneratorActor
// Size: 0x240 (Inherited: 0x230)
struct AArmorRegeneratorActor : AThrowableActor {
	float GeneratorRadius; // 0x230(0x04)
	float DeployDelay; // 0x234(0x04)
	bool bPushStatusEffectOnExit; // 0x238(0x01)
	float GeneratorLifetime; // 0x23c(0x04)
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
	FFloatInterval Range; // 0xcc(0x08)
	float MinRange; // 0xd4(0x04)
	float MaxRange; // 0xd8(0x04)

	UAttackBaseComponent* ReplaceAttackComponent(UAttackBaseComponent* componentToReplace, UAttackBaseComponent* newComponentClass);
	void ReceiveAttackTarget(AActor* Target);
	void ReceiveAbortAttack();
	void CompleteAttack(bool success);
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
// Size: 0x758 (Inherited: 0x690)
struct AAutoCannon : AAmmoDrivenWeapon {
	float StartingFireRate; // 0x690(0x04)
	float MaxFireRate; // 0x694(0x04)
	FRuntimeFloatCurve FireRateCurve; // 0x698(0x88)
	float FireTimeReductionScale; // 0x720(0x04)
	float FireTimeIncreaseScale; // 0x724(0x04)
	float MaxFireTimeCap; // 0x728(0x04)
	float DamageBonusAtFullROF; // 0x72c(0x04)
	bool StatusEffectAtFullROF; // 0x730(0x01)
	float FireTimeOffsetForMaxRateOfFireBonus; // 0x734(0x04)
	float StartLoopingSoundAt; // 0x738(0x04)
	UStatusEffect* StatusAtFullROF; // 0x740(0x08)
	UAnimMontage* WPN_Fire_3; // 0x748(0x08)
	float CurrentFireTime; // 0x750(0x04)

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
// Size: 0x6c0 (Inherited: 0x690)
struct ABeltDrivenWeapon : AAmmoDrivenWeapon {
	UAudioComponent* BarrelAudio; // 0x690(0x08)
	USoundCue* BarrelSound; // 0x698(0x08)
	float BarrelFadeIn; // 0x6a0(0x04)
	float BarrelFadeOut; // 0x6a4(0x04)
	UCurveFloat* BarrelPitchCurve; // 0x6a8(0x08)
	float BarrelSpinUpTime; // 0x6b0(0x04)
	float BarrelSpinDownTime; // 0x6b4(0x04)
	float CurrentSpinRate; // 0x6b8(0x04)
	bool Simulate_SpinBarrel; // 0x6bc(0x01)

	void Server_StopBarrel();
	void Server_StartBarrel();
};

// Class FSD.GatlingGun
// Size: 0x720 (Inherited: 0x6c0)
struct AGatlingGun : ABeltDrivenWeapon {
	bool BarrelProximityDamageEnabled; // 0x6c0(0x01)
	float BarrelProximityDamageDistance; // 0x6c4(0x04)
	float BarrelProximityDamageRadius; // 0x6c8(0x04)
	float BarrelProximityDamageLength; // 0x6cc(0x04)
	float TimeBetweenProximityDamageTicks; // 0x6d0(0x04)
	float DamageMultiplierAtMaxStabilization; // 0x6e8(0x04)
	UFXSystemAsset* HotShellsTracerParticles; // 0x6f0(0x08)
	float HeatRemovedOnKill; // 0x700(0x04)
	bool CriticalOverheatEnabled; // 0x704(0x01)
	bool HotShellsOn; // 0x705(0x01)
	float HotShellsTemperatureRequired; // 0x708(0x04)
	UDamageComponent* DamageComponent; // 0x710(0x08)
	UDamageComponent* BarrelProximityDamageComponent; // 0x718(0x08)

	void Server_SetHotShellsOn(bool hotShellsIsOn);
	void OnRep_HotShellsTracerOn();
	void OnGatlingTemperatureChanged(float Temperature, bool isOverheated);
	void OnEnemyKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat);
	void Client_RemoveHeat();
};

// Class FSD.BeltDrivenAnimInstance
// Size: 0x2a0 (Inherited: 0x270)
struct UBeltDrivenAnimInstance : UAnimInstance {
	float BarrelSpinRate; // 0x268(0x04)
	float CurrentBarrelSpinRate; // 0x26c(0x04)
	bool IsFiring; // 0x270(0x01)
	bool Overheated; // 0x271(0x01)
	FVector ExternalForce; // 0x274(0x0c)
	float ExternalForceScale; // 0x280(0x04)
	FName ExternalForceBoneName; // 0x284(0x08)
};

// Class FSD.Biome
// Size: 0x428 (Inherited: 0x30)
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
	TArray<FBiomeDebrisInfluencerVariant> DebrisInfluencerVariants; // 0x230(0x10)
	TSoftClassPtr<UObject> PostProcessActorClass; // 0x240(0x28)
	UTerrainMaterial* RockMaterial; // 0x268(0x08)
	UTerrainMaterial* DirtMaterial; // 0x270(0x08)
	UTerrainMaterial* BurnedMaterialOverride; // 0x278(0x08)
	TArray<FBiomeNoiseItem> RoomNoises; // 0x280(0x10)
	UMissionStat* MissionCompleted; // 0x290(0x08)
	UFloodFillSettings* CeilingNoise; // 0x298(0x08)
	UDetailNoise* CeilingDetailNoise; // 0x2a0(0x08)
	UFloodFillSettings* WallNoise; // 0x2a8(0x08)
	UDetailNoise* WallDetailNoise; // 0x2b0(0x08)
	UFloodFillSettings* FloorNoise; // 0x2b8(0x08)
	UDetailNoise* FloorDetailNoise; // 0x2c0(0x08)
	UFloodFillSettings* PillarNoise; // 0x2c8(0x08)
	UDetailNoise* PillarDetailNoise; // 0x2d0(0x08)
	UPillarSettings* PillarSettings; // 0x2d8(0x08)
	TArray<UTunnelSetting*> TunnelSettings; // 0x2e0(0x10)
	UFloodFillSettings* TunnelCeilingNoise; // 0x2f0(0x08)
	UFloodFillSettings* TunnelWallNoise; // 0x2f8(0x08)
	UFloodFillSettings* TunnelFloorNoise; // 0x300(0x08)
	TArray<FResourceSpawner> Resources; // 0x308(0x10)
	TArray<FBiomeEnemyEntry> Enemies; // 0x318(0x10)
	TArray<UEnemyDescriptor*> BannedEnemies; // 0x328(0x10)
	TArray<UEnemyDescriptor*> StationaryEnemies; // 0x338(0x10)
	TArray<UCritterDescriptor*> Critters; // 0x348(0x10)
	TSoftObjectPtr<USoundCue> AmbientSounds; // 0x358(0x28)
	bool Use3DAmbient; // 0x380(0x01)
	FReverbSettings ReverbSettings; // 0x388(0x20)
	float SmallCaveReverbVolume; // 0x3a8(0x04)
	UReverbEffect* SmallCaveReverb; // 0x3b0(0x08)
	float MediumCaveReverbVolume; // 0x3b8(0x04)
	UReverbEffect* MediumCaveReverb; // 0x3c0(0x08)
	float LargeCaveReverbVolume; // 0x3c8(0x04)
	UReverbEffect* LargeCaveReverb; // 0x3d0(0x08)
	TSoftObjectPtr<ULevelSequence> BiomeLoaderLevelSequence; // 0x3d8(0x28)
	FString BiomeLoaderLevelName; // 0x400(0x10)
	TArray<FText> Quotes; // 0x410(0x10)
	float PlanetZoneSelectionWeight; // 0x420(0x04)

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
// Size: 0x7a8 (Inherited: 0x690)
struct ABoltActionWeapon : AAmmoDrivenWeapon {
	FMulticastInlineDelegate FullyFocusedEvent; // 0x690(0x10)
	UDamageComponent* DamageComponent; // 0x6a0(0x08)
	UHitscanBaseComponent* HitscanComponent; // 0x6a8(0x08)
	UStatusEffect* FocusedHitSTE; // 0x6b0(0x08)
	bool RequireWeakspotForFocusedHitSTE; // 0x6b8(0x01)
	bool IsNoGravityOnFocusEnabled; // 0x6b9(0x01)
	float NoGravityOnFocusDuration; // 0x6bc(0x04)
	float NoGravityFocusFallFriction; // 0x6c0(0x04)
	float NoGravityFocusGravityScale; // 0x6c4(0x04)
	float ZoomSpreadAmount; // 0x6cc(0x04)
	float ZoomMinSpreadWhileMoving; // 0x6d0(0x04)
	float ChargeSpeed; // 0x6d8(0x04)
	float ChargeAmmoCost; // 0x6dc(0x04)
	float ChargeRecoilMult; // 0x6e0(0x04)
	USoundCue* ZoomedInAudio; // 0x6f8(0x08)
	UParticleSystem* ChargedShotTrailParticles; // 0x700(0x08)
	FTracerData ChargedShotTracer; // 0x708(0x30)
	USoundCue* ChargedShotFireSound; // 0x738(0x08)
	float ChargedFoVChange; // 0x740(0x04)
	float ChargedFoVFadeSpeed; // 0x744(0x04)
	float MinCharge; // 0x748(0x04)
	float SlowMovementAtCharge; // 0x74c(0x04)
	float FullChargeDamageBonus; // 0x750(0x04)
	float AimedShotStaggerChance; // 0x754(0x04)
	float AimedWeakspotKilLRange; // 0x758(0x04)
	float TargetKilledReloadTimeBoost; // 0x760(0x04)
	float TargetKilledReloadTimeBoostDuration; // 0x764(0x04)
	bool LastShotWasAimed; // 0x77a(0x01)
	bool IsMovementSlowed; // 0x788(0x01)
	bool ChargeAffectsDamage; // 0x7a0(0x01)
	bool Charging; // 0x7a1(0x01)
	float ChargeProgress; // 0x7a4(0x04)

	void SetOverheated(bool isOverheated);
	void Server_SetIsMovementSlowed(bool bisMovementSlowed);
	void Server_SetIsLatestShotFocused(bool bisShotFocused);
	void Server_SetIsChargingShot(bool bisCharging);
	void OnTimerElapsed();
	void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysicalMaterial);
	void OnTargetDamaged(UHealthComponentBase* Health, float amount, UFSDPhysicalMaterial* PhysicalMaterial);
	void OnShotPowerSet();
	void OnMovementSlowed(bool isSlowed);
	void Client_OnTargetKilled(bool BoostReloadTime);
};

// Class FSD.BoltActionWeaponAnimInstance
// Size: 0x270 (Inherited: 0x270)
struct UBoltActionWeaponAnimInstance : UAnimInstance {
};

// Class FSD.Bomber
// Size: 0x540 (Inherited: 0x478)
struct ABomber : AAFlyingBug {
	UAudioComponent* GooSoundComponent; // 0x478(0x08)
	UParticleSystemComponent* AcidEmitterLeft; // 0x480(0x08)
	UParticleSystemComponent* AcidEmitterRight; // 0x488(0x08)
	AProjectile* AcidProjectile; // 0x4b8(0x08)
	UParticleSystem* deathParticles; // 0x4c0(0x08)
	USoundBase* deathSound; // 0x4c8(0x08)
	USoundBase* DeathPanicSound; // 0x4d0(0x08)
	UParticleSystem* BleedParticles; // 0x4d8(0x08)
	USoundBase* BladderDestroyedNoise; // 0x4e0(0x08)
	TWeakObjectPtr<UParticleSystemComponent> BleedParticlesComponent; // 0x4e8(0x08)
	TWeakObjectPtr<UAudioComponent> PanicAudioComponent; // 0x4f0(0x08)
	float RagdollForceModifier; // 0x4f8(0x04)
	float DeathYRotationSpeed; // 0x4fc(0x04)
	float DeathXRotationSpeed; // 0x500(0x04)
	float SearchRange; // 0x504(0x04)
	float NewPointMax; // 0x508(0x04)
	float NewPointMin; // 0x50c(0x04)
	float DeathSpeed; // 0x510(0x04)
	float DeathAcceleration; // 0x514(0x04)
	float AcidRate; // 0x518(0x04)
	float PostDeathAcidTime; // 0x51c(0x04)
	bool HasDied; // 0x538(0x01)
	bool IsRightDestroyed; // 0x539(0x01)
	bool IsLeftDestroyed; // 0x53a(0x01)
	bool dropAcid; // 0x53b(0x01)

	void StopSpinAndDie();
	void SetDropAcid(bool dropAcid);
	void OnStartDeathPanic();
	void OnRep_DropAcid();
	void OnRep_Death();
	void OnRagdollHitGround(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void OnBladderDamage(float amount);
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

// Class FSD.BoscoAbillity
// Size: 0x68 (Inherited: 0x30)
struct UBoscoAbillity : UDataAsset {
	FName AbillityName; // 0x30(0x08)
	UAnimSequenceBase* AbillityAnimation; // 0x38(0x08)
	USoundBase* VoiceOnUse; // 0x40(0x08)
	enum class EBoscoAbillityTargetPreference TargetType; // 0x48(0x01)
	float Cooldown; // 0x4c(0x04)
	float WindUp; // 0x50(0x04)
	float Duration; // 0x54(0x04)
	float Range; // 0x58(0x04)
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
// Size: 0x6c8 (Inherited: 0x378)
struct ABosco : ADeepPathfinderCharacter {
	UHealthComponent* HealthComponent; // 0x3b0(0x08)
	UBoscoAbillityComponent* AbillityComponent; // 0x3b8(0x08)
	UDamageComponent* Damage; // 0x3c0(0x08)
	UPawnSensingComponent* Senses; // 0x3c8(0x08)
	UDroneMiningToolBase* MiningTool; // 0x3d0(0x08)
	UBobbingComponent* BobbingComponent; // 0x3d8(0x08)
	USkeletalMeshComponent* BoscoMesh; // 0x3e0(0x08)
	UHitscanComponent* DroneHitScan; // 0x3e8(0x08)
	USpotLightComponent* SpotLightComponent; // 0x3f0(0x08)
	UPointLightComponent* PointLightComponent; // 0x3f8(0x08)
	UParticleSystemComponent* LTrail; // 0x400(0x08)
	UParticleSystemComponent* RTrail; // 0x408(0x08)
	UAudioComponent* MomentumSound; // 0x410(0x08)
	UDialogDataAsset* DefendDrilldozerShout; // 0x418(0x08)
	UDialogDataAsset* MineOrderShout; // 0x420(0x08)
	UDialogDataAsset* KillOrderShout; // 0x428(0x08)
	UDialogDataAsset* GoToOrderShout; // 0x430(0x08)
	UDialogDataAsset* ReviveOrderShout; // 0x438(0x08)
	UDialogDataAsset* PickupGemShout; // 0x440(0x08)
	UDialogDataAsset* ReviveThankShout; // 0x448(0x08)
	UDialogDataAsset* GeneralCallShout; // 0x450(0x08)
	UDialogDataAsset* RocketAbillityShout; // 0x458(0x08)
	UDialogDataAsset* CryoGrenadeAbillityShout; // 0x460(0x08)
	USoundBase* MineResponse; // 0x468(0x08)
	USoundBase* CombatResponse; // 0x470(0x08)
	USoundBase* LightResponse; // 0x478(0x08)
	USoundBase* ReviveResponse; // 0x480(0x08)
	USoundBase* AbillityResponse; // 0x488(0x08)
	USoundBase* CurrentResponse; // 0x490(0x08)
	float ResponseTime; // 0x498(0x04)
	FMulticastInlineDelegate OnReviveused; // 0x4a0(0x10)
	FMulticastInlineDelegate OnStateChanged; // 0x4b0(0x10)
	float CarryingSpeed; // 0x4d0(0x04)
	float CarryingAcceleration; // 0x4d4(0x04)
	float CarryingDampOmega; // 0x4d8(0x04)
	FGameplayTagContainer LosMatchTags; // 0x4f0(0x20)
	float SeeTargetTime; // 0x510(0x04)
	USoundBase* AbillityErrorSound; // 0x518(0x08)
	float INcreasedMiningArea; // 0x520(0x04)
	float TimeToResetMiningBoost; // 0x524(0x04)
	float MiningBoosMultiplier; // 0x528(0x04)
	TArray<UItemUpgrade*> Upgrades; // 0x530(0x10)
	UBoscoProjectileAbillity* RocketAbillity; // 0x540(0x08)
	UBoscoProjectileAbillity* CryoGrenadeAbillity; // 0x548(0x08)
	FGuid SavegameID; // 0x550(0x10)
	UItemID* ItemID; // 0x560(0x08)
	UUpgradableBoscoComponent* Upgradable; // 0x568(0x08)
	UAnimSequenceBase* SaluteAnimation; // 0x570(0x08)
	UAnimSequenceBase* PickupGemAnimation; // 0x578(0x08)
	UAnimSequenceBase* DropGemAnimation; // 0x580(0x08)
	TArray<UAnimSequenceBase*> HitReaction; // 0x588(0x10)
	float SaluteDuration; // 0x598(0x04)
	UDroneSkinnableComponent* Skinnable; // 0x5a0(0x08)
	TArray<FBoscoLightSetting> LightSettings; // 0x5a8(0x10)
	int32_t TargetLightSetting; // 0x5b8(0x04)
	TArray<UBoscoAbillity*> CombatAbillities; // 0x5c0(0x10)
	AActor* RotateTarget; // 0x5d0(0x08)
	FVector LookAtLocation; // 0x5d8(0x0c)
	USoundCue* ShootSound; // 0x5e8(0x08)
	float ShootSoundFadeout; // 0x5f0(0x04)
	USoundCue* ShootSoundTail; // 0x5f8(0x08)
	UAudioComponent* ShootSoundInstance; // 0x600(0x08)
	UParticleSystem* MuzzleEffect; // 0x608(0x08)
	UParticleSystem* TracerEffect; // 0x610(0x08)
	float FireRate; // 0x618(0x04)
	int32_t MinShotsInBurst; // 0x61c(0x04)
	int32_t MaxShotsInBurst; // 0x620(0x04)
	float MaxRandomBurstCooldown; // 0x624(0x04)
	float MinRandomBurstCooldown; // 0x628(0x04)
	float MaxFiringAngle; // 0x62c(0x04)
	float MaxEngagementRange; // 0x630(0x04)
	float MinTracerDistance; // 0x634(0x04)
	float TracerSpeed; // 0x638(0x04)
	USoundBase* ReviveSirens; // 0x640(0x08)
	TWeakObjectPtr<UAudioComponent> ReviveSirensComponent; // 0x648(0x08)
	float DistanceToFacePlayer; // 0x650(0x04)
	float RotationSpeed; // 0x654(0x04)
	float PrepareToMineRange; // 0x658(0x04)
	float MiningRange; // 0x65c(0x04)
	int32_t MaxRevives; // 0x694(0x04)
	bool IsFiring; // 0x6a8(0x01)
	bool IsInRangeToMine; // 0x6a9(0x01)
	bool IsPreparedToMine; // 0x6aa(0x01)
	bool IsMining; // 0x6ab(0x01)
	bool IsReviving; // 0x6ac(0x01)
	bool IsRotateMode; // 0x6ad(0x01)
	ABoscoController* DroneController; // 0x6b8(0x08)
	enum class EDroneAIState CurrentState; // 0x6c0(0x01)

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
	void OnRep_State(enum class EDroneAIState prevState);
	void OnReadyToShoot();
	void OnNotReadyToShoot();
	void OnHit(float amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, FName BoneName);
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
	TArray<UItemUpgrade*> Upgrades; // 0xd0(0x10)
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
// Size: 0x5c0 (Inherited: 0x358)
struct ABoscoController : AFSDAIController {
	UBehaviorTree* BehaviourTree; // 0x358(0x08)
	float CheckOutOfTheWayInterval; // 0x360(0x04)
	float DistCountAsSameHit; // 0x36c(0x04)
	FMulticastInlineDelegate OnFollowTargetChangedDelegate; // 0x370(0x10)
	UTerrainMaterial* HearthstoneCrystalMaterial; // 0x438(0x08)
	float SearchForEnemiesInterval; // 0x440(0x04)
	float SaluteDelay; // 0x448(0x04)
	float SaluteCooldown; // 0x450(0x04)
	float CheckGraberInterval; // 0x458(0x04)
	float MaxThrowStrength; // 0x460(0x04)
	float MaxThrowRange; // 0x464(0x04)
	float RepairRange; // 0x468(0x04)
	float DistanceCountedAsClose; // 0x46c(0x04)
	FGameplayTagQuery TargetQuery; // 0x470(0x48)
	FGameplayTagQuery LaserPointerTargetQuery; // 0x4b8(0x48)
	FGameplayTagQuery FollowTargetTagQuery; // 0x500(0x48)
	float ReviveHealthPercentage; // 0x548(0x04)
	UDroneUseComponent* CurrentUse; // 0x550(0x08)
	AGem* TryingToPickGem; // 0x558(0x08)

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
	void GemUsed(APlayerCharacter* usedBy);
	void ConfirmPickup();
};

// Class FSD.SimpleBossFight
// Size: 0x48 (Inherited: 0x28)
struct USimpleBossFight : UObject {
	FBossFight BossFight; // 0x30(0x18)
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
	float Range; // 0x68(0x04)
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
// Size: 0x90 (Inherited: 0x68)
struct UBTDecorator_ConditionalGuard : UBTDecorator {
	FBlackboardKeySelector GuardKey; // 0x68(0x28)
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
// Size: 0xb0 (Inherited: 0xb0)
struct UBurrowComponent : UActorComponent {

	void Unburrow(UAnimMontage* customMontage);
	void Burrow(UAnimMontage* customMontage);
};

// Class FSD.CalldownItem
// Size: 0x3c8 (Inherited: 0x368)
struct ACalldownItem : AAnimatedItem {
	UItemPlacerAggregator* ItemPlacerClass; // 0x368(0x08)
	ARessuplyPod* SupplyPodClass; // 0x370(0x08)
	UResourceData* ResouceRequired; // 0x378(0x08)
	FText OrderDescription; // 0x380(0x18)
	FText LogText; // 0x398(0x18)
	AActor* ResupplyBeacon; // 0x3b0(0x08)
	UItemPlacerAggregator* ItemPlacerInstance; // 0x3b8(0x08)
	float Cooldown; // 0x3c0(0x04)
	float CooldownRemaining; // 0x3c4(0x04)

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
	void SkipMainCampaign(AFSDPlayerController* Player);
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
// Size: 0x160 (Inherited: 0x28)
struct UCampaign : UObject {
	TArray<UCampaignMission*> missions; // 0x28(0x10)
	TArray<UCampaignRequirement*> Requirements; // 0x38(0x10)
	TArray<UCampaignRequirement*> VisibilityRequirements; // 0x48(0x10)
	UPlayerCharacterID* RequiredCharacterID; // 0x58(0x08)
	TArray<UDifficultySetting*> RestrictedToDifficulties; // 0x60(0x10)
	int32_t Progress; // 0x70(0x04)
	FGuid SavegameID; // 0x74(0x10)
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
	void AddAmmo(int32_t amount);
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
	float Transfer(float amount, UCappedResource* Receiver);
	void OnRep_FullFlag(int32_t OldValue);
	void OnRep_CurrentAmount(float OldAmount);
	bool IsObjectiveResource(UObject* WorldContext, bool IsCompleted);
	bool IsFull();
	bool IsEmpty();
	bool IsCraftingResource();
	FText GetTitle();
	FColor GetColor();
	float GetCapacityPct();
	float Deduct(float amount);
	float Add(float amount);
};

// Class FSD.UsableComponentBase
// Size: 0xd8 (Inherited: 0xb0)
struct UUsableComponentBase : UActorComponent {
	float UseCooldown; // 0xb0(0x04)
	bool MustBeGroundedToUse; // 0xb4(0x01)
	bool CanUseStrict; // 0xb5(0x01)
	UUseAnimationSetting* AnimationSettings; // 0xb8(0x08)
	int32_t Priority; // 0xc0(0x04)
	bool UseableByOwnerOnly; // 0xc4(0x01)
	USceneComponent* RestrictToCollider; // 0xc8(0x08)
	enum class EUseRestriction UseRestrictionAllowance; // 0xd0(0x01)
	bool IsRayTraceTriggered; // 0xd1(0x01)
	bool ResetUsingOnCompletion; // 0xd2(0x01)

	void SetRayTraceTriggered(bool rayTraceTriggered);
	FText GetUseText(APlayerCharacter* User);
	float GetUseProgressInPercent(APlayerCharacter* User);
	UTexture2D* GetUsableIcon();
	bool GetShowUsingUI();
	bool GetIsRayTraceTriggerd();
	bool GetHideProgressBar(APlayerCharacter* User);
	bool GetHideActionText(APlayerCharacter* User);
	void EndUse(APlayerCharacter* User);
	void BeginUse(APlayerCharacter* User);
};

// Class FSD.UsableComponent
// Size: 0x100 (Inherited: 0xd8)
struct UUsableComponent : UUsableComponentBase {
	UDialogDataAsset* ShoutBegin; // 0xd8(0x08)
	FText UseText; // 0xe0(0x18)
	bool ResetOnFail; // 0xf8(0x01)
	bool SwitchToUsingState; // 0xf9(0x01)

	void SetUseText(FText NewText);
	bool HasDuration();
};

// Class FSD.InstantUsable
// Size: 0x138 (Inherited: 0x100)
struct UInstantUsable : UUsableComponent {
	FMulticastInlineDelegate OnUsedBy; // 0x100(0x10)
	FMulticastInlineDelegate OnUsableChanged; // 0x110(0x10)
	bool bShowUsingUI; // 0x120(0x01)
	USoundCue* AudioCompletedUse; // 0x128(0x08)
	bool Usable; // 0x130(0x01)
	bool TurnOffAfterUse; // 0x131(0x01)

	void SetCanUse(bool canUse);
	void OnRep_Usable();
};

// Class FSD.CarriableInstantUsable
// Size: 0x138 (Inherited: 0x138)
struct UCarriableInstantUsable : UInstantUsable {
};

// Class FSD.CarriableComponent
// Size: 0x118 (Inherited: 0xb0)
struct UCarriableComponent : UActorComponent {
	FMulticastInlineDelegate OnPickedUp; // 0xb8(0x10)
	FMulticastInlineDelegate OnDropped; // 0xc8(0x10)
	APlayerCharacter* CarriedBy; // 0xd8(0x08)
	enum class EUseRestriction UseRestriction; // 0xe0(0x01)
	FVector Offset; // 0xe4(0x0c)

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
	bool AffectedByMutators; // 0xa1(0x01)
	bool ScaleToMissionLength; // 0xa2(0x01)
	bool ScaleToHazardLevel; // 0xa3(0x01)
	bool ShowSeparatelyInEndScreen; // 0xa4(0x01)
	TSoftClassPtr<UObject> Spawnable; // 0xa8(0x28)
	bool IsWholeNumberResource; // 0xd0(0x01)
	int32_t CreditValue; // 0xd4(0x04)
	int32_t XPValue; // 0xd8(0x04)
	FGuid SavegameID; // 0xdc(0x10)

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
// Size: 0x528 (Inherited: 0x220)
struct AProceduralSetup : AActor {
	bool ShowRoomEntrances; // 0x220(0x01)
	bool ShowPathObstacles; // 0x221(0x01)
	bool ShowItemNoisePattern; // 0x222(0x01)
	int32_t Seed; // 0x224(0x04)
	bool UseRandomSeed; // 0x228(0x01)
	FRandomStream RandomStream; // 0x230(0x08)
	FRandomStream RandomStreamServer; // 0x238(0x08)
	FRandomStream RandomStreamAsync; // 0x240(0x08)
	FRandomStream RandomStreamAsyncServer; // 0x248(0x08)
	FMulticastInlineDelegate OnEncounterSpawnedEvent; // 0x250(0x10)
	USpecialEvent* ForcedSpecialEvent; // 0x2c8(0x08)
	USpecialEvent* ForcedTreasure; // 0x2d0(0x08)
	bool UseMusicManager; // 0x300(0x01)
	ADeepCSGWorld* CSGWorld; // 0x308(0x08)
	UFloodFillSettings* PathfinderNoise; // 0x310(0x08)
	TArray<FVeinResource> VeinResources; // 0x318(0x10)
	TArray<FCarvedResource> CarvedResources; // 0x328(0x10)
	UMissionDNA* MissionDNA; // 0x338(0x08)
	TArray<FGemResourceAmount> GemResourcesToGenerate; // 0x340(0x10)
	TArray<FCollectableSpawnableItem> CollectablesToGenerate; // 0x358(0x10)
	enum class ESpawnSettings SpawnSettings; // 0x368(0x01)
	bool CanSpawnSpecialEvents; // 0x369(0x01)
	bool ShouldCarveTunnels; // 0x36a(0x01)
	bool CreateDirt; // 0x36b(0x01)
	UCaveInfluencer* DirtInfluencer; // 0x370(0x08)
	float DirtInfluencerRange; // 0x378(0x04)
	UTunnelParameters* TunnelParameters; // 0x388(0x08)
	float PathZPenalty; // 0x390(0x04)
	float PathDirectionPenalty; // 0x394(0x04)
	float PathEntranceAnglePenalty; // 0x398(0x04)
	TArray<FRoomNode> Rooms; // 0x3a8(0x10)
	TArray<FRoomNode> RoomsInitialState; // 0x3b8(0x10)
	TArray<FTunnelNode> Tunnels; // 0x3c8(0x10)
	FGeneratedInfluenceSets GeneratedInfluenceSets; // 0x3d8(0x18)
	FGeneratedInstantCarvers GeneratedInstantCarvers; // 0x3f8(0x10)
	FGeneratedDebris GeneratedDebris; // 0x408(0x58)
	UBiome* Biome; // 0x460(0x08)
	float missionLength; // 0x468(0x04)
	URoomDecorationObject* MiningpodCalldownLocationDecoration; // 0x470(0x08)
	TArray<FPathObstacle> PathObstacles; // 0x478(0x10)
	FInfluenceMap InfluenceMap; // 0x488(0x50)
	TArray<UResourceData*> SpawnedResources; // 0x4d8(0x10)
	float CaveDepth; // 0x4e8(0x04)
	AActor* PostProcessActor; // 0x4f0(0x08)
	USpecialEvent* SpecialEvent; // 0x4f8(0x08)
	bool IsInitialized; // 0x500(0x01)
	int32_t CurrentRoomPass; // 0x504(0x04)
	bool Pass1Completed; // 0x508(0x01)
	bool UsePerLevelCritterSpawning; // 0x509(0x01)

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
	ADeepCSGWorld* GetCSGWorld();
	void GenerateRoomsFromGraph_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo, int32_t CarvePass);
	void GenerateRoomsFromGraph(int32_t CarvePass);
	void GenerateRoomGenerator();
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
	void EndRoom(int32_t ID);
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
	int32_t BeginRoom(FVector Location, float Rotation, bool CanHaveEnemies, URoomGenerator* baseGenerator, FVector outCenter, FRoomNode outRoom, float resourceMultiplayer);
	void BeginLiveGeneration();
	void BeginGenerating();
	void AddToRoom(int32_t ID, FVector Location, float Rotation, URoomGenerator* additionalRoomGenerator);
	void AddRoomToInitialState(FRoomNode RoomNode);
	int32_t AddRoom(FVector Location, bool CanHaveEnemies, URoomGeneratorBase* RoomGenerator, bool canBeRotated, FVector outCenter, FRoomNode outRoom, float ResourceMultiplier);
	void AddInfluenceToTunnelEntrances(UCaveInfluencer* Influencer, float Range);
	void AddImportantLocation(FVector Location, float Radius);
	void AddEnemyDebris();
	void AddDebrisVariantsToRooms();
	int32_t AddDebrisCollider(FDebrisCapsule Capsule);
	void AddCaveInfluence(UCaveInfluencer* Influencer, FVector Location, float Range);
	int32_t AddAirParticlesCollider(FDebrisCapsule Capsule);
};

// Class FSD.CaveBurner
// Size: 0x560 (Inherited: 0x528)
struct ACaveBurner : AProceduralSetup {
	float RoomRadius; // 0x528(0x04)
	FGameplayTagContainer RoomTags; // 0x530(0x20)
	bool CanOnlyBeUsedOnce; // 0x550(0x01)
	URoomGenerator* RoomGenerator; // 0x558(0x08)
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
};

// Class FSD.RoomPieceBurner
// Size: 0x2f8 (Inherited: 0x2e0)
struct ARoomPieceBurner : ARoomBurner {
	URoomPiece* RoomPiece; // 0x2e0(0x08)
	TArray<enum class ERoomPieceSide> ConnectedSides; // 0x2e8(0x10)
};

// Class FSD.InfluenceTester
// Size: 0x230 (Inherited: 0x220)
struct AInfluenceTester : AActor {
	UCaveInfluencer* Influencer; // 0x220(0x08)
	USphereComponent* Sphere; // 0x228(0x08)
};

// Class FSD.EnemyPawn
// Size: 0x338 (Inherited: 0x2e8)
struct AEnemyPawn : AFSDPawn {
	UEnemyHealthComponent* Health; // 0x2f0(0x08)
	UPawnStatsComponent* Stats; // 0x2f8(0x08)
	UEnemyPawnAfflictionComponent* affliction; // 0x300(0x08)
	UEnemyComponent* enemy; // 0x308(0x08)
	FName CenterMassSocketName; // 0x310(0x08)
	FQueuedMontage QueuedMontage; // 0x318(0x10)
	TArray<UMaterialInterface*> CachedMaterials; // 0x328(0x10)

	UMeshComponent* Receive_GetMeshComponent();
	void OnRep_QueuedMontage();
	USkeletalMeshComponent* GetMesh();
};

// Class FSD.CaveLeech
// Size: 0x3f0 (Inherited: 0x338)
struct ACaveLeech : AEnemyPawn {
	USkeletalMeshComponent* SkeletalMesh; // 0x340(0x08)
	UGrabberComponent* GrabberComponent; // 0x348(0x08)
	float BiteDamage; // 0x350(0x04)
	float BitesPerSecond; // 0x354(0x04)
	float MaxDistanceXY; // 0x358(0x04)
	float GrapDistance; // 0x35c(0x04)
	float GrapDelay; // 0x360(0x04)
	float TentacleSpeed; // 0x364(0x04)
	float TentacleRetractSpeed; // 0x368(0x04)
	float RetractDuration; // 0x36c(0x04)
	float TentaclePullSpeed; // 0x370(0x04)
	float TentacleDropPlayerSpeed; // 0x374(0x04)
	float TentacleDropGroundDistance; // 0x378(0x04)
	float MaxDropPlayerDuration; // 0x37c(0x04)
	float HeadInterpSpeed; // 0x380(0x04)
	float TentacleAttachOffset; // 0x384(0x04)
	float BiteDistance; // 0x388(0x04)
	float RevivedGracePeriod; // 0x38c(0x04)
	UPawnAffliction* CaveLeechSenseAffliction; // 0x390(0x08)
	float StateTime; // 0x3a0(0x04)
	enum class ECaveLeechState State; // 0x3a4(0x01)
	FVector_NetQuantize TentacleLocation; // 0x3a8(0x0c)
	FVector_NetQuantize TentacleVelocity; // 0x3b4(0x0c)
	TWeakObjectPtr<AActor> Target; // 0x3c0(0x08)
	UHealthComponent* HealthTarget; // 0x3c8(0x08)
	USceneComponent* TentacleHead; // 0x3d0(0x08)

	void OnRep_State();
	FVector GetTentacleTargetLocation();
	FVector GetMouthLocation();
	AActor* GetCurrentTarget();
	void Died(UHealthComponentBase* HealthComponent);
	void Damaged(float amount);
	void BP_OnTentacleLocationChanged(FVector Location);
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
// Size: 0x398 (Inherited: 0x378)
struct ACaveWorm : ADeepPathfinderCharacter {
	USimpleHealthComponent* Health; // 0x388(0x08)
	float SearchChunksRadius; // 0x390(0x04)
	float SearchChunksInterval; // 0x394(0x04)

	AResourceChunk* SpawnResource(UObject* WorldContext, UResourceData* Data, float Size, FTransform Transform, FVector Impulse, FVector DropOffset);
	void Search();
	void IncrementKillCount(UHealthComponentBase* HealthComponent);
	void DropResource(UResourceData* Data, float Size, FVector Impulse, FVector DropOffset);
};

// Class FSD.Maggot
// Size: 0x380 (Inherited: 0x378)
struct AMaggot : ADeepPathfinderCharacter {
	USimpleHealthComponent* HealthComponent; // 0x378(0x08)
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
// Size: 0x180 (Inherited: 0x30)
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
// Size: 0xf8 (Inherited: 0xb0)
struct UCharacterStateComponent : UActorComponent {
	char StateId; // 0xb0(0x01)
	APlayerCharacter* Character; // 0xb8(0x08)
	UDialogDataAsset* EnterStateShout; // 0xc0(0x08)
	UDialogDataAsset* ExitStateShout; // 0xc8(0x08)
	UDialogDataAsset* AttentionShout; // 0xd0(0x08)
	UPlayerMovementComponent* PlayerMovement; // 0xd8(0x08)

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
// Size: 0x1f8 (Inherited: 0xb0)
struct UCharacterUseComponent : UActorComponent {
	FMulticastInlineDelegate OnDepositingBegin; // 0xb0(0x10)
	FMulticastInlineDelegate OnDepositingEnd; // 0xc0(0x10)
	FMulticastInlineDelegate OnBeginHoveringEvent; // 0xd0(0x10)
	FMulticastInlineDelegate OnEndHoveringEvent; // 0xe0(0x10)
	FMulticastInlineDelegate OnBeginUsingEvent; // 0xf0(0x10)
	FMulticastInlineDelegate OnEndUsingEvent; // 0x100(0x10)
	FMulticastInlineDelegate OnBeginUseNoUsable; // 0x110(0x10)
	FMulticastInlineDelegate OnEndUseNoUsable; // 0x120(0x10)
	UUsableComponentBase* ActiveUsablee; // 0x130(0x08)
	UUsableComponentBase* HoveringUsable; // 0x138(0x08)
	USceneComponent* HoveringUsableCollider; // 0x140(0x08)
	USceneComponent* ActiveUsableCollider; // 0x148(0x08)
	USphereComponent* UseCollider; // 0x150(0x08)
	USoundBase* AudioBeginDepositing; // 0x158(0x08)
	USoundBase* AudioEndDepositing; // 0x160(0x08)
	float UseDistance; // 0x168(0x04)
	enum class EUseRestriction UseRestriction; // 0x16d(0x01)
	APlayerCharacter* Character; // 0x170(0x08)
	TMap<UUsableComponentBase*, float> UseCooldownTracker; // 0x1a8(0x50)

	void Server_SetCanUse(enum class EUseRestriction UseRestriction);
	void Server_EndUse();
	void Server_BeginUse(UUsableComponentBase* Usable, USceneComponent* UsableCollider);
	void OnRep_ActiveUsablee(UUsableComponentBase* lastUsable);
	void OnCharacterStateChanged(enum class ECharacterState NewState);
	bool IsLookingAtUsable();
	bool IsLookingAtDepositable();
	float GetUseProgress();
	AActor* GetLookingAtActor();
	bool GetIsUsing();
	bool GetIsDepositing();
	void All_PlaySingleUse(UUsableComponentBase* Usable);
	void AddCustomUsableComponent(UUsableComponentBase* Usable, enum class ECustomUsableType eType);
};

// Class FSD.CharacterVanityComponent
// Size: 0x1d0 (Inherited: 0xb0)
struct UCharacterVanityComponent : UActorComponent {
	UCharacterVanityItems* AvailableVanityItems; // 0xb8(0x08)
	UBeardColorVanityItem* ShownBeardColor; // 0xc0(0x08)
	UMaterialInterface* ArmorMaterial; // 0xc8(0x08)
	UMaterialInstanceDynamic* DynamicSkinMaterial; // 0xd0(0x08)
	enum class EHeadVanityType HeadVanityType; // 0xd8(0x01)
	TArray<UVanityItem*> EquippedVanity; // 0xe0(0x10)
	UMaterialInterface* SkinMaterial; // 0xf0(0x08)
	TArray<FTattooArmorItem> Tattoos; // 0xf8(0x10)
	TArray<UMaterialInterface*> CachedMaterials; // 0x108(0x10)
	TMap<enum class EVanitySlot, USkeletalMeshComponent*> VanityMeshes; // 0x170(0x50)

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
// Size: 0x728 (Inherited: 0x690)
struct AChargedWeapon : AAmmoDrivenWeapon {
	FMulticastInlineDelegate OnChargeChanged; // 0x690(0x10)
	FMulticastInlineDelegate OnHeatChanged; // 0x6a0(0x10)
	UAnimMontage* FP_OverheatAnim; // 0x6b8(0x08)
	UAnimMontage* FP_ChargeupMontage; // 0x6c0(0x08)
	UParticleSystem* ChargeupParticles; // 0x6c8(0x08)
	UParticleSystemComponent* ChargeupParticleInstance; // 0x6d0(0x08)
	UFXSystemAsset* ChargeupFireMuzzleFlash; // 0x6d8(0x08)
	USoundCue* NormalFiresound; // 0x6e0(0x08)
	USoundCue* FullyChargedFireSound; // 0x6e8(0x08)
	float ChargeSpeed; // 0x6f0(0x04)
	bool Charging; // 0x6f4(0x01)
	float ChargeProgress; // 0x6f8(0x04)
	int32_t ShotCostAtBelowFullCharge; // 0x6fc(0x04)
	int32_t ShotCostAtFullCharge; // 0x700(0x04)
	bool ChargedShotsOnly; // 0x704(0x01)
	bool AutoFireWhenOverheated; // 0x705(0x01)
	float TotalHeat; // 0x708(0x04)
	float CoolingRate; // 0x710(0x04)
	float HeatPerSecondWhileCharging; // 0x714(0x04)
	float HeatPerSecondWhenCharged; // 0x718(0x04)
	float HeatPerNormalShot; // 0x71c(0x04)
	float HeatPerChargedShot; // 0x720(0x04)

	void SetOverheated(bool isOverheated);
	void Server_SetIsCharging(bool isChargingValue);
	void RecieveChargeProgressChanged(float NewChargeProgress);
	void ReceiveOverheatedChanged(bool isOverheated);
	bool GetIsCharging();
};

// Class FSD.ChargedWeaponAnimInstance
// Size: 0x290 (Inherited: 0x270)
struct UChargedWeaponAnimInstance : UAnimInstance {
	bool IsCharging; // 0x268(0x01)
	float ChargeupPlayRate; // 0x26c(0x04)
	float ChargeupPlayRateSpeedChange; // 0x270(0x04)
	float ChargedownPlayRateSpeedChange; // 0x274(0x04)
	float MaxChargeupPlayRate; // 0x278(0x04)
	AChargedWeapon* Weapon; // 0x280(0x08)
};

// Class FSD.ProjectileBase
// Size: 0x2a8 (Inherited: 0x220)
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
	enum class EOnProjectileImpactBehaviourEnum EOnImpactBehaviour; // 0x290(0x04)

	UTerrainMaterial* TryGetTerrainMaterial();
	void StopMovement();
	void OnRep_ProjectileImpact();
	void OnRep_IsDorment(bool wasDorment);
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
};

// Class FSD.Projectile
// Size: 0x2f0 (Inherited: 0x2a8)
struct AProjectile : AProjectileBase {
	FProjectileState State; // 0x2a8(0x28)
	bool UseArmorDamageBoneCheck; // 0x2d1(0x01)
	TArray<AActor*> IgnoreActorClasses; // 0x2d8(0x10)
	UProjectileMovementComponent* MovementComponent; // 0x2e8(0x08)

	AProjectileBase* SpawnProjectile(UObject* WorldContextObject, AProjectileBase* projectileClass, APawn* projectileOwner, FVector Origin, FRotator velocityDirection);
	AProjectileBase* SpawnBallisticProjectile(UObject* WorldContextObject, AProjectile* projectileClass, APawn* projectileOwner, FVector Origin, FVector Velocity);
	void SetHomingTargetComponent(USceneComponent* HomingTargetComponent, float Delay);
	void OnRep_State(FProjectileState oldState);
	void OnImpact(FHitResult HitResult);
	void OnBounce(FHitResult ImpactResult, FVector ImpactVelocity);
	UFSDPhysicalMaterial* FindBoneIndexFromArmor(FHitResult HitResult, int32_t outBoneIndex);
	void ClearMovementComponent();
};

// Class FSD.ChargedProjectile
// Size: 0x2f8 (Inherited: 0x2f0)
struct AChargedProjectile : AProjectile {
	bool ExplodesWhenDead; // 0x2f0(0x01)
	bool PersistentExplosion; // 0x2f1(0x01)
	bool AoEDamageInFlight; // 0x2f2(0x01)
	float DirectDamageReduction; // 0x2f4(0x04)

	void OnAoEDamageEnabled();
};

// Class FSD.ChromaComponent
// Size: 0x180 (Inherited: 0xb0)
struct UChromaComponent : UActorComponent {
	FLinearColor HealthBarColor; // 0xb0(0x10)
	FLinearColor DamageEffectColor; // 0xc0(0x10)
	FLinearColor DownedEffectColor; // 0xd0(0x10)
	FLinearColor ShieldBarColor; // 0xe0(0x10)
	FLinearColor ShieldEffectColor; // 0xf0(0x10)
	FLinearColor WeaponColor; // 0x100(0x10)
	FLinearColor WeaponEquipedColor; // 0x110(0x10)
	FLinearColor GrenadeColor; // 0x120(0x10)
	FLinearColor WASDColor; // 0x130(0x10)
	FLinearColor RessuplyColor; // 0x140(0x10)
	FLinearColor ReloadColor; // 0x150(0x10)
	enum class EFSDChromaEffect ActiveEffect; // 0x160(0x01)
	float EffectDuration; // 0x164(0x04)
	uint32_t EffectSeed; // 0x168(0x04)

	void TriggerEffect(enum class EFSDChromaEffect effect);
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
	TArray<UDebrisBase*> Debris; // 0x100(0x10)
	bool UseTerrainPlacement; // 0x110(0x01)
	TArray<TSoftClassPtr<UObject>> CollectableClasses; // 0x118(0x10)
	TArray<AActor*> CollectableClassesLoaded; // 0x128(0x10)
};

// Class FSD.CharacterShoutsData
// Size: 0xe0 (Inherited: 0x30)
struct UCharacterShoutsData : UDataAsset {
	FCharacterShouts Shouts; // 0x30(0xb0)
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
	void ServerMissionShout(UDialogDataAsset* Shout, bool bPriority);
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
	FGuid SavegameID; // 0x34(0x10)
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
// Size: 0xb8 (Inherited: 0x38)
struct UControllerIconSettings : UDeveloperSettings {
	FInputTranslationTable InputTranslationTable; // 0x38(0x50)
	TArray<FActionIconMapping> Xbox_KeyIcons; // 0x88(0x10)
	TArray<FActionIconMapping> Playstation_KeyIcons; // 0x98(0x10)
	TArray<FActionIconMapping> MouseKeyboard_KeyIcons; // 0xa8(0x10)

	bool FindMouseKeyboardKeyIcon(FKey Key, FActionIconMapping KeyIcon);
	bool FindKeyIcon(FKey Key, FActionIconMapping KeyIcon);
	bool FindControllerKeyIcon(FKey Key, FActionIconMapping KeyIcon);
};

// Class FSD.EnemyDeepPathfinderCharacter
// Size: 0x398 (Inherited: 0x378)
struct AEnemyDeepPathfinderCharacter : ADeepPathfinderCharacter {
	UEnemyHealthComponent* HealthComponent; // 0x380(0x08)
	FQueuedMontage QueuedMontage; // 0x388(0x10)

	void OnRep_QueuedMontage();
};

// Class FSD.ConvertedRobot
// Size: 0x6b8 (Inherited: 0x398)
struct AConvertedRobot : AEnemyDeepPathfinderCharacter {
	UEnemyComponent* EnemyComponent; // 0x3a0(0x08)
	UPawnStatsComponent* PawnStats; // 0x3a8(0x08)
	UOutlineComponent* outline; // 0x3b0(0x08)
	UHitscanComponent* HitScan; // 0x3b8(0x08)
	USingleUsableComponent* Usable; // 0x3c0(0x08)
	USceneComponent* TurretRoot; // 0x3c8(0x08)
	USkeletalMeshComponent* TurretMesh; // 0x3d0(0x08)
	UPointLightComponent* MuzzleFlash; // 0x3d8(0x08)
	USpotLightComponent* SpotLight; // 0x3e0(0x08)
	UStaticMeshComponent* LightCone; // 0x3e8(0x08)
	UStaticMeshComponent* LaserBeam; // 0x3f0(0x08)
	USceneComponent* ShieldRoot; // 0x3f8(0x08)
	UStaticMeshComponent* InnerShield; // 0x400(0x08)
	UStaticMeshComponent* OuterShield; // 0x408(0x08)
	UAudioComponent* PulsatingSoundComp; // 0x410(0x08)
	UAudioComponent* LaserWarningSound; // 0x418(0x08)
	UDamageComponent* Damage; // 0x420(0x08)
	FMulticastInlineDelegate OnStateChanged; // 0x428(0x10)
	FMulticastInlineDelegate OnShieldChanged; // 0x438(0x10)
	FMulticastInlineDelegate OnIntroductionStart; // 0x448(0x10)
	bool ForceSit; // 0x468(0x01)
	USoundBase* LaserSound; // 0x470(0x08)
	USoundBase* LastPowerDownSound; // 0x478(0x08)
	USoundBase* PowerUpSound; // 0x480(0x08)
	TWeakObjectPtr<UAudioComponent> LaserSoundComp; // 0x488(0x08)
	float IntroductionTime; // 0x4a8(0x04)
	bool IsIntroducing; // 0x4ac(0x01)
	bool IntroductionDone; // 0x4ad(0x01)
	bool IsGrowingShield; // 0x4ae(0x01)
	float AimDownwardsOffset; // 0x4b0(0x04)
	float BigShieldScale; // 0x4b4(0x04)
	float SmallShieldScale; // 0x4b8(0x04)
	float ShieldGrowthRate; // 0x4bc(0x04)
	float LerpExp; // 0x4c0(0x04)
	float MinimumShieldSize; // 0x4c4(0x04)
	float TargetShieldSize; // 0x4c8(0x04)
	float IdleRotationSpeed; // 0x4cc(0x04)
	float LaserScaleRate; // 0x4d0(0x04)
	float MaxSearchAngle; // 0x4d8(0x04)
	bool DoSpecialWhenEnemy; // 0x4f8(0x01)
	bool DoSpecialWhenFriendly; // 0x4f9(0x01)
	bool PerfectTrackingWhenEnemy; // 0x4fa(0x01)
	bool PerfectTrackingWhenFriendly; // 0x4fb(0x01)
	bool ReplaceBurstAttack; // 0x4fe(0x01)
	USoundBase* GrenadeFireSound; // 0x500(0x08)
	UParticleSystem* GrenadeFireParticle; // 0x508(0x08)
	bool IsFiring; // 0x510(0x01)
	float TurretSpinSpeed; // 0x514(0x04)
	TArray<AActor*> Parasites; // 0x518(0x10)
	int32_t SpawnParasiteNumer; // 0x528(0x04)
	int32_t MaxParasiteSlots; // 0x52c(0x04)
	float ChanceToSpawnParasite; // 0x530(0x04)
	AParasiteEnemy* ParasiteClass; // 0x538(0x08)
	bool SpinTurret; // 0x546(0x01)
	AProjectile* SpecialAttackProjectile; // 0x558(0x08)
	AProjectile* FriendlyProjectile; // 0x560(0x08)
	bool HasLockedOn; // 0x574(0x01)
	USoundBase* TargetingSound; // 0x578(0x08)
	UAnimSequenceBase* GrenadeShotAnimation; // 0x580(0x08)
	float LockonTime; // 0x588(0x04)
	USoundCue* ShootSound; // 0x590(0x08)
	float ShootSoundFadeout; // 0x598(0x04)
	UAudioComponent* ShootSoundInstance; // 0x5a0(0x08)
	USoundCue* ShootSoundTail; // 0x5a8(0x08)
	UParticleSystem* MuzzleEffect; // 0x5b0(0x08)
	UParticleSystem* TracerEffect; // 0x5b8(0x08)
	FRuntimeFloatCurve MuzzleLightCurve; // 0x5c0(0x88)
	float GunRange; // 0x650(0x04)
	float FireRate; // 0x654(0x04)
	float GrenadeFireRate; // 0x658(0x04)
	float BurstCooldown; // 0x660(0x04)
	int32_t MinBurst; // 0x668(0x04)
	int32_t MaxBurst; // 0x66c(0x04)
	float TurretLerpSpeed; // 0x670(0x04)
	float DamageWhenFriendly; // 0x674(0x04)
	float FriendlyFriendlyFireMultiplier; // 0x678(0x04)
	bool StartedSpecialAttack; // 0x680(0x01)
	enum class ERobotState TeamState; // 0x681(0x01)
	bool IsWalking; // 0x690(0x01)
	bool IsDoingSpecialAttack; // 0x691(0x01)
	UStaticMeshComponent* TurretRotation; // 0x698(0x08)
	AActor* CurrentTarget; // 0x6a8(0x08)

	void UpdateGunsInsideTerrain();
	void StartBossFight();
	void ParasiteDamaged(float aDamage);
	void OnWeaponsFired(FVector aHitResult);
	void OnUsed(APlayerCharacter* aUser);
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
};

// Class FSD.CrosshairAggregator
// Size: 0xe8 (Inherited: 0xc8)
struct UCrosshairAggregator : UItemAggregator {
	FMulticastInlineDelegate OnCrosshairCreated; // 0xc8(0x10)
	UUserWidget* CrosshairWidget; // 0xd8(0x08)
	UUserWidget* CrossHairType; // 0xe0(0x08)

	void SetCrosshair(UUserWidget* Widget);
	UUserWidget* GetOrCreateCrosshair();
};

// Class FSD.CryosprayItem
// Size: 0x818 (Inherited: 0x690)
struct ACryosprayItem : AAmmoDrivenWeapon {
	UProjectileLauncherComponent* ProjectileLauncher; // 0x690(0x08)
	UDamageComponent* DamageComponent; // 0x698(0x08)
	UStickyFlameSpawner* StickyFlames; // 0x6a0(0x08)
	UDamageComponent* AoEColdDamageComponent; // 0x6a8(0x08)
	UMotionAudioController* VelocityAudio; // 0x6b0(0x08)
	UParticleSystemComponent* FlameParticleComponent; // 0x6b8(0x08)
	bool PressurizedProjectileEnabled; // 0x6c0(0x01)
	float PressurizedProjectileDelay; // 0x6c4(0x04)
	int32_t PressurizeProjectileFullCost; // 0x6c8(0x04)
	UParticleSystem* ChargeupParticles; // 0x6d8(0x08)
	UParticleSystemComponent* ChargeupParticleInstance; // 0x6e0(0x08)
	FDecalData ImpactDecal; // 0x6e8(0x18)
	float DecalDelay; // 0x700(0x04)
	UParticleSystem* ImpactParticles; // 0x708(0x08)
	UParticleSystemComponent* ImpactParticleInstance; // 0x710(0x08)
	TArray<FName> FlameParameterNames; // 0x718(0x10)
	float DamageSphereRadius; // 0x728(0x04)
	float MaxFlameDistance; // 0x72c(0x04)
	float FlameGrowthPerSecond; // 0x730(0x04)
	float friendlyFireModifier; // 0x734(0x04)
	float ChargeupTime; // 0x738(0x04)
	float ChargeDownTime; // 0x73c(0x04)
	bool IsCharging; // 0x741(0x01)
	float ChargeProgress; // 0x744(0x04)
	bool bRepressurerising; // 0x748(0x01)
	float RepressurerisingDoneAtPct; // 0x74c(0x04)
	float ChargeUpFadeOutTime; // 0x750(0x04)
	UAudioComponent* ChargeUpAudioComponent; // 0x758(0x08)
	float PressureTime; // 0x760(0x04)
	float PressureDropMultiplier; // 0x764(0x04)
	float PressureGainMultiplier; // 0x768(0x04)
	float CurrentPressure; // 0x76c(0x04)
	float RePressureDuration; // 0x770(0x04)
	float RePressureProgress; // 0x774(0x04)
	TArray<UItemUpgrade*> Upgrades; // 0x778(0x10)
	bool LongReachEnabled; // 0x788(0x01)
	bool AoEColdEnabled; // 0x798(0x01)

	void ServerDoDamage(FVector_NetQuantize Start, FVector_NetQuantize End, char power);
	void Server_TriggerAoECold();
	void Server_PreLaunchProjectile();
	void ReceiveRepressurisingChanged(bool Value);
	void OnTargetDamaged(UHealthComponentBase* Health, float amount, UFSDPhysicalMaterial* PhysicalMaterial);
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
// Size: 0x30 (Inherited: 0x30)
struct UDamageBonusBase : UDataAsset {

	UDamageBonusBase* AddDamageBonusToComponent(UDamageBonusBase* damageBonusClass, UDamageComponent* DamageComponent);
};

// Class FSD.FlatDamageBonus
// Size: 0x40 (Inherited: 0x30)
struct UFlatDamageBonus : UDamageBonusBase {
	float Damage; // 0x30(0x04)
	UDamageClass* DamageClass; // 0x38(0x08)
};

// Class FSD.TargetSpecificDamageBonus
// Size: 0x88 (Inherited: 0x30)
struct UTargetSpecificDamageBonus : UDamageBonusBase {
	float Bonus; // 0x30(0x04)
	FGameplayTagQuery tagQuery; // 0x38(0x48)
	FName Key; // 0x80(0x08)
};

// Class FSD.DamageConversionBonus
// Size: 0x40 (Inherited: 0x30)
struct UDamageConversionBonus : UDamageBonusBase {
	UDamageClass* DamageClass; // 0x30(0x08)
	float ConversionPercentage; // 0x38(0x04)
	bool DamageIsAdded; // 0x3c(0x01)
};

// Class FSD.TargetStateDamageBonus
// Size: 0x40 (Inherited: 0x30)
struct UTargetStateDamageBonus : UDamageBonusBase {
	enum class ETargetStateDamageBonusType TargetState; // 0x30(0x01)
	float Bonus; // 0x34(0x04)
	UDamageClass* DamageClass; // 0x38(0x08)
};

// Class FSD.StatusDamageBonus
// Size: 0x50 (Inherited: 0x30)
struct UStatusDamageBonus : UDamageBonusBase {
	TArray<UStatusEffect*> StatusEffects; // 0x30(0x10)
	float Bonus; // 0x40(0x04)
	UDamageClass* DamageClass; // 0x48(0x08)
};

// Class FSD.StatusAndStateDamageBonus
// Size: 0x60 (Inherited: 0x30)
struct UStatusAndStateDamageBonus : UDamageBonusBase {
	TArray<UStatusEffect*> StatusEffects; // 0x30(0x10)
	TArray<enum class ETargetStateDamageBonusType> TargetStates; // 0x40(0x10)
	float Bonus; // 0x50(0x04)
	UDamageClass* DamageClass; // 0x58(0x08)
};

// Class FSD.PushStatusEffectDamageBonus
// Size: 0x50 (Inherited: 0x30)
struct UPushStatusEffectDamageBonus : UDamageBonusBase {
	UStatusEffect* StatusEffect; // 0x40(0x08)
	float Chance; // 0x48(0x04)
};

// Class FSD.FearAoEBonus
// Size: 0x38 (Inherited: 0x30)
struct UFearAoEBonus : UDamageBonusBase {
	float FearFactor; // 0x30(0x04)
	float Range; // 0x34(0x04)
};

// Class FSD.AmmoLeftDamageBonus
// Size: 0x50 (Inherited: 0x40)
struct UAmmoLeftDamageBonus : UFlatDamageBonus {
	UCurveFloat* AmmoDamageCurve; // 0x40(0x08)
};

// Class FSD.AmmoUsedDamageBonus
// Size: 0x38 (Inherited: 0x30)
struct UAmmoUsedDamageBonus : UDamageBonusBase {
	float DamageBonusPerRoundFired; // 0x30(0x04)
};

// Class FSD.RandomDamageBonus
// Size: 0x38 (Inherited: 0x30)
struct URandomDamageBonus : UDamageBonusBase {
	FRandRange RandomDamageRange; // 0x30(0x08)
};

// Class FSD.PercentDamageBonus
// Size: 0x38 (Inherited: 0x30)
struct UPercentDamageBonus : UDamageBonusBase {
	float DamageMultiplier; // 0x30(0x04)
};

// Class FSD.GatlingHotShellsBonus
// Size: 0x40 (Inherited: 0x40)
struct UGatlingHotShellsBonus : UDamageConversionBonus {
};

// Class FSD.BreakIceBonus
// Size: 0x38 (Inherited: 0x30)
struct UBreakIceBonus : UDamageBonusBase {
	float DeFrostAmount; // 0x30(0x04)
};

// Class FSD.KnockbackDamageBonus
// Size: 0x38 (Inherited: 0x30)
struct UKnockbackDamageBonus : UDamageBonusBase {
	float KnockBackHorizontalForce; // 0x30(0x04)
	float KnockBackVerticalForce; // 0x34(0x04)
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
// Size: 0x160 (Inherited: 0xb0)
struct UDamageComponent : UActorComponent {
	FMulticastInlineDelegate OnTargetKilledEvent; // 0xb0(0x10)
	FMulticastInlineDelegate OnTargetDamagedEvent; // 0xc0(0x10)
	FMulticastInlineDelegate OnNoTargetHitEvent; // 0xd0(0x10)
	enum class EDamageComponentType DamageComponentType; // 0xe4(0x01)
	float Damage; // 0xe8(0x04)
	float ArmorDamageMultiplier; // 0xec(0x04)
	UDamageClass* DamageClass; // 0xf0(0x08)
	float WeakpointDamageMultiplier; // 0xf8(0x04)
	float FrozenDamageBonusScale; // 0xfc(0x04)
	float friendlyFireModifier; // 0x100(0x04)
	FGameplayTag FriendlyFireTag; // 0x104(0x08)
	bool StaggerOnlyOnWeakpointHit; // 0x10c(0x01)
	float StaggerChance; // 0x110(0x04)
	float StaggerDuration; // 0x114(0x04)
	float FearFactor; // 0x118(0x04)
	TArray<UDamageBonusBase*> DamageBonuses; // 0x120(0x10)
	bool UseAreaOfEffect; // 0x130(0x01)
	float RadialDamage; // 0x134(0x04)
	UDamageClass* RadialDamageClass; // 0x138(0x08)
	float MinDamagePct; // 0x140(0x04)
	float DamageRadius; // 0x144(0x04)
	float MaxDamageRadius; // 0x148(0x04)

	UDamageComponent* GetDamageComponentCDO(UDamageComponent* DamageComponent);
	float GetDamage();
	void DamageTarget(AActor* Target, FVector Location, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysMat);
	void DamageArmor_Server(AActor* Target, int32_t BoneIndex, FVector impactLocation);
	void DamageArmor_All(AActor* Target, int32_t BoneIndex);
};

// Class FSD.DamageSettings
// Size: 0x100 (Inherited: 0x30)
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
	TArray<FDecalData> ImpactDecals; // 0x68(0x10)
	FRuntimeFloatCurve ArmorToArmorDamageBreakingCurve; // 0x78(0x88)
};

// Class FSD.DamageSubsystem
// Size: 0x40 (Inherited: 0x30)
struct UDamageSubsystem : UGameInstanceSubsystem {
	TArray<FDamageSubsystemItem> Items; // 0x30(0x10)
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
// Size: 0x100 (Inherited: 0xf8)
struct UDeadStateComponent : UCharacterStateComponent {
	float RespawnDelay; // 0xf8(0x04)
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
	FIRandRange amount; // 0x220(0x08)
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
// Size: 0x250 (Inherited: 0x1f8)
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
	float Range; // 0x1f8(0x04)
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
	void SetVisibleToScanner(FVector Center, FVector Range);
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
	void GetAllTerrainActorsAroundPoint(FVector Center, FVector Range, TArray<AActor*> TerrainActors);
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
	FGuid SavegameID; // 0x3c(0x10)
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

	enum class ESchematicType GetStageRewardType(int32_t StageIndex);
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
	bool HasCompletedStage(int32_t StageIndex);
	FDeepDiveRewardItem GetGivenRewardAtStage(int32_t StageIndex);
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
	FHandleRotationOptions HandleRotationOptions; // 0x36e(0x01)
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
	void OnDefensePointActivated(APlayerCharacter* Player);
	void DefenseStart();
	void DefenseFail();
	void DefenseComplete();
};

// Class FSD.DefenseObjective
// Size: 0x180 (Inherited: 0x150)
struct UDefenseObjective : UObjective {
	int32_t DefensePoints; // 0x150(0x04)
	int32_t PointsDefended; // 0x154(0x04)
	TArray<TSoftClassPtr<UObject>> ObjectiveDefenseClasses; // 0x158(0x10)
	TArray<ADefensePointActor*> ActiveObjectiveDefenseActors; // 0x168(0x10)
	UDebrisPositioning* DebrisPositioning; // 0x178(0x08)

	void PointDefended();
	void OnRep_PointsRepaired();
	void OnDefensePointsSpawned();
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
	void OnDetPackPickedUp(APlayerCharacter* User);
	void OnDetPackDeath(UHealthComponentBase* HealthComponent);
};

// Class FSD.DetPackItem
// Size: 0x440 (Inherited: 0x368)
struct ADetPackItem : AAnimatedItem {
	ADetPack* DetPackClass; // 0x378(0x08)
	AItem* LoadoutProxy; // 0x380(0x08)
	UAnimMontage* FPThrowMontage; // 0x388(0x08)
	UAnimMontage* TPThrowMontage; // 0x390(0x08)
	UAnimMontage* FP_DetonateAnim; // 0x398(0x08)
	UAnimMontage* WPN_DetonateAnim; // 0x3a0(0x08)
	UAnimMontage* FP_EquipDetonatorAnimation; // 0x3a8(0x08)
	UAnimMontage* WPN_EquipDetonatorAnimation; // 0x3b0(0x08)
	USkeletalMeshComponent* DetonatorFPMesh; // 0x3b8(0x08)
	USkeletalMeshComponent* DetonatorTPMesh; // 0x3c0(0x08)
	UForceFeedbackEffect* DetonatorTriggerForceFeedback; // 0x3c8(0x08)
	UCapacityHoldingItemAggregator* Capacity; // 0x3d0(0x08)
	float SupplyStatusWeight; // 0x3d8(0x04)
	float ThrowVelocity; // 0x3dc(0x04)
	float EnheiritOwnerVelocityScale; // 0x3e0(0x04)
	float ThrowAngle; // 0x3e4(0x04)
	float CooldownAfterThrow; // 0x3e8(0x04)
	float CooldownAfterDetonation; // 0x3ec(0x04)
	float ThrowDelay; // 0x3f0(0x04)
	float ThrowZOffset; // 0x3f4(0x04)
	UDialogDataAsset* ShoutDetPackPlaced; // 0x3f8(0x08)
	UDialogDataAsset* ShoutOutOfAmmo; // 0x400(0x08)
	float CooldownLeft; // 0x40c(0x04)
	TArray<ADetPack*> ThrownPacks; // 0x410(0x10)
	TArray<UItemUpgrade*> DetPackUpgrades; // 0x420(0x10)
	bool IsDetonatorOut; // 0x43a(0x01)
	bool HasThrownPack; // 0x43b(0x01)

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
// Size: 0x60 (Inherited: 0x30)
struct UDialogDataAsset : UDataAsset {
	bool Enabled; // 0x30(0x01)
	bool AudioOnly; // 0x31(0x01)
	float ShoutDelay; // 0x34(0x04)
	float ShoutCoolDown; // 0x38(0x04)
	float ShoutChance; // 0x3c(0x04)
	TArray<FDialogStruct> Entries; // 0x40(0x10)
	TArray<int32_t> ShuffledIndices; // 0x50(0x10)

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

// Class FSD.MULE
// Size: 0x390 (Inherited: 0x378)
struct AMULE : ADeepPathfinderCharacter {
	UHealthComponent* HealthComponent; // 0x378(0x08)
	USimpleObjectInfoComponent* ObjectInfo; // 0x380(0x08)
	bool IsDown; // 0x388(0x01)

	void SetIsDown(bool IsDown);
	void SetControlledByDropShip(bool Control);
	void OnRep_IsDown();
};

// Class FSD.DonkeyCharacter
// Size: 0x3b0 (Inherited: 0x390)
struct ADonkeyCharacter : AMULE {
	UResourceBank* ResourceBank; // 0x390(0x08)
	UOutlineComponent* OutlineComponent; // 0x398(0x08)
	FMulticastInlineDelegate OnReachedDropShip; // 0x3a0(0x10)

	void SetOpenForDeposit(bool Open);
	void SetGotoDropShip(FVector Location);
	void EnableButton();
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

// Class FSD.MiniMule
// Size: 0x3a0 (Inherited: 0x390)
struct AMiniMule : AMULE {
	TArray<AGem*> LostLegs; // 0x390(0x10)

	void SetLegsVisibleOnScanner();
	void OnLegsSetVisible();
	TArray<AGem*> FindLegsInLevelSortedByDistance();
};

// Class FSD.DoubleDrillAggregator
// Size: 0x148 (Inherited: 0x140)
struct UDoubleDrillAggregator : UCapacityBasedItemAggregator {
};

// Class FSD.DualAnimatedItem
// Size: 0x370 (Inherited: 0x318)
struct ADualAnimatedItem : AItem {
	UAnimInstance* FPAnimInstance; // 0x318(0x08)
	UPlayerAnimInstance* TPAnimInstance; // 0x320(0x08)
	USkeletalMeshComponent* FPRMesh; // 0x328(0x08)
	USkeletalMeshComponent* FPLMesh; // 0x330(0x08)
	USkeletalMeshComponent* TPRMesh; // 0x338(0x08)
	USkeletalMeshComponent* TPLMesh; // 0x340(0x08)
	UAnimMontage* FP_EquipAnimation; // 0x348(0x08)
	UAnimMontage* TP_EquipAnimation; // 0x350(0x08)
	float EquipDuration; // 0x358(0x04)
	UItemCharacterAnimationSet* CharacterAnimationSet; // 0x360(0x08)

	USkeletalMeshComponent* GetRItemMesh();
	USkeletalMeshComponent* GetLItemMesh();
};

// Class FSD.DoubleDrillItem
// Size: 0x4a8 (Inherited: 0x370)
struct ADoubleDrillItem : ADualAnimatedItem {
	UFirstPersonParticleSystemComponent* FP_Left_DrillParticles; // 0x388(0x08)
	UFirstPersonParticleSystemComponent* FP_Right_DrillParticles; // 0x390(0x08)
	UDamageComponent* DamageComponent; // 0x398(0x08)
	UAudioComponent* AudioComponent; // 0x3a0(0x08)
	UDoubleDrillAggregator* Aggregator; // 0x3a8(0x08)
	UAnimMontage* FPMineMontage; // 0x3b0(0x08)
	UAnimMontage* TPMineMontage; // 0x3b8(0x08)
	UAnimMontage* FPOverheat; // 0x3c0(0x08)
	UAnimMontage* TPOverheat; // 0x3c8(0x08)
	UAnimMontage* FPGunsling; // 0x3d0(0x08)
	UAnimMontage* TPGunsling; // 0x3d8(0x08)
	FName MiningSpeedAudioParamterName; // 0x3e0(0x08)
	UParticleSystem* DrillParticles; // 0x3e8(0x08)
	UForceFeedbackEffect* DrillRumble; // 0x3f0(0x08)
	float BlockParticlesScaleFP; // 0x3f8(0x04)
	float BlockParticlesScaleTP; // 0x3fc(0x04)
	enum class EDoubleDrillState State; // 0x400(0x01)
	float MovementPenalty; // 0x404(0x04)
	float MiningRate; // 0x408(0x04)
	float HeatReductionPerKill; // 0x40c(0x04)
	FVector CarveSize; // 0x410(0x0c)
	float CarveNoise; // 0x41c(0x04)
	float CarverRayCastLength; // 0x420(0x04)
	float CarveTerrainDistanceCheck; // 0x424(0x04)
	float TimeToNextMine; // 0x428(0x04)
	float CurrentDrillSpeed; // 0x42c(0x04)
	float DamageDistance; // 0x430(0x04)
	float DamageRadius; // 0x434(0x04)
	float FriendlyDamageRadius; // 0x438(0x04)
	float DamageRate; // 0x43c(0x04)
	float Damage; // 0x440(0x04)
	float ArmorDamageMultiplier; // 0x444(0x04)
	UDamageClass* DamageClass; // 0x448(0x08)
	float friendlyFireModifier; // 0x450(0x04)
	float MaxFuel; // 0x454(0x04)
	float Fuel; // 0x458(0x04)
	float FuelUsePerDig; // 0x45c(0x04)
	float FuelUsePerMelee; // 0x460(0x04)
	float SupplyStatusWeight; // 0x464(0x04)
	UDialogDataAsset* ShoutOutOfFuel; // 0x468(0x08)
	TArray<FHitResult> HitCache; // 0x470(0x10)
	TArray<FDoubleDrillDamageItem> DamageCache; // 0x480(0x10)
	float DrillParticlesDuration; // 0x4a0(0x04)
	bool IsMining; // 0x4a4(0x01)
	bool IsGunslinging; // 0x4a5(0x01)

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
// Size: 0x140 (Inherited: 0xf8)
struct UDownedStateComponent : UCharacterStateComponent {
	FDeathIntroSettings Intro; // 0xf8(0x24)
	float DownedHealthLossPerSecond; // 0x11c(0x04)
	float TerrainRemovedFallThreshold; // 0x120(0x04)
	bool DownedBombActive; // 0x124(0x01)
	UDamageComponent* DownedBombDamage; // 0x128(0x08)
	FMulticastInlineDelegate OnEnableDownedBombUIEvent; // 0x130(0x10)

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
// Size: 0x370 (Inherited: 0x368)
struct ADrinkableItem : AAnimatedItem {
	UDrinkableDataAsset* DrinkableData; // 0x368(0x08)

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
// Size: 0x390 (Inherited: 0x378)
struct ADroneCharacter : ADeepPathfinderCharacter {
	UHealthComponent* HealthComponent; // 0x378(0x08)
	UOutlineComponent* OutlineComponent; // 0x380(0x08)
	USimpleObjectInfoComponent* ObjectInfo; // 0x388(0x08)
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
	float Range; // 0x260(0x04)
};

// Class FSD.DroneMiningToolBase
// Size: 0xe8 (Inherited: 0xb0)
struct UDroneMiningToolBase : UActorComponent {
	FMulticastInlineDelegate HitSomething; // 0xb0(0x10)
	float Range; // 0xd0(0x04)
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
	bool canUse; // 0x11d(0x01)

	void SyncedUsableUserCountChangedResponse(int32_t userCount);
	void SyncedUsableUsedResponse(APlayerCharacter* User);
	void SyncedUsableBeginUseResponse(APlayerCharacter* User);
	void SetUseDuration(float useDuration);
	void SetCanUse(bool canUse);
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
// Size: 0x6c8 (Inherited: 0x690)
struct ADualWieldWeapon : AAmmoDrivenWeapon {
	UFirstPersonSkeletalMeshComponent* FPMeshLeft; // 0x698(0x08)
	USkeletalMeshComponent* TPMeshLeft; // 0x6a0(0x08)
	UAnimMontage* WPN_Left_Reload; // 0x6a8(0x08)
	UAnimMontage* WPN_Left_TP_Reload; // 0x6b0(0x08)
	UFXSystemAsset* CasingParticlesLeft; // 0x6b8(0x08)
	FName MuzzleLeft; // 0x6c0(0x08)
};

// Class FSD.DualWieldAnimInstance
// Size: 0x270 (Inherited: 0x270)
struct UDualWieldAnimInstance : UAnimInstance {
};

// Class FSD.DualMachinePistols
// Size: 0x6d8 (Inherited: 0x6c8)
struct ADualMachinePistols : ADualWieldWeapon {
	UStatusEffect* EmptyClipStatusEffect; // 0x6c8(0x08)

	void Server_TriggerStatusEffect();
};

// Class FSD.DynamicReverbComponent
// Size: 0x100 (Inherited: 0xb0)
struct UDynamicReverbComponent : UActorComponent {
	float LargeCaveValue; // 0xb0(0x04)
	float MediumCaveValue; // 0xb4(0x04)
	float SmallCaveValue; // 0xb8(0x04)
	float FadeTime; // 0xbc(0x04)
	float Priority; // 0xc0(0x04)

	void TimerTriggered();
};

// Class FSD.ElectroBeam
// Size: 0x2b8 (Inherited: 0x220)
struct AElectroBeam : AActor {
	UCapsuleComponent* Collider; // 0x220(0x08)
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
// Size: 0x1f0 (Inherited: 0x150)
struct UEliminationObjective : UObjective {
	int32_t ObjectCount; // 0x150(0x04)
	UDebrisPositioning* Positioning; // 0x158(0x08)
	TArray<int32_t> ExcludeRoomIDs; // 0x160(0x10)
	TSoftClassPtr<UObject> ObjectToSpawn; // 0x170(0x28)
	UCaveInfluencer* CaveInfluencer; // 0x198(0x08)
	float DebrisRadius; // 0x1a0(0x04)
	TArray<UDebrisBase*> ObjectDebris; // 0x1a8(0x10)
	int32_t EnemiesKilled; // 0x1b8(0x04)
	int32_t EnemiesToKill; // 0x1bc(0x04)
	TArray<FEliminationDescriptors> TargetDescriptors; // 0x1c0(0x10)
	TArray<FEliminationDescriptors> TargetQueue; // 0x1d0(0x10)
	TArray<FEliminationTarget> ActiveEliminationTargets; // 0x1e0(0x10)

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
// Size: 0x158 (Inherited: 0xb0)
struct USimpleObjectInfoComponent : UObjectInfoComponent {
	FText InGameName; // 0xb0(0x18)
	FText InGameDescription; // 0xc8(0x18)
	UDialogDataAsset* LookAtShout; // 0xe0(0x08)
	UTexture2D* Icon; // 0xe8(0x08)
	bool bIsPingableByLaserpointer; // 0xf0(0x01)
	UActorContextWidget* ContextWidgetClass; // 0xf8(0x08)
	TMap<TWeakObjectPtr<USceneComponent>, FSimpleObjectInfoData> ComponentMap; // 0x100(0x50)
	UActorContextWidget* ContextWidget; // 0x150(0x08)

	void SetInGameName(FString GameName);
	void SetInGameDescription(FString GameDescription);
	void SetContextWidget(UActorContextWidget* InContextWidget);
	void AddComponentObjectInfo(USceneComponent* TargetComponent, FSimpleObjectInfoData Data);
};

// Class FSD.EnemyComponent
// Size: 0x190 (Inherited: 0x158)
struct UEnemyComponent : USimpleObjectInfoComponent {
	UEnemyFamily* Family; // 0x158(0x08)
	UDialogDataAsset* KillShout; // 0x160(0x08)
	UEnemyID* EnemyID; // 0x168(0x08)
	FString mixerName; // 0x170(0x10)
	FMulticastInlineDelegate OnMixerNameChange; // 0x180(0x10)

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
// Size: 0x270 (Inherited: 0xf8)
struct UEnemyControlStateComponent : UCharacterStateComponent {
	bool UseThirdPersonCam; // 0xf8(0x01)
	FControlEnemyState StateData; // 0x100(0x60)
	enum class EEnemyControlState ControlState; // 0x168(0x01)
	FQuat AngularVelocity; // 0x1a0(0x10)
	FQuat ControlRotation; // 0x1b0(0x10)

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

// Class FSD.EnemyDrone
// Size: 0x398 (Inherited: 0x398)
struct AEnemyDrone : AEnemyDeepPathfinderCharacter {
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

	float TakeRadialDamage(float damageAmount, FVector BlastCenter, float BlastRadius, float MaxDamageRadius, float MinDamagePct, AController* EventInstigator, AActor* DamageCauser, UPrimitiveComponent* HitComponent, UDamageClass* DamageClass);
	void TakeDamageSimple(float damageAmount, AActor* DamageCauser, UDamageClass* DamageClass);
	void SetHealthDirectly(float newHealthValue);
	void SetCanTakeDamage(bool canTakeDamage);
	void Kill(AActor* DamageCauser);
	bool IsDead();
	bool IsAlive();
	float Heal(float amount);
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
	bool SubHeathComponentsMustDieFirst; // 0x1bc(0x01)
	TArray<USubHealthComponent*> SubHealthComponents; // 0x1c0(0x10)
	bool InvulnerableToNonDefinedResistances; // 0x1d0(0x01)
	TMap<UPawnStat*, float> Resistances; // 0x1d8(0x50)
	bool AffectedByGlobalWeakpointDamageMultiplier; // 0x228(0x01)
	bool UseDormancy; // 0x229(0x01)
	UPawnStatsComponent* PawnStats; // 0x230(0x08)

	void ToggleCanTakeDamage();
	void Resupply(float percentage);
	void OnRep_Damage(float oldDamage);
	void HealArmor(float amount);
	bool HasArmor();
	float GetMaxArmor();
	enum class EHealthbarType GetHealthbarType();
	void GetCurrentHealthSegment(int32_t Segment, float segmentHealth, float segmentHealthPercent);
	float GetArmorPct();
	float GetArmor();
	void Client_ReceivedHit(float amount, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
};

// Class FSD.EnemyHealthComponent
// Size: 0x288 (Inherited: 0x248)
struct UEnemyHealthComponent : UHealthComponent {
	FVector KillImpactNormal; // 0x248(0x0c)
	bool IsBulletSpongeEnemy; // 0x254(0x01)
	enum class EEnemyHealthScaling EnemyHealthScaling; // 0x255(0x01)
	float Courage; // 0x258(0x04)
	float MaxHealth; // 0x25c(0x04)
	bool bShowHealthBar; // 0x264(0x01)
	FVector HealthBarOffsetWorld; // 0x268(0x0c)
	bool bIsBossFight; // 0x274(0x01)
	int32_t BossFightHealthBarSegments; // 0x278(0x04)
	bool bRegisterEnemy; // 0x27c(0x01)
	float MixerBuff; // 0x280(0x04)

	void SetMaxHealth(float newMaxHealth);
	void OnSubArmorDamaged(float amount);
	void IncrementKillCount();
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
// Size: 0x148 (Inherited: 0x30)
struct UEnemySettings : UDataAsset {
	TArray<UEnemyDescriptor*> EnemiesAllowedInWaves; // 0x30(0x10)
	FRandRange EnemyWaveRange; // 0x40(0x08)
	TMap<UEnemyID*, UEnemyDescriptor*> EnemyDescriptor; // 0x48(0x50)
	FGameplayTagQuery EliteAllowQuery; // 0x98(0x48)
	TMap<UEnemyDescriptor*, FEliteEnemyEntry> HeroEnemies; // 0xe0(0x50)
	FRandFloatInterval HeroEnemySpawn; // 0x130(0x10)
	int32_t EliteRequiredCampaignProgress; // 0x140(0x04)
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
// Size: 0x140 (Inherited: 0xc8)
struct UEnemyTemperatureComponent : UTemperatureComponent {
	float UpdateTime; // 0xc8(0x04)
	bool DieIfFrozen; // 0xcc(0x01)
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
	UPawnStatsComponent* PawnStats; // 0x100(0x08)
	int32_t WarmingCooldown; // 0x120(0x04)

	void TimerCallback();
	void OnDeath(UHealthComponentBase* HealthComponent);
	void DoTemperatureShock(UStatusEffectsComponent* Status);
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
// Size: 0x310 (Inherited: 0x150)
struct UEscortObjective : UObjective {
	FMulticastInlineDelegate OnProgressUpdated; // 0x150(0x10)
	FMulticastInlineDelegate OnShellBreakPauseChange; // 0x160(0x10)
	FMulticastInlineDelegate OnMuleRefueled; // 0x170(0x10)
	bool DidRescueDorettaHead; // 0x180(0x01)
	int32_t AreasToScan; // 0x184(0x04)
	int32_t ScanCount; // 0x188(0x04)
	TArray<FVector> ScanLocations; // 0x190(0x10)
	UDebrisPositioning* Positioning; // 0x1a0(0x08)
	UDebrisPositioning* EscortMulePositioning; // 0x1a8(0x08)
	UCurveFloat* CostDistanceCurve; // 0x1b0(0x08)
	float DebrisRadius; // 0x1b8(0x04)
	TArray<UDebrisBase*> ObjectDebris; // 0x1c0(0x10)
	TSoftClassPtr<UObject> RefuelObjectClass; // 0x1d0(0x28)
	TSoftClassPtr<UObject> DestinationClass; // 0x1f8(0x28)
	int32_t AreasScanned; // 0x220(0x04)
	enum class EEscortMissionState State; // 0x224(0x01)
	bool FinalBattle; // 0x225(0x01)
	UCarvedResourceData* FuelResource; // 0x228(0x08)
	UResourceData* GemResource; // 0x230(0x08)
	FMulticastInlineDelegate OnCannisterRegistered; // 0x238(0x10)
	float ServerShellProgress; // 0x248(0x04)
	int32_t SecondsToDestroyHeartstone; // 0x268(0x04)
	int32_t FullCanistersRequired; // 0x26c(0x04)
	int32_t FullCanisters; // 0x270(0x04)
	int32_t FuelResourceAmount; // 0x274(0x04)
	TSoftClassPtr<UObject> GarageDropCarver; // 0x278(0x28)
	TSoftClassPtr<UObject> EscortMuleDropBeaconClass; // 0x2a0(0x28)
	TSoftClassPtr<UObject> GarageClass; // 0x2c8(0x28)
	FVector EscortMuleDropLocation; // 0x2f0(0x0c)
	AEscortMule* EscortMule; // 0x300(0x08)
	AEscortDestination* EscortDestination; // 0x308(0x08)

	void SyncProgressTimer();
	void StartShellBreak();
	void SpawnGarage();
	void SetState(enum class EEscortMissionState State);
	void SetShellBreakPaused(bool newPaused);
	void SetEscortMule(AEscortMule* MULE);
	void RegisterFuelCannister(AExtractorItem* extractor);
	void RecordFailStage(bool muleDied);
	void OnResourceChanged(UCappedResource* CappedResource, float amount);
	void OnRep_FullCanisters();
	void OnRep_EscortState();
	void OnRep_EscortMule();
	void OnRep_AreasToScan(int32_t prevAmount);
	void OnRep_AreasScanned(int32_t prevAmount);
	void OnMuleDied(UHealthComponentBase* HealthComponent);
	void OnHealthChanged(float Health);
	void OnFullCanistersChanged(int32_t amount);
	void OnEscortMuleSpawnedEvent();
	float GetShellBreakProgress();
	bool DoesPathExist(FVector Start, FVector End);
};

// Class FSD.EscortMule
// Size: 0x490 (Inherited: 0x2e8)
struct AEscortMule : AFSDPawn {
	FMulticastInlineDelegate OnMuleActivated; // 0x2f0(0x10)
	FMulticastInlineDelegate OnSpeedChanged; // 0x300(0x10)
	FMulticastInlineDelegate OnFullCanistersChanged; // 0x310(0x10)
	FMulticastInlineDelegate OnExitGaragePathSet; // 0x320(0x10)
	FMulticastInlineDelegate Cheat_SetMuleSpeed; // 0x330(0x10)
	FMulticastInlineDelegate Cheat_JumpToNextPhase; // 0x340(0x10)
	UFriendlyHealthComponent* HealthComponent; // 0x350(0x08)
	USimpleObjectInfoComponent* ObjectInfo; // 0x358(0x08)
	URestrictedResourceBank* ResourceBank; // 0x360(0x08)
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

	bool TryHeal(APlayerCharacter* User, float amount);
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
// Size: 0x230 (Inherited: 0x220)
struct AFSDPhysicsActor : AActor {
	int32_t MovementUpdateFrequency; // 0x220(0x04)
	int32_t MovementUpdateEventTriggeredFrequency; // 0x224(0x04)

	void ForceMovementUpdate();
};

// Class FSD.CarriableItem
// Size: 0x248 (Inherited: 0x230)
struct ACarriableItem : AFSDPhysicsActor {
	FMulticastInlineDelegate OnAttachedChangeDelegate; // 0x230(0x10)
	bool StrictDeposit; // 0x240(0x01)

	void Throw(FVector force);
	void Receive_OnDeposited(APlayerCharacter* fromPlayer);
	void OnAttachChanged(bool Attached);
};

// Class FSD.DorrettaHead
// Size: 0x258 (Inherited: 0x248)
struct ADorrettaHead : ACarriableItem {
	UCarriableInstantUsable* Usable; // 0x248(0x08)
	UCarriableComponent* CarriableComponent; // 0x250(0x08)
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

// Class FSD.BarrelDispenser
// Size: 0x258 (Inherited: 0x220)
struct ABarrelDispenser : AActor {
	ACarriableItem* BarrelClass; // 0x228(0x08)
	USingleUsableComponent* Usable; // 0x238(0x08)
	USkeletalMeshComponent* Mesh; // 0x240(0x08)
	float FirstBarrelGenerationTime; // 0x248(0x04)
	float BarrelGenerationTime; // 0x24c(0x04)
	bool IsReady; // 0x250(0x01)
	bool HasBarrel; // 0x251(0x01)

	void SetPicked(APlayerCharacter* User);
	void OnUsed(APlayerCharacter* User);
	void OnSpawnedItem(AActor* spawned);
	void OnFolded();
	void OnDeployed();
	void FoldUp();
	void Deploy();
};

// Class FSD.BarrelDispenserAnimInstance
// Size: 0x270 (Inherited: 0x270)
struct UBarrelDispenserAnimInstance : UAnimInstance {
	bool IsReady; // 0x268(0x01)
	bool HasBarrel; // 0x269(0x01)
};

// Class FSD.ExtractorItem
// Size: 0x528 (Inherited: 0x368)
struct AExtractorItem : AAnimatedItem {
	FMulticastInlineDelegate OnCurrentLoadChangedEvent; // 0x370(0x10)
	FMulticastInlineDelegate OnCharacterEquipChange; // 0x380(0x10)
	UBoxComponent* DroppedCollider; // 0x390(0x08)
	USkeletalMeshComponent* DroppedMesh; // 0x398(0x08)
	UFirstPersonParticleSystemComponent* FP_DrillParticles; // 0x3a0(0x08)
	UAudioComponent* AudioComponent; // 0x3a8(0x08)
	UPointLightComponent* SurfaceLight; // 0x3b0(0x08)
	UParticleSystemComponent* MeltingParticles; // 0x3b8(0x08)
	UParticleSystemComponent* InvalidSurfaceParticles; // 0x3c0(0x08)
	UParticleSystemComponent* FPMuzzleParticles; // 0x3c8(0x08)
	UParticleSystemComponent* FPMuzzleInvalidParticles; // 0x3d0(0x08)
	UParticleSystemComponent* TPMuzzleParticles; // 0x3d8(0x08)
	UParticleSystemComponent* TPMuzzleInvalidParticles; // 0x3e0(0x08)
	UAnimMontage* FPMineMontage; // 0x3e8(0x08)
	UAnimMontage* TPMineMontage; // 0x3f0(0x08)
	UAnimMontage* FPGunsling; // 0x3f8(0x08)
	UAnimMontage* TPGunsling; // 0x400(0x08)
	FName MiningSpeedAudioParamterName; // 0x408(0x08)
	UParticleSystem* DrillParticles; // 0x410(0x08)
	UForceFeedbackEffect* DrillRumble; // 0x418(0x08)
	float BlockParticlesScaleFP; // 0x420(0x04)
	float BlockParticlesScaleTP; // 0x424(0x04)
	enum class EExtractorState State; // 0x428(0x01)
	float MovementPenalty; // 0x42c(0x04)
	float CarverRayCastLength; // 0x430(0x04)
	float CarveTerrainDistanceCheck; // 0x434(0x04)
	float CurrentDrillSpeed; // 0x438(0x04)
	float DrillParticlesDuration; // 0x450(0x04)
	UResourceData* ExtractetMaterial; // 0x458(0x08)
	float TimeBeforeInvalidShout; // 0x460(0x04)
	UDialogDataAsset* InvalidSurfaceShout; // 0x468(0x08)
	UDialogDataAsset* ShoutFull; // 0x470(0x08)
	USoundCue* DigSound; // 0x478(0x08)
	bool IsMining; // 0x480(0x01)
	bool IsGunslinging; // 0x481(0x01)
	bool ReadyToExtract; // 0x482(0x01)
	UParticleSystem* VacuumEffect; // 0x490(0x08)
	UParticleSystem* ChunkSplatEffect; // 0x498(0x08)
	USoundCue* ChunkSplatSound; // 0x4a0(0x08)
	float MaxDifference; // 0x4cc(0x04)
	float MeltingTime; // 0x4d4(0x04)
	float ChunkMultiplier; // 0x4d8(0x04)
	float CollectChunkCooldown; // 0x4dc(0x04)
	float CrossfadeSpeed; // 0x4e0(0x04)
	float VacuumEffectOffset; // 0x4f8(0x04)
	float MaxCapacity; // 0x4fc(0x04)
	float PlayerCountBonus; // 0x500(0x04)
	FColor SurfaceLightInitialColor; // 0x508(0x04)
	FColor SurfaceLightEndColor; // 0x50c(0x04)
	float SurfaceLightMinIntensity; // 0x510(0x04)
	float SurfaceLightMaxIntensity; // 0x514(0x04)
	float CurrentLoad; // 0x518(0x04)

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
	void OnCurrentLoadChanged(float Load);
	void OnChunkCooldownOver();
	bool IsFull();
	UBoxComponent* GetRootCollider();
	void All_SimulateDigBlock(FVector_NetQuantize Position, bool spawnParticles, int32_t Material);
	void All_ChunkSplat(AResourceChunk* chunk);
	void AddResource(float amount);
};

// Class FSD.ExtruderPlant
// Size: 0x248 (Inherited: 0x220)
struct AExtruderPlant : AActor {
	USkeletalMeshComponent* SkeletalMesh; // 0x220(0x08)
	UAnimationAsset* ExtrudeAnimation; // 0x228(0x08)
	UAnimationAsset* RetractAnimation; // 0x230(0x08)
	UAudioComponent* Audio; // 0x238(0x08)
};

// Class FSD.FacilityDrone
// Size: 0x5c8 (Inherited: 0x398)
struct AFacilityDrone : AEnemyDeepPathfinderCharacter {
	UPawnSensingComponent* PawnSensing; // 0x3a0(0x08)
	USphereComponent* CollisionSphere; // 0x3a8(0x08)
	USphereComponent* NearTargetSphere; // 0x3b0(0x08)
	UParticleSystemComponent* TearingGroundParticles; // 0x3b8(0x08)
	UParticleSystemComponent* AirTrailParticles; // 0x3c0(0x08)
	UEnemyComponent* EnemyComponent; // 0x3c8(0x08)
	UDamageComponent* Damage; // 0x3d0(0x08)
	UDamageComponent* BumpDamage; // 0x3d8(0x08)
	UPawnAlertComponent* Alert; // 0x3e0(0x08)
	UProjectileAttackComponent* RollingRangedAttack; // 0x3e8(0x08)
	UProjectileAttackComponent* FlyingRangedAttack; // 0x3f0(0x08)
	UHitscanComponent* HitScan; // 0x3f8(0x08)
	bool IsLockedOn; // 0x414(0x01)
	float DelayAfterLockOn; // 0x418(0x04)
	USoundCue* ImpactCue; // 0x420(0x08)
	USoundCue* JumpSound; // 0x428(0x08)
	float LaunchPower; // 0x430(0x04)
	FFloatInterval JumpInterval; // 0x434(0x08)
	bool CanJump; // 0x445(0x01)
	float ChanceForJump; // 0x448(0x04)
	float MinJumpCooldown; // 0x44c(0x04)
	float MaxJumpCooldown; // 0x450(0x04)
	float JumpForce; // 0x454(0x04)
	float TimeBeforeGroundCheck; // 0x458(0x04)
	float StartFlyingTimer; // 0x460(0x04)
	float MinRollingTime; // 0x468(0x04)
	float MaxRollingTime; // 0x46c(0x04)
	float MinFlyingTime; // 0x470(0x04)
	float MaxFlyingTime; // 0x474(0x04)
	float SpawnRocketsTime; // 0x478(0x04)
	UFakeMoverSettings* RollSettings; // 0x488(0x08)
	UFakeMoverSettings* JumpSettings; // 0x490(0x08)
	UFakeMoverSettings* SpawnRocketsSettings; // 0x498(0x08)
	UFakeMoverSettings* IdleSettings; // 0x4a0(0x08)
	enum class EFacilityDroneState State; // 0x4a8(0x01)
	float MinTurretAngle; // 0x4ac(0x04)
	float MaxTurretAngle; // 0x4b0(0x04)
	float SpawnRocketsCheckTime; // 0x4b4(0x04)
	float SpawnRocketsChance; // 0x4bc(0x04)
	float FlyingDampOmega; // 0x4f0(0x04)
	float RollingDampOmega; // 0x4f4(0x04)
	FRuntimeFloatCurve MuzzleLightCurve; // 0x4f8(0x88)
	float GunRange; // 0x588(0x04)
	float RollingAttackCooldown; // 0x58c(0x04)
	float FlyingAttackCooldown; // 0x590(0x04)
	float TurretLerpSpeed; // 0x598(0x04)
	bool FiringRockets; // 0x59c(0x01)
	float AimDownwardsOffset; // 0x5a4(0x04)
	AActor* CurrentTarget; // 0x5c0(0x08)

	void OnStateChangedEvent(enum class EFacilityDroneState CurrentState);
	void OnSpawnRocketsEvent();
	void OnRocketsEnded();
	void OnRep_Target();
	void OnRep_State();
	void OnRep_IsLockedOn();
	void OnRep_FiringRockets();
	void OnLockedOn();
	void OnLandedEvent();
	void OnJumpEvent();
	void OnFireRockets();
	void OnDroneAlerted();
	void OnDeath(UHealthComponentBase* aHealthComponent);
	void OnCollided(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void Jumped();
	void ImpactSound();
	void EndFireRockets();
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
	UParticleSystem* FootStepParticle; // 0x318(0x08)
	USoundCue* FootStepSound; // 0x320(0x08)
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

	void SetMeshScale(float NewScale);
	void SetDeathAnimation(UAnimSequenceBase* Animation);
	void PlayForcedCycle(float Duration);
};

// Class FSD.FacilityDroneAnimInstnace
// Size: 0x430 (Inherited: 0x410)
struct UFacilityDroneAnimInstnace : USpiderAnimInstance {
	FRotator TurretRotation; // 0x408(0x0c)
	FRotator ModifiedTurretRotation; // 0x414(0x0c)
	enum class EFacilityDroneState DroneState; // 0x420(0x01)
};

// Class FSD.FacilityGeneratorLine
// Size: 0x2a0 (Inherited: 0x220)
struct AFacilityGeneratorLine : AActor {
	float HeightOffsetMin; // 0x220(0x04)
	float HeightOffsetMax; // 0x224(0x04)
	float MaxSegmentLength; // 0x228(0x04)
	USplineComponent* SplineComponent; // 0x230(0x08)
	TSoftObjectPtr<UStaticMesh> LineMeshPtr; // 0x238(0x28)
	ATetherStation* Station; // 0x260(0x08)
	AActor* Generator; // 0x268(0x08)
	UStaticMesh* MeshInstance; // 0x270(0x08)
	TArray<FVector> ReplicatedPath; // 0x288(0x10)

	void OnRep_Path();
};

// Class FSD.FacilityObjective
// Size: 0x2a8 (Inherited: 0x150)
struct UFacilityObjective : UObjective {
	TSoftClassPtr<UObject> GeneratorClass; // 0x150(0x28)
	TSoftClassPtr<UObject> GeneratorBeaconClass; // 0x178(0x28)
	int32_t GeneratorCount; // 0x1a0(0x04)
	FDelegate OnFirstEncounterDroneSpawned_Delegate; // 0x1a4(0x10)
	FDelegate OnSecondEncounterDroneSpawned_Delegate; // 0x1b4(0x10)
	TArray<UEnemyDescriptor*> TurretDescriptors; // 0x1f0(0x10)
	TArray<UEnemyDescriptor*> EncounterEnemies; // 0x200(0x10)
	float EncounterDifficulty; // 0x210(0x04)
	FRandInterval Diversity; // 0x218(0x10)
	FIRandRange EncountersPerRoom; // 0x228(0x08)
	FIRandRange TurretEncountersRange; // 0x230(0x08)
	int32_t MinimumTurretEncounters; // 0x238(0x04)
	TArray<AActor*> SmallGenerators; // 0x240(0x10)
	ATetherStation* mainFacility; // 0x250(0x08)
	AActor* ActiveTetherGenerator; // 0x258(0x08)
	TArray<int32_t> ShieldGeneratorRooms; // 0x260(0x10)
	int32_t MainFacilityRoom; // 0x270(0x04)
	TArray<AActor*> ShieldGenerators; // 0x278(0x10)
	UResourceData* GoalResource; // 0x288(0x08)
	float AmountRequired; // 0x290(0x04)
	float AmountCollected; // 0x294(0x04)
	int32_t GeneratorsActivated; // 0x298(0x04)

	void SpawnFacilityEncounters(AProceduralSetup* setup, UEncounterManager* Encounters, int32_t turretIndex);
	TArray<FTransform> SpawnEndBattleTurrets(int32_t amountOfTurrets, AProceduralSetup* setup, UDebrisPositioning* DebrisPositioning, AActor* terrainPlacement, bool success);
	void SetMainFacility(ATetherStation* mainFacility);
	void SetActiveTetherGenerator(AActor* tetherGenerator);
	void SecondGeneratorEncounterSpawn(APawn* spawned);
	AActor* PlaceObjectInRoom(AProceduralSetup* setup, int32_t roomIndex, FVector Origin, float Radius, UDebrisPositioning* Positioning, AActor* placementActor, UCurveFloat* debrisCurve);
	void OnResourceChanged(UCappedResource* Resource, float amount);
	void OnRep_GeneratorsActivated();
	void OnRep_AmountCollected();
	void OnCoreDeposited();
	void InitGeneratorCount(int32_t generators);
	FTransform GetTurretGoal(AProceduralSetup* setup, FVector Origin, float idealRange, UDebrisPositioning* DebrisPositioning, AActor* terrainPlacement, bool success);
	TArray<AActor*> GetOverChargers();
	bool GetGeneratorsDone();
	int32_t GetFacilityRoomIndex();
	FVector GetFacilityLocation();
	void GeneratorActivated();
	void FirstGeneratorEncounterSpawn(APawn* spawned);
	void DropOverCharger(AProceduralSetup* setup, int32_t roomIndex, FVector facilityLocation, float idealRange, UDebrisPositioning* DebrisPositioning, AActor* terrainPlacement);
	void ChangeObjective();
	void AddShieldGenerator(AActor* charger, int32_t roomIndex);
};

// Class FSD.FacilityShieldGenerator
// Size: 0x248 (Inherited: 0x220)
struct AFacilityShieldGenerator : AActor {
	FGameplayTagContainer GameplayTags; // 0x228(0x20)
};

// Class FSD.FacilityTurretController
// Size: 0x378 (Inherited: 0x358)
struct AFacilityTurretController : AFSDAIController {
	UAIPerceptionComponent* Perception; // 0x358(0x08)

	void OnTurretsAttackingChanged(bool IsAttacking);
	void OnTargetDied(UHealthComponentBase* Health);
	void OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus);
};

// Class FSD.FacilityTurret
// Size: 0x3a0 (Inherited: 0x338)
struct AFacilityTurret : AEnemyPawn {
	USceneComponent* Root; // 0x340(0x08)
	UProjectileAttackComponent* Attack; // 0x348(0x08)
	UParticleSystemComponent* RangeIndicatorParticles; // 0x350(0x08)
	USoundCue* EngagedAudio; // 0x368(0x08)
	AProjectileBase* projectileClass; // 0x370(0x08)
	float Offset; // 0x38c(0x04)
	AActor* CurrentTarget; // 0x390(0x08)
	bool TurretEngaged; // 0x398(0x01)
	bool AlwaysActive; // 0x399(0x01)

	void SetIsAttacking(bool IsAttacking);
	void OnWeaponFired(FVector HitResult);
	void OnRep_TurretEngaged();
	void OnEngagedChanged(bool engaged);
	FRotator GetLookingDirection();
	FVector GetEyeLoc();
};

// Class FSD.SpinningFacilityturret
// Size: 0x3d0 (Inherited: 0x3a0)
struct ASpinningFacilityturret : AFacilityTurret {
	FRotator TargetRotation; // 0x3a0(0x0c)
	FRandRange AimAtTargetEveryTurn; // 0x3ac(0x08)
	float TurnCooldown; // 0x3b4(0x04)
	float TurnTimer; // 0x3b8(0x04)
	float Acceptance; // 0x3bc(0x04)
	float TurnSpeed; // 0x3c0(0x04)

	void OnAttack();
};

// Class FSD.AimingFacilityTurret
// Size: 0x3d0 (Inherited: 0x3a0)
struct AAimingFacilityTurret : AFacilityTurret {
	float LockonTime; // 0x3a0(0x04)
	float BurstInterval; // 0x3a4(0x04)
	float FireInterval; // 0x3a8(0x04)
	float TurretRotationSpeed; // 0x3ac(0x04)
	FInt32Interval BurstCount; // 0x3c4(0x08)
	bool IsLockedOn; // 0x3cc(0x01)
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
// Size: 0x1a0 (Inherited: 0xf8)
struct UFallingStateComponent : UCharacterStateComponent {
	float FallDamageStartVelocity; // 0xf8(0x04)
	float FallDamageModifier; // 0xfc(0x04)
	float AutoClimbMinDelay; // 0x100(0x04)
	float AutoClimbLookForwardDistance; // 0x104(0x04)
	float MaxClimbHeight; // 0x108(0x04)
	float MinClimbHeight; // 0x10c(0x04)
	float CapsuleCheckZOffset; // 0x110(0x04)
	float MinInputDotProduct; // 0x114(0x04)
	float JumpZVelocity; // 0x118(0x04)
	bool DebugAutoClimb; // 0x11c(0x01)
	UDialogDataAsset* FallingShout; // 0x120(0x08)
	float ShoutAfterDistance; // 0x128(0x04)
	UUseAnimationSetting* ClimbUseSettings; // 0x130(0x08)
	float HoverBootAirFriction; // 0x15c(0x04)
	float HoverBootAirControl; // 0x160(0x04)
	float HoverBootGravityScale; // 0x164(0x04)
	UDialogDataAsset* ShoutHoverBootsBegin; // 0x168(0x08)
	float HoverBootActivateDuration; // 0x170(0x04)
	bool bHoverBootsActive; // 0x174(0x01)
	float HoverBootMaxDuration; // 0x178(0x04)
	FVector2D JumpBootsVelocityWindow; // 0x17c(0x08)
	float JumpBootsZVelocity; // 0x184(0x04)
	bool JumpBootsActive; // 0x190(0x01)

	void ShowJumpBootsActivation();
	void Server_TakeFallDamage(float amount);
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

// Class FSD.FirstPersonPointLightComponent
// Size: 0x350 (Inherited: 0x350)
struct UFirstPersonPointLightComponent : UPointLightComponent {
};

// Class FSD.FlameThrowerItem
// Size: 0x850 (Inherited: 0x690)
struct AFlameThrowerItem : AAmmoDrivenWeapon {
	UParticleSystemComponent* FlameParticleComponent; // 0x690(0x08)
	UDamageComponent* DamageComponent; // 0x698(0x08)
	UStickyFlameSpawner* StickyFlames; // 0x6a0(0x08)
	UDamageComponent* AoEHeatDamageComponent; // 0x6a8(0x08)
	UDamageComponent* ExplodingTargetsDamageComponent; // 0x6b0(0x08)
	UMotionAudioController* MotionAudio; // 0x6b8(0x08)
	FDecalData ImpactDecal; // 0x6c0(0x18)
	float DecalDelay; // 0x6d8(0x04)
	float CurrentDecalDelay; // 0x6dc(0x04)
	UParticleSystem* ImpactParticles; // 0x6e0(0x08)
	UParticleSystemComponent* ImpactParticleInstance; // 0x6e8(0x08)
	UParticleSystem* FP_LongReachParticles; // 0x6f0(0x08)
	UParticleSystem* TP_LongReachParticles; // 0x6f8(0x08)
	float VeryLongReachThreshold; // 0x700(0x04)
	UParticleSystem* FP_VeryLongReachParticles; // 0x708(0x08)
	UParticleSystem* TP_VeryLongReachParticles; // 0x710(0x08)
	TArray<FName> FlameParameterNames; // 0x718(0x10)
	float DamageSphereRadius; // 0x728(0x04)
	float MaxFlameDistance; // 0x72c(0x04)
	float FlameGrowthPerSecond; // 0x730(0x04)
	float FlameEndPointResponsiveness; // 0x734(0x04)
	float FlameIntensityPerSecond; // 0x738(0x04)
	UStatusEffect* OnFireStatusEffect; // 0x740(0x08)
	float ChanceToFleeOnDamage; // 0x748(0x04)
	float MeltPointRadius; // 0x74c(0x04)
	float MeltPointBuildTime; // 0x750(0x04)
	float MeltCarveTime; // 0x754(0x04)
	UParticleSystem* MeltSteamParticle; // 0x758(0x08)
	TArray<UItemUpgrade*> Upgrades; // 0x760(0x10)
	bool LongReachEnabled; // 0x770(0x01)
	bool AoEHeatEnabled; // 0x780(0x01)
	float KilledTargetsExplosionChance; // 0x784(0x04)
	float ShowDamageParticle; // 0x788(0x04)
	UParticleSystem* DamangeTargetsParticles; // 0x790(0x08)
	UParticleSystem* KilledTargetsExplodingParticles; // 0x798(0x08)
	USoundCue* KilledTargetsExplodingSound; // 0x7a0(0x08)

	void TriggerAoEHeat();
	void ServerMeltIce(TArray<FVector> meltPoints);
	void ServerDoDamage(FVector_NetQuantize Start, FVector_NetQuantize End);
	void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat);
	void OnTargetDamaged(UHealthComponentBase* Health, float amount, UFSDPhysicalMaterial* PhysicalMaterial);
	void All_ShowTargetBurstIntoFire(FVector_NetQuantize Location, FRotator Rotation);
	void All_FlameFeedback(FVector_NetQuantize Location, FRotator Rotation);
};

// Class FSD.Flare
// Size: 0x2b0 (Inherited: 0x230)
struct AFlare : AFSDPhysicsActor {
	float InitialSpeed; // 0x248(0x04)
	float InitialAngularImpulse; // 0x24c(0x04)
	float InitialAngularImpulseRandomScale; // 0x250(0x04)
	int32_t MaxFlares; // 0x254(0x04)
	float ProductionTime; // 0x258(0x04)
	float Duration; // 0x25c(0x04)
	FLinearColor ChromaColor; // 0x260(0x10)
	bool IsFlareOn; // 0x270(0x01)
	AActor* DamageCauser; // 0x278(0x08)
	AActor* WeaponPreviewClass; // 0x280(0x08)
	AItem* LoadoutItem; // 0x288(0x08)
	UItemID* ItemID; // 0x298(0x08)
	USoundCue* ImpactGroundSound; // 0x2a0(0x08)

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
// Size: 0x300 (Inherited: 0x2f0)
struct AFlareGunProjectile : AProjectile {
	float Duration; // 0x2f0(0x04)
	bool IsFlareOn; // 0x2f4(0x01)

	void OnUpdateShadowRadius();
	void OnRep_IsFlareOn();
	void OnProjectileSpawnCompleted();
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
	FGuid SavegameID; // 0x30(0x10)
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
	float Cooldown; // 0xc0(0x04)
	TSoftClassPtr<UObject> EyeForEyeSTE; // 0xc8(0x28)
	UStatusEffect* LoadedSTE; // 0xf8(0x08)

	void OnHit(float Damage, UDamageClass* inDamageClass, AActor* DamageCauser, bool anyHealthLost);
};

// Class FSD.ThornsPerkComponent
// Size: 0xe0 (Inherited: 0xc0)
struct UThornsPerkComponent : UFloatPerkComponent {
	UDamageClass* DamageClass; // 0xc0(0x08)
	float Cooldown; // 0xc8(0x04)
	UStatusEffect* ThornsSTE; // 0xd0(0x08)

	void OnHit(float Damage, UDamageClass* inDamageClass, AActor* DamageCauser, bool anyHealthLost);
};

// Class FSD.SalutePerkComponent
// Size: 0xd0 (Inherited: 0xc0)
struct USalutePerkComponent : UFloatPerkComponent {
	float Cooldown; // 0xc0(0x04)
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
// Size: 0xf8 (Inherited: 0xf8)
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
// Size: 0x128 (Inherited: 0xf8)
struct UFrozenStateComponent : UCharacterStateComponent {
	FRandRange DeFrostAmount; // 0xf8(0x08)
	USoundBase* AudioFreeFromIce; // 0x100(0x08)
	UFSDPhysicalMaterial* IcePhysicalMaterial; // 0x108(0x08)
	UFSDPhysicalMaterial* DwarfFleshMaterial; // 0x110(0x08)
	float SlowAnimationSpeed; // 0x11c(0x04)

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
	UParticleSystem* PSTemplate; // 0x38(0x08)
	FVector LocationOffset; // 0x40(0x0c)
	FRotator RotationOffset; // 0x4c(0x0c)
	bool AlwaysZUp; // 0x58(0x01)
	FVector Scale; // 0x5c(0x0c)
	char Attached : 1; // 0x80(0x01)
	FName SocketName; // 0x84(0x08)
	bool IsFirstPerson; // 0x8c(0x01)
	bool UseTerainMaterial; // 0x8d(0x01)
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

// Class FSD.FSDBehaviorTreeComponent
// Size: 0x270 (Inherited: 0x270)
struct UFSDBehaviorTreeComponent : UBehaviorTreeComponent {
};

// Class FSD.FSDCheatManager
// Size: 0xb8 (Inherited: 0x78)
struct UFSDCheatManager : UCheatManager {
	int32_t RoomJumpCount; // 0x78(0x04)
	float PreviousMaxDistanceBeforeCleanup; // 0x7c(0x04)
	bool UnlimitedScoutFlareDuration; // 0x80(0x01)
	FMulticastInlineDelegate ToggleHoopGameMovement; // 0x88(0x10)
	AActor* SpawnPosMarker; // 0x98(0x08)
	bool EscortShowSmartRockDebug; // 0xa0(0x01)
	bool IsUsingSavedCheats; // 0xa1(0x01)

	void SwitchCharacter(APlayerCharacter* NewCharacter);
	void SpawnEnemies(UEnemyDescriptor* desscriptor, int32_t count);
	void SpawnCritters(UCritterDescriptor* descriptor, int32_t count);
	void SpawnBosco(TSoftClassPtr<UObject> droneClass, AFSDAIController* aControllerClass);
	void ShowTutorialDebug();
	void SetStandingDown(bool standingDown);
	void SetSpawnEnemies(bool SpawnEnemies);
	void SetQuadPickAxe(bool quad);
	void SetHUDVisible(bool ShowHUD);
	void SetGodMode(bool God);
	void SetFastMovement(bool fast);
	void ResetTutorials();
	void ResetSpacerigIntroMessage();
	void R_RemoveResources(int32_t Number);
	void R_RemoveCredits(int32_t Number);
	void R_AddResources(int32_t Number);
	void R_AddPerkPoints(int32_t amount);
	void R_AddNitra(float amount);
	void R_AddMorkite(float amount);
	void R_AddMatrixCores(int32_t Number);
	void R_AddHollomite(float amount);
	void R_AddGold(float amount);
	void R_AddDystrum(float amount);
	void R_AddCredits(int32_t Number);
	void R_AddCraftingResource(int32_t amount, int32_t Type);
	void R_Add_BitterGem(int32_t amount);
	void R_Add_Aquarq(int32_t amount);
	bool IsInGodMode();
	void GetListOfRoomNames(TArray<FString> roomNames);
	void DestroyAllInstances(AActor* destroy);
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
	void Cheat_Resources(UObject* WorldContextObject, int32_t amount);
	void Cheat_ResetEquippedUpgrades(UObject* WorldContextObject);
	void Cheat_RemoveResources(UObject* WorldContextObject, int32_t amount);
	void Cheat_PickAxeVanity_UnlockAll(UObject* WorldContextObject);
	void Cheat_PickAxeVanity_ResetAll(UObject* WorldContextObject);
	void Cheat_MinersManual_ShowAll(UObject* WorldContextObject);
	void Cheat_GenerateNewMissionSeed(UObject* WorldContextObject, bool Enabled);
	void Cheat_ForceTreasure(UObject* WorldContextObject);
	void Cheat_ForceLostPack(UObject* WorldContextObject);
	void Cheat_DeepDives_Refresh(UObject* WorldContextObject);
	void Cheat_Campaign_Complete(UObject* WorldContextObject);
	void Cheat_Campaign_Advance(UObject* WorldContextObject);
	void Cheat_AddXP(UObject* WorldContextObject, int32_t amount);
	void Cheat_AddPerkPoints(UObject* WorldContextObject, int32_t amount);
	void Cheat_AddCredits(UObject* WorldContextObject, int32_t amount);
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
	void C_Treasures_Track(bool Track);
	void C_Treasures_Reward(int32_t count);
	void C_ToggleHoopGameMovement();
	void C_ToggleFadingEnabled();
	void C_ToggleFadingDebug();
	void C_ToggleCanShowBlood();
	void C_SpawnScriptedWaveIndex(int32_t Index);
	void C_SpawnScriptedWave();
	void C_SpawnNormalWave();
	void C_SpawnEvenRewarder();
	void C_SpawnBarrelOnPlayer(int32_t amount);
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
	void C_ProjectileDebugPrintToggle();
	void C_MissionMap_ForceWarning(int32_t Index);
	void C_MissionMap_ForceAnomaly(int32_t Index);
	void C_MissionMap_DoubleWarning(int32_t indexA, int32_t indexB);
	void C_MinersManual_EnableWorkInProgress(UObject* WorldContextObject);
	void C_MachineEvents_Track(bool Track);
	void C_MachineEvents_FinishCurrent();
	void C_LevelUpCharacter(int32_t amount);
	void C_KillAll();
	void C_JumpToNextRoom();
	void C_IncrementAllMissionStats(int32_t amount);
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
	void C_Campaign_CompleteCurrent();
	void C_Campaign_Advance();
	void C_AutoRotateMissionMap(bool Enabled);
	void C_AddXP(int32_t Number);
	void C_AddUncappedXP(int32_t amount);
	void C_AddForgingXP(int32_t Number);
};

// Class FSD.FSDCloudLoadSave
// Size: 0x60 (Inherited: 0x28)
struct UFSDCloudLoadSave : UObject {
	FMulticastInlineDelegate OnCloudLoadAll; // 0x28(0x10)
	FMulticastInlineDelegate OnCloudLoadAllFailed; // 0x38(0x10)
	FString SteamBranch; // 0x48(0x10)
	int32_t NumFailedSaves; // 0x58(0x04)

	void StartCloudLoadAll(UObject* WorldContextObject, int32_t Index);
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
	FGuid SavegameID; // 0x48(0x10)
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
// Size: 0xd70 (Inherited: 0x198)
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
	TWeakObjectPtr<ADonkeyCharacter> Donkey; // 0x740(0x08)
	FMulticastInlineDelegate OnBoscoChanged; // 0x748(0x10)
	bool DEBUGSpawnRandomMissions; // 0x758(0x01)
	int32_t DEBUGSeedOverride; // 0x774(0x04)
	bool CanPlayOnline; // 0x778(0x01)
	bool CanCommunicateOnline; // 0x779(0x01)
	FMulticastInlineDelegate OnSteamSearchRegionChanged; // 0x780(0x10)
	FMulticastInlineDelegate OnSteamServerJoinStatusChanged; // 0x790(0x10)
	FMulticastInlineDelegate OnStartSearchForFriendsComplete; // 0x7a0(0x10)
	TMap<FString, FString> FriendSessions; // 0x7b0(0x50)
	FMulticastInlineDelegate OnNewSpaceRigNotification; // 0x800(0x10)
	UDiscordWrapper* DiscordWI; // 0x818(0x08)
	UCommunityGoalWrapper* CommunityWI; // 0x820(0x08)
	UGoogleAnalyticsWrapper* GoogleAnalyticsWI; // 0x828(0x08)
	USpecialEvent* ForcedSpecialEvent; // 0x830(0x08)
	bool ShowMinerManualWorkInProgress; // 0x83a(0x01)
	FMulticastInlineDelegate OnCampaignNotification; // 0x840(0x10)
	FMulticastInlineDelegate OnMinersManualNotification; // 0x850(0x10)
	FMulticastInlineDelegate OnNewHUDWarning; // 0x860(0x10)
	FMulticastInlineDelegate OnNewBossFight; // 0x870(0x10)
	FMulticastInlineDelegate OnBossFightRemoved; // 0x880(0x10)
	TArray<TScriptInterface<IBossFightInterface>> ActiveBossFights; // 0x890(0x10)
	float LastDreadnaughtKillTime; // 0x8d8(0x04)
	TWeakObjectPtr<UWindowWidget> ActiveEscapeMenu; // 0x8dc(0x08)
	UCampaignNotification* CampaignNotification; // 0x8e8(0x08)
	TWeakObjectPtr<APostProcessingManager> PostProcessingManager; // 0x900(0x08)
	FFadeData Fading; // 0x908(0x48)
	TArray<FSpaceRigNotification> SpaceRigNotifications; // 0x950(0x10)
	TWeakObjectPtr<ABosco> Drone; // 0x960(0x08)
	TWeakObjectPtr<APlayerCharacter> LocalPlayerCharacter; // 0x968(0x08)
	TWeakObjectPtr<ATutorialManager> TutorialManager; // 0x970(0x08)
	ACharacterSelectionSwitcher* CharacterSelectionSwitcher; // 0x978(0x08)
	bool bGameSettingsChanged; // 0x980(0x01)
	FFSDServerSearchOptions ServerSearchOptions; // 0x988(0x50)
	bool ServerSearchActive; // 0x9d8(0x01)
	bool IsOnPressStartScreen; // 0xa00(0x01)
	bool HasSeenStartScreen; // 0xa01(0x01)
	AProceduralSetup* ProceduralLevel; // 0xa08(0x08)
	UIconGenerationManager* IconGenerationManagerClass; // 0xa10(0x08)
	UIconGenerationManager* IconGenerationManager; // 0xa18(0x08)
	UCampaignManager* CampaignManager; // 0xa28(0x08)
	UDeepDiveManager* DeepDiveManager; // 0xa30(0x08)
	UGeneratedMission* GeneratedMission; // 0xa38(0x08)
	UDifficultySetting* DesiredDifficulty; // 0xa40(0x08)
	UFSDSaveGame* SaveGame; // 0xa48(0x08)
	enum class EDisconnectReason DisconnectReason; // 0xa50(0x01)
	TArray<UWorld*> AlwaysLoadedWorlds; // 0xa58(0x10)
	bool ShowCharacterSelectionWorld; // 0xa68(0x01)
	AActor* Viewer3DClass; // 0xa70(0x08)
	bool ShowLoaderWorld; // 0xa78(0x01)
	bool CharacterSelectionWorldActive; // 0xa79(0x01)
	bool MixerInteractivityEnabled; // 0xa7a(0x01)
	bool LoaderWorldActive; // 0xa7b(0x01)
	bool ResetHUDWhenReturning; // 0xa7c(0x01)
	UStatHat* StatHat; // 0xa80(0x08)
	USchematic* ActiveForgeSchematic; // 0xa88(0x08)
	UFSDCloudLoadSave* FSDCloudLoadSave; // 0xa90(0x08)
	UFSDSessionUpdater* SessionUpdater; // 0xa98(0x08)
	UFSDSendToURL* SendToURL; // 0xaa0(0x08)
	UFSDFriendsAndInvites* FriendsAndInvites; // 0xaa8(0x08)
	double SessionStartTime; // 0xab0(0x08)
	int32_t SessionStartTimestamp; // 0xab8(0x04)
	float InKBytesPerSecond; // 0xabc(0x04)
	float OutKBytesPerSecond; // 0xac0(0x04)
	UTemporaryBuff* TemporaryBuff; // 0xac8(0x08)
	TSoftObjectPtr<ULevelSequence> NextLoaderSequence; // 0xad0(0x28)
	enum class EAlwaysLoadedWorlds NextLoaderLevel; // 0xaf8(0x01)
	TSoftObjectPtr<ULevelSequence> DeepDiveLoaderSequence; // 0xb00(0x28)
	TSoftObjectPtr<ULevelSequence> DeepDiveLoaderSequence2; // 0xb28(0x28)

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
	void SetViewer3DClassWithLocation(AActor* NewClass, enum class ECharselectionCameraLocation Location);
	void SetViewer3DClass(AActor* NewClass);
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
	void ResetSaveGame();
	void ResetAlwaysLoadedWorldsAndGameData();
	void RemoveRemporaryBuff();
	void RemoveBosco();
	void RegisterBossFight(TScriptInterface<IBossFightInterface> BossFight);
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
	AFSDPlayerController* GetLocalFSDPlayerController();
	UIconGenerationManager* GetIconGenerationManager();
	bool GetHasSeenInfoScreen();
	int32_t GetGlobalMissionSeed();
	UGeneratedMission* GetGeneratedMission();
	UMutator* GetFirstMutator(UMutator* mutatorClass);
	float GetCurrentFadeAmount();
	APlayerCharacter* GetCharacterSelectorCharacter();
	void GameUserSettingsChanged();
	void FadeScreenToBlack(UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, bool ToSpaceRig, UTexture* loadingImage);
	void FadeScreenFromBlack(UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, bool ToSpaceRig);
	void DeregisterBossFight(AActor* boss);
	void CloseSessionLobby();
	void ClearPendingRewards();
	void ClearGameStateSeamlessTravelStorage();
	void ClearCampaignNotifications();
	void ChangeSkinPreview(UItemSkin* PreviewSkin);
	void CancelJoin();
	void BossFightDelegate__DelegateSignature(TScriptInterface<IBossFightInterface> BossFight);
	void BlackoutScreen(UObject* WorldContext, bool FadeWorldOnly);
	UHUDWarningWidget* AddWarningToHUD(UHUDWarningWidget* WidgetClass, UTexture2D* Texture, USoundBase* PingSound);
	void AddToFriendSessions(FString friendSessionId, FString friendName);
	void AddStatValue(FString Key, float Value);
	void AddStatCount(FString Key, int32_t count);
	void AddSpaceRigNotification(FSpaceRigNotification NewNotification, FString ID, bool TriggerEvent);
};

// Class FSD.FSDGameMode
// Size: 0x4c8 (Inherited: 0x308)
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
	float ContinueCountdown; // 0x468(0x04)
	bool PreventAllLatejoin; // 0x46c(0x01)
	bool PreventLateJoinOnMissionStart; // 0x46d(0x01)
	float PlayerSpawnHeightOffset; // 0x470(0x04)
	float FriendlyFireGracePeriod; // 0x474(0x04)
	TArray<UEnemyDescriptor*> ForcedEnemyPool; // 0x478(0x10)
	bool UseNormalEncounters; // 0x488(0x01)
	bool UseStationaryEncounter; // 0x489(0x01)
	bool AllowSpecialEncounters; // 0x48a(0x01)
	UEnemyWaveManager* CachedWaveManager; // 0x490(0x08)

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
	UEnemyWaveManager* GetWaveManager();
	AActor* GetPlayerStart(AFSDPlayerController* Controller);
	ADonkeyCharacter* GetMuleClass();
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
// Size: 0x4e0 (Inherited: 0x4c8)
struct AFSDGameModeSpaceRig : AFSDGameMode {
	char AmountOfPlayersSpawnedInMedbay; // 0x4c8(0x01)
	bool StartedSession; // 0x4c9(0x01)

	AActor* GetFreeSpawnOfType(enum class ESpacerigStartType aType, AFSDPlayerController* AController);
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

// Class FSD.FSDGameplayStatics
// Size: 0x28 (Inherited: 0x28)
struct UFSDGameplayStatics : UBlueprintFunctionLibrary {

	UParticleSystemComponent* SpawnScaledEmitterAtLocation(UObject* WorldContextObject, FScaledEffect ScaledEffect, FVector Location, FRotator Rotation, bool bAutoDestroy);
	UDecalComponent* SpawnDecalData(UObject* WorldContextObject, FVector Location, FVector UpVector, FDecalData DecalData);
	UDecalComponent* SpawnDecalAtActor(AActor* Actor, UMaterialInterface* DecalMaterial, float Size, float Duration, float FadeDuration);
	UDecalComponent* SpawnDecal(UObject* WorldContextObject, UMaterialInterface* DecalMaterial, FVector Location, FVector UpVector, float Size, float Duration, float FadeDuration);
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

	void OnPlayerMinedGold(UCappedResource* Resource, float amount);
};

// Class FSD.FSDGameState
// Size: 0x660 (Inherited: 0x290)
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
	UTeamResourcesComponent* TeamResources; // 0x520(0x08)
	bool IsOnSpaceRig; // 0x528(0x01)
	bool PlayerMadeItToDropPod; // 0x529(0x01)
	TArray<APlayerCharacter*> ActivePlayerCharacters; // 0x530(0x10)
	FReplicatedObjectives Objectives; // 0x540(0x18)
	FText CompletedGameEventName; // 0x558(0x18)
	FGeneratedMissionSeed GeneratedMissionSeed; // 0x570(0x58)
	bool objectivesCompleted; // 0x5c8(0x01)
	UDifficultySetting* CurrentDifficultySetting; // 0x5d0(0x08)
	bool RememberDifficulty; // 0x5d8(0x01)
	UPlayerProximityTracker* ProximityTracker; // 0x5e0(0x08)
	UShowroomManager* ShowroomManager; // 0x5e8(0x08)
	AGameStats* GameStats; // 0x5f0(0x08)
	uint32_t MissionTime; // 0x5f8(0x04)
	uint32_t MissionStartTime; // 0x5fc(0x04)
	uint32_t MissionHaz; // 0x600(0x04)
	bool PreventLatejoinCharacterDuplication; // 0x604(0x01)
	bool StartPressed; // 0x605(0x01)
	bool ContinuePressed; // 0x606(0x01)
	int32_t ContinuesCountdown; // 0x608(0x04)
	bool AllDwarvesDown; // 0x60c(0x01)
	bool MissionAborted; // 0x60d(0x01)
	int32_t CountdownRemaining; // 0x610(0x04)
	FText countdownText; // 0x618(0x18)
	bool CanCarryOverResources; // 0x630(0x01)

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
// Size: 0x400 (Inherited: 0x120)
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
	float volumeCharacterVoice; // 0x1b0(0x04)
	float volumeMissionControl; // 0x1b4(0x04)
	float volumeMaster; // 0x1b8(0x04)
	float volumeSFX; // 0x1bc(0x04)
	float volumeMusic; // 0x1c0(0x04)
	FString CurrentAudioOutputDeviceId; // 0x1c8(0x10)
	bool UseDefaultAudioOutputDevice; // 0x1d8(0x01)
	float Sharpening; // 0x1dc(0x04)
	int32_t AntiAliasingType; // 0x1e0(0x04)
	bool TemporalAAUpsamplingEnabled; // 0x1e4(0x01)
	float volumeVoice; // 0x1e8(0x04)
	USoundClass* soundClassCharacterVoices; // 0x1f0(0x08)
	USoundClass* soundClassMissionControl; // 0x1f8(0x08)
	USoundClass* soundClassMaster; // 0x200(0x08)
	USoundClass* soundClassSFX; // 0x208(0x08)
	USoundClass* soundClassUI; // 0x210(0x08)
	USoundClass* soundClassMusic; // 0x218(0x08)
	USoundClass* soundClassVoice; // 0x220(0x08)
	int32_t ChatFontSize; // 0x228(0x04)
	bool bUseVoiceChat; // 0x22c(0x01)
	bool bUsePushToTalk; // 0x22d(0x01)
	FString LocalGameServerName; // 0x230(0x10)
	FString LocalGameServerNameFiltered; // 0x240(0x10)
	bool AppearOffline; // 0x250(0x01)
	bool AutoRefreshServerlist; // 0x251(0x01)
	float MouseXSensitivity; // 0x254(0x04)
	float MouseYSensitivity; // 0x258(0x04)
	bool UseSeperateSensetivity; // 0x25c(0x01)
	bool InvertMouse; // 0x25d(0x01)
	bool InvertScroolWheel; // 0x25e(0x01)
	bool UseHoldToRun; // 0x25f(0x01)
	bool UseToggleLaserpointer; // 0x260(0x01)
	float FOV; // 0x264(0x04)
	float HeadbobbingScale; // 0x268(0x04)
	float CameraShakeScale; // 0x26c(0x04)
	float ChatFadeTime; // 0x270(0x04)
	bool UseStreamerProgram; // 0x274(0x01)
	bool SoundOnChatMessage; // 0x275(0x01)
	bool PhotosensitiveMode; // 0x276(0x01)
	bool ShowUIAnimations; // 0x277(0x01)
	bool UseProfanityFilter; // 0x278(0x01)
	float ForceFeedbackScale; // 0x27c(0x04)
	bool InvertFlightControls; // 0x280(0x01)
	bool EnableDx12ByDefault; // 0x281(0x01)
	float HDRColorGamma; // 0x284(0x04)
	FHUDElements HUDElements; // 0x288(0x78)
	FCharacterOptions CharacterOptions; // 0x300(0x02)
	float DownedTurnDirection_Controller; // 0x304(0x04)
	float DownedTurnDirection_Mouse; // 0x308(0x04)
	float UIDPIScale; // 0x30c(0x04)
	bool EnableCustomUIScale; // 0x314(0x01)
	FMulticastInlineDelegate OnInputSourceChanged; // 0x318(0x10)
	bool CheckCursorOutOfBounds; // 0x328(0x01)
	FMulticastInlineDelegate OnEnableTutorialHintsChanged; // 0x330(0x10)
	FMulticastInlineDelegate OnShowFPSChanged; // 0x340(0x10)
	FMulticastInlineDelegate OnShowNetInfoChanged; // 0x350(0x10)
	FMulticastInlineDelegate OnDx12Enabled; // 0x360(0x10)
	FIntPoint ResolutionToBeApplied; // 0x370(0x08)
	bool VSyncToBeApplied; // 0x378(0x01)
	bool Dx12ToBeApplied; // 0x379(0x01)
	enum class EWindowMode InFullscreenModeToBeApplied; // 0x37a(0x01)
	bool InFullscreenModeToBeAppliedValid; // 0x37b(0x01)
	bool VSyncToBeAppliedValid; // 0x37c(0x01)
	bool Dx12ToBeAppliedValid; // 0x37d(0x01)
	bool ResolutionToBeAppliedValid; // 0x37e(0x01)
	bool bShowUpgradeExtraDetails; // 0x37f(0x01)
	FMulticastInlineDelegate OnShowUpgradeExtraDetailsChanged; // 0x380(0x10)
	FMulticastInlineDelegate OnCustomKeyBindingsChanged; // 0x390(0x10)
	enum class EFSDInputSource CurrentInputSource; // 0x3a0(0x01)
	enum class EFSDInputSource RequestedInputSource; // 0x3a1(0x01)
	TArray<FCustomKeyBinding> CustomKeyBindings; // 0x3a8(0x10)
	TArray<FCustomKeyBinding> CustomControllerBindings; // 0x3b8(0x10)
	bool SwapControllerThumbsticks; // 0x3c8(0x01)
	bool bTutorialHintsEnabled; // 0x3c9(0x01)
	bool bShowSubtitles; // 0x3ca(0x01)
	bool bShowFPS; // 0x3cb(0x01)
	bool bShowNetInfo; // 0x3cc(0x01)
	bool bCanShowBlood; // 0x3cd(0x01)
	bool PreventLatejoinCharacterDuplication; // 0x3ce(0x01)
	bool TranslatorDebugModeEnabled; // 0x3cf(0x01)
	FString PreviousCulture; // 0x3d0(0x10)
	FControllerSettings ControllerSettings; // 0x3e0(0x0c)
	TArray<FGuid> SelectedDifficultyLevels; // 0x3f0(0x10)

	void UpdateVolumeSettings(USoundClass* CharacterVoices, USoundClass* MissionControl, USoundClass* Master, USoundClass* Music, USoundClass* SFX, USoundClass* UI, USoundClass* Voice);
	void UpdateForceFeedbackScaleOnController(APlayerController* Controller);
	bool ToggleTranslatorDebugMode();
	bool ToggleShowUpgradeExtraDetails();
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
	void SetShowUIAnimations(bool shouldShow);
	void SetShowSubtitles(bool Show);
	void SetShowNetInfo(bool Visible);
	void SetShowFPS(bool Visible);
	void SetSharpening(float Sharpening);
	void SetScreenResolutionToBeApplied(FIntPoint Resolution);
	void SetPushToTalk(bool bEnable);
	void SetPreventLatejoinCharacterDuplication(bool prevent);
	void SetPlaySoundOnChatMessage(bool playSoundOnMessage);
	void SetPhotosensitiveMode(bool modeOn);
	void SetMouseYSensitivity(float newSensitivity);
	void SetMouseXSensitivity(float newSensitivity);
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
	void PostInitFSDUserSettings();
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
	bool GetShowUIAnimations();
	bool GetShowSubtitles();
	bool GetShowNetInfo();
	bool GetShowFPS();
	float GetSharpening();
	FIntPoint GetScreenResolutionToBeApplied();
	bool GetPushToTalk();
	bool GetPreventLatejoinCharacterDuplication();
	bool GetPlaySoundOnChatMessage();
	bool GetPhotosensitiveMode();
	float GetMouseYSensitivity();
	float GetMouseXSensitivity();
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
	void ClearCustomKeyBindings(bool InGamepadKeys);
	bool CanShowBlood();
	void ApplyGraphicsChanges();
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
	void ShowUpgradeAccountUI(APlayerState* PlayerState);
	void ShowInstallModsSite();
	void ShowAccountPicker(UFSDGameInstance* gInstance, int32_t GamePlayerID);
	void OpenURLInOverlay(FString URL);
	void OpenProfileByUserId(APlayerState* Requestor, FString RequesteeUserID);
	void OpenProfile(APlayerState* Requestor, APlayerState* Requestee);
	void GetIsPrivilegeAllowed(APlayerState* PlayerState, enum class EBlueprintableUserPrivileges Privilege, FDelegate Delegate);
};

// Class FSD.FSDPhysicalMaterial
// Size: 0x150 (Inherited: 0x80)
struct UFSDPhysicalMaterial : UPhysicalMaterial {
	float BreakingDecelerationScale; // 0x80(0x04)
	float BreakingFrictionScale; // 0x84(0x04)
	float MaxAccelerationScale; // 0x88(0x04)
	UFXSystemAsset* ImpactParticles; // 0x90(0x08)
	UNiagaraSystem* ImpactNParticles; // 0x98(0x08)
	UMaterialInstance* ImpactMaterialOverride; // 0xa0(0x08)
	USoundCue* ImpactSound; // 0xa8(0x08)
	USoundCue* MeleeImpactSound; // 0xb0(0x08)
	bool UseImpactDecalOverrides; // 0xb8(0x01)
	TArray<FDecalData> ImpactDecals; // 0xc0(0x10)
	USoundCue* FirstPersonDamageIndicatorSound; // 0xd0(0x08)
	bool IsWeakPoint; // 0xd8(0x01)
	bool IsSubhealthCollider; // 0xd9(0x01)
	float DamageMultiplier; // 0xdc(0x04)
	UFXSystemAsset* FootStepParticle; // 0xe0(0x08)
	UMaterialInstance* FootstepMaterialOverride; // 0xe8(0x08)
	FDecalData LeftFootprintDecal; // 0xf0(0x18)
	FDecalData RightFootprintDecal; // 0x108(0x18)
	USoundCue* FootStepSound; // 0x120(0x08)
	float ExtraFallVelocity; // 0x128(0x04)
	UFXSystemAsset* FallImpactEffect; // 0x130(0x08)
	USoundCue* FallImpactSound; // 0x138(0x08)
	bool alwaysPenetrate; // 0x140(0x01)
	UReactiveTerrain* ReactiveTerrain; // 0x148(0x08)

	UFXSystemComponent* SpawnImpactParticles(UObject* WorldContextObject, FVector Location, FVector Normal);
	UFSDPhysicalMaterial* GetPhysicalMaterialFromPrimitive(UPrimitiveComponent* Component);
};

// Class FSD.OptionalBloodPhysicalMaterial
// Size: 0x158 (Inherited: 0x150)
struct UOptionalBloodPhysicalMaterial : UFSDPhysicalMaterial {
	UParticleSystem* BloodlessImpactParticles; // 0x150(0x08)
};

// Class FSD.FSDPlayerCameraManager
// Size: 0x2740 (Inherited: 0x2740)
struct AFSDPlayerCameraManager : APlayerCameraManager {
};

// Class FSD.FSDPlayerControllerBase
// Size: 0x5b8 (Inherited: 0x570)
struct AFSDPlayerControllerBase : APlayerController {
	UMaterialParameterCollection* GlobalMaterialParameterCollection; // 0x570(0x08)
	FMulticastInlineDelegate OnPlayerVoiceStatusChanged; // 0x578(0x10)
	bool bStartWithBlackScreen; // 0x58b(0x01)
	UWindowManager* WindowManager; // 0x590(0x08)

	void ToggleAnalogCursor(bool Visible);
	void StopAspectRatioAxisConstraint();
	void StartAspectRatioAxisConstraint();
	void SetHUDVisible(bool IsVisible, enum class EHUDVisibilityReason reason);
	void Server_Cheat_SwitchCharacter(APlayerCharacter* NewCharacter);
	void RecievePreClientTravel();
	void RecieveHUDVisibilityChanged(bool IsVisible);
	bool IsHUDVisibleFlagSet(enum class EHUDVisibilityReason reason);
	void Client_WasKicked(enum class EDisconnectReason reason);
};

// Class FSD.FSDPlayerController
// Size: 0x7a0 (Inherited: 0x5b8)
struct AFSDPlayerController : AFSDPlayerControllerBase {
	FMulticastInlineDelegate OnEndLevelReceived; // 0x5b8(0x10)
	FMulticastInlineDelegate OnReceiveVoiceChanged; // 0x5c8(0x10)
	FMulticastInlineDelegate OnTransmitVoiceChanged; // 0x5d8(0x10)
	FMulticastInlineDelegate OnLevelFinished; // 0x5e8(0x10)
	FMulticastInlineDelegate OnShowTutorialHint; // 0x5f8(0x10)
	FMulticastInlineDelegate OnShowTutorialWidget; // 0x608(0x10)
	FMulticastInlineDelegate OnChangeTutorialHintDuration; // 0x618(0x10)
	FMulticastInlineDelegate OnHideCurrentTutorialHint; // 0x628(0x10)
	FMulticastInlineDelegate OnPlayerCharacterPossesed; // 0x638(0x10)
	UPerkUsageComponent* PerkUsageComponent; // 0x658(0x08)
	bool IsOnSpaceRig; // 0x660(0x01)
	bool bReceivedEndLevel; // 0x661(0x01)
	TArray<USoundMix*> InitialSoundMixes; // 0x668(0x10)
	bool ServerTravelDone; // 0x678(0x01)
	FMulticastInlineDelegate OnChatOpened; // 0x680(0x10)
	UFSDWidgetEffectsComponent* WidgetEffects; // 0x690(0x08)
	UChromaComponent* ChromaEffects; // 0x698(0x08)
	USteelSeriesComponent* SteelSeriesEffects; // 0x6a0(0x08)
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
	void Server_SetControllerReady();
	void Server_ResetHUD();
	void Server_NewMessage(FString Sender, FString Text, enum class EChatSenderType SenderType);
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
	UChromaComponent* GetChromaEffectsComponent();
	AActor* FindPlayerStart(UPlayerCharacterID* characterID);
	void EndLevel();
	void Client_TerrainLateJoinVisibleChunks(TArray<uint32_t> visibleChunks);
	void Client_TerrainLateJoinPart(TArray<FGrenadeExplodeOperationData> explosions, TArray<FCarveWithColliderOperationData> colliderCarves, TArray<FCarveWithSTLMeshOperationData> meshCarves, TArray<FPickaxeDigOperationData> pickAxe, TArray<FRemoveFloatingIslandOperationData> floating, TArray<FDrillOperationData> drills, TArray<FMeltOperationData> melts, TArray<FSplineSegmentCarveOperationData> splines);
	void Client_TerrainLateJoinDone();
	void Client_TerrainLateJoinDebris(TArray<int32_t> instanceComponentPairs);
	void Client_PlayCue(USoundCue* SoundCue);
	void Client_EndLevel_WaitForData(bool areObjectivesCompleted, int32_t numberOfPlayersInPod);
	void Client_DeductResource(UResourceData* Resource, int32_t amount);
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
	void OnStartRefiningPressed(APlayerCharacter* InCharacter);
	void OnRep_RefineryState(enum class ERefineryState InOldState);
	void OnPlayerCharacterRegistered(APlayerCharacter* InCharacter);
	void OnPipelineStateChanged(APipelineStart* InPipelineStart, enum class EPipelineBuildState InPipelineState);
	void OnObjectivesChanged();
	void OnLaunchRocketPressed(APlayerCharacter* InCharacter);
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
// Size: 0xb38 (Inherited: 0x28)
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
	FGameDLCSave GameDLCSave; // 0x298(0x50)
	int32_t SaveCreatedInPatch; // 0x2e8(0x04)
	FString AnonymousID; // 0x2f0(0x10)
	int32_t PerkPoints; // 0x300(0x04)
	bool HasRecievedDiscordReward; // 0x304(0x01)
	enum class EFSDFaction Faction; // 0x305(0x01)
	TArray<FGuid> UnLockedMissions; // 0x308(0x10)
	TMap<FGuid, FUnLockedMissionParameters> UnLockedMissionParameters; // 0x318(0x50)
	TArray<FGuid> UnLockedPlanetZones; // 0x368(0x10)
	FCampaignSave CampaignSave; // 0x378(0x48)
	FDeepDiveSave DeepDiveSave; // 0x3c0(0x70)
	TArray<FCharacterSave> CharacterSaves; // 0x430(0x10)
	int32_t Credits; // 0x440(0x04)
	int32_t LastBoughtDailyDealSeed; // 0x444(0x04)
	FForgingSave Forging; // 0x448(0x08)
	FDrinkSave Drinks; // 0x450(0x58)
	TMap<FGuid, FItemUpgradeSelection> ItemUpgradeSelections; // 0x4a8(0x50)
	TArray<FUpgradeLoadout> ItemUpgradeLoadouts; // 0x4f8(0x10)
	TArray<FGuid> PurchasedItemUpgrades; // 0x508(0x10)
	TArray<FGuid> UnLockedItemUpgrades; // 0x518(0x10)
	TArray<FGuid> UnlockedItems; // 0x528(0x10)
	TArray<FGuid> OwnedItems; // 0x538(0x10)
	TMap<FGuid, int32_t> EnemiesKilled; // 0x548(0x50)
	TMap<FGuid, FItemNotificationInfo> ItemsWithNotification; // 0x598(0x50)
	TSet<FGuid> SkinnableItems; // 0x5e8(0x50)
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
	FConsoleOptionsInSaveGame ConsoleOptions; // 0x8e8(0x118)
	FGDKWinOptionsInSaveGame WinGDKOptions; // 0xa00(0x70)
	FOptionsInSaveGame WindowsOptions; // 0xa70(0x08)
	bool HasCompletedTutorial; // 0xa78(0x01)
	bool HasPlayedTutorial; // 0xa79(0x01)
	bool ShowHowToRestartTutorialPrompt; // 0xa7a(0x01)
	bool HasPlayedIntroMessage; // 0xa7b(0x01)
	bool HasSentSteamInfo; // 0xa7c(0x01)
	bool HasClaimedSteamGroupLoot; // 0xa7d(0x01)
	bool IsBoscoAllowed; // 0xa7e(0x01)
	bool HasRefundedUpgradeCostDifference; // 0xa7f(0x01)
	bool HasJoinedXboxClub; // 0xa80(0x01)
	bool HasSeenAnalyticsPopUp; // 0xa81(0x01)
	bool AllowAnalyticsTracking; // 0xa82(0x01)
	bool AllowPersonalAnalyticsTracking; // 0xa83(0x01)
	bool IsModded; // 0xa84(0x01)
	int32_t Index; // 0xa88(0x04)
	FString Name; // 0xa90(0x10)
	float TotalPlayTimeSeconds; // 0xaa0(0x04)
	TMap<FGuid, int32_t> SelectedLoadout; // 0xaa8(0x50)
	uint32_t userIdx; // 0xaf8(0x04)
	uint32_t CurrLoadoutIdx; // 0xafc(0x04)
	uint32_t SaveToDiskCounter; // 0xb00(0x04)
	uint32_t BackupSaveIndex; // 0xb04(0x04)
	uint32_t ExternalBackupSaveIndex; // 0xb08(0x04)
	int32_t NumberOfGamesPlayed; // 0xb0c(0x04)
	UPlayerCharacterID* LastPlayedCharacter; // 0xb10(0x08)
	bool ShowInfoScreen; // 0xb18(0x01)
	FString LastShownVersion; // 0xb20(0x10)
	UFSDGameInstance* FSDGameInstance; // 0xb30(0x08)

	void TutorialsResetDelegate__DelegateSignature();
	bool TrySellResource(UResourceData* Resource, int32_t amount, int32_t Price);
	bool TryDeductResources(TMap<UResourceData*, int32_t> Resources);
	bool TryDeductCredits(int32_t amount);
	bool TryBuyResource(UResourceData* Resource, int32_t amount, int32_t Price);
	void SkinSignature__DelegateSignature(UItemSkin* Skin, UItemID* ItemID);
	bool ShouldDisplayFirstSchematicMessage();
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
	FDateTime GetSlotTimeStamp();
	FString GetSlotLoadedFrom();
	int32_t GetSelectedLoadoutIndex(UPlayerCharacterID* characterID);
	int32_t GetResourceSellingPrice(UResourceData* Resource, int32_t amount);
	int32_t GetResourceBuyingPrice(UResourceData* Resource, int32_t amount);
	float GetResourceAmount(UResourceData* Resource);
	int32_t GetRequiredXPForLevel(int32_t Level);
	FString GetRejoinSessionId();
	int32_t GetPurchasableItemCount();
	int32_t GetPlayerRetirementRank();
	int32_t GetPlayerRank();
	int32_t GetPerkPoints();
	FString GetName();
	int32_t GetMaxSaveSlots();
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
	bool DeleteFromDisk(UFSDGameInstance* GameInstance, FString slotName, int32_t userIdx);
	bool DeductPerkPoints(int32_t amount);
	void CreditsChangedSignature__DelegateSignature(int32_t Credits);
	void CheckPromotionAchievementProgress(UObject* WorldContext);
	void CharacterSignature__DelegateSignature(APlayerCharacter* CharacterClass);
	void CharacterProgressChangedSignature__DelegateSignature(APlayerCharacter* CharacterClass, int32_t Level, float Progress);
	bool CanAfford(TMap<UResourceData*, int32_t> Resources);
	void AnonymousMatricsChangedSignature__DelegateSignature(bool AllowAnonymousMetrics);
	void AddPerkPoints(int32_t amount);
	void AddGamePlayed();
	int32_t AddCredits(int32_t amount);
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
// Size: 0x80 (Inherited: 0x28)
struct UFSDSessionUpdater : UObject {
	FMulticastInlineDelegate OnNewFSDSessionID; // 0x28(0x10)
};

// Class FSD.FSDFindSteamSessions
// Size: 0x40 (Inherited: 0x28)
struct UFSDFindSteamSessions : UObject {
	FMulticastInlineDelegate OnFindResult; // 0x28(0x10)
};

// Class FSD.FSDLookupSessionId
// Size: 0x88 (Inherited: 0x30)
struct UFSDLookupSessionId : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)

	UFSDLookupSessionId* FSDLookupSessionId(UObject* WorldContextObject, FString sessionKey);
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
	TArray<FSplineSegment> CalculateSplineSegments(USplineComponent* Spline, enum class ESplineCoordinateSpace Space, float MaxSegmentDistance, int32_t StartIndex, int32_t EndIndex);
	float ApproximateSplineDistanceAtWorldLocation(USplineComponent* Spline, FVector WorldLocation);
	FTransform AppendSplineSegmentWithStartTangent(USplineComponent* SplineComponent, FVector StartTangent, FVector EndLocation, enum class ESplineCoordinateSpace Space, enum class ESplinePointType SegmentType, bool bUpdateSpline);
	FTransform AppendSplineSegmentWithStartAndEndTangent(USplineComponent* SplineComponent, FVector StartTangent, FVector EndLocation, FVector EndTangent, enum class ESplineCoordinateSpace Space, enum class ESplinePointType SegmentType, bool bUpdateSpline);
	FTransform AppendSplineSegmentWithEndTangent(USplineComponent* SplineComponent, FVector EndLocation, FVector EndTangent, enum class ESplineCoordinateSpace Space, enum class ESplinePointType SegmentType, bool bUpdateSpline);
	FTransform AppendSplineSegment(USplineComponent* SplineComponent, FVector EndLocation, enum class ESplineCoordinateSpace Space, enum class ESplinePointType SegmentType, bool bUpdateSpline);
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
	bool TextSmallerThan(FText Text1, FText Text2);
	bool TextGreaterThan(FText Text1, FText Text2);
	void SimpleBox(FPaintContext Context, FVector2D Position, FVector2D Size, FLinearColor Tint);
	FTimerHandle SetTimerForNextTick(UObject* WorldContext, FDelegate TimerDelegate);
	void SetSizeBoxSettings(USizeBox* InSizeBox, FSizeBoxSettings InSettings);
	void SetMousePosition(UObject* WorldContextObject, int32_t X, int32_t Y);
	void SetChildrenVisibility(UPanelWidget* Panel, enum class ESlateVisibility Visibility, int32_t StartIndex, UUserWidget* OptionalClassFilter);
	void ScaleTextBlockToHeight(UTextBlock* TextBlock, float TargetHeight, bool SetMinimimumWidth);
	void ScaleImageToHeight(UImage* Image, float TargetHeight);
	void PrintStrings(UObject* WorldContextObject, TArray<FString> InStrings, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration);
	FString MidIgnoringWhiteSpace(FString Source, int32_t Index, int32_t count);
	FVector2D MeasureTextSize(FText Text, FSlateFontInfo Font);
	FVector2D MeasureTextBlockSize(UTextBlock* TextBlock);
	void Line(FPaintContext Context, FVector2D Pos1, FVector2D Pos2, FLinearColor Tint);
	FLinearColor LerpColors(TArray<FLinearColor> Colors, FLinearColor EndColor, float Progress01);
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
	void PingWidget(UObject* WorldContext, UWidget* Widget, float amount, float Duration, enum class EPingType PingType, float StartDelay);
	void MoveWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D Start, FVector2D End, float Duration, enum class EMoveType MoveType, float StartDelay);
	void MoveOutWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D MoveToOffset, float Duration, float StartDelay);
	void MoveInWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D MoveFromOffset, float Duration, float StartDelay);
	void FadeWidget(UObject* WorldContext, UUserWidget* Widget, float StartFade, float EndFade, float Duration, float StartDelay);
	void FadeOutWidget(UObject* WorldContext, UUserWidget* Widget, float Duration, float StartDelay);
	void FadeInWidget(UObject* WorldContext, UUserWidget* Widget, float Duration, float StartDelay);
};

// Class FSD.TrackBuilderItem
// Size: 0x3c0 (Inherited: 0x368)
struct ATrackBuilderItem : AAnimatedItem {
	UCrosshairAggregator* CrosshairAggregator; // 0x370(0x08)
	enum class EPlaceableObstructionType ObstructionType; // 0x378(0x01)
	FVector ObstructionLocation; // 0x37c(0x0c)
	FVector GroundNormal; // 0x388(0x0c)
	ATrackBuilderSegment* DefaultSegmentType; // 0x3a8(0x08)
	ATrackBuilderSegment* NextSegment; // 0x3b0(0x08)
	bool bIsPlacingSegment; // 0x3b8(0x01)

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
// Size: 0x3d0 (Inherited: 0x3c0)
struct AFuelLineBuilderItem : ATrackBuilderItem {
	UItemPlacerAggregator* SegmentPlacer; // 0x3c0(0x08)

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
// Size: 0x178 (Inherited: 0x138)
struct UTrackBuilderUsable : UInstantUsable {
	FMulticastInlineDelegate OnNextSegmentChanged; // 0x138(0x10)
	ATrackBuilderItem* BuilderItemType; // 0x148(0x08)
	FString ColliderName; // 0x150(0x10)
	USceneComponent* TrackStartComponent; // 0x160(0x08)
	ATrackBuilderSegment* NextSegment; // 0x168(0x08)
	TWeakObjectPtr<APlayerCharacter> InUseBy; // 0x170(0x08)

	void SegmentDelegate__DelegateSignature(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment);
	void OnRep_NextSegment();
	void OnNextSegmentDestroyed(AActor* InActor);
	FTransform GetStartTransform();
	void FinishUse(APlayerCharacter* User, ATrackBuilderSegment* InSegment);
};

// Class FSD.FuelLineStartUsable
// Size: 0x178 (Inherited: 0x178)
struct UFuelLineStartUsable : UTrackBuilderUsable {
};

// Class FSD.StatusEffectSettings
// Size: 0x38 (Inherited: 0x30)
struct UStatusEffectSettings : UDataAsset {
	UStatusEffect* Frozen; // 0x30(0x08)
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
// Size: 0x9d8 (Inherited: 0x28)
struct UGameData : UObject {
	TSoftClassPtr<UObject> BarrelClass; // 0x28(0x28)
	FGVisibilityGroups VisibilityGroups; // 0x50(0x58)
	UNiagaraParameterCollection* NiagaraParameterCollection; // 0xa8(0x08)
	UDLCBase* AlwaysLockedDLC; // 0xb0(0x08)
	UPromotionRewardsSettings* PromotionRewardsSettings; // 0xb8(0x08)
	UFSDEventCollection* FsdEventsSettings; // 0xc0(0x08)
	UDanceSettings* DanceSettings; // 0xc8(0x08)
	UGameAnimationSettings* AnimationSettings; // 0xd0(0x08)
	UEnemySettings* EnemySettings; // 0xd8(0x08)
	UDamageSettings* DamageSettings; // 0xe0(0x08)
	UPlanetZoneSetup* ZoneSettings; // 0xe8(0x08)
	UTreasureSettings* TreasureSettings; // 0xf0(0x08)
	UDrinkSettings* DrinkSettings; // 0xf8(0x08)
	UUpgradeSettings* UpgradeSettings; // 0x100(0x08)
	USpawnSettings* SpawnSettings; // 0x108(0x08)
	UKeyBindingSettings* KeyBindingSettings; // 0x110(0x08)
	UDeepDiveSettings* DeepDiveSettings; // 0x118(0x08)
	UEncounterSettings* EncounterSettings; // 0x120(0x08)
	UForginSettings* ForgingSettings; // 0x128(0x08)
	USchematicSettings* SchematicSettings; // 0x130(0x08)
	UItemSkinSettings* SkinSettings; // 0x138(0x08)
	USpecialEventSettings* SpecialEventSettings; // 0x140(0x08)
	UProceduralSettings* ProceduralSettings; // 0x148(0x08)
	UPickaxeSettings* PickaxeSettings; // 0x150(0x08)
	UFSDTagSettings* TagSettings; // 0x158(0x08)
	UShowroomSettings* ShowroomSettings; // 0x160(0x08)
	UVictoryPoseSettings* VictoryPoseSettings; // 0x168(0x08)
	UFSDTutorialSettings* TutorialSettings; // 0x170(0x08)
	UAfflictionSettings* AfflictionSettings; // 0x178(0x08)
	UCommunityGoalSettings* CommunityGoalSettings; // 0x180(0x08)
	UDailyDealSettings* DailyDealSettings; // 0x188(0x08)
	FGDMissionStats MissionStats; // 0x190(0xf8)
	FGDMilestones Milestones; // 0x288(0x10)
	FGDPerks perks; // 0x298(0x90)
	FGDItemCategoryIDs ItemCategoryIDs; // 0x328(0x38)
	TArray<UTexture2D*> LoadoutIconList; // 0x360(0x10)
	UMinersManual* MinersManual; // 0x370(0x08)
	FGDDamageClasses DamageClasses; // 0x378(0x40)
	FGDStats Stats; // 0x3b8(0x128)
	FGDResources Resources; // 0x4e0(0xe0)
	FGDTerrainTypes TerrainTypes; // 0x5c0(0x10)
	FGDGameStatsTracking GameStatsTracking; // 0x5d0(0x20)
	FGDAudio Audio; // 0x5f0(0x50)
	FGDDifficulty Difficulty; // 0x640(0x10)
	UStatusEffectSettings* StatusEffects; // 0x650(0x08)
	FGDCharacterRetirement Retirement; // 0x658(0xc0)
	FGDPlayerAndCharacterProgression PlayerAndCharacterProgression; // 0x718(0xa0)
	UCharacterSettings* CharacterSettings; // 0x7b8(0x08)
	UAchievementList* Achievements; // 0x7c0(0x08)
	UDataTable* SchematicGATable; // 0x7c8(0x08)
	TArray<UMissionTemplate*> TestMissions; // 0x7d0(0x10)
	TSoftObjectPtr<UBiome> TestBiome; // 0x7e0(0x28)
	UGlobalMissionSetup* MissionSetup; // 0x808(0x08)
	TSoftClassPtr<UObject> CampaignManagerClass; // 0x810(0x28)
	UPlayerCharacterID* BoscoID; // 0x838(0x08)
	TMap<UPlayerCharacterID*, UInventoryList*> InventoryLists; // 0x840(0x50)
	UBiome* DefaultBiome; // 0x890(0x08)
	TArray<FText> GenericBiomeQuotes; // 0x898(0x10)
	UMissionTemplate* DefaultMission; // 0x8a8(0x08)
	AProceduralSetup* CaveGeneratorPLSClass; // 0x8b0(0x08)
	TArray<UItemRefundList*> ItemRefunds; // 0x8b8(0x10)
	TArray<USubsystem*> BlueprintSubSystems; // 0x8c8(0x10)
	UPlayerCharacterID* DefaultCharacterID; // 0x8d8(0x08)
	UPlayerCharacterID* DefaultEditorCharacterID; // 0x8e0(0x08)
	FGameplayTag XBoxExcludeRoomTag; // 0x8e8(0x08)

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
// Size: 0xf0 (Inherited: 0x30)
struct UGameDLC : UDLCBase {
	int32_t SteamID; // 0x38(0x04)
	FString OddishID; // 0x40(0x10)
	FString XBoxDLCName; // 0x50(0x10)
	FString PS4AdditionalContentLabel; // 0x60(0x10)
	FString UWPStoreID; // 0x70(0x10)
	TSoftObjectPtr<UTexture2D> Banner; // 0x80(0x28)
	TSoftClassPtr<UObject> AnnouncementWidget; // 0xa8(0x28)
	FGuid SavegameID; // 0xd0(0x10)

	bool ShouldBeAnnounced(UObject* WorldContext);
	void MarkAnnounced(UObject* WorldContext);
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
	void CloseForUse(APlayerCharacter* User);
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
	void SetUsePushToTalk(bool enable);
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
	UDiscordWrapper* GetDiscordWrapper(UObject* WorldContextObject);
	UDeepDiveManager* GetDeepDiveManager(UObject* WorldContextObject);
	ADeepCSGWorld* GetCSGWorld(UObject* WorldContextObject);
	UCommunityGoalWrapper* GetCommunityGoalWrapper(UObject* WorldContextObject);
	int32_t GetChangelist();
	UCampaignManager* GetCampaingManager(UObject* WorldContextObject);
	UAsyncManager* GetAsyncManager(UObject* WorldContextObject);
};

// Class FSD.ResourceBasedObjective
// Size: 0x150 (Inherited: 0x150)
struct UResourceBasedObjective : UObjective {
};

// Class FSD.GatherGemsObjective
// Size: 0x168 (Inherited: 0x150)
struct UGatherGemsObjective : UResourceBasedObjective {
	int32_t GemsRequired; // 0x150(0x04)
	float GemsSpawnedModifier; // 0x154(0x04)
	int32_t GemsCollected; // 0x158(0x04)
	UGemResourceData* GemResource; // 0x160(0x08)

	void OnResourceChanged(UCappedResource* CappedResource, float amount);
	void OnRep_GemsCollected(int32_t prevAmount);
};

// Class FSD.GatheItemsObjective
// Size: 0x168 (Inherited: 0x150)
struct UGatheItemsObjective : UResourceBasedObjective {
	int32_t ItemsRequired; // 0x150(0x04)
	float ItemsSpawnedModifier; // 0x154(0x04)
	int32_t ItemsCollected; // 0x158(0x04)
	UCollectableResourceData* ItemResource; // 0x160(0x08)

	void OnResourceChanged(UCappedResource* CappedResource, float amount);
	void OnRep_ItemsCollected(int32_t prevAmount);
};

// Class FSD.Gem
// Size: 0x260 (Inherited: 0x248)
struct AGem : ACarriableItem {
	UCarriableInstantUsable* Usable; // 0x248(0x08)
	UResourceData* ResourceType; // 0x250(0x08)
	float ResourceAmount; // 0x258(0x04)
	bool hasBeenReleased; // 0x25c(0x01)

	void SetHasBeenReleased(bool hasBeenReleased);
	bool GetHasBeenReleased();
};

// Class FSD.ResourcePouch
// Size: 0x270 (Inherited: 0x248)
struct AResourcePouch : ACarriableItem {
	UCarriableInstantUsable* Usable; // 0x248(0x08)
	USoundCue* ImpactGroundSound; // 0x250(0x08)

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
// Size: 0x110 (Inherited: 0x30)
struct UGlobalMissionSetup : UDataAsset {
	FIRandRange ExtraBiomes; // 0x30(0x08)
	FIRandRange AdditionalMissionsForExtraBiomes; // 0x38(0x08)
	FIRandRange MissionsPerZone; // 0x40(0x08)
	TArray<FMissionBiomeItem> Biomes; // 0x48(0x10)
	TArray<FMissionTemplateItem> AvailableMissions; // 0x58(0x10)
	UMissionNameBank* MissionNames; // 0x68(0x08)
	FIRandRange MutatorWarningCount; // 0x70(0x08)
	float DoubleWarningChance; // 0x78(0x04)
	TArray<UMissionMutator*> Mutators; // 0x80(0x10)
	TArray<UMissionWarning*> Warnings; // 0x90(0x10)
	TMap<UMissionWarning*, UMissionWarning*> IncompatibleWarnings; // 0xa0(0x50)
	TArray<UPlanetZone*> PlanetZones; // 0xf0(0x10)
	TArray<FRequiredMissionItem> GlobalRequiredMissions; // 0x100(0x10)
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
	void RecordGAMissionTotalTimeHit(FString Key, FString Campaign, bool Rank, int32_t totalTime, int32_t Progress, int32_t XP, int32_t Credits);
	void RecordGAMissionTimeEvent(int32_t Time);
	void RecordGAEvent(FString EventCategory, FString EventAction, FString EventLabel, int32_t EventValue, enum class EFSDGoogleAnalyticsProperties Property);
	void RecordGADeepDiveStageHit(FString Key, bool Rank, int32_t stageTime, int32_t timeSinceStartOfDive, int32_t totalTime, int32_t nitraLeft);
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

// Class FSD.GrabbedStateComponent
// Size: 0x118 (Inherited: 0xf8)
struct UGrabbedStateComponent : UCharacterStateComponent {
	TWeakObjectPtr<UGrabberComponent> CurrentGrabber; // 0x104(0x08)

	void OnRep_Grabber();
};

// Class FSD.FlyingLifter
// Size: 0x538 (Inherited: 0x478)
struct AFlyingLifter : AAFlyingBug {
	UGrabberComponent* GrabberComp; // 0x478(0x08)
	UCapsuleComponent* GrabCapsule; // 0x480(0x08)
	UAudioComponent* GrabStart; // 0x488(0x08)
	UAudioComponent* GrabEnd; // 0x490(0x08)
	UAudioComponent* GrabbedIdleLoop; // 0x498(0x08)
	UInDangerComponent* InDanger; // 0x4a0(0x08)
	UAudioComponent* ScreamComponent; // 0x4a8(0x08)
	FMulticastInlineDelegate OnGrabSuccess; // 0x4b8(0x10)
	float PreventGrabAfterSpawn; // 0x4c8(0x04)
	bool ShouldScream; // 0x4d1(0x01)
	enum class EGrabberState GrabberState; // 0x4d2(0x01)
	float WanderingSpeed; // 0x4d4(0x04)
	float WanderingAcceleration; // 0x4d8(0x04)
	float ChaseSpeed; // 0x4dc(0x04)
	float ChaseAcceleration; // 0x4e0(0x04)
	float CarrySpeed; // 0x4e4(0x04)
	float CarryAcceleration; // 0x4e8(0x04)
	float FleeSpeed; // 0x4ec(0x04)
	float FleeAcceleration; // 0x4f0(0x04)
	float CarryCooldown; // 0x4f8(0x04)
	USoundBase* ScreamSound; // 0x500(0x08)
	USoundBase* FleeSound; // 0x508(0x08)
	UAnimSequenceBase* FleeAnimation; // 0x510(0x08)
	UCapsuleComponent* GrabberCollider; // 0x518(0x08)
	bool ParalyzeOnGrab; // 0x520(0x01)
	float ExtraUpForce; // 0x524(0x04)
	float ScreamDistance; // 0x528(0x04)
	UPointLightComponent* GrabLight; // 0x530(0x08)

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
// Size: 0x168 (Inherited: 0xb0)
struct UGrabberComponent : UActorComponent {
	FMulticastInlineDelegate OnGrabbedActor; // 0xb0(0x10)
	FMulticastInlineDelegate OnReleasedActor; // 0xc0(0x10)
	TWeakObjectPtr<AActor> GrabbedActor; // 0xe8(0x08)
	TWeakObjectPtr<ADeepPathfinderCharacter> PathfinderOwner; // 0xf0(0x08)
	TWeakObjectPtr<USkeletalMeshComponent> OwnerMesh; // 0xf8(0x08)
	TArray<UPrimitiveComponent*> TargetClippingWith; // 0x100(0x10)
	USoundCue* BeginGrabedSound; // 0x110(0x08)
	USoundCue* GrabedLoopSound; // 0x118(0x08)
	USoundCue* EndGrabedSound; // 0x120(0x08)
	UDialogDataAsset* BeginGrabbedShout; // 0x128(0x08)
	UDialogDataAsset* EndGrabbedShout; // 0x130(0x08)
	UDialogDataAsset* AttentionGrabbedShout; // 0x138(0x08)
	AActor* CurrentlyGrabbed; // 0x140(0x08)
	enum class EUseRestriction UseRestriction; // 0x148(0x01)
	FName GrabAttachName; // 0x14c(0x08)
	float GrabTime; // 0x154(0x04)
	float CarryCooldown; // 0x158(0x04)
	enum class EOutline PlayerOutlineOnGrab; // 0x15c(0x01)
	enum class EGrabbedStateCameraMode CameraMode; // 0x15d(0x01)
	bool TrackPlayerCollision; // 0x15e(0x01)
	bool ManualGrabTime; // 0x15f(0x01)
	bool CanPlayerShoot; // 0x160(0x01)
	bool NeedsPathToTarget; // 0x163(0x01)

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
// Size: 0x190 (Inherited: 0x168)
struct UFakePhysGrabberComponent : UGrabberComponent {
	TArray<FGrabAvoidClassEntry> ActorTypesToAvoid; // 0x168(0x10)
	TArray<FAvoidActorEntry> ActorsToAvoid; // 0x180(0x10)
};

// Class FSD.GrapplingHookGun
// Size: 0x3b8 (Inherited: 0x368)
struct AGrapplingHookGun : AAnimatedItem {
	UCoolDownItemAggregator* CoolDownAggregator; // 0x370(0x08)
	bool AutoFire; // 0x378(0x01)
	float MaxDistance; // 0x37c(0x04)
	UAnimMontage* FPReloadAnim; // 0x380(0x08)
	UAnimMontage* TPReloadAnim; // 0x388(0x08)
	UAnimMontage* FPGunslingAnim; // 0x390(0x08)
	UAnimMontage* TPGunslingAnim; // 0x398(0x08)
	float MaxSpeed; // 0x3b0(0x04)
	float WindUpTime; // 0x3b4(0x04)

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
	FGuid SavegameID; // 0x254(0x10)
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

// Class FSD.GroundLeechEnemy
// Size: 0x3a0 (Inherited: 0x338)
struct AGroundLeechEnemy : AEnemyPawn {
	FMulticastInlineDelegate OnTargetChanged; // 0x338(0x10)
	FMulticastInlineDelegate OnStateChanged; // 0x348(0x10)
	float MaxAttackDistance; // 0x358(0x04)
	float TrackingSpeed; // 0x35c(0x04)
	float PullingSpeed; // 0x360(0x04)
	float RetractingSpeed; // 0x364(0x04)
	USplineMeshComponent* TentacleSpline; // 0x368(0x08)
	enum class EGroundLeechState State; // 0x370(0x01)
	TWeakObjectPtr<AActor> Target; // 0x374(0x08)
	TWeakObjectPtr<UHealthComponent> TargetHealth; // 0x37c(0x08)
	FVector_NetQuantize TentacleLocation; // 0x384(0x0c)
	FVector_NetQuantize TentacleVelocity; // 0x390(0x0c)
	float StateTime; // 0x39c(0x04)

	void ReceiveMoved();
	void OnRep_Target();
	void OnRep_State();
	bool HasTarget();
	USplineMeshComponent* GetSplineComponent();
	FVector GetMouthLocation();
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
// Size: 0x390 (Inherited: 0x358)
struct AGuntowerEvent : AGameEvent {
	UDamageComponent* EndExplosionDamage; // 0x358(0x08)
	float TowerExplodeDelay; // 0x370(0x04)
	float DelayBetweenExplosions; // 0x374(0x04)
	TArray<AGuntowerModule*> TowerModules; // 0x378(0x10)
	int32_t ActiveHostileModules; // 0x388(0x04)

	void OnRep_ModuleActive();
	void OnModuleExploded(AGuntowerModule* explodedModule);
};

// Class FSD.GuntowerModule
// Size: 0x3b8 (Inherited: 0x2e8)
struct AGuntowerModule : AFSDPawn {
	USoundCue* ExposeWeakpointSound; // 0x2f0(0x08)
	USoundCue* deathSound; // 0x2f8(0x08)
	UParticleSystem* deathParticles; // 0x300(0x08)
	TArray<AActor*> WeakpointActors; // 0x308(0x10)
	FName BodyBone; // 0x318(0x08)
	FName TopConnectionPointName; // 0x320(0x08)
	FRotator CurrentTurretRotation; // 0x328(0x0c)
	UAnimSequenceBase* IntroductionAnimation; // 0x338(0x08)
	UStaticMeshComponent* ArmorPiece1; // 0x340(0x08)
	UStaticMeshComponent* ArmorPiece2; // 0x348(0x08)
	UStaticMeshComponent* ArmorPiece3; // 0x350(0x08)
	USkeletalMeshComponent* ModuleMesh; // 0x358(0x08)
	UGunTowerHealthComponent* GuntowerModuleHealth; // 0x360(0x08)
	TArray<AGuntowerModule*> PossibleChildModules; // 0x368(0x10)
	AGuntowerEvent* OwningEvent; // 0x378(0x08)
	AGuntowerModule* ChildModule; // 0x380(0x08)
	float WeakpointsExposedTime; // 0x388(0x04)
	float WeakpointsExposedTimeSolo; // 0x38c(0x04)
	float HideArmorTime; // 0x394(0x04)
	float ArmorShootoutDelay; // 0x398(0x04)
	float ArmorLaunchPower; // 0x39c(0x04)
	int32_t ModuleID; // 0x3a0(0x04)
	bool IsPassiveModule; // 0x3a8(0x01)
	bool ModuleIsActive; // 0x3a9(0x01)
	bool AreWeakpointsExposed; // 0x3aa(0x01)
	bool AreWeaponsExposed; // 0x3ab(0x01)
	bool ConstantRotation; // 0x3ac(0x01)
	bool IsArmorOff; // 0x3ad(0x01)
	bool Exploded; // 0x3ae(0x01)

	void SpawnNewChildModule(int32_t modulesLeftToSpawn, TArray<AGuntowerActivationPlatform*> activationPlatforms);
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
// Size: 0x3e8 (Inherited: 0x3b8)
struct AHostileGuntowerModule : AGuntowerModule {
	USkeletalMeshComponent* DestroyedMesh; // 0x3c0(0x08)
	UParticleSystemComponent* DestroyedSmoke; // 0x3c8(0x08)
	UEnemyComponent* EnemyComponent; // 0x3d0(0x08)
	float ModuleMaxHealth; // 0x3d8(0x04)
	FRotator CurrentAimRotation; // 0x3dc(0x0c)

	void OnWeakpointDied(UHealthComponentBase* Health);
	void OnRep_ModuleMaxHealth();
	void OnModuleDied(UHealthComponentBase* Health);
};

// Class FSD.HostileTargetingGuntowerModule
// Size: 0x428 (Inherited: 0x3e8)
struct AHostileTargetingGuntowerModule : AHostileGuntowerModule {
	TArray<AActor*> SensedTargets; // 0x3e8(0x10)
	float TurretRotationSpeed; // 0x404(0x04)
	AActor* TargetedActor; // 0x408(0x08)
	float TargetingRotationSpeed; // 0x410(0x04)
	FName TargetingFromBone; // 0x414(0x08)
	float TimeUntilForgetTarget; // 0x41c(0x04)
	bool AlwaysUpdateAimRotation; // 0x424(0x01)

	void OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus);
};

// Class FSD.LMGGuntoweModule
// Size: 0x4b0 (Inherited: 0x428)
struct ALMGGuntoweModule : AHostileTargetingGuntowerModule {
	UHitscanComponent* HitScanComp; // 0x428(0x08)
	UDamageComponent* DamageComp; // 0x430(0x08)
	USceneComponent* AimAtWhenNoTarget; // 0x438(0x08)
	UAudioComponent* FireAudio; // 0x440(0x08)
	UParticleSystem* TracerEffect; // 0x458(0x08)
	UParticleSystem* MuzzleEffect; // 0x460(0x08)
	USoundCue* ShootTailSound; // 0x468(0x08)
	int32_t BurstSize; // 0x478(0x04)
	float MaxAimOffset; // 0x488(0x04)
	float IdleAimRotationSpeed; // 0x48c(0x04)
	float TimeBetweenShots; // 0x4a0(0x04)
	float TimeBetweenBursts; // 0x4a4(0x04)
	float AimSpeed; // 0x4a8(0x04)
	bool IsFiresoundPlaying; // 0x4ad(0x01)

	void ShowShot(FVector Location);
	void OnRep_IsFiresoundPlaying();
};

// Class FSD.RandomFiringGuntowerModule
// Size: 0x568 (Inherited: 0x3e8)
struct ARandomFiringGuntowerModule : AHostileGuntowerModule {
	UStaticMeshComponent* LaserFrontTop; // 0x3e8(0x08)
	UStaticMeshComponent* LaserFrontBottom; // 0x3f0(0x08)
	UStaticMeshComponent* LaserBackTop; // 0x3f8(0x08)
	UStaticMeshComponent* LaserBackBottom; // 0x400(0x08)
	UParticleSystemComponent* FrontTopLaserMuzzle; // 0x408(0x08)
	UParticleSystemComponent* FrontBottomLaserMuzzle; // 0x410(0x08)
	UParticleSystemComponent* BackTopLaserMuzzle; // 0x418(0x08)
	UParticleSystemComponent* BackBottomLaserMuzzle; // 0x420(0x08)
	FRotator OtherCurrentRotation; // 0x4ec(0x0c)
	UParticleSystem* LaserImpact; // 0x508(0x08)
	UAudioComponent* LaserSound; // 0x510(0x08)
	UDamageComponent* Damage; // 0x518(0x08)
	float BoneSpaceTurretMaxYaw; // 0x520(0x04)
	float BoneSpaceTurretMaxPitch; // 0x524(0x04)
	float TimeBetweenAttacks; // 0x528(0x04)
	float TimeUntilNextAttack; // 0x52c(0x04)
	float ModuleRotationSpeed; // 0x530(0x04)
	float TurretAimSpeed; // 0x534(0x04)
	float LaserLeghtRatio; // 0x538(0x04)
	float TimeBetweenHits; // 0x53c(0x04)
	float ChanceToInvert; // 0x544(0x04)
	float PlatformDissolveRadius; // 0x548(0x04)
	float PlatformDissolveSqueeze; // 0x54c(0x04)
	bool IsAttacking; // 0x560(0x01)
};

// Class FSD.RadialFireModule
// Size: 0x430 (Inherited: 0x3e8)
struct ARadialFireModule : AHostileGuntowerModule {
	AProjectile* projectileClass; // 0x3e8(0x08)
	FRotator AttackEndRotation; // 0x3f0(0x0c)
	float RotationSpeedTurret; // 0x3fc(0x04)
	float DelayBetweenShots; // 0x404(0x04)
	bool IsAttacking; // 0x40c(0x01)
	FName LeftFireSocket; // 0x410(0x08)
	FName RightFireSocket; // 0x418(0x08)
	FName FrontFireSocket; // 0x420(0x08)
	FName BackFireSocket; // 0x428(0x08)

	void OnFire();
};

// Class FSD.HomingFireModule
// Size: 0x440 (Inherited: 0x428)
struct AHomingFireModule : AHostileTargetingGuntowerModule {
	FName ShootDroneSocket; // 0x428(0x08)
	AProjectile* HomingProjectileClass; // 0x430(0x08)
	float TimeBetweenShots; // 0x438(0x04)
};

// Class FSD.HomingDroneBomb
// Size: 0x340 (Inherited: 0x2f0)
struct AHomingDroneBomb : AProjectile {
	UEnemyHealthComponent* Health; // 0x2f8(0x08)
	USoundCue* ArmingSound; // 0x300(0x08)
	float HomingUpdateInterval; // 0x308(0x04)
	float TargetSearchInterval; // 0x30c(0x04)
	float ArmTime; // 0x310(0x04)
	FGameplayTagContainer GameplayTags; // 0x318(0x20)
	float HomingAccelerationMagnitude; // 0x338(0x04)

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
// Size: 0x330 (Inherited: 0x2e8)
struct AGuntowerWeakPoint : AFSDPawn {
	USceneComponent* Root; // 0x2e8(0x08)
	UEnemyHealthComponent* Health; // 0x2f0(0x08)
	UStaticMeshComponent* Mesh; // 0x2f8(0x08)
	UWeakpointGlowComponent* HitGlow; // 0x300(0x08)
	TWeakObjectPtr<UEnemyHealthComponent> ParentHealth; // 0x308(0x08)
	UDamageClass* DamageToParent; // 0x310(0x08)
	UParticleSystem* deathParticles; // 0x318(0x08)
	USoundCue* deathSound; // 0x320(0x08)

	void OnExposedChanged(bool isExposed);
	void OnDeath(UHealthComponentBase* HealthComponent);
	void DamageParent(float ammount);
};

// Class FSD.GunTowerHealthComponent
// Size: 0x288 (Inherited: 0x288)
struct UGunTowerHealthComponent : UEnemyHealthComponent {
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
	void OnDamageTaken(float amount);
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

// Class FSD.HydraHead
// Size: 0x4f0 (Inherited: 0x338)
struct AHydraHead : AEnemyPawn {
	USplineMeshComponent* NeckSplineMesh; // 0x338(0x08)
	USplineComponent* SplineComponent; // 0x340(0x08)
	AActor* HydraBody; // 0x348(0x08)
	FTransform RestTransform; // 0x350(0x30)
	FTransform LastTransform; // 0x380(0x30)
	FTransform DesiredTransform; // 0x3b0(0x30)
	FHydraHeadTarget DesiredTarget; // 0x3e0(0x18)
	FVector TargetLocation; // 0x490(0x0c)
	float MovementAlpha; // 0x49c(0x04)
	float HeadMovementDuration; // 0x4a0(0x04)
	float CanSwayCooldown; // 0x4a4(0x04)
	FVector2D SwayRange; // 0x4a8(0x08)
	float NeckBaseTangentLength; // 0x4b0(0x04)
	FVector NeckBasePositionOffset; // 0x4b4(0x0c)
	FVector NeckBaseTangentOffset; // 0x4c0(0x0c)
	float NeckTopTangentLength; // 0x4cc(0x04)
	FVector NeckTopPositionOffset; // 0x4d0(0x0c)
	FVector NeckTopTangentOffset; // 0x4dc(0x0c)
	AActor* lookAtTargetActor; // 0x4e8(0x08)

	void UpdateSpline();
	void OnRep_HydraBody();
	void OnRep_DesiredTarget();
	void MoveHydraHead(FTransform newDesiredTransform, float newCanSwayCooldown, float newHeadMovementDuration);
	void LookAtActor(AActor* TargetActor);
};

// Class FSD.HydraWeedCore
// Size: 0x338 (Inherited: 0x338)
struct AHydraWeedCore : AEnemyPawn {

	void WakupCore();
	void OnShooterKilled(AHydraWeedShooter* shooter);
	void OnHealerKilled(AHydraWeedHealer* healer);
};

// Class FSD.ShootingPlant
// Size: 0x348 (Inherited: 0x338)
struct AShootingPlant : AEnemyPawn {
	bool IsVisible; // 0x338(0x01)
	AActor* Target; // 0x340(0x08)

	void SetTarget(AActor* Target);
	void OnRep_Target();
};

// Class FSD.HydraWeedShooter
// Size: 0x350 (Inherited: 0x348)
struct AHydraWeedShooter : AShootingPlant {
	AHydraWeedCore* Core; // 0x348(0x08)
};

// Class FSD.HydraWeedHealer
// Size: 0x340 (Inherited: 0x338)
struct AHydraWeedHealer : AEnemyPawn {
	AHydraWeedCore* Core; // 0x338(0x08)
};

// Class FSD.HydraWeedSpawnProjectile
// Size: 0x300 (Inherited: 0x2f0)
struct AHydraWeedSpawnProjectile : AProjectile {
	FVector TargetLocation; // 0x2f0(0x0c)
};

// Class FSD.TriggerAI
// Size: 0x28 (Inherited: 0x28)
struct UTriggerAI : UInterface {

	bool OnTriggerAI(FName TriggerName);
	void OnMessageAI(FName TriggerName);
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
	void OnDamage(float amount);
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
// Size: 0x3a0 (Inherited: 0x398)
struct AInsectSwarmEnemy : AEnemyDeepPathfinderCharacter {
	UParticleSystemComponent* SwarmParticles; // 0x398(0x08)
};

// Class FSD.InsectSwarmSpawner
// Size: 0x358 (Inherited: 0x338)
struct AInsectSwarmSpawner : AEnemyPawn {
	AInsectSwarmEnemy* SwarmType; // 0x338(0x08)
	float SpawnHeightOffset; // 0x340(0x04)
	float AlertDistance; // 0x344(0x04)
	float RespawnDelay; // 0x348(0x04)
	TWeakObjectPtr<AInsectSwarmEnemy> SwarmInstance; // 0x34c(0x08)

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
	void Equip(AItem* Item, bool ignoreIsUsing);
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

	UItemID* GetPreviousUnlockedItem(UObject* WorldContextObject, enum class EItemCategory Category, UItemID* currentItem, UPlayerCharacterID* ItemOwner);
	UItemID* GetPreviousItem(enum class EItemCategory Category, UItemID* currentItem);
	int32_t GetNumberOfItems(enum class EItemCategory Category);
	UItemID* GetNextUnlockedItem(UObject* WorldContextObject, enum class EItemCategory Category, UItemID* currentItem, UPlayerCharacterID* ItemOwner);
	UItemID* GetNextItem(enum class EItemCategory Category, UItemID* currentItem);
	TArray<AActor*> GetLoadedItemListFiltered(enum class EItemCategory Category, FDelegate Filter);
	TArray<AActor*> GetLoadedItemList(enum class EItemCategory Category);
	TArray<UItemID*> GetItemList(enum class EItemCategory Category);
	int32_t GetItemIndex(enum class EItemCategory Category, UItemID* Item);
	TArray<UItemID*> GetAllItemsList();
	void CheckForInventoryAchievements(UObject* WorldContextObject);
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
// Size: 0xc8 (Inherited: 0xb0)
struct UHeatMaterialComponent : UActorComponent {
	FName ParameterName; // 0xb0(0x08)
	TArray<UMaterialInstanceDynamic*> MaterialIntances; // 0xb8(0x10)

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
	enum class ECharacterAnimSet AnimationSetType; // 0x80(0x01)
	UBlendSpace1D* TP_LookUpDown; // 0x88(0x08)
	UBlendSpace1D* TP_LookUpDown_Aim; // 0x90(0x08)
	UAnimSequence* TP_Sprint; // 0x98(0x08)
	UAnimSequence* TP_Idle; // 0xa0(0x08)
	UAnimSequence* TP_Idle_Aim; // 0xa8(0x08)
	UAnimSequence* TP_LookForward; // 0xb0(0x08)
	UAnimSequence* TP_LookForward_Aim; // 0xb8(0x08)
	UAnimSequence* TP_JumpStart; // 0xc0(0x08)
	UAnimSequence* TP_JumpStart_Aim; // 0xc8(0x08)
	UAnimSequence* TP_JumpLoop; // 0xd0(0x08)
	UAnimSequence* TP_JumpLoop_Aim; // 0xd8(0x08)
	UAnimMontage* TP_JumpLand; // 0xe0(0x08)
	UAnimSequence* TP_Walk_Forward; // 0xe8(0x08)
	UAnimSequence* TP_Walk_Forward_Aim; // 0xf0(0x08)
	UAnimSequence* TP_Run_Forward; // 0xf8(0x08)
	UAnimSequence* TP_Run_Forward_Aim; // 0x100(0x08)
	UAnimSequence* TP_Walk_Right; // 0x108(0x08)
	UAnimSequence* TP_Walk_Right_Aim; // 0x110(0x08)
	UAnimSequence* TP_Run_Right; // 0x118(0x08)
	UAnimSequence* TP_Run_Right_Aim; // 0x120(0x08)
	UAnimSequence* TP_Walk_Left; // 0x128(0x08)
	UAnimSequence* TP_Walk_Left_Aim; // 0x130(0x08)
	UAnimSequence* TP_Run_Left; // 0x138(0x08)
	UAnimSequence* TP_Run_Left_Aim; // 0x140(0x08)
	UAnimSequence* TP_Walk_Back; // 0x148(0x08)
	UAnimSequence* TP_Walk_Back_Aim; // 0x150(0x08)
	UAnimSequence* TP_Run_Back; // 0x158(0x08)
	UAnimSequence* TP_Run_Back_Aim; // 0x160(0x08)
	UAnimSequence* TP_Revived; // 0x168(0x08)
	UAnimSequence* TP_Downed; // 0x170(0x08)
	UAnimSequence* TP_Downed_Loop; // 0x178(0x08)
	FItemLoadoutAnimations LoadoutAnimations; // 0x180(0x18)
	float CameraOffset; // 0x198(0x04)
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
// Size: 0x258 (Inherited: 0x220)
struct AItemPreviewActor : AActor {
	UItemSkin* CurrentSkinColor; // 0x228(0x08)
	UItemSkin* CurrentSkinMesh; // 0x230(0x08)
	AActor* itemClass; // 0x248(0x08)

	void UnSkinItem(USkinEffect* Skin);
	void SkinItem(USkinEffect* Skin);
	void SetItemClass(AActor* itemClass);
	void OnUnSkinItem(USkinEffect* Skin);
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

// Class FSD.SkinBank
// Size: 0x68 (Inherited: 0x30)
struct USkinBank : UDataAsset {
	UItemID* ItemID; // 0x30(0x08)
	TArray<USkinBank*> SubBanks; // 0x38(0x10)
	TArray<UItemSkin*> Skins; // 0x48(0x10)
	TArray<UItemSkin*> AllSkins; // 0x58(0x10)

	void AddSkins(TArray<UItemSkin*> skinsToAdd);
};

// Class FSD.ItemSkinSet
// Size: 0x38 (Inherited: 0x30)
struct UItemSkinSet : UDataAsset {
	bool ColorIsLockedToSet; // 0x30(0x01)
};

// Class FSD.SavablePrimaryDataAsset
// Size: 0x60 (Inherited: 0x30)
struct USavablePrimaryDataAsset : UPrimaryDataAsset {
	int32_t BuildRestrictions; // 0x38(0x04)
	int32_t PlatformRestrictions; // 0x3c(0x04)
	bool EnableDangerousSaveGameIDEditing; // 0x40(0x01)
	FGuid SavegameID; // 0x44(0x10)
	UBuildRestriction* BuildRestriction; // 0x58(0x08)
};

// Class FSD.ItemSkin
// Size: 0xf8 (Inherited: 0x60)
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
	bool KeepOutOfBuild; // 0xe0(0x01)
	UItemID* OwningItem; // 0xe8(0x08)
	UPlayerCharacterID* OwningCharacter; // 0xf0(0x08)

	bool Unlock(UObject* WorldContext, UItemID* ItemID, bool broadcast);
	void Receive_SkinItem(UObject* Skinnable);
	void ItemSkinSignature__DelegateSignature(UItemSkin* Skin);
	void ItemSkinEquipSignature__DelegateSignature(UItemSkin* Skin);
	bool IsLocked(UObject* WorldContext, UItemID* skinnableID);
	bool IsEquippedOnItem(UItemID* ItemID, AFSDPlayerState* PlayerState);
	UItemID* GetOwningItem();
	UPlayerCharacterID* GetOwningCharacter();
};

// Class FSD.SkinEffect
// Size: 0x28 (Inherited: 0x28)
struct USkinEffect : UObject {

	void Receive_RemoveFromItem(UMeshComponent* Mesh, AActor* Skinnable, bool IsFirstPerson);
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

// Class FSD.ItemSkinSettings
// Size: 0xa8 (Inherited: 0x30)
struct UItemSkinSettings : UDataAsset {
	TArray<USkinBank*> SkinBanks; // 0x30(0x10)
	TMap<UItemSkin*, FItemSkinOwners> ItemSkins; // 0x40(0x50)
	UItemSkinSet* StockSet; // 0x90(0x08)
	TArray<UItemSkin*> LoadedSkins; // 0x98(0x10)
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

// Class FSD.ItemUpgradeElement
// Size: 0x30 (Inherited: 0x30)
struct UItemUpgradeElement : UDataAsset {
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
	float amount; // 0x150(0x04)
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
// Size: 0x158 (Inherited: 0x150)
struct UGatlingGunUpgrade : UItemUpgrade {
	enum class EGatlingGunUpgrade upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EGatlingGunUpgrade upgradeType);
};

// Class FSD.AssaultRifleUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UAssaultRifleUpgrade : UItemUpgrade {
	enum class EAssaultRifleUpgrade upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EAssaultRifleUpgrade upgradeType);
};

// Class FSD.BoltActionRifleUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UBoltActionRifleUpgrade : UStandardItemUpgrade {
	enum class EBoltActionRifleUpgrades upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EBoltActionRifleUpgrades upgradeType);
};

// Class FSD.DualMachinePistolsUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UDualMachinePistolsUpgrade : UItemUpgrade {
	enum class EDualMachinePistolsUpgrades upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

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
// Size: 0x158 (Inherited: 0x150)
struct USawedOffShotgunUpgrade : UItemUpgrade {
	enum class ESawedOffShotgunUpgrades upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class ESawedOffShotgunUpgrades upgradeType);
};

// Class FSD.BurstWeaponUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UBurstWeaponUpgrade : UItemUpgrade {
	enum class EBurstWeaponUpgrades upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EBurstWeaponUpgrades upgradeType);
};

// Class FSD.AutoShotgunUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UAutoShotgunUpgrade : UItemUpgrade {
	enum class EAutoShotgunUpgrades upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EAutoShotgunUpgrades upgradeType);
};

// Class FSD.BasicPistolUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UBasicPistolUpgrade : UItemUpgrade {
	enum class EBasicPistol upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EBasicPistol upgradeType);
};

// Class FSD.RevolverUpgrade
// Size: 0x158 (Inherited: 0x150)
struct URevolverUpgrade : UItemUpgrade {
	enum class ERevolerUpgrades upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

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
// Size: 0x158 (Inherited: 0x150)
struct UPickaxeUpgrade : UItemUpgrade {
	enum class EPickaxeUpgradeType upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EPickaxeUpgradeType upgradeType);
};

// Class FSD.FlameThrowerUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UFlameThrowerUpgrade : UItemUpgrade {
	enum class EFlameThrowerUpgradeType upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EFlameThrowerUpgradeType upgradeType);
};

// Class FSD.StickyFlameStatusEffectUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UStickyFlameStatusEffectUpgrade : UItemUpgrade {
	UStatusEffect* StatusEffect; // 0x150(0x08)

	FUpgradeValues GetUpgradedValue(AActor* Item, AFSDPlayerState* Player, UStatusEffect* StatusEffect);
};

// Class FSD.DoubleDrillUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UDoubleDrillUpgrade : UItemUpgrade {
	enum class EDoubleDrillUpgradeType upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EDoubleDrillUpgradeType upgradeType);
};

// Class FSD.InventoryItemUpgrade
// Size: 0x160 (Inherited: 0x158)
struct UInventoryItemUpgrade : UStandardItemUpgrade {
	enum class EInventoryItemUpgradeType upgradeType; // 0x158(0x01)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EInventoryItemUpgradeType upgradeType);
};

// Class FSD.CapacityUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UCapacityUpgrade : UItemUpgrade {
	float amount; // 0x150(0x04)

	FUpgradeValues GetUpgradedValue(AActor* Item, AFSDPlayerState* Player);
};

// Class FSD.CooldownUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UCooldownUpgrade : UItemUpgrade {
	float amount; // 0x150(0x04)

	FUpgradeValues GetUpgradedValue(AActor* Item, AFSDPlayerState* Player);
};

// Class FSD.MultiHitscanUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UMultiHitscanUpgrade : UItemUpgrade {
	enum class EMultiHitscanUpgradeType upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	float GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EMultiHitscanUpgradeType upgradeType, float outBaseValue, float outUpgradeValue, enum class EItemPreviewStatus outPreviewStatus, bool includePreview);
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
// Size: 0x168 (Inherited: 0x150)
struct UFlatDamageUpgrade : UItemUpgrade {
	float Damage; // 0x150(0x04)
	UDamageClass* DamageClass; // 0x158(0x08)
	AActor* RequiredClass; // 0x160(0x08)

	float GetUpgradedValue(AActor* Item, AFSDPlayerState* Player, UDamageClass* DamageClass, float outBaseValue, float outUpgradeValue, enum class EItemPreviewStatus outPreviewStatus, bool includePreview);
};

// Class FSD.RandomDamageUpgrade
// Size: 0x158 (Inherited: 0x150)
struct URandomDamageUpgrade : UItemUpgrade {
	FRandRange DamageRange; // 0x150(0x08)

	FUpgradeValues GetUpgradedValue(AActor* Item, AFSDPlayerState* Player);
};

// Class FSD.DamageConversionUpgrade
// Size: 0x168 (Inherited: 0x150)
struct UDamageConversionUpgrade : UItemUpgrade {
	UDamageClass* DamageClass; // 0x150(0x08)
	float ConversionPercentage; // 0x158(0x04)
	bool DamageIsAdded; // 0x15c(0x01)
	AActor* RequiredClass; // 0x160(0x08)

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

	float GetUpgradedValue(AActor* Item, AFSDPlayerState* Player, FName Key, float outBaseValue, float outUpgradeValue, enum class EItemPreviewStatus outPreviewStatus, bool includePreview);
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

	float GetUpgradedValue(AActor* Item, AFSDPlayerState* Player, UStatusEffect* StatusEffect, float outBaseValue, float outUpgradeValue, enum class EItemPreviewStatus outPreviewStatus, bool includePreview);
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

	float GetUpgradedValue(AActor* Item, AFSDPlayerState* Player, UStatusEffect* StatusEffect, float outBaseValue, float outUpgradeValue, enum class EItemPreviewStatus outPreviewStatus, bool includePreview);
};

// Class FSD.FearAoEBonusUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UFearAoEBonusUpgrade : UItemUpgrade {
	float FearFactor; // 0x150(0x04)
	float Range; // 0x154(0x04)

	FUpgradeValues GetUpgradedValue(AActor* Item, AFSDPlayerState* Player);
};

// Class FSD.ExplosionUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UExplosionUpgrade : UItemUpgrade {
	enum class EExplosionUpgrade upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	float GetUpgradedValue(AActor* upgradedItem, AActor* componentItem, AFSDPlayerState* Player, enum class EExplosionUpgrade upgradeType, float outBaseValue, float outUpgradeValue, bool includePreview);
};

// Class FSD.SingleUsableUpgrade
// Size: 0x158 (Inherited: 0x150)
struct USingleUsableUpgrade : UItemUpgrade {
	enum class ESingleUsableUpgradeType upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	FUpgradeValues GetUpgradedValue(AActor* Item, AActor* subItem, AFSDPlayerState* Player, enum class ESingleUsableUpgradeType upgradeType);
};

// Class FSD.FlareUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UFlareUpgrade : UItemUpgrade {
	enum class EFlareUpgradeType upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AActor* flareClass, enum class EFlareUpgradeType upgradeType);
};

// Class FSD.GrenadeUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UGrenadeUpgrade : UItemUpgrade {
	enum class EGrenadeUpgradeType upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AGrenade* flareClass, enum class EGrenadeUpgradeType upgradeType);
};

// Class FSD.LineCutterUpgrade
// Size: 0x158 (Inherited: 0x150)
struct ULineCutterUpgrade : UItemUpgrade {
	enum class ELineCutterUpgradeType upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AActor* Item, enum class ELineCutterUpgradeType upgradeType);
};

// Class FSD.LineCutterProjectileUpgrade
// Size: 0x158 (Inherited: 0x150)
struct ULineCutterProjectileUpgrade : UItemUpgrade {
	enum class ELineCutterProjectileUpgradeType upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AActor* Item, enum class ELineCutterProjectileUpgradeType upgradeType);
};

// Class FSD.ProjectileUpgrade
// Size: 0x168 (Inherited: 0x158)
struct UProjectileUpgrade : UStandardItemUpgrade {
	enum class EProjectileUpgrade upgradeType; // 0x158(0x01)
	AActor* projectileClass; // 0x160(0x08)

	FUpgradeValues GetUpgradedValue(AActor* Item, AActor* upgradedItem, AFSDPlayerState* Player, enum class EProjectileUpgrade upgradeType);
};

// Class FSD.FlareGunUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UFlareGunUpgrade : UItemUpgrade {
	enum class EFlaregunUpgrades upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	FUpgradeValues GetUpgradedValue(AActor* Item, AFSDPlayerState* Player, enum class EFlaregunUpgrades upgradeType);
};

// Class FSD.FlaregunProjectileUpgrade
// Size: 0x160 (Inherited: 0x150)
struct UFlaregunProjectileUpgrade : UItemUpgrade {
	enum class EFlaregunProjectileUpgrades upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)
	AActor* projectileClass; // 0x158(0x08)

	FUpgradeValues GetUpgradedValue(AActor* Item, AActor* upgradedItem, AFSDPlayerState* Player, enum class EFlaregunProjectileUpgrades upgradeType);
};

// Class FSD.ChargedProjectileUpgrade
// Size: 0x160 (Inherited: 0x150)
struct UChargedProjectileUpgrade : UItemUpgrade {
	enum class EChargedProjectileUpgrades upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)
	AActor* projectileClass; // 0x158(0x08)

	FUpgradeValues GetUpgradedValue(AItem* Item, AActor* upgradedActor, AFSDPlayerState* Player, enum class EChargedProjectileUpgrades upgradeType);
};

// Class FSD.ElectricalSMGUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UElectricalSMGUpgrade : UItemUpgrade {
	enum class EElectricalSMGUpgrades upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AActor* Item, enum class EElectricalSMGUpgrades upgradeType);
};

// Class FSD.ZiplineGunUpgrade
// Size: 0x160 (Inherited: 0x150)
struct UZiplineGunUpgrade : UItemUpgrade {
	enum class EZiplineGunUpgrades upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)
	AZipLineProjectile* projectileClass; // 0x158(0x08)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AActor* Item, enum class EZiplineGunUpgrades upgradeType);
};

// Class FSD.GrapplingHookUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UGrapplingHookUpgrade : UItemUpgrade {
	enum class EGrapplingHookUpgrade upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AActor* Item, enum class EGrapplingHookUpgrade upgradeType);
};

// Class FSD.SentryGunUpgrade
// Size: 0x158 (Inherited: 0x150)
struct USentryGunUpgrade : UItemUpgrade {
	enum class ESentryGunUpgradeType upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	FUpgradeValues GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class ESentryGunUpgradeType upgradeType);
};

// Class FSD.SentryGunTypeUpgrade
// Size: 0x160 (Inherited: 0x150)
struct USentryGunTypeUpgrade : UItemUpgrade {
	ARecallableSentryGun* SentryGunType; // 0x150(0x08)
	AItemMarker* MarkerType; // 0x158(0x08)
};

// Class FSD.ArmorRegeneratorUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UArmorRegeneratorUpgrade : UItemUpgrade {
	enum class EArmorRegeneratorUpgrades upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	float GetUpgradedValue(AItem* Item, AFSDPlayerState* Player, enum class EArmorRegeneratorUpgrades upgradeType, float outBaseValue, float outUpgradeValue, enum class EItemPreviewStatus outPreviewStatus, bool includePreview);
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
// Size: 0x158 (Inherited: 0x150)
struct UArmorUpgrade : UItemUpgrade {
	enum class EArmorUpgradeType upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AActor* armorClass, enum class EArmorUpgradeType aUpgradeType);
	FUpgradeValues GetUpgradedStatValue(AFSDPlayerState* Player, AActor* armorClass, UPawnStat* Stat);
};

// Class FSD.ArmorStatUpgrade
// Size: 0x160 (Inherited: 0x150)
struct UArmorStatUpgrade : UItemUpgrade {
	UPawnStat* Stat; // 0x150(0x08)
	float amount; // 0x158(0x04)
};

// Class FSD.BoscoUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UBoscoUpgrade : UItemUpgrade {
	enum class EBoscoUpgrades upgradeType; // 0x150(0x01)
	float amount; // 0x154(0x04)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AActor* Item, enum class EBoscoUpgrades upgradeType);
};

// Class FSD.PlatformGunUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UPlatformGunUpgrade : UItemUpgrade {
	enum class EPlatformGunUpgrades myUpgradeType; // 0x150(0x01)

	FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, AActor* Item, enum class EPlatformGunUpgrades aUpgradeType);
};

// Class FSD.DetPackUpgrade
// Size: 0x158 (Inherited: 0x150)
struct UDetPackUpgrade : UItemUpgrade {
	float amount; // 0x150(0x04)
	enum class EDetPackUpgrades upgradeType; // 0x154(0x01)

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

// Class FSD.Upgradable
// Size: 0x28 (Inherited: 0x28)
struct UUpgradable : UInterface {

	void Upgraded(TArray<UItemUpgrade*> Upgrades);
};

// Class FSD.UpgradableGear
// Size: 0x28 (Inherited: 0x28)
struct UUpgradableGear : UInterface {

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
};

// Class FSD.JellyBreeder
// Size: 0x510 (Inherited: 0x478)
struct AJellyBreeder : AAFlyingBug {
	UAnimSequenceBase* EggSpawnAnimation; // 0x478(0x08)
	UParticleSystem* EggParticles; // 0x480(0x08)
	USoundBase* EggSound; // 0x488(0x08)
	UEnemyDescriptor* EnemyToSpawn; // 0x490(0x08)
	AProjectile* EggClass; // 0x498(0x08)
	float TimeBetweenBursts; // 0x4a0(0x04)
	float TimeBetweenEggs; // 0x4a4(0x04)
	float CloseToSpawnEggTime; // 0x4a8(0x04)
	float EmissionInterpInSpeed; // 0x4b8(0x04)
	float EmissionInterpOutSpeed; // 0x4bc(0x04)
	float EmissionInAlpha; // 0x4c0(0x04)
	float EmissionOutAlpha; // 0x4c4(0x04)
	float MaxEmission; // 0x4c8(0x04)
	UMaterialInterface* mat; // 0x4d0(0x08)
	UMaterialInstanceDynamic* Mid; // 0x4d8(0x08)
	int32_t EggBurstSize; // 0x4e0(0x04)
	int32_t MaxJellies; // 0x4e8(0x04)
	int32_t MatIndex; // 0x4f0(0x04)
	float MultiplierOnHighPlayerCount; // 0x4f4(0x04)
	UPhysicalMaterial* WeakPointMaterial; // 0x4f8(0x08)
	UPhysicalMaterial* UnWeakPointMaterial; // 0x500(0x08)
	bool IsInBreedMode; // 0x508(0x01)

	void SpawnEnemies(AProjectile* aEgg, int32_t aAmountToSpawn);
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
// Size: 0x3a0 (Inherited: 0x368)
struct AJetPackItem : AAnimatedItem {
	float ActiveTime; // 0x36c(0x04)
	UCurveFloat* VerticalAccelerationCurve; // 0x370(0x08)
	float VerticalAcceleration; // 0x378(0x04)
	float MaxVerticalSpeed; // 0x37c(0x04)
	float MaxHorizontalSpeed; // 0x380(0x04)
	float MaxHorizontalDrift; // 0x384(0x04)
	float BurnDuration; // 0x388(0x04)
	float RechargeDuration; // 0x38c(0x04)
	float Fuel; // 0x390(0x04)
	bool Active; // 0x394(0x01)
	UPlayerMovementComponent* CharacterMovement; // 0x398(0x08)

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
// Size: 0x170 (Inherited: 0x150)
struct UKillEnemiesObjective : UObjective {
	int32_t EnemyCount; // 0x150(0x04)
	int32_t ExtraEnemies; // 0x154(0x04)
	UDebrisPositioning* Positioning; // 0x158(0x08)
	UEnemyDescriptor* EnemyTarget; // 0x160(0x08)
	int32_t EnemiesKilled; // 0x168(0x04)
	int32_t EnemiesToKill; // 0x16c(0x04)

	void RegisterTargetSpawned(APawn* Target);
	void ReceiveTargetKilled(UHealthComponentBase* Health);
	void OnTargetKilled(UHealthComponentBase* Health);
	void OnRep_EnemiesToKill(int32_t prevAmount);
	void OnRep_EnemiesKilled(int32_t prevAmount);
};

// Class FSD.LaserPointerMarker
// Size: 0x258 (Inherited: 0x220)
struct ALaserPointerMarker : AActor {
	FText LookAtName; // 0x220(0x18)
	FLinearColor LookAtColor; // 0x238(0x10)
	AActor* LookAtTarget; // 0x248(0x08)
	UTexture2D* LookAtIcon; // 0x250(0x08)
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
// Size: 0x518 (Inherited: 0x368)
struct ALaserPointerItem : AAnimatedItem {
	FMulticastInlineDelegate OnMarkerPlaced; // 0x368(0x10)
	ALaserPointerMarker* MarkerType; // 0x378(0x08)
	ALaserPointerMarker* SecondaryMarkerType; // 0x380(0x08)
	TWeakObjectPtr<ALaserPointerMarker> ActiveMarker; // 0x388(0x08)
	ALaserPointerWaypoint* WaypointType; // 0x390(0x08)
	int32_t MaxWaypoints; // 0x398(0x04)
	TArray<ALaserPointerWaypoint*> Waypoints; // 0x3a0(0x10)
	int32_t NextWaypointIndex; // 0x3b0(0x04)
	float MarkerLifeTime; // 0x3b8(0x04)
	FLinearColor ColorMinerals; // 0x3bc(0x10)
	FLinearColor ColorEnemy; // 0x3cc(0x10)
	FLinearColor ColorOther; // 0x3dc(0x10)
	UDialogDataAsset* DefaultLookAtShout; // 0x3f0(0x08)
	UDialogDataAsset* DefaultEnemyShout; // 0x3f8(0x08)
	USceneComponent* PointerComponent; // 0x400(0x08)
	FHitResult LookAtHit; // 0x408(0x88)
	TWeakObjectPtr<UObjectInfoComponent> LookAtInfo; // 0x490(0x08)
	FText LookAtName; // 0x498(0x18)
	FText LookAtDescription; // 0x4b0(0x18)
	FLinearColor LookAtColor; // 0x4c8(0x10)
	float LookAtDistance; // 0x4d8(0x04)
	UTexture2D* LookAtIcon; // 0x4e0(0x08)
	enum class ELaserPointerTargetType TargetType; // 0x4e8(0x01)
	FGuid LookAtSaveGameID; // 0x4ec(0x10)
	AActor* ExtraActor; // 0x500(0x08)
	UDialogDataAsset* LookAtShout; // 0x508(0x08)
	AFSDGameState* GameState; // 0x510(0x08)

	void UnlockToMinersManual(UObject* WorldContextObject, FGuid ObjectID);
	void ToggleLaserVisible(bool aVisible);
	void ServerPlaceMarker(FVector Location, FText Name, FLinearColor Color, AActor* Target, enum class ELaserPointerTargetType TypeOfTarget, UTexture2D* Icon, ALaserPointerMarker* aMarkerType);
	void Server_SecondaryUse();
	void OnPointOfInterest(AActor* TargetActor, FVector TargetLocation, UTexture2D* TargetIcon);
	void OnDeath(UHealthComponentBase* Health);
	void GetPointTransform(FTransform PointTransform);
};

// Class FSD.LevelGenerationDebris
// Size: 0xc8 (Inherited: 0xb0)
struct ULevelGenerationDebris : UActorComponent {
	UDebrisBase* Debris; // 0xb0(0x08)
	UObject* Influencer; // 0xb8(0x08)
	float Range; // 0xc0(0x04)
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
// Size: 0x4e0 (Inherited: 0x2f0)
struct ALineCutterProjectile : AProjectile {
	FScaledEffect EletricHitEffect; // 0x2f0(0x10)
	FScaledEffect ProjectileDisappearEffect; // 0x300(0x10)
	float SwipeRadius; // 0x310(0x04)
	float DoubleLineDistanceMultiplier; // 0x314(0x04)
	float OverlapRadius; // 0x318(0x04)
	bool DestroyOnTerrainCollision; // 0x31c(0x01)
	bool IsDead; // 0x31d(0x01)
	bool bHasReversedDirection; // 0x31e(0x01)
	float FlyStraighTime; // 0x374(0x04)
	enum class EImpactDecalSize EletricDecalSize; // 0x378(0x01)
	enum class EImpactDecalSize ImpactDecalSize; // 0x379(0x01)
	FMulticastInlineDelegate OnLineDestroy; // 0x3c0(0x10)
	FMulticastInlineDelegate OnLineLifespanEnd; // 0x3d0(0x10)
	FMulticastInlineDelegate OnPerformHit; // 0x3e0(0x10)
	FMulticastInlineDelegate OnLineEffectHide; // 0x3f0(0x10)
	FVector LeftLastPosition; // 0x400(0x0c)
	FVector RightLastPosition; // 0x40c(0x0c)
	USceneComponent* LineRoot; // 0x418(0x08)
	USceneComponent* LeftSphere; // 0x420(0x08)
	USceneComponent* RightSphere; // 0x428(0x08)
	USceneComponent* LeftSphere2; // 0x430(0x08)
	USceneComponent* RightSphere2; // 0x438(0x08)
	USceneComponent* LeftSphere3; // 0x440(0x08)
	USceneComponent* RightSphere3; // 0x448(0x08)
	UParticleSystemComponent* BeamParticle; // 0x450(0x08)
	UParticleSystemComponent* BeamParticle2; // 0x458(0x08)
	UParticleSystemComponent* BeamParticle3; // 0x460(0x08)
	UParticleSystemComponent* LeftHitParticles; // 0x468(0x08)
	UParticleSystemComponent* RightHitParticles; // 0x470(0x08)
	float RotationSpeed; // 0x478(0x04)
	FRotator LineRotation; // 0x47c(0x0c)
	enum class ELineRotation RotationMode; // 0x488(0x01)
	bool ShouldExplode; // 0x489(0x01)
	bool OnlyOne; // 0x48a(0x01)
	bool IsDoubleLine; // 0x48b(0x01)
	bool HasPlasmaTrail; // 0x48c(0x01)
	float LineMaxSize; // 0x490(0x04)
	float LineExpansionDelay; // 0x494(0x04)
	float TimeToLineExpansion; // 0x498(0x04)
	float FireRate; // 0x49c(0x04)
	UDamageComponent* DamageComponent; // 0x4a0(0x08)
	UDamageComponent* InitialDamageComponent; // 0x4a8(0x08)
	int32_t InitialHitDamageMultiplier; // 0x4b0(0x04)
	float InhibitImpactDecalsTime; // 0x4b4(0x04)
	float MinTimeBetweenImpactDecals; // 0x4b8(0x04)

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
// Size: 0x360 (Inherited: 0x2f0)
struct AGuntowerLineProjectile : AProjectile {
	FMulticastInlineDelegate OnLineDestroy; // 0x2f0(0x10)
	USceneComponent* LeftLinePoint; // 0x300(0x08)
	USceneComponent* RightLinePoint; // 0x308(0x08)
	UDamageComponent* DamageComponent; // 0x310(0x08)
	UParticleSystemComponent* BeamParticles; // 0x318(0x08)
	float PlatformDissolveRadius; // 0x320(0x04)
	float PlatformDissolveSqueeze; // 0x324(0x04)
	UParticleSystemComponent* HitParticles; // 0x328(0x08)
	float TimeBetweenLineChecks; // 0x350(0x04)

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
// Size: 0x338 (Inherited: 0x318)
struct ALoadoutItemProxy : AItem {
	UItemCharacterAnimationSet* AnimationSet; // 0x318(0x08)
	FItemLoadoutAnimations LoadoutAnimations; // 0x320(0x18)

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

// Class FSD.LockOnWeapon
// Size: 0x828 (Inherited: 0x7a8)
struct ALockOnWeapon : ABoltActionWeapon {
	AActor* AimTarget; // 0x7a8(0x08)
	int32_t ShotsPerTarget; // 0x7b0(0x04)
	int32_t MaxTargets; // 0x7b4(0x04)
	float TimeBetweenLockedShots; // 0x7b8(0x04)
	float LockonTime; // 0x7bc(0x04)
	float MaxLockOnDegree; // 0x7c0(0x04)
	float LoseLockOnDegree; // 0x7c4(0x04)
	UActorTrackingWidget* TrackingWidgetClass; // 0x7c8(0x08)

	void SetMuzzleDirection(FVector TargetLocation);
	void Server_SetAimTarget(AActor* Target);
	void OnRep_AimTarget();
	void OnAsyncFireComplete();
	void MuzzleLerpToTarget(FVector TargetLocation);
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
// Size: 0x260 (Inherited: 0x230)
struct ULookingAtContentWidget : UUserWidget {
	TWeakObjectPtr<AActor> CurrentTarget; // 0x230(0x08)
	TWeakObjectPtr<UPawnAfflictionComponent> CurrentTargetAfflictions; // 0x238(0x08)
	TWeakObjectPtr<USimpleObjectInfoComponent> CurrentTargetInfo; // 0x240(0x08)
	TScriptInterface<IHealth> CurrentTargetHealth; // 0x248(0x10)
	bool bWeakPointHit; // 0x258(0x01)

	void UpdateCurrentTarget(float DeltaSeconds, AActor* InTargetActor, TScriptInterface<IHealth> InTargetHealthComponent);
	void RegisterWeakPointHit();
	void ReceiveUpdateTarget(AActor* InCurrentTarget, float DeltaTime);
	void ReceiveNewTarget(AActor* InCurrentTarget);
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
	UCurveFloat* avoidCostCurve; // 0x240(0x08)
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
	void OnPlayerCollectedTreasure(APlayerCharacter* collector);
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

// Class FSD.MilestoneAsset
// Size: 0xc0 (Inherited: 0x30)
struct UMilestoneAsset : UDataAsset {
	FMulticastInlineDelegate OnMilestoneClaimed; // 0x30(0x10)
	FMulticastInlineDelegate OnMilestoneReached; // 0x40(0x10)
	FGuid SavegameID; // 0x50(0x10)
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
	void SetMuleInstance(ADonkeyCharacter* Donkey);
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
// Size: 0x40 (Inherited: 0x30)
struct UExplosiveEnemiesMutator : UMutator {
	TArray<UDamageComponent*> DamageComponents; // 0x30(0x10)

	void ExplodeEnemy(AFSDPawn* enemy);
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
	FGuid SavegameID; // 0x40(0x10)
	FText Title; // 0x50(0x18)
	UMissionStatCategory* Category; // 0x68(0x08)
	UFSDAchievement* StatAchievement; // 0x70(0x08)
	enum class EMissionStatType MissionStatType; // 0x78(0x01)
	bool DoNotShowInMissionStatView; // 0x79(0x01)
	bool ShowAllValuesCombined; // 0x7a(0x01)
	bool ShowHighestValue; // 0x7b(0x01)

	void StatCountChanged__DelegateSignature(UMissionStat* MissionStat, float Value);
	FText MissionStatToText(enum class EMissionStatType StatType, float Value);
	void Increment(UObject* WorldContext, UMissionStat* Stat, APlayerCharacter* CharacterClass, float amount);
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

	void OnResourceIncremented(UCappedResource* Resource, float amount);
};

// Class FSD.GlobalMissionParameters
// Size: 0x40 (Inherited: 0x30)
struct UGlobalMissionParameters : UDataAsset {
	TArray<FResourceSpawner> DefaultResources; // 0x30(0x10)
};

// Class FSD.MissionTemplate
// Size: 0x200 (Inherited: 0x58)
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
	FLinearColor MissionIconBorderColor; // 0x1a8(0x10)
	int32_t MissionTypeIndex; // 0x1b8(0x04)
	FString MissionTypeAnalyticsIndex; // 0x1c0(0x10)
	TArray<UMissionDNA*> DNA; // 0x1d0(0x10)
	TArray<TSoftClassPtr<UObject>> DebrisComponents; // 0x1e0(0x10)
	bool MustBeUnlocked; // 0x1f0(0x01)
	float RoomEncounerScale; // 0x1f4(0x04)
	float StationaryEnemyScale; // 0x1f8(0x04)

	void Receive_SetMissionParameters(UGeneratedMission* mission, FRandomStream Random);
	bool IsLocked(UFSDSaveGame* SaveGame);
	TArray<UMissionDuration*> GetValidDurations();
	TArray<UMissionComplexity*> GetValidComplexities();
	TSoftClassPtr<UObject> GetSoftReferenceToPLS();
	FObjectiveMissionIcon GetPrimaryObjectiveIcon();
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
	FGuid SavegameID; // 0x50(0x10)
};

// Class FSD.MissionDuration
// Size: 0x60 (Inherited: 0x30)
struct UMissionDuration : UDataAsset {
	FText Title; // 0x30(0x18)
	float HazardBonus; // 0x48(0x04)
	int32_t NumberOfDots; // 0x4c(0x04)
	FGuid SavegameID; // 0x50(0x10)
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

// Class FSD.MotionAudioController
// Size: 0x820 (Inherited: 0x7d0)
struct UMotionAudioController : UAudioComponent {
	float MaxValue; // 0x7d0(0x04)
	float IncreseSpeed; // 0x7d4(0x04)
	float DecaySpeed; // 0x7d8(0x04)
	bool DebugText; // 0x7dc(0x01)
	bool Clamp; // 0x7dd(0x01)
	bool Interp; // 0x7de(0x01)
	float AccelerationThreshold; // 0x7e0(0x04)
	float SpeedThreshold; // 0x7f0(0x04)
	float FadeInTime; // 0x7f4(0x04)
	float FadeOutTime; // 0x7f8(0x04)
	bool AutoPlayOnSpeedThreshold; // 0x7fc(0x01)
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
// Size: 0x2b8 (Inherited: 0x238)
struct UMultiHitscanComponent : UHitscanBaseComponent {
	int32_t BulletsPerShot; // 0x238(0x04)
	float MuzzleRadius; // 0x23c(0x04)
	float GeneralImpactAudioVolume; // 0x240(0x04)
	TArray<AActor*> DamagedActorCache; // 0x248(0x10)
	TArray<FMultiHitscanHit> Hits; // 0x258(0x10)
	TArray<AActor*> ActorsHit; // 0x268(0x10)

	void Server_RegisterHit(TArray<FMultiHitscanHit> hitResults);
	void All_ShowHit(TArray<FMultiHitscanHit> hitResults);
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
// Size: 0x100 (Inherited: 0xf8)
struct UNoMovementStateComponent : UCharacterStateComponent {
	bool DisableHeadLightOnEnter; // 0xf8(0x01)
	bool EnableHeadLightOnExit; // 0xf9(0x01)
};

// Class FSD.AttachedStateComponent
// Size: 0x128 (Inherited: 0xf8)
struct UAttachedStateComponent : UCharacterStateComponent {
	bool DisableHeadLightOnEnter; // 0xf8(0x01)
	bool EnableHeadLightOnExit; // 0xf9(0x01)
	float MaxPitch; // 0xfc(0x04)
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
// Size: 0x88 (Inherited: 0x30)
struct UPlayerCharacterID : UDataAsset {
	FGuid SavegameID; // 0x38(0x10)
	FName AssetName; // 0x48(0x08)
	TSoftClassPtr<UObject> Character; // 0x50(0x28)
	FString AnalyticsID; // 0x78(0x10)

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
	FGuid SavegameID; // 0x38(0x10)
};

// Class FSD.ObjectiveID
// Size: 0x58 (Inherited: 0x30)
struct UObjectiveID : UDataAsset {
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
// Size: 0xb8 (Inherited: 0x30)
struct UOverclockBank : UDataAsset {
	TMap<UOverclockUpgrade*, USchematic*> Overclocks; // 0x38(0x50)
	UPlayerCharacterID* UsedByCharacter; // 0x88(0x08)
	TSoftClassPtr<UObject> OwningItem; // 0x90(0x28)
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
// Size: 0x138 (Inherited: 0xf8)
struct UParalyzedStateComponent : UCharacterStateComponent {
	TSoftClassPtr<UObject> CaveLeechClass; // 0x100(0x28)
	float CameraArmHeightOffset; // 0x12c(0x04)
	float CameraArmSpeed; // 0x130(0x04)
};

// Class FSD.ParasiteEnemy
// Size: 0x390 (Inherited: 0x338)
struct AParasiteEnemy : AEnemyPawn {
	USceneComponent* Root; // 0x338(0x08)
	USkeletalMeshComponent* Mesh; // 0x340(0x08)
	UStaticMeshComponent* Tentacles1; // 0x348(0x08)
	UStaticMeshComponent* Tentacles2; // 0x350(0x08)
	UOutlineComponent* outline; // 0x358(0x08)
	UParticleSystem* deathParticles; // 0x378(0x08)
	USoundBase* deathSound; // 0x380(0x08)

	void OnSelfDeath(UHealthComponentBase* aHealthComponent);
};

// Class FSD.PassedOutStateComponent
// Size: 0x108 (Inherited: 0xf8)
struct UPassedOutStateComponent : UCharacterStateComponent {
	UDialogDataAsset* ReviveShout; // 0xf8(0x08)
	bool bAllPlayersPassedOut; // 0x100(0x01)

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

	void PushAffliction(UPawnAffliction* affliction, bool onlyIfNotActive);
	void PopAffliction(UPawnAffliction* affliction);
	void OnDeath(UHealthComponentBase* HealthComponent);
	bool IsAfflictedBy(UPawnAffliction* affliction);
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
// Size: 0xf8 (Inherited: 0xf8)
struct UPhotographyStateComponent : UCharacterStateComponent {
};

// Class FSD.PickaxeFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPickaxeFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsPickaxePartEquipped(UObject* WorldContextObject, enum class EPickaxePartLocation Location, UPickaxePart* part, UItemID* pickaxeID);
	TArray<UPickaxePart*> GetUnlockedPickaxeParts(UObject* WorldContextObject, enum class EPickaxePartLocation Category);
	UPickaxePart* GetEquippedPickaxePart(UObject* WorldContextObject, enum class EPickaxePartLocation partLocation, UItemID* pickaxeID);
	void EquipPickaxePart(UObject* WorldContextObject, UPickaxePart* part, enum class EPickaxePartLocation partLocation, UItemID* pickaxeID);
};

// Class FSD.PickaxeItem
// Size: 0x6a0 (Inherited: 0x318)
struct APickaxeItem : AItem {
	bool QuadDamageCarving; // 0x328(0x01)
	FMulticastInlineDelegate ActiveMiningEvent; // 0x330(0x10)
	USceneComponent* FP_Root; // 0x340(0x08)
	USceneComponent* TP_Root; // 0x348(0x08)
	USceneComponent* FP_Scale; // 0x350(0x08)
	USceneComponent* TP_Scale; // 0x358(0x08)
	UPlayerAnimInstance* FPAnimInstance; // 0x360(0x08)
	UPlayerAnimInstance* TPAnimInstance; // 0x368(0x08)
	UAnimMontage* FP_EquipAnimation; // 0x370(0x08)
	UAnimMontage* TP_EquipAnimation; // 0x378(0x08)
	float EquipDuration; // 0x380(0x04)
	UItemCharacterAnimationSet* CharacterAnimationSet; // 0x388(0x08)
	UDamageComponent* DamageComponent; // 0x398(0x08)
	UDamageComponent* SpecialDamageComponent; // 0x3a0(0x08)
	float SpecialCooldown; // 0x3a8(0x04)
	float SpecialCooldownRemaining; // 0x3ac(0x04)
	FCoolDownProgressStyle SpecialCooldownUI; // 0x3c8(0x40)
	int32_t RockMiningBonus; // 0x408(0x04)
	int32_t DirtMiningBonus; // 0x40c(0x04)
	float DamageRange; // 0x410(0x04)
	float DamageRadius; // 0x414(0x04)
	UStatusEffect* OnDamageEnemySlowdownEffect; // 0x418(0x08)
	FGameplayTagContainer WideDamageTrackingTags; // 0x420(0x20)
	USoundCue* MiningSound; // 0x440(0x08)
	UForceFeedbackEffect* MineRumble; // 0x448(0x08)
	UForceFeedbackEffect* PartialMineRumble; // 0x450(0x08)
	UForceFeedbackEffect* DamageRumble; // 0x458(0x08)
	float GeneralImpactAudioVolume; // 0x460(0x04)
	float HitCooldown; // 0x464(0x04)
	float MiningDuration; // 0x468(0x04)
	float DistanceConsideredSameHit; // 0x46c(0x04)
	float BlockParticlesScaleFP; // 0x470(0x04)
	float BlockParticlesScaleTP; // 0x474(0x04)
	enum class EPickaxeState State; // 0x478(0x01)
	bool ActiveMiningEnabled; // 0x5e0(0x01)
	int32_t MaxActiveMiningCount; // 0x5e4(0x04)
	float ActiveMiningSpeedBoost; // 0x5e8(0x04)
	bool PreventQMining; // 0x5ec(0x01)
	float QMiningExpectedDelay; // 0x5f0(0x04)
	float QMiningInitialDelay; // 0x5f4(0x04)
	float QMiningReducedPlayRatePct; // 0x5f8(0x04)
	double QMiningLastHitTime; // 0x600(0x08)
	USoundCue* ActiveMiningSucceedSound; // 0x608(0x08)
	USoundCue* ActiveMiningFailedSound; // 0x610(0x08)
	bool CanBezerk; // 0x626(0x01)
	UStatusEffect* BezerkStatusEffect; // 0x628(0x08)
	bool PowerAttackEnabled; // 0x632(0x01)
	TMap<enum class EPickaxePartLocation, FPickaxeMeshInstance> EquippedParts; // 0x638(0x50)
	UMaterialInterface* EquippedMaterial; // 0x688(0x08)

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
// Size: 0x290 (Inherited: 0x220)
struct APickaxePreviewActor : AActor {
	USceneComponent* TP_Root; // 0x228(0x08)
	TMap<enum class EPickaxePartLocation, FPickaxeMeshInstance> EquippedParts; // 0x230(0x50)
	UItemID* ItemID; // 0x280(0x08)
	UMaterialInterface* EquippedMaterial; // 0x288(0x08)

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
// Size: 0x118 (Inherited: 0xf8)
struct UPilotingStateComponent : UCharacterStateComponent {
	AActor* Vehicle; // 0xf8(0x08)

	void Server_MoveRight(float Value);
	void Server_MoveForward(float Value);
	void OnRep_Vehicle();
};

// Class FSD.PipelineBuilderItem
// Size: 0x3c8 (Inherited: 0x3c0)
struct APipelineBuilderItem : ATrackBuilderItem {
	UItemPlacerAggregator* SegmentPlacer; // 0x3c0(0x08)
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
	void OnExtractorPodOrdered(APlayerCharacter* InUser);
	void OnConnectedWithSegment(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment);
	void OnConnectedSegmentActivated(APipelineSegment* InSegment);
	FVector GetLandingOffset();
};

// Class FSD.RessuplyPod
// Size: 0x2b0 (Inherited: 0x220)
struct ARessuplyPod : AActor {
	FMulticastInlineDelegate OnStateChanged; // 0x220(0x10)
	UDamageComponent* Damage; // 0x230(0x08)
	float KillRadius; // 0x238(0x04)
	float DropHeight; // 0x23c(0x04)
	float DropDelay; // 0x240(0x04)
	float MissionShoutDelay; // 0x244(0x04)
	UDialogDataAsset* DialogOrderAccepted; // 0x248(0x08)
	UDialogDataAsset* DialogPodArrived; // 0x250(0x08)
	UDialogDataAsset* CurrentMissionShout; // 0x260(0x08)
	FVector StartLocation; // 0x268(0x0c)
	FVector TargetLocation; // 0x274(0x0c)
	enum class ERessuplyPodState State; // 0x280(0x01)
	float TargetDropTime; // 0x284(0x04)
	float ServerDropProgress; // 0x294(0x04)
	UCurveFloat* DropCurve; // 0x298(0x08)
	AActor* PlayerSpawnPoint; // 0x2a0(0x08)
	float CloseToImpactDistance; // 0x2a8(0x04)

	void SetIdling();
	void RessuplyPodStateDelegate__DelegateSignature(ARessuplyPod* InPod, enum class ERessuplyPodState InState);
	void OnTunnelBLocked();
	void OnRep_State(enum class ERessuplyPodState oldState);
	void OnDropStarted();
	void OnDroppodImpact();
	void OnDroppodCloseToImpact();
	AActor* DropToTarget(UObject* WorldContextObject, ARessuplyPod* podClass, FVector Location, AActor* Requester);
};

// Class FSD.PipelineExtractorPod
// Size: 0x2c0 (Inherited: 0x2b0)
struct APipelineExtractorPod : ARessuplyPod {
	TWeakObjectPtr<APipelineSegment> ConnectedSegment; // 0x2b0(0x08)
	float TargetRotation; // 0x2b8(0x04)

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
	void CallbackSegmentRepaired(APlayerCharacter* InUser);
	void CallbackSegmentDestroyed(UHealthComponentBase* InHealth);
	void CallbackSegmentActivatedProgress(float InProgress);
	void CallbackSegmentActivated(APlayerCharacter* InUser);
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
// Size: 0x390 (Inherited: 0x368)
struct APlaceableItem : AAnimatedItem {
	UCapacityHoldingItemAggregator* Capacity; // 0x378(0x08)
	UItemPlacerAggregator* ItemPlacer; // 0x380(0x08)
	AActor* PlacableClass; // 0x388(0x08)

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
	FGuid SavegameID; // 0x5c(0x10)

	bool IsUnlocked(UFSDSaveGame* SaveGame);
	FGuid GetSavegameID();
	TArray<UBiome*> GetBiomes();
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

	bool StopUseMontage();
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
	UAnimSequence* GetTPSprint();
	UAnimSequence* GetTPLookForward_Aim();
	UAnimSequence* GetTPLookForward();
	UAnimSequence* GetTPJumpStart_Aim();
	UAnimSequence* GetTPJumpStart();
	UAnimSequence* GetTPJumpLoop_Aim();
	UAnimSequence* GetTPJumpLoop();
	UAnimSequence* GetTPIdle();
	UAnimSequence* GetTPDowned_Aim();
	UAnimSequence* GetTPDowned();
	enum class ECharacterAnimSet GetAnimationSetType();
};

// Class FSD.PlayerCharacter
// Size: 0xe10 (Inherited: 0x4c0)
struct APlayerCharacter : ACharacter {
	FMulticastInlineDelegate OnStartedUsingItem; // 0x4d0(0x10)
	FMulticastInlineDelegate OnStoppedUsingItem; // 0x4e0(0x10)
	FMulticastInlineDelegate OnFirePressed; // 0x4f0(0x10)
	FMulticastInlineDelegate OnFireReleased; // 0x500(0x10)
	FMulticastInlineDelegate OnGrenadePressed; // 0x510(0x10)
	FMulticastInlineDelegate OnPerkInitialized; // 0x520(0x10)
	FMulticastInlineDelegate OnInstantRevivePossibleEvent; // 0x530(0x10)
	FMulticastInlineDelegate OnCollectedEverything; // 0x540(0x10)
	FMulticastInlineDelegate OnCollectedSchematic; // 0x550(0x10)
	FMulticastInlineDelegate OnCollectedSkin; // 0x560(0x10)
	FMulticastInlineDelegate OnCollectedDrink; // 0x570(0x10)
	FMulticastInlineDelegate OnCollectedVictoryPose; // 0x580(0x10)
	FMulticastInlineDelegate OnCollectedPickaxePart; // 0x590(0x10)
	FMulticastInlineDelegate OnCollectedVanityItem; // 0x5a0(0x10)
	FMulticastInlineDelegate OnCameraModeChanged; // 0x5b0(0x10)
	FMulticastInlineDelegate OnDownCameraTargetChanged; // 0x5c0(0x10)
	FMulticastInlineDelegate OnActionHoldProgress; // 0x5d0(0x10)
	FMulticastInlineDelegate OnThrowCarriableProgress; // 0x5e0(0x10)
	FMulticastInlineDelegate OnJumpPressed; // 0x5f0(0x10)
	FMulticastInlineDelegate OnJumpReleased; // 0x600(0x10)
	FMulticastInlineDelegate OnSecondaryFirePressed; // 0x610(0x10)
	FMulticastInlineDelegate OnSecondaryFireReleased; // 0x620(0x10)
	FMulticastInlineDelegate OnManualMiningBegin; // 0x630(0x10)
	FMulticastInlineDelegate OnManualMiningEnd; // 0x640(0x10)
	FMulticastInlineDelegate OnLaserPointerPressed; // 0x650(0x10)
	FMulticastInlineDelegate OnLaserPointerReleased; // 0x660(0x10)
	FMulticastInlineDelegate OnTerrainScannerPressed; // 0x670(0x10)
	FMulticastInlineDelegate OnTerrainScannerReleased; // 0x680(0x10)
	FMulticastInlineDelegate OnFlareThrown; // 0x690(0x10)
	FMulticastInlineDelegate OnDropItem; // 0x6a0(0x10)
	FMulticastInlineDelegate OnUpdateMeshes; // 0x6b0(0x10)
	FMulticastInlineDelegate OnOpenChat; // 0x6c0(0x10)
	FMulticastInlineDelegate OnAcceptInvite; // 0x6d0(0x10)
	FMulticastInlineDelegate OnRejectInvite; // 0x6e0(0x10)
	FMulticastInlineDelegate OnIgnoreInvite; // 0x6f0(0x10)
	FMulticastInlineDelegate OnToggleOutline; // 0x700(0x10)
	FMulticastInlineDelegate OnToggleMapTool; // 0x710(0x10)
	FMulticastInlineDelegate OnToggleScanTool; // 0x720(0x10)
	FMulticastInlineDelegate OnDepthChanged; // 0x730(0x10)
	FMulticastInlineDelegate OnCharacterStateChanged; // 0x740(0x10)
	FMulticastInlineDelegate OnDamagedEnemy; // 0x750(0x10)
	FMulticastInlineDelegate OnLaserPointerEvent; // 0x760(0x10)
	FMulticastInlineDelegate OnSecondaryLaserPointerEvent; // 0x770(0x10)
	FMulticastInlineDelegate OnSaluteEvent; // 0x780(0x10)
	FMulticastInlineDelegate OnPlayerShout; // 0x790(0x10)
	FMulticastInlineDelegate OnRevivedEvent; // 0x7c0(0x10)
	FMulticastInlineDelegate OnReviveCallEvent; // 0x7d0(0x10)
	FMulticastInlineDelegate OnRevivedOtherCharacter; // 0x7e0(0x10)
	FMulticastInlineDelegate OnHeadlightOnChanged; // 0x7f0(0x10)
	FMulticastInlineDelegate OnCallDonkey; // 0x800(0x10)
	FGameplayTagContainer GameplayTags; // 0x810(0x20)
	UZipLineStateComponent* ZipLineStateComponent; // 0x830(0x08)
	TArray<AActor*> EscapableGrabberEnemies; // 0x838(0x10)
	FMulticastInlineDelegate OnEnemyStartedTracking; // 0x848(0x10)
	FMulticastInlineDelegate OnEnemyEndedTracking; // 0x858(0x10)
	FMulticastInlineDelegate OnKilledGrabber; // 0x868(0x10)
	FMulticastInlineDelegate OnCanEscapeGrabberChanged; // 0x878(0x10)
	AActor* GrabbedByClass; // 0x888(0x08)
	USoundCue* PowerAttackRefreshedSound; // 0x890(0x08)
	FMulticastInlineDelegate OnCoolDownProgress; // 0x898(0x10)
	bool bIsBeingBittenByCaveLeech; // 0x8a8(0x01)
	UWidgetInteractionComponent* WidgetInteraction; // 0x8b0(0x08)
	FDownCameraSettings DownCameraSettings; // 0x8b8(0x18)
	TArray<TWeakObjectPtr<AArmorRegeneratorActor>> ActiveShieldGenerators; // 0x8e0(0x10)
	FGuid SavegameID; // 0x8f4(0x10)
	FVector EstimatedVelocity; // 0x904(0x0c)
	FHoldButton FlareHeadlightButton; // 0x920(0x28)
	FHoldButton CycleItemButton; // 0x948(0x28)
	FHoldButton ToggleHUDButton; // 0x970(0x28)
	float EquipLaserpointerHoldDuration; // 0x998(0x04)
	bool IsPressingMovementInputKey; // 0x99c(0x01)
	UPlayerCharacterID* characterID; // 0x9b8(0x08)
	ATutorialManager* TutorialManagerType; // 0x9c0(0x08)
	USkeletalMeshComponent* FPMesh; // 0x9c8(0x08)
	UCameraComponent* FirstPersonCamera; // 0x9d0(0x08)
	USceneComponent* FirstPersonRoot; // 0x9d8(0x08)
	UActorTrackingComponent* ActorTracking; // 0x9e0(0x08)
	UCharacterIntoxicationComponent* IntoxicationComponent; // 0x9e8(0x08)
	UMissionStatsCollector* MissionStatsCollector; // 0x9f0(0x08)
	USpringArmComponent* ThirdPersonSpringArm; // 0x9f8(0x08)
	UCameraComponent* ThirdPersonCamera; // 0xa00(0x08)
	UPointLightComponent* ThirdPersonLight; // 0xa08(0x08)
	USpringArmComponent* FollowSpringArm; // 0xa10(0x08)
	UCameraComponent* FollowCamera; // 0xa18(0x08)
	UCameraComponent* DownCamera; // 0xa20(0x08)
	UCharacterCameraController* CameraController; // 0xa28(0x08)
	UPlayerHealthComponent* HealthComponent; // 0xa30(0x08)
	UCharacterSightComponent* SightComponent; // 0xa38(0x08)
	UInventoryComponent* InventoryComponent; // 0xa40(0x08)
	UCharacterUseComponent* UseComponent; // 0xa48(0x08)
	USingleUsableComponent* UsableComponent; // 0xa50(0x08)
	UOutlineComponent* OutlineComponent; // 0xa58(0x08)
	UTrailComponent* TrailComponent; // 0xa60(0x08)
	UCharacterRecoilComponent* RecoilComponent; // 0xa68(0x08)
	UStatusEffectsComponent* StatusEffectsComponent; // 0xa70(0x08)
	UPawnStatsComponent* PawnStatsComponent; // 0xa78(0x08)
	UPlayerAfflictionComponent* PawnAfflictionComponent; // 0xa80(0x08)
	UPlayerAttackPositionComponent* AttackerPositioningComponent; // 0xa88(0x08)
	UCommunicationComponent* CommunicationComponent; // 0xa90(0x08)
	UPlayerTemperatureComponent* TemperatureComponent; // 0xa98(0x08)
	UPlayerReactiveTerrainTrackerComponent* ReactiveTerrainTracker; // 0xaa0(0x08)
	UInstantUsable* TrackGrindUsableComponent; // 0xaa8(0x08)
	float RunningSpeed; // 0xab0(0x04)
	float RunBoost; // 0xab4(0x04)
	float RunBoostChargeTime; // 0xab8(0x04)
	USoundCue* RunBoostActivationSound; // 0xac0(0x08)
	UParticleSystem* RunBoostParticles; // 0xac8(0x08)
	UPawnAffliction* RunBoostAffliction; // 0xad8(0x08)
	UPhysicsAsset* HangingPhysicsAsset; // 0xae0(0x08)
	float HangingSimulationBlend; // 0xae8(0x04)
	bool IsPlayableCharacter; // 0xaf4(0x01)
	UAudioComponent* SprintSoundComponent; // 0xaf8(0x08)
	USoundCue* SpringSound; // 0xb00(0x08)
	FAnalogAimSettings AimSettings; // 0xb08(0x40)
	float DownedCameraMinPitch; // 0xb48(0x04)
	float DownedCameraMaxPitch; // 0xb4c(0x04)
	float TurnToFaceScannerAngularSpeed; // 0xb50(0x04)
	float CarryingMovementSpeedPenalty; // 0xb54(0x04)
	float CarryingMaxFallVelocity; // 0xb58(0x04)
	float MaxThrowProgress; // 0xb5c(0x04)
	float MaxThrowHoldDuration; // 0xb60(0x04)
	float CarryingThrowMinForce; // 0xb68(0x04)
	float CarryingThrowMaxForce; // 0xb6c(0x04)
	UStatusEffect* CarryingThrowingStatusEffect; // 0xb78(0x08)
	float ThrowCarriableProgress; // 0xb84(0x04)
	TMap<char, UCharacterStateComponent*> CharacterStates; // 0xb88(0x50)
	TWeakObjectPtr<ATutorialManager> TutorialManager; // 0xbd8(0x08)
	UCharacterStateComponent* ActiveCharacterState; // 0xbe0(0x08)
	bool IsInDropPod; // 0xbeb(0x01)
	bool IsInEscapePod; // 0xbec(0x01)
	float ButtonMemoryDuration; // 0xbf0(0x04)
	bool IsRunning; // 0xbf4(0x01)
	bool CanDash; // 0xbf5(0x01)
	float DashInputWindow; // 0xbfc(0x04)
	float DashFowardMovementMinRequirement; // 0xc00(0x04)
	float DashRightMovementMaxRequirement; // 0xc04(0x04)
	float DashControllerMinValueRequired; // 0xc08(0x04)
	float DashCooldown; // 0xc0c(0x04)
	UStatusEffect* DashStatusEffect; // 0xc10(0x08)
	float ForwardInput; // 0xc18(0x04)
	float RightInput; // 0xc1c(0x04)
	float StoppedRunningTime; // 0xc2c(0x04)
	float ShoutPressedTime; // 0xc30(0x04)
	bool bIsUsingItemPressed; // 0xc34(0x01)
	bool bIsUsingPressed; // 0xc35(0x01)
	float UsingDelay; // 0xc38(0x04)
	bool HeadLightOn; // 0xc3c(0x01)
	bool IsUsing; // 0xc3d(0x01)
	float JumpPressedTime; // 0xc40(0x04)
	bool CanMove; // 0xc44(0x01)
	bool CanAim; // 0xc45(0x01)
	bool CanUseItem; // 0xc46(0x01)
	bool CanChangeItems; // 0xc47(0x01)
	bool CanMine; // 0xc48(0x01)
	bool IsStandingDown; // 0xc49(0x01)
	bool InDanceRange; // 0xc4a(0x01)
	bool IsDancing; // 0xc4b(0x01)
	float DanceStartTime; // 0xc4c(0x04)
	UFSDAchievement* HappyFeetAchievement; // 0xc50(0x08)
	int32_t DanceMove; // 0xc58(0x04)
	enum class ECharacterCameraMode CameraMode; // 0xc5c(0x01)
	bool IsInCharacterSelectionWorld; // 0xc5d(0x01)
	float IdleTime; // 0xc60(0x04)
	UAnimMontage* FPDrinkSalute; // 0xc68(0x08)
	UAnimMontage* TPDrinkSalute; // 0xc70(0x08)
	UDialogDataAsset* SaluteShout; // 0xc78(0x08)
	UDialogDataAsset* DrinkShout; // 0xc80(0x08)
	UAnimMontage* CurrentSaluteMontage; // 0xc88(0x08)
	TArray<UMaterialInterface*> CachedMaterials; // 0xc98(0x10)
	bool BlockTrackGrindOnLanded; // 0xca8(0x01)
	FHeroInfo HeroInfo; // 0xcc0(0x88)
	FString SteamClassID; // 0xd48(0x10)
	UMaterialInstanceDynamic* RadarMaterialInstance; // 0xd58(0x08)
	int32_t RadarMaterialAngleParameterIndex; // 0xd60(0x04)
	FVector LastUpdateVisibiltyPos; // 0xd64(0x0c)
	FVector SpawnLocation; // 0xd70(0x0c)
	UFSDPhysicalMaterial* FallbackPhysicalMaterial; // 0xd80(0x08)
	bool ClientReady; // 0xd89(0x01)
	UCharacterStateComponent* NextCharacterState; // 0xd90(0x08)
	bool PlayerIsLeavingInDroppod; // 0xda0(0x01)
	bool CanInstantRevive; // 0xdac(0x01)
	bool HasInitializedPerks; // 0xdae(0x01)
	UCharacterVanityComponent* CharacterVanity; // 0xdb8(0x08)
	FCameraSpringSettings CameraSpringSettings; // 0xdc8(0x3c)

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
	void ShowSimpleHoldProgress(APlayerController* PlayerController, FText InDescription, float InProgress);
	void SetStandingDown(bool standingDown);
	void SetRadarMaterialInstance(UMaterialInstanceDynamic* matInstance);
	void SetOutsideShieldGenerator(AArmorRegeneratorActor* Shield);
	void SetIsCharacterSelectionModel();
	void SetInsideShieldGenerator(AArmorRegeneratorActor* Shield);
	void SetInCharacterSelectionWorld();
	void SetHeadLight(bool on);
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
	void Server_InstantRevive(APlayerCharacter* ReviveTarget);
	void Server_EscapeFromGrabber();
	void Server_CancelThrowingCarriable();
	void Server_CallDonkey();
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
	void OnItemEquipped(AItem* Item);
	void OnCharacterUsed(APlayerCharacter* User);
	void OnCharacterBeginUse(APlayerCharacter* User);
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
	float GetBeginRevivedProgress();
	FString GetAnalyticsClass();
	FRotator GetAimRotation();
	FVector GetActorGroundLocation();
	TArray<AArmorRegeneratorActor*> GetActiveShieldGenerators();
	UPlayerAnimInstance* GetActiveAnimInstance();
	void ForceIsPressingMovementInputKey();
	void FirePressedDelegate__DelegateSignature();
	void ExitVehicle();
	void CycleItemUp();
	void CycleItemReleased();
	void CycleItemPressed();
	void CycleItemDown();
	void ConsumeCycleItemButton();
	void Client_TargetDamaged(AActor* Target, UObject* Health, float Damage, float DamageModifier, bool IsWeakPoint, bool IsRadial);
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
	void AddImpulseFromVector(FVector Vector);
	void AddImpulseFromDirectionAndForce(FVector Direction, float force);
	float AddClassXP(float amount);
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
// Size: 0x368 (Inherited: 0x248)
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
	UPlayerDamageTakenMutator* DamageTakenMutator; // 0x340(0x08)
	UStatusEffect* IronWillStatusEffect; // 0x350(0x08)
	bool IronWillActive; // 0x358(0x01)
	float IronWillTimeToActivate; // 0x35c(0x04)

	void Server_TryActivateIronWill();
	void OnRep_MaxHealth();
	void OnRep_MaxArmor();
	void OnRep_ArmorDamage(float oldDamage);
	float GetRemainingIronWillActivationTime();
	bool GetIsHealthRegenerating();
	bool GetIronWillActive();
	float GetHealthRegeneratingTargetRatio();
	void Client_SetHealthRegenerating(bool isRegenerating);
	void Client_OnFriendlyFire(AController* EventInstigator, AActor* DamageCauser);
	void Client_HealthFullCannotHeal();
	bool CanActivateIronWill();
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
	void Server_AddIntValue(FGuid ItemKey, FName ValueKey, int32_t Value);
	void Server_AddFloatValue(FGuid ItemKey, FName ValueKey, float Value);
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
	void OnResourceMined(UCappedResource* Resource, float amount);
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
	void Defrost(float amount);
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
	UPrimitiveComponent* Collider; // 0xd0(0x08)

	void SetCollider(UPrimitiveComponent* Collider);
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

// Class FSD.PostProcessingManager
// Size: 0x250 (Inherited: 0x220)
struct APostProcessingManager : AActor {
	TArray<TWeakObjectPtr<AFSDPostProcessingActor>> RegisteredActors; // 0x220(0x10)
	TArray<FPostProcessingBlendable> CurrentBlendables; // 0x230(0x10)
	TArray<UMaterialInstanceDynamic*> Materials; // 0x240(0x10)
};

// Class FSD.PresenceSubSystem
// Size: 0x38 (Inherited: 0x30)
struct UPresenceSubSystem : UGameInstanceSubsystem {
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

// Class FSD.ProceduralSettings
// Size: 0x38 (Inherited: 0x30)
struct UProceduralSettings : UDataAsset {
	UTunnelParameters* DefaultTunnelParameters; // 0x30(0x08)
};

// Class FSD.CaveInfluencer
// Size: 0x30 (Inherited: 0x30)
struct UCaveInfluencer : UDataAsset {
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
// Size: 0x360 (Inherited: 0x2a8)
struct AFakePhysicsProjectile : AProjectileBase {
	FFakeMoverState MoverState; // 0x2a8(0x60)
	FFakeMoveState posVel; // 0x308(0x24)
	UFakeMoverSettings* MoveSettings; // 0x330(0x08)
	float InitialSpeed; // 0x338(0x04)
	float DampOmega; // 0x33c(0x04)
	float SyncTime; // 0x340(0x04)

	void SphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void OnRep_PosVel(FFakeMoveState posVel);
};

// Class FSD.FSDProjectileMovementComponent
// Size: 0x1d0 (Inherited: 0x1d0)
struct UFSDProjectileMovementComponent : UProjectileMovementComponent {
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

// Class FSD.ProjectileAttackComponent
// Size: 0x180 (Inherited: 0xf0)
struct UProjectileAttackComponent : UAttackBaseComponent {
	TArray<UProjectileAttack*> Projectiles; // 0xf0(0x10)
	TArray<UAnimMontage*> Montages; // 0x100(0x10)
	FName SocketName; // 0x110(0x08)
	bool UseSocketForRotation; // 0x118(0x01)
	FMulticastInlineDelegate OnAttackStartedEvent; // 0x128(0x10)
	FMulticastInlineDelegate OnProjectileFiredEvent; // 0x138(0x10)
	FMulticastInlineDelegate OnAttackEndedEvent; // 0x148(0x10)
	bool ProjectilesIgnoreEachOther; // 0x158(0x01)

	UAnimMontage* SelectMontage();
	void OnPerformAttack();
	void OnMontageEnded(UAnimMontage* Montage, bool interrupted);
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

	void DamageOnly(FVector Location, FName BoneName, UPrimitiveComponent* Target, UPhysicalMaterial* PhysicalMaterial, UDamageComponent* DamageComponent);
	void DamageArmorClients(AActor* Target, FName BoneName, UDamageComponent* DamageComponent);
	void DamageAndCarve(FVector Location, FVector ImpactNormal, FName BoneName, UPrimitiveComponent* Target, UPhysicalMaterial* PhysicalMaterial, UDamageComponent* DamageComponent);
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
// Size: 0x160 (Inherited: 0x158)
struct UProjectileLauncherComponent : UProjectileLauncherBaseComponent {
	AProjectileBase* projectileClass; // 0x158(0x08)

	void SetProjectileClass(AProjectileBase* NewProjectileClass);
};

// Class FSD.ChargedProjectileLauncherComponent
// Size: 0x168 (Inherited: 0x158)
struct UChargedProjectileLauncherComponent : UProjectileLauncherBaseComponent {
	AProjectileBase* NormalProjectileClass; // 0x158(0x08)
	AProjectileBase* ChargedProjectileClass; // 0x160(0x08)
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

// Class FSD.PushingState
// Size: 0x100 (Inherited: 0xf8)
struct UPushingState : UCharacterStateComponent {
	UUseAnimationSetting* PushingAnimation; // 0xf8(0x08)
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
// Size: 0x6a0 (Inherited: 0x690)
struct ARDGLauncher : AAmmoDrivenWeapon {
	TArray<URDGComponent*> ActiveGrenades; // 0x690(0x10)

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
// Size: 0x420 (Inherited: 0x378)
struct ARecallableActor : ADeepPathfinderCharacter {
	FMulticastInlineDelegate OnStateChanged; // 0x380(0x10)
	FMulticastInlineDelegate OnReturnFinish; // 0x390(0x10)
	FMulticastInlineDelegate OnRelocateFinished; // 0x3a0(0x10)
	float AcceptanceRadius; // 0x3b0(0x04)
	float AutoRecallDistance; // 0x3b4(0x04)
	float RelocateLandingHeight; // 0x3b8(0x04)
	AActor* RelocationMarkerType; // 0x3c0(0x08)
	TWeakObjectPtr<AActor> RecallTarget; // 0x3c8(0x08)
	enum class ERecallableActorState State; // 0x3d0(0x01)
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
// Size: 0x388 (Inherited: 0x368)
struct ARecallableItem : AAnimatedItem {
	ARecallableActor* ItemType; // 0x370(0x08)
	TArray<TWeakObjectPtr<ARecallableActor>> ActiveItems; // 0x378(0x10)

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

	void UseAmmo(int32_t amount);
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
// Size: 0x1e0 (Inherited: 0x150)
struct URefineryObjective : UObjective {
	FMulticastInlineDelegate OnRefinerySpawned; // 0x150(0x10)
	TSoftClassPtr<UObject> refineryClass; // 0x160(0x28)
	TWeakObjectPtr<AFSDRefinery> Refinery; // 0x188(0x08)
	enum class ERefineryState RefineryState; // 0x190(0x01)
	UDebrisPositioning* RefineryPlacement; // 0x198(0x08)
	TSoftClassPtr<UObject> RawMaterialClass; // 0x1a0(0x28)
	UDebrisPositioning* RawMaterialPlacement; // 0x1c8(0x08)
	int32_t RawMaterialCount; // 0x1d0(0x04)
	bool bMissionCompleted; // 0x1d4(0x01)
	bool bIsFinalBattle; // 0x1d5(0x01)
	int32_t OptionalTunnelRoomID; // 0x1d8(0x04)

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

// Class FSD.RepairObjective
// Size: 0x1c0 (Inherited: 0x150)
struct URepairObjective : UObjective {
	int32_t RepairedObjectives; // 0x150(0x04)
	int32_t ObjectivesToRepair; // 0x154(0x04)
	TSoftClassPtr<UObject> RepairObjectiveClass; // 0x158(0x28)
	UGemResourceData* RepairObjectiveResource; // 0x180(0x08)
	UDebrisPositioning* Positioning; // 0x188(0x08)
	int32_t RepairResourcesPerActor; // 0x190(0x04)
	float RepairResourceDistanceFromActor; // 0x194(0x04)
	float MinRepairObjectiveDistanceToLandingZone; // 0x198(0x04)
	TArray<AActor*> RepairedObjectivesList; // 0x1a0(0x10)

	void OnRep_RepairedObjectives();
	void OnRep_ObjectivesToRepair();
	void OnObjectiveRepaired(URepairableComponent* repairable);
	void AllObjectivesRepaired();
};

// Class FSD.ResourceBank
// Size: 0x140 (Inherited: 0xd8)
struct UResourceBank : UUsableComponentBase {
	FMulticastInlineDelegate OnBeginDeposite; // 0xd8(0x10)
	FMulticastInlineDelegate OnDepositing; // 0xe8(0x10)
	FMulticastInlineDelegate OnEndDeposite; // 0xf8(0x10)
	bool OpenForDeposit; // 0x108(0x01)
	AFSDGameState* GameState; // 0x110(0x08)
	float DepositesPerSecond; // 0x118(0x04)
	float DepositeAmount; // 0x11c(0x04)
	bool CanGetStrict; // 0x124(0x01)
	bool AddToTeamInventory; // 0x125(0x01)
	USoundBase* AudioBeginDepositing; // 0x128(0x08)
	USoundBase* AudioDepositing; // 0x130(0x08)
	USoundBase* AudioEndDepositing; // 0x138(0x08)

	void ResourceBankEvent__DelegateSignature(APlayerCharacter* User);
	void All_Depositing(APlayerCharacter* Character);
};

// Class FSD.RestrictedResourceBank
// Size: 0x148 (Inherited: 0x140)
struct URestrictedResourceBank : UResourceBank {
	UResourceData* RequiredResource; // 0x140(0x08)
};

// Class FSD.ResourceChunk
// Size: 0x288 (Inherited: 0x230)
struct AResourceChunk : AFSDPhysicsActor {
	float CollectDuration; // 0x230(0x04)
	bool CanBeCollectedNormally; // 0x234(0x01)
	bool CanBeCollected; // 0x235(0x01)
	USimpleObjectInfoComponent* InfoComponent; // 0x238(0x08)
	float ResourceAmount; // 0x240(0x04)
	USoundCue* PickupSound; // 0x248(0x08)
	UResourceData* ResourceData; // 0x250(0x08)
	TArray<APlayerCharacter*> OverlappingPlayers; // 0x258(0x10)
	TWeakObjectPtr<APlayerCharacter> CollectedBy; // 0x268(0x08)

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
	float Range; // 0x60(0x04)
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
	float Range; // 0x50(0x04)
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
// Size: 0x198 (Inherited: 0x150)
struct UResourceObjective : UResourceBasedObjective {
	UResourceData* Resource; // 0x150(0x08)
	float ResourcesRequired; // 0x158(0x04)
	float ResourcesCollected; // 0x15c(0x04)
	float ResourceBuffer; // 0x160(0x04)
	float RoundToNearest; // 0x164(0x04)
	FText ObjectivesText; // 0x168(0x18)
	FText CreditsRewardText; // 0x180(0x18)

	void OnResourceChanged(UCappedResource* CappedResource, float amount);
	void OnRep_ResourcesCollected(float prevAmount);
	float GetRequiredAmount(float missionScaling);
};

// Class FSD.RessuplyPodSpawn
// Size: 0x2b0 (Inherited: 0x2b0)
struct ARessuplyPodSpawn : ARessuplyPod {

	void SetController(AFSDPlayerController* Controller);
	void SetCharacter(APlayerCharacter* Character);
};

// Class FSD.RessuplyPodItem
// Size: 0x3c8 (Inherited: 0x368)
struct ARessuplyPodItem : AAnimatedItem {
	AActor* ResupplyBeacon; // 0x368(0x08)
	UItemPlacerAggregator* ItemPlacerClass; // 0x370(0x08)
	UItemPlacerAggregator* ItemPlacerInstance; // 0x378(0x08)
	ARessuplyPod* SupplyPodClass; // 0x380(0x08)
	int32_t ResourceCost; // 0x388(0x04)
	FText OrderDescription; // 0x390(0x18)
	FText LogText; // 0x3a8(0x18)
	float Cooldown; // 0x3c0(0x04)
	bool Used; // 0x3c4(0x01)

	void Server_Call_Resupply(FVector Location);
	void ReceiveItemPlacerSpawned(UItemPlacerAggregator* InItemPlacer);
	void OnRep_Used();
	int32_t GetResourceCost(UObject* WorldContextObject);
	UItemPlacerAggregator* GetActiveAggregator();
};

// Class FSD.Reward
// Size: 0x30 (Inherited: 0x30)
struct UReward : UDataAsset {
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
	int32_t amount; // 0x38(0x04)
};

// Class FSD.WeeklyResourceReward
// Size: 0x40 (Inherited: 0x30)
struct UWeeklyResourceReward : UReward {
	int32_t ResourceCount; // 0x30(0x04)
	FIRandRange amount; // 0x34(0x08)

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
// Size: 0x40 (Inherited: 0x30)
struct USkinUnlock : UUnlockReward {
	UItemID* OptionalItemID; // 0x30(0x08)
	UItemSkin* Skin; // 0x38(0x08)
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

// Class FSD.PickaxePartReward
// Size: 0x38 (Inherited: 0x30)
struct UPickaxePartReward : UUnlockReward {
	UPickaxePart* PicaxePart; // 0x30(0x08)
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
};

// Class FSD.ProceduralRoomGenerator
// Size: 0x80 (Inherited: 0x58)
struct UProceduralRoomGenerator : URoomGeneratorBase {
	FIRandRange RoomCount; // 0x58(0x08)
	float MaxLength; // 0x60(0x04)
	float MaxWidth; // 0x64(0x04)
	float MaxHeight; // 0x68(0x04)
	TArray<URoomPiece*> RoomPieces; // 0x70(0x10)
};

// Class FSD.RoomPiece
// Size: 0x48 (Inherited: 0x30)
struct URoomPiece : UDataAsset {
	URoomGenerator* RoomGenerator; // 0x30(0x08)
	TArray<enum class ERoomPieceSide> ConnectedSides; // 0x38(0x10)

	FVector GetDirectionFromPieceSide(enum class ERoomPieceSide side);
};

// Class FSD.RoomGeneratorGroup
// Size: 0x40 (Inherited: 0x30)
struct URoomGeneratorGroup : UDataAsset {
	TArray<URoomGenerator*> Rooms; // 0x30(0x10)

	URoomGenerator* GetRandomRoomWithTags(FRoomGeneratorGroupInstance groupInstance, FGameplayTagQuery queury, FRandomStream RandomStream);
	URoomGenerator* GetRandomRoom(FRandomStream RandomStream);
	FRoomGeneratorGroupInstance CreateGroupInstance();
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
// Size: 0x230 (Inherited: 0x150)
struct USalvageObjective : UObjective {
	int32_t SalvageActorCount; // 0x150(0x04)
	UGemResourceData* LegResource; // 0x158(0x08)
	int32_t LegCountPerActor; // 0x160(0x04)
	float LegDistanceToActor; // 0x164(0x04)
	FMulticastInlineDelegate OnDisableLegSpheres; // 0x168(0x10)
	UDebrisPositioning* Positioning; // 0x178(0x08)
	TArray<UDebrisBase*> Debris; // 0x180(0x10)
	TSoftClassPtr<UObject> SalvageActor; // 0x190(0x28)
	TSoftClassPtr<UObject> DamagedPodClass; // 0x1b8(0x28)
	UDebrisPositioning* DamagedPodPositioning; // 0x1e0(0x08)
	float DamagedPodMinDistanceToDropZone; // 0x1e8(0x04)
	AMiningPod* DamagedPod; // 0x1f0(0x08)
	int32_t ActorsToSalvage; // 0x1f8(0x04)
	int32_t ActorsSalvaged; // 0x1fc(0x04)
	int32_t RepairPoints; // 0x200(0x04)
	int32_t PointsRepaired; // 0x204(0x04)
	float MinSalvageActorDistanceToLandingZone; // 0x208(0x04)
	TArray<AMiniMule*> SalvagedActors; // 0x210(0x10)

	void PointRepaired();
	void OnRep_PointsRepaired();
	void OnRep_ActorsToSalvage(int32_t prevAmount);
	void OnRep_ActorsSalvaged(int32_t prevAmount);
	void OnActorRepaired(URepairableComponent* repairable);
	FTransform FindRepairPointLocation(AProceduralSetup* setup, FVector podLocation, float Radius, float maxVerticalDistance, UDebrisPositioning* DebrisPositioning, AActor* terrainPlacement, TArray<FVector> locationsToAvoid, UCurveFloat* avoidCostCurve);
	void AllActorsSalvaged();
};

// Class FSD.SalvageFuelPod
// Size: 0x2b0 (Inherited: 0x2b0)
struct ASalvageFuelPod : ARessuplyPod {

	void ReceiveFuelLineStarted(bool InFuelLineStarted);
	void ReceiveFuelLineConnected(AFuelLineEndPoint* InFuelLine);
	void ReceiveFirstFuelLineSegment(AFuelLineSegment* InFirstSegment);
};

// Class FSD.SavableObject
// Size: 0x40 (Inherited: 0x28)
struct USavableObject : UObject {
	bool EnableDangerousSaveGameIDEditing; // 0x28(0x01)
	FGuid SavegameID; // 0x2c(0x10)
};

// Class FSD.SavableActor
// Size: 0x238 (Inherited: 0x220)
struct ASavableActor : AActor {
	bool EnableDangerousSaveGameIDEditing; // 0x220(0x01)
	FGuid SavegameID; // 0x224(0x10)
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
	void Server_SetCredits(int32_t amount);
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
// Size: 0x58 (Inherited: 0x28)
struct UOverclockShematicItem : USchematicItem {
	TSoftClassPtr<UObject> OwningItem; // 0x28(0x28)
	UItemUpgrade* Overclock; // 0x50(0x08)

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
// Size: 0x170 (Inherited: 0x100)
struct UReloadSentryUsableComponent : UUsableComponent {
	FText OutOfAmmoText; // 0x100(0x18)
	FText AmmoFullText; // 0x118(0x18)
	USoundBase* AudioOutOfAmmo; // 0x130(0x08)
	USoundBase* AudioReloading; // 0x138(0x08)
	UAudioComponent* ReloadingAudioComponent; // 0x140(0x08)
	bool Usable; // 0x148(0x01)
	bool bReloading; // 0x149(0x01)
	UAudioComponent* ReloadAudioComponent; // 0x150(0x08)
	float AmmoPerSec; // 0x158(0x04)
	TWeakObjectPtr<APlayerCharacter> OwningPlayerCharacter; // 0x160(0x08)
	ASentryGun* SentryGun; // 0x168(0x08)

	void SetOwningPlayerCharacter(APlayerCharacter* Player);
	void SetCanUse(bool isUsable);
	void OnRep_Reloading();
	void OnReloadAudioFinished();
};

// Class FSD.SentryGunItem
// Size: 0x3a0 (Inherited: 0x390)
struct ASentryGunItem : APlaceableItem {
	TArray<UItemUpgrade*> Upgrades; // 0x390(0x10)
};

// Class FSD.RecallableSentryGunItem
// Size: 0x410 (Inherited: 0x388)
struct ARecallableSentryGunItem : ARecallableItem {
	FMulticastInlineDelegate OnActiveItemsChanged; // 0x388(0x10)
	FMulticastInlineDelegate OnSelectedItemChanged; // 0x398(0x10)
	int32_t MaxSentryCount; // 0x3a8(0x04)
	float MinDistanceBetweenSentries; // 0x3ac(0x04)
	FText RecallHoldDescription; // 0x3b0(0x18)
	float RecallHoldDuration; // 0x3c8(0x04)
	UCapacityHoldingItemAggregator* AmmoCapacity; // 0x3d0(0x08)
	UItemPlacerAggregator* ItemPlacer; // 0x3d8(0x08)
	TArray<UItemUpgrade*> Upgrades; // 0x3e0(0x10)
	AItem* LoadoutClass; // 0x3f0(0x08)
	float SupplyStatusWeight; // 0x3f8(0x04)
	float SentryAngleRestriction; // 0x3fc(0x04)
	bool bIsUpgraded; // 0x400(0x01)

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
	bool FSDGetServerStartTime(FBlueprintSessionResult Result, FDateTime StartTime);
	FString FSDGetServerNameSanitized(FBlueprintSessionResult Result);
	FString FSDGetServerName(FBlueprintSessionResult Result);
	FString FSDGetServerID(FBlueprintSessionResult Result);
	FString FSDGetRegion(FBlueprintSessionResult Result);
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
// Size: 0x4e8 (Inherited: 0x398)
struct ASharkEnemy : AEnemyDeepPathfinderCharacter {
	UPawnSensingComponent* PawnSensing; // 0x398(0x08)
	USphereComponent* CollisionSphere; // 0x3a0(0x08)
	USphereComponent* NearTargetSphere; // 0x3a8(0x08)
	UParticleSystemComponent* TearingGroundParticles; // 0x3b0(0x08)
	UParticleSystemComponent* AirTrailParticles; // 0x3b8(0x08)
	UInDangerComponent* Danger; // 0x3c0(0x08)
	UEnemyComponent* EnemyComponent; // 0x3c8(0x08)
	UDamageComponent* Damage; // 0x3d0(0x08)
	UDamageComponent* BumpDamage; // 0x3d8(0x08)
	UFakePhysGrabberComponent* RestrictedGrabberComponent; // 0x3e0(0x08)
	float RagdollSpeedFactor; // 0x3e8(0x04)
	USoundCue* ImpactCue; // 0x3f0(0x08)
	USoundCue* JumpSound; // 0x3f8(0x08)
	float DiveForSeconds; // 0x404(0x04)
	FVector_NetQuantize RagdollImpact; // 0x40c(0x0c)
	float LaunchPower; // 0x428(0x04)
	float GrabTime; // 0x438(0x04)
	float StopSpeedThreshold; // 0x448(0x04)
	float UpsideDownTime; // 0x44c(0x04)
	float RaiseSpeed; // 0x450(0x04)
	float TiltInSpeed; // 0x454(0x04)
	float TiltOutSpeed; // 0x458(0x04)
	float SafeTimeAfterVounerable; // 0x45c(0x04)
	float RaiseHeight; // 0x460(0x04)
	float AttackDuration; // 0x464(0x04)
	float HitLaunchPower; // 0x468(0x04)
	float ChanceToGrab; // 0x46c(0x04)
	float MinTimeBetweenBumps; // 0x470(0x04)
	float ChanceForJump; // 0x478(0x04)
	float MinJumpCooldown; // 0x47c(0x04)
	float MaxJumpCooldown; // 0x480(0x04)
	float JumpForce; // 0x484(0x04)
	float TimeBeforeGroundCheck; // 0x488(0x04)
	float MinCirclingTime; // 0x498(0x04)
	float MaxCirclingTime; // 0x49c(0x04)
	UFakeMoverSettings* CircleSetttings; // 0x4a0(0x08)
	UFakeMoverSettings* AttackSettings; // 0x4a8(0x08)
	UFakeMoverSettings* PostHitSettings; // 0x4b0(0x08)
	UFakeMoverSettings* JumpSettings; // 0x4b8(0x08)
	UFakeMoverSettings* VounerableSettings; // 0x4c0(0x08)
	float MaxInGroundTime; // 0x4c8(0x04)
	float MinInGroundTime; // 0x4cc(0x04)
	float StartParticleTime; // 0x4d0(0x04)
	float EndParticleTime; // 0x4d4(0x04)
	UParticleSystem* DiveParticles; // 0x4d8(0x08)
	enum class ESharkEnemyState State; // 0x4e1(0x01)

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
// Size: 0xc8 (Inherited: 0xb8)
struct UEnemyShowroomController : UShowroomController {
	AEnemyShowroomItem* EnemyInstance; // 0xb8(0x08)
	UEnemyMinersManualData* enemyData; // 0xc0(0x08)

	void Receive_PlayAttack(UAnimSequenceBase* attackAnimation);
	void PlayAttack(UAnimSequenceBase* Animation);
	UEnemyShowroomController* DisplayEnemy(UObject* WorldContextObject, UEnemyMinersManualData* enemyData);
};

// Class FSD.CharacterShowroomController
// Size: 0xc0 (Inherited: 0xb8)
struct UCharacterShowroomController : UShowroomController {
	APlayerCharacter* CharacterInstance; // 0xb8(0x08)

	void Receive_CharacterShown();
	void EquipWeapon(enum class EItemCategory Category);
	UCharacterShowroomController* DisplayCharacter(UObject* WorldContextObject, UPlayerCharacterID* characterID);
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
// Size: 0x260 (Inherited: 0x220)
struct AShowroomStage : AActor {
	USceneCaptureComponent2D* SceneCapure; // 0x220(0x08)
	UShowroomController* ControllerClass; // 0x228(0x08)
	UShowroomController* ControllerInstance; // 0x230(0x08)
	USceneCaptureComponent2D* SceneCapture; // 0x238(0x08)
	float MinPitch; // 0x240(0x04)
	float MaxPitch; // 0x244(0x04)
	USceneComponent* CameraFocusPoint; // 0x248(0x08)

	void ReceiveInitialize(UTextureRenderTarget2D* RenderTarget);
	UTextureRenderTarget2D* CreateRenderTarget();
};

// Class FSD.SimpleHealthComponent
// Size: 0x1c0 (Inherited: 0x148)
struct USimpleHealthComponent : UHealthComponentBase {
	float Damage; // 0x148(0x04)
	float MaxHealth; // 0x14c(0x04)
	bool InvulnerableToNonDefinedResistances; // 0x150(0x01)
	bool bShowHealthBar; // 0x151(0x01)
	FVector HealthBarOffsetWorld; // 0x154(0x0c)
	TWeakObjectPtr<UEnemyComponent> EnemyComponent; // 0x160(0x08)
	TMap<UPawnStat*, float> Resistances; // 0x168(0x50)
	bool AutomaticFlushNetDormancy; // 0x1b8(0x01)

	void OnRep_Damage(float oldDamage);
	float HealFromDeath(float amount);
};

// Class FSD.MaggotAnimationSharingStateProcessor
// Size: 0x50 (Inherited: 0x50)
struct UMaggotAnimationSharingStateProcessor : UAnimationSharingStateProcessor {
};

// Class FSD.PipelineAnimationSharingProcessor
// Size: 0x50 (Inherited: 0x50)
struct UPipelineAnimationSharingProcessor : UAnimationSharingStateProcessor {
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
	UItemSkin* GetDefaultItemSkin(UItemID* ItemID, enum class EItemSkinType itemSkinType);
	void FilterColorSkins(TArray<UItemSkin*> Skins, UItemSkin* equippedMeshSkin);
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
// Size: 0xb8 (Inherited: 0xb0)
struct USpawnActorWithDebrisPosComponent : UActorComponent {
	float MinDistanceBetweenSpwans; // 0xb0(0x04)
	bool AddTerrainPlacementBlockers; // 0xb4(0x01)

	bool PlaceActors(int32_t NumToSpawn, int32_t NumToSpawnMin, int32_t NumAllowedChecks, AActor* SpawnedActorClass, AProceduralSetup* setup, float Radius, UDebrisPositioning* DebrisPositioning, TArray<FVector> locationsToAvoid, UCurveFloat* avoidCostCurve, TArray<AActor*> OutSpawnedActors, FVector CustomLocation);
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

// Class FSD.SpecialEvent
// Size: 0x40 (Inherited: 0x30)
struct USpecialEvent : UDataAsset {
	float Weight; // 0x30(0x04)
	USpecialEventSpawner* EventSpawner; // 0x38(0x08)
};

// Class FSD.SpecialEventSettings
// Size: 0x110 (Inherited: 0x30)
struct USpecialEventSettings : UDataAsset {
	TArray<USpecialEvent*> SpecialEvents; // 0x30(0x10)
	TSoftClassPtr<UObject> EventRewardFrameClass; // 0x40(0x28)
	UDebrisPositioning* EventRewardFramePositioning; // 0x68(0x08)
	float EventRewardRadius; // 0x70(0x04)
	float CreditsReward; // 0x74(0x04)
	float XPReward; // 0x78(0x04)
	UCurveFloat* SimplePlacementCostCurve; // 0x80(0x08)
	FRuntimeFloatCurve SpawnChanceMissionLengthCurve; // 0x88(0x88)
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
// Size: 0x3e0 (Inherited: 0x398)
struct ASpiderEnemy : AEnemyDeepPathfinderCharacter {
	UPawnStatsComponent* PawnStats; // 0x3a0(0x08)
	TArray<UAnimSequenceBase*> HitReactions; // 0x3a8(0x10)
	float FirstHitReactBlendIn; // 0x3b8(0x04)
	float OverrideHitReactBlendIn; // 0x3bc(0x04)
	UStaticMesh* GoreMesh; // 0x3c8(0x08)
	bool ApplyDifficultySpeedModifier; // 0x3d0(0x01)
	float AttackDamageModifier; // 0x3d4(0x04)
	bool LimitRagdollSpeed; // 0x3d8(0x01)
	float MaxRagdollSpeed; // 0x3dc(0x04)

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
// Size: 0x338 (Inherited: 0x338)
struct AStabberVineRoot : AEnemyPawn {

	void RemoveVine(AStabberVine* vine);
};

// Class FSD.StabberVine
// Size: 0x4b0 (Inherited: 0x338)
struct AStabberVine : AEnemyPawn {
	USplineComponent* SplineComponent; // 0x338(0x08)
	FTransform RestTransform; // 0x340(0x30)
	FTransform LastTransform; // 0x370(0x30)
	FTransform DesiredTransform; // 0x3a0(0x30)
	FStabberVineTarget DesiredTarget; // 0x3d0(0x18)
	FVector TargetLocation; // 0x450(0x0c)
	float MovementAlpha; // 0x45c(0x04)
	float HeadMovementDuration; // 0x460(0x04)
	float CanSwayCooldown; // 0x464(0x04)
	FVector2D SwayRange; // 0x468(0x08)
	float NeckBaseTangentLength; // 0x470(0x04)
	FVector NeckBasePositionOffset; // 0x474(0x0c)
	FVector NeckBaseTangentOffset; // 0x480(0x0c)
	float NeckTopTangentLength; // 0x48c(0x04)
	FVector NeckTopPositionOffset; // 0x490(0x0c)
	FVector NeckTopTangentOffset; // 0x49c(0x0c)
	float DurationTentacleRetract; // 0x4a8(0x04)
	float DurationTentacleFoldout; // 0x4ac(0x04)

	void UpdateSpline();
	void Recieve_OnRep_Owner();
	void ReceiveSplineUpdated();
	void OnRep_DesiredTarget();
	void MoveHydraHead(FTransform newDesiredTransform, float newCanSwayCooldown, float newHeadMovementDuration);
	AStabberVineRoot* GetStabberVineRoot();
};

// Class FSD.StabberVineAnimInstance
// Size: 0xc30 (Inherited: 0x270)
struct UStabberVineAnimInstance : UAnimInstance {
	FStabberVineAnimInstanceProxy AnimInstanceProxy; // 0x270(0x8b0)
	FVector SplineLocation01; // 0xb20(0x0c)
	FVector SplineLocation02; // 0xb2c(0x0c)
	FVector SplineLocation03; // 0xb38(0x0c)
	FVector SplineLocation04; // 0xb44(0x0c)
	FVector SplineLocation05; // 0xb50(0x0c)
	FVector SplineLocation06; // 0xb5c(0x0c)
	FVector SplineLocation07; // 0xb68(0x0c)
	FVector SplineLocation08; // 0xb74(0x0c)
	FVector SplineLocation09; // 0xb80(0x0c)
	FVector SplineLocation10; // 0xb8c(0x0c)
	FVector SplineLocation11; // 0xb98(0x0c)
	FRotator SplineRotation01; // 0xba4(0x0c)
	FRotator SplineRotation02; // 0xbb0(0x0c)
	FRotator SplineRotation03; // 0xbbc(0x0c)
	FRotator SplineRotation04; // 0xbc8(0x0c)
	FRotator SplineRotation05; // 0xbd4(0x0c)
	FRotator SplineRotation06; // 0xbe0(0x0c)
	FRotator SplineRotation07; // 0xbec(0x0c)
	FRotator SplineRotation08; // 0xbf8(0x0c)
	FRotator SplineRotation09; // 0xc04(0x0c)
	FRotator SplineRotation10; // 0xc10(0x0c)
	FRotator SplineRotation11; // 0xc1c(0x0c)
};

// Class FSD.StatHat
// Size: 0xa0 (Inherited: 0x28)
struct UStatHat : UObject {
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
	FRandRange amount; // 0x38(0x08)
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
	UPrimitiveComponent* Collider; // 0xf0(0x08)
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

// Class FSD.SteelSeriesComponent
// Size: 0xf0 (Inherited: 0xb0)
struct USteelSeriesComponent : UActorComponent {
	FSteelSeriesLinearColor HealthBarColor; // 0xb0(0x03)
	FSteelSeriesLinearColor DamageEffectColor; // 0xb3(0x03)
	FSteelSeriesLinearColor DownedEffectColor; // 0xb6(0x03)
	FSteelSeriesLinearColor ShieldBarColor; // 0xb9(0x03)
	FSteelSeriesLinearColor ShieldEffectColor; // 0xbc(0x03)
	FSteelSeriesLinearColor WeaponColor; // 0xbf(0x03)
	FSteelSeriesLinearColor WeaponEquipedColor; // 0xc2(0x03)
	FSteelSeriesLinearColor GrenadeColor; // 0xc5(0x03)
	FSteelSeriesLinearColor WASDColor; // 0xc8(0x03)
	FSteelSeriesLinearColor RessuplyColor; // 0xcb(0x03)
	FSteelSeriesLinearColor ReloadColor; // 0xce(0x03)
	enum class EFSDSteelSeriesEffect ActiveEffect; // 0xe0(0x01)
	float EffectDuration; // 0xe4(0x04)
	uint32_t EffectSeed; // 0xe8(0x04)

	void UpdateHealthIndicator(int32_t healthPct, int32_t shieldPct);
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
// Size: 0xe0 (Inherited: 0xb0)
struct USubHealthComponent : UActorComponent {
	FMulticastInlineDelegate OnDamageTaken; // 0xb8(0x10)
	FMulticastInlineDelegate OnHealthChanged; // 0xc8(0x10)
	bool BlockAllOtherDamage; // 0xd8(0x01)
	enum class EHealthbarType HealthbarType; // 0xd9(0x01)
	enum class EEnemyHealthScaling EnemyHealthScaling; // 0xdb(0x01)

	void SetCanTakeDamage(bool canTakeDamage);
	bool IsDead();
	bool IsAlive();
	float GetHealthPct();
	float GetHealth();
	bool GetCanTakeDamage();
};

// Class FSD.DestructibleSubHealthComponent
// Size: 0x110 (Inherited: 0xe0)
struct UDestructibleSubHealthComponent : USubHealthComponent {
	float MaxHealth; // 0xe0(0x04)
	bool UseResistances; // 0xe4(0x01)
	float RadialDamageResistance; // 0xe8(0x04)
	bool AllowInderectDamage; // 0xec(0x01)
	float Damage; // 0xf0(0x04)
	USceneComponent* ArmorComponent; // 0xf8(0x08)
	FMulticastInlineDelegate OnDestroyed; // 0x100(0x10)

	void SubHealthDestroyed__DelegateSignature(UDestructibleSubHealthComponent* subHealth);
	void ResetHealth();
	void OnRep_Damage(float oldDamage);
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

// Class FSD.TerrainDetectComponent
// Size: 0x210 (Inherited: 0x1f0)
struct UTerrainDetectComponent : USceneComponent {
	FMulticastInlineDelegate OnPointRemoved; // 0x1f8(0x10)
	bool StartDetectOnBeginPlay; // 0x208(0x01)
	bool OnlyDetectOnServer; // 0x209(0x01)
	bool KillActorOnPointRemoved; // 0x20a(0x01)

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

	void SpawnTerrainImpact(UObject* WorldContextObject, UParticleSystem* particle, FVector Location, FRotator Rotation);
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
// Size: 0x348 (Inherited: 0x2f0)
struct ATerrainModifyingProjectile : AProjectile {
	FMulticastInlineDelegate OnRevertToNormal; // 0x2f0(0x10)
	UTerrainMaterial* Terrain; // 0x300(0x08)
	UTerrainMaterial* OriginalGroundMaterial; // 0x308(0x08)
	UStaticMesh* CarveMesh; // 0x310(0x08)
	FVector CarveMeshScale; // 0x318(0x0c)
	FVector LastHitLocation; // 0x324(0x0c)
	float Radius; // 0x330(0x04)
	bool Revert; // 0x334(0x01)
	float TimeOnGround; // 0x338(0x04)
	float ExpensiveCarveNoise; // 0x33c(0x04)

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
// Size: 0x3d8 (Inherited: 0x368)
struct ATerrainScannerItem : AAnimatedItem {
	int32_t TerrainScannerZoomDirection; // 0x368(0x04)
	FName ScannerAttachSocketName; // 0x36c(0x08)
	float TerrainScannerStartAngle; // 0x378(0x04)
	float TerrainScannerScale; // 0x37c(0x04)
	float DelayedTerrainScannerScale; // 0x380(0x04)
	float DelayedTerrainScannerZoom; // 0x384(0x04)
	bool IsLookingAtMap; // 0x389(0x01)
	bool UpdateMapToolActors; // 0x38a(0x01)
	TArray<UAnimMontage*> UseLoopsFP; // 0x390(0x10)
	UAnimMontage* EndFP; // 0x3a0(0x08)
	TArray<UAnimMontage*> UseLoopsTP; // 0x3a8(0x10)
	UAnimMontage* EndTP; // 0x3b8(0x08)
	USceneComponent* TerrainScannerRoot; // 0x3c8(0x08)
	USceneCaptureComponent2D* TerrainScannerCapture; // 0x3d0(0x08)

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
// Size: 0x118 (Inherited: 0xb0)
struct UTetherComponent : UActorComponent {
	FMulticastInlineDelegate OnPowerChanged; // 0xb0(0x10)
	FMulticastInlineDelegate OnConnectionChanged; // 0xc0(0x10)
	FMulticastInlineDelegate OnTetherMessage; // 0xd0(0x10)
	FName ConnectionPointName; // 0xf0(0x08)
	UTetherComponent* ForwardConnection; // 0xf8(0x08)
	UTetherComponent* backConnection; // 0x100(0x08)
	float ConnectionDistance; // 0x108(0x04)
	enum class ETetherConnectionMode ConnectionMode; // 0x10c(0x04)
	int32_t ConnectionPriority; // 0x110(0x04)
	bool GeneratesPower; // 0x114(0x01)
	bool hasPower; // 0x115(0x01)

	void OnRep_HasPower();
	void OnRep_ForwardConnection();
	void OnRep_BackConnection();
	void MessageTetherLine(FName Message, float Delay, bool Forward);
	void MessageBody(FTetherMessageSettings Message);
	bool IsStartOfLine();
	bool IsEndOfLine();
	bool IsConnected();
	bool GetHasPower();
	UTetherComponent* GetForwardConnection();
	FVector GetConnectionPoint();
	UTetherComponent* GetBackConnection();
	void DisconnectFromTetherLine();
	bool ConnectToTetherLine();
};

// Class FSD.Tether
// Size: 0x2c8 (Inherited: 0x248)
struct ATether : ACarriableItem {
	USkeletalMeshComponent* BaseMesh; // 0x248(0x08)
	UInstantUsable* UsableComponent; // 0x250(0x08)
	UCarriableComponent* Carry; // 0x258(0x08)
	USphereComponent* UseTrigger; // 0x260(0x08)
	UParticleSystemComponent* ConnectionBeam; // 0x268(0x08)
	USphereComponent* PysicalCollision; // 0x270(0x08)
	UDamageComponent* ExplosionDamage; // 0x278(0x08)
	UParticleSystem* ExplosionParticle; // 0x280(0x08)
	USoundCue* ExplosionSound; // 0x288(0x08)
	FName ConnectionPointSocketName; // 0x290(0x08)
	bool ConnectionRequiresPower; // 0x298(0x01)
	bool IsOnGround; // 0x299(0x01)
	ATether* frontConnection; // 0x2a0(0x08)
	ATether* backConnection; // 0x2a8(0x08)
	float ConnectionDistance; // 0x2b0(0x04)
	int32_t ConnectionPriority; // 0x2b4(0x04)
	bool hasPower; // 0x2b8(0x01)
	bool GeneratesPower; // 0x2b9(0x01)
	float KnockBackForce; // 0x2bc(0x04)
	bool ConnectionOpen; // 0x2c0(0x01)
	bool CanHaveBackConnection; // 0x2c1(0x01)
	bool CanHaveFrontConnection; // 0x2c2(0x01)
	bool ExplodeOnKill; // 0x2c3(0x01)

	void SetIsOnGround(bool IsOnGround);
	void OnRep_ConnectionOpen();
	void OnClosed();
	void Explode();
};

// Class FSD.TetherStation
// Size: 0x2a8 (Inherited: 0x220)
struct ATetherStation : AActor {
	USceneComponent* SceneRoot; // 0x220(0x08)
	USkeletalMeshComponent* BaseMesh; // 0x228(0x08)
	UStaticMeshComponent* PlatformMesh; // 0x230(0x08)
	TArray<AFacilityShield*> ShieldActors; // 0x238(0x10)
	USimpleHealthComponent* Health; // 0x248(0x08)
	USingleUsableComponent* ActivateUsable; // 0x250(0x08)
	AFacilityShield* ShieldClass; // 0x258(0x08)
	UParticleSystem* BatteryExplosionParticle; // 0x260(0x08)
	USoundCue* BatteryExplosionSound; // 0x268(0x08)
	UPhysicalMaterial* WeakPointMaterial; // 0x270(0x08)
	UAnimSequenceBase* ExposeWeakpointAnimation; // 0x278(0x08)
	float ShieldStartDelay; // 0x280(0x04)
	AFacilityGeneratorLine* FacilityGeneratorLineType; // 0x288(0x08)
	AActor* MainShieldGenerator; // 0x290(0x08)
	int32_t DestroyedShields; // 0x298(0x04)
	int32_t ActiveShields; // 0x29c(0x04)
	bool IsWeakpointExposed; // 0x2a0(0x01)
	bool AreGeneratorsReady; // 0x2a1(0x01)
	bool FacilityActive; // 0x2a2(0x01)

	void ShieldDestroyed(UHealthComponentBase* Died);
	void SetWeakpointExposed(bool isExposed);
	void SetUpShieldSpeed();
	void SetMainShieldGenerator(AActor* InMainGenerator);
	void SetGeneratorsReady(bool ready);
	void OnRep_IsWeakpointExposed();
	void Onrep_FacilityActive();
	void OnRep_AreGeneratorsReady();
	void OnGeneratorsReady();
	void OnFacilityDestroyed();
	void OnFacilityDamaged();
	void OnActivated();
	void DisableShields();
	void CallbackActivateUsed(APlayerCharacter* User);
	void ActivateFacility();
};

// Class FSD.FacilityShield
// Size: 0x270 (Inherited: 0x220)
struct AFacilityShield : AActor {
	USceneComponent* Root; // 0x220(0x08)
	USkeletalMeshComponent* Mesh; // 0x228(0x08)
	USimpleHealthComponent* Health; // 0x230(0x08)
	UObjectInfoComponent* Info; // 0x238(0x08)
	UAnimSequence* ExposeVialAnimation; // 0x240(0x08)
	USoundCue* VialExplosionSound; // 0x248(0x08)
	UParticleSystem* VialExplosionEffect; // 0x250(0x08)
	FRandRange RotationspeedRange; // 0x258(0x08)
	float SafetyAngle; // 0x260(0x04)
	float RotationSpeed; // 0x264(0x04)
	float RotationTarget; // 0x268(0x04)
	bool VialExposed; // 0x26c(0x01)
	bool IsSpinning; // 0x26d(0x01)

	void OnVialDeath(UHealthComponentBase* Died);
	void OnStartedSpinning();
	void OnRep_VialExposed();
	void OnRep_IsSpinning();
};

// Class FSD.TetherAnimInstance
// Size: 0x280 (Inherited: 0x270)
struct UTetherAnimInstance : UAnimInstance {
	float CurrentZLocation; // 0x268(0x04)
	float MinZ; // 0x26c(0x04)
	float MaxZ; // 0x270(0x04)
	bool SearchingForConnection; // 0x274(0x01)
};

// Class FSD.Throwable
// Size: 0x28 (Inherited: 0x28)
struct UThrowable : UInterface {
};

// Class FSD.ThrownGrenadeItem
// Size: 0x390 (Inherited: 0x318)
struct AThrownGrenadeItem : AItem {
	FMulticastInlineDelegate OnGrenadeThrown; // 0x320(0x10)
	UPlayerAnimInstance* FPAnimInstance; // 0x330(0x08)
	UPlayerAnimInstance* TPAnimInstance; // 0x338(0x08)
	UItemCharacterAnimationSet* CharacterAnimationSet; // 0x340(0x08)
	FVector ThrowOffset; // 0x348(0x0c)
	float ThrowAngle; // 0x354(0x04)
	int32_t MaxGrenades; // 0x358(0x04)
	int32_t Grenades; // 0x35c(0x04)
	float GrenadeCooldownRemaining; // 0x360(0x04)
	enum class EThrownGrenadeItemState State; // 0x364(0x04)
	AGrenade* GrenadeClass; // 0x368(0x08)
	UGrenadeAnimationSet* DefaultGrenadeAnimationSet; // 0x370(0x08)
	UStaticMeshComponent* GrenadeMeshInstance; // 0x380(0x08)
	bool HasRejoinedInitialized; // 0x389(0x01)

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
// Size: 0x380 (Inherited: 0x2e8)
struct ATowerEventModule : AFSDPawn {
	USceneComponent* Root; // 0x2f0(0x08)
	USkeletalMeshComponent* Mesh; // 0x2f8(0x08)
	UEnemyHealthComponent* Health; // 0x300(0x08)
	UArmorHealthDamageComponent* ArmorDamage; // 0x308(0x08)
	UWeakpointGlowComponent* WeakpointGlow; // 0x310(0x08)
	UParticleSystemComponent* SmokeParticles; // 0x318(0x08)
	FRotator MainBodyRotation; // 0x320(0x0c)
	USkeletalMesh* DestroyedMesh; // 0x330(0x08)
	USoundCue* ExplosionSound; // 0x338(0x08)
	UParticleSystem* ExplosionEffect; // 0x340(0x08)
	ATowerEventModule* PreviousModule; // 0x348(0x08)
	ATowerEventModule* NextModule; // 0x350(0x08)
	UStaticMesh* ArmorMesh; // 0x358(0x08)
	int32_t ArmorPieces; // 0x360(0x04)
	float ArmorLifetime; // 0x364(0x04)
	float ArmorPopForce; // 0x368(0x04)
	float ArmorShedDelay; // 0x36c(0x04)
	TArray<UStaticMeshComponent*> ArmorMeshes; // 0x370(0x10)

	void OnAttack();
	void HideArmorPlates();
	void DestroyArmor();
};

// Class FSD.AimingTowerEventModule
// Size: 0x398 (Inherited: 0x380)
struct AAimingTowerEventModule : ATowerEventModule {
	FRotator AimRotation; // 0x380(0x0c)
	AActor* CurrentTarget; // 0x390(0x08)
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
// Size: 0x240 (Inherited: 0xf8)
struct UTrackMovementStateComponent : UCharacterStateComponent {
	UAudioComponent* AudioStartComponent; // 0xf8(0x08)
	UAudioComponent* AudioDuringComponent; // 0x100(0x08)
	UAudioComponent* AudioStopComponent; // 0x108(0x08)
	USoundBase* AudioOnStart; // 0x110(0x08)
	USoundBase* AudioOnDuring; // 0x118(0x08)
	USoundBase* AudioOnStop; // 0x120(0x08)
	float AudioOnFadeOut; // 0x128(0x04)
	UDialogDataAsset* StateUpdateShout; // 0x130(0x08)
	float StateUpdateShoutFrequencySecsMin; // 0x138(0x04)
	float StateUpdateShoutFrequencySecsMax; // 0x13c(0x04)
	float AudioDuringSlidingSpeedParam; // 0x140(0x04)
	float SpeedTarget; // 0x144(0x04)
	float SpeedMin; // 0x148(0x04)
	float SpeedMax; // 0x14c(0x04)
	float AccelerationBase; // 0x150(0x04)
	float AccelerationMultiplier; // 0x154(0x04)
	float DecelerationMultiplier; // 0x158(0x04)
	float AccelerationOnSlopeMultiplier; // 0x15c(0x04)
	float DecelerationOnSlopeMultiplier; // 0x160(0x04)
	float StoppingDeceleration; // 0x164(0x04)
	float StoppingDistance; // 0x168(0x04)
	TSoftClassPtr<UObject> ConnectorClass; // 0x170(0x28)
	AZipLineConnector* Connector; // 0x198(0x08)
	enum class EExitTrackMode ExitMode; // 0x1a0(0x01)
	FPipelineMovementData TrackMovementData; // 0x1a4(0x1c)

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

	void PlaceResources(AProceduralSetup* setup, float Radius, UDebrisPositioning* DebrisPositioning, TArray<FVector> locationsToAvoid, UCurveFloat* avoidCostCurve);
	void OnUsedEvent(APlayerCharacter* User);
	void OnRepairedEvent(URepairableComponent* repaired);
	void OnHammerProgress(float Progress);
	void OnHammered(APlayerCharacter* User);
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
// Size: 0x1f8 (Inherited: 0xb0)
struct UUpgradableGearComponent : UActorComponent {
	TArray<FUpgradeTier> UpgradeTiers; // 0xb0(0x10)
	UOverclockBank* OverclockBank; // 0xc0(0x08)
	TArray<UItemUpgrade*> AllOverclocks; // 0xc8(0x10)
	UTexture2D* IconLine; // 0xd8(0x08)
	UTexture2D* IconBG; // 0xe0(0x08)
	UTexture2D* IconDetailed; // 0xe8(0x08)
	TSoftObjectPtr<UTexture2D> PreviewImage; // 0xf0(0x28)
	TSoftClassPtr<UObject> PreviewActor; // 0x118(0x28)
	FText Name; // 0x140(0x18)
	FText Category; // 0x158(0x18)
	FText Description; // 0x170(0x18)
	int32_t CreditCost; // 0x188(0x04)
	TMap<UResourceData*, float> ResourceCost; // 0x190(0x50)
	int32_t RequiredCharacterLevel; // 0x1e0(0x04)
	TArray<FMasteryItem> masteryLevels; // 0x1e8(0x10)

	void SetGearStatText(FGearStatEntry Entry, FText Text);
	bool PurchaseItem(AActor* Item, AFSDPlayerState* Player);
	bool PlayerOwnesUpgradeInAllTiers(AActor* itemClass, UObject* WorldContextObject);
	void MirrorUpgradePreviewStatus(FGearStatEntry From, FGearStatEntry to);
	bool IsUpgradeEquipped(AActor* itemClass, UItemUpgrade* Upgrade, AFSDPlayerState* Player);
	bool IsTierUnLocked(AActor* itemClass, int32_t tierIndex, AFSDPlayerState* Player, UPlayerCharacterID* characterID);
	bool IsOverclockingEnabled(UObject* WorldContextObject, AFSDPlayerState* Player, UPlayerCharacterID* characterID, AActor* itemClass);
	bool IsItemUnlocked(UObject* WorldContextObject, UItemID* Item, UPlayerCharacterID* ItemOwner);
	bool IsItemOwned(UObject* WorldContextObject, UItemID* Item);
	bool IsItemEquipped(UObject* WorldContextObject, AActor* itemClass, UPlayerCharacterID* characterID);
	int32_t GetUpgradeTier(AActor* itemClass, UItemUpgrade* ItemUpgrade);
	FString GetSourceGearName();
	UTexture2D* GetPreviewImage();
	AActor* GetPreviewActorClass();
	TArray<UItemUpgrade*> GetOverClocks();
	int32_t GetMasteryProgress(UObject* WorldContextObject, UItemID* ItemID, int32_t maxMastery);
	TArray<FMasteryItem> GetMasteryLevels(UItemID* ItemID);
	bool GetMasteryForLevel(TArray<FMasteryItem> masteryLevels, int32_t Level, FMasteryItem outLevel);
	TArray<FUpgradeTier> GetItemUpgradeTiers(AActor* itemClass);
	enum class EItemUpgradeStatus GetItemUpgradeStatus(UObject* WorldContextObject, AActor* itemClass, UItemUpgrade* ItemUpgrade, UPlayerCharacterID* characterID);
	TArray<UItemUpgrade*> GetItemUpgrades(AActor* itemClass, UItemUpgrade* upgradeClass, AFSDPlayerState* Player, char upgradeIndex);
	AActor* GetItemPreviewClass(AActor* itemClass);
	bool GetItemMasteryForLevel(UItemID* ItemID, int32_t Level, FMasteryItem outLevel);
	TArray<FCraftingCost> GetItemCost(AActor* Item);
	FText GetGearStatValue(FGearStatEntry Entry);
	TArray<FGearStatEntry> GetGearStats(AFSDPlayerState* PlayerState, AActor* ActorClass);
	FString GetGearSourceName(AActor* itemClass, UItemUpgrade* ItemUpgrade);
	TArray<UItemUpgrade*> GetEquippedUpgrades(AActor* itemClass, AFSDPlayerState* Player);
	UItemUpgrade* GetEquippedUpgradeAtTier(AActor* itemClass, int32_t tierIndex, UPlayerCharacterID* characterID, AFSDPlayerState* Player);
	UItemUpgrade* GetEquippedOverclock(UObject* WorldContextObject, AActor* itemClass);
	TArray<UItemUpgrade*> GetEquippableOverclocks(UObject* WorldContextObject, AActor* itemClass, UPlayerCharacterID* characterID);
	TArray<FCraftingCost> GetCraftingCost();
	int32_t GetCharacterLevelRequiredForItem(AActor* itemClass);
	TArray<UItemUpgrade*> GetAllUpgrades();
	void ClearEquippedUpgrade(AActor* itemClass, int32_t tierIndex, AFSDPlayerState* Player);
	void CheckMasteryUnlocks(UItemID* ItemID, AFSDPlayerController* Player);
	bool CanItemOverclock(UObject* WorldContextObject, AActor* itemClass);
	bool CanAffordUpgrade(UObject* WorldContextObject, UItemUpgrade* Upgrade);
	bool CanAffordItem(UObject* WorldContextObject, AActor* Item);
};

// Class FSD.UpgradableItemComponent
// Size: 0x1f8 (Inherited: 0x1f8)
struct UUpgradableItemComponent : UUpgradableGearComponent {
};

// Class FSD.UpgradableBoscoComponent
// Size: 0x1f8 (Inherited: 0x1f8)
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
// Size: 0x138 (Inherited: 0x138)
struct UBPInstantUsable : UInstantUsable {

	void SetShoutBeginUse(UDialogDataAsset* InShout);
	bool BPCanUse(APlayerCharacter* User, USceneComponent* UseCollider);
};

// Class FSD.ShieldBoostUsable
// Size: 0x138 (Inherited: 0x138)
struct UShieldBoostUsable : UInstantUsable {

	void OnCharacterBoosted(APlayerCharacter* User);
};

// Class FSD.RepairableUsable
// Size: 0x138 (Inherited: 0x138)
struct URepairableUsable : UInstantUsable {
};

// Class FSD.SingleUsableComponent
// Size: 0x1d8 (Inherited: 0x100)
struct USingleUsableComponent : UUsableComponent {
	FMulticastInlineDelegate OnUsedBy; // 0x100(0x10)
	FMulticastInlineDelegate OnUseBegin; // 0x110(0x10)
	FMulticastInlineDelegate OnProgress; // 0x120(0x10)
	FMulticastInlineDelegate OnUsableChanged; // 0x130(0x10)
	FMulticastInlineDelegate OnUserCountChanged; // 0x140(0x10)
	FMulticastInlineDelegate OnFailed; // 0x150(0x10)
	USoundCue* AudioBeginUse; // 0x160(0x08)
	USoundCue* AudioFailedUse; // 0x168(0x08)
	USoundCue* AudioCompletedUse; // 0x170(0x08)
	UDialogDataAsset* BoscoLaserpointerShout; // 0x178(0x08)
	bool CoopUse; // 0x180(0x01)
	UPawnStat* UseSpeedStat; // 0x188(0x08)
	float CoopUseMultiplier; // 0x190(0x04)
	bool Usable; // 0x194(0x01)
	bool TurnOffAfterUse; // 0x195(0x01)
	bool bShowUsingUI; // 0x197(0x01)
	TSoftObjectPtr<UTexture2D> UsableIcon; // 0x198(0x28)
	float useDuration; // 0x1c0(0x04)
	float Progress; // 0x1c4(0x04)
	float DesiredProgress; // 0x1c8(0x04)
	int32_t userCount; // 0x1cc(0x04)
	UAudioComponent* AudioBeginUseInstance; // 0x1d0(0x08)

	void Use(APlayerCharacter* User, float DeltaTime);
	void SetCanUse(bool canUse);
	void OnRep_UserCount();
	void OnRep_Usable();
	void OnRep_DesiredProgress();
	void All_PlayFailedAudio();
};

// Class FSD.ContinuousUsableComponent
// Size: 0x120 (Inherited: 0x100)
struct UContinuousUsableComponent : UUsableComponent {
	FMulticastInlineDelegate UseTick; // 0x100(0x10)
	float TimeBetweenTicks; // 0x110(0x04)
	bool Usable; // 0x114(0x01)

	void SetCanUse(bool canUse);
};

// Class FSD.OncePerPlayerUsableComponent
// Size: 0x160 (Inherited: 0x138)
struct UOncePerPlayerUsableComponent : UInstantUsable {
	FMulticastInlineDelegate OnUsersChangedEvent; // 0x138(0x10)
	TArray<FUniqueNetIdRepl> Users; // 0x148(0x10)

	void OnUsersChanged(TArray<FUniqueNetIdRepl> userList);
	void OnRep_Users();
};

// Class FSD.EventRewarderUsableComponent
// Size: 0x1f8 (Inherited: 0x1d8)
struct UEventRewarderUsableComponent : USingleUsableComponent {
	FText RewardUseText; // 0x1d8(0x18)

	FText CreateUseText(int32_t blankSchematicCount);
};

// Class FSD.SpecialEventUsableComponent
// Size: 0x1d8 (Inherited: 0x1d8)
struct USpecialEventUsableComponent : USingleUsableComponent {
};

// Class FSD.ControlEnemyUsable
// Size: 0x148 (Inherited: 0x138)
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
// Size: 0xf8 (Inherited: 0xf8)
struct UUsingStateComponent : UCharacterStateComponent {
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
// Size: 0x290 (Inherited: 0x220)
struct AVanityCharacter : AActor {
	UAnimSequenceBase* Animation; // 0x220(0x08)
	USkinColorVanityItem* skinColor; // 0x228(0x08)
	UBeardColorVanityItem* BeardColor; // 0x230(0x08)
	UHeadVanityItem* Head; // 0x238(0x08)
	UEyeBrowsVanityItem* EyeBrows; // 0x240(0x08)
	USideburnsVanityItem* Sideburns; // 0x248(0x08)
	UMoustacheVanityItem* Moustache; // 0x250(0x08)
	UBeardVanityItem* Beard; // 0x258(0x08)
	UArmorVanityItem* Armor; // 0x260(0x08)
	UArmorMaterialVanityItem* ArmorColor; // 0x268(0x08)
	USkeletalMeshComponent* Mesh; // 0x270(0x08)
	USkeletalMeshComponent* BodyMesh; // 0x278(0x08)
	UBeardColorVanityItem* DefaultHairColor; // 0x280(0x08)
	UMaterialInterface* DefaultArmorMaterial; // 0x288(0x08)

	void DisplayVanity();
	void Clean();
};

// Class FSD.IconGenerationBase
// Size: 0x230 (Inherited: 0x220)
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
// Size: 0x260 (Inherited: 0x230)
struct AIconGenerationCharacter : AIconGenerationBase {
	USkeletalMeshComponent* Mesh; // 0x230(0x08)
	USkeletalMeshComponent* BodyMesh; // 0x238(0x08)
	UBeardColorVanityItem* HairColor; // 0x240(0x08)
	UMaterialInterface* ArmorMaterial; // 0x248(0x08)
	TArray<UIconSceneCaptureComponent*> CaptureComponents; // 0x250(0x10)
};

// Class FSD.PickaxeIconSceneCaptureComponent
// Size: 0x880 (Inherited: 0x880)
struct UPickaxeIconSceneCaptureComponent : USceneCaptureComponent2D {
	enum class EPickaxePartLocation CameraKey; // 0x878(0x01)
};

// Class FSD.IconGenerationPickaxe
// Size: 0x240 (Inherited: 0x230)
struct AIconGenerationPickaxe : AIconGenerationBase {
	TArray<UPickaxeIconSceneCaptureComponent*> CaptureComponents; // 0x230(0x10)
};

// Class FSD.IconGenerationManager
// Size: 0x138 (Inherited: 0x28)
struct UIconGenerationManager : UObject {
	AIconGenerationCharacter* GeneratorInst; // 0x28(0x08)
	AIconGenerationPickaxe* PickaxeGeneratorInst; // 0x30(0x08)
	TArray<FGenerateIconInfo> ItemGenerationQueue; // 0x88(0x10)
	TArray<enum class EVanitySlot> VanitySlots; // 0xc0(0x10)
	TArray<UVanityItem*> HairColorHairItems; // 0xd0(0x10)
	TSoftClassPtr<UObject> IconCharacter; // 0xe0(0x28)
	TSoftClassPtr<UObject> IconPickaxe; // 0x108(0x28)
	UTextureRenderTarget2D* LatestGeneratedTexture; // 0x130(0x08)

	void GeneratePickaxePartIcon_Async(UIconGenerationManager* Manager, UPickaxePart* part, enum class EPickaxePartLocation PickaxePartLocation, UPlayerCharacterID* Character, UTextureRenderTarget2D* Icon, FLatentActionInfo LatentInfo);
	void GenerateIcon_Async(UIconGenerationManager* Manager, UVanityItem* Item, UPlayerCharacterID* Character, UTextureRenderTarget2D* Icon, FLatentActionInfo LatentInfo);
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

	void PreviewItem(AFSDPlayerState* PlayerState, bool Show);
	void MarkAsUnLocked();
	bool IsOwned(UObject* WorldContextObject, UPlayerCharacterID* characterID);
	bool IsEquipped(UObject* WorldContextObject, UPlayerCharacterID* characterID);
	void GiftItem(UObject* WorldContextObject, UPlayerCharacterID* characterID);
	enum class EVanitySlot GetVanitySlot();
	TArray<FCraftingCost> GetResourceCost();
	int32_t GetRequiredPlayerRank();
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

// Class FSD.VanitySchematicBank
// Size: 0x90 (Inherited: 0x38)
struct UVanitySchematicBank : USchematicBankBase {
	USchematicCategory* SchematicCategory; // 0x38(0x08)
	TMap<UVanityItem*, FSchematicBankItem> vanityItems; // 0x40(0x50)

	void AppendItems(TArray<UVanityItem*> toArray);
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
// Size: 0x80 (Inherited: 0x30)
struct UVictoryPoseSettings : UDataAsset {
	UTexture2D* GenericVictoryPoseIcon; // 0x30(0x08)
	TArray<UVictoryPose*> AvailableVictoryPoses; // 0x38(0x10)
	TArray<UVictoryPose*> LoadedVictoryPoses; // 0x48(0x10)
	UVictoryPose* RandomVictoryPose; // 0x58(0x08)
	TArray<UActorComponent*> ModReferencesHack; // 0x60(0x10)
	TArray<AActor*> ModProxyHack; // 0x70(0x10)
};

// Class FSD.WalkingStateComponent
// Size: 0x158 (Inherited: 0xf8)
struct UWalkingStateComponent : UCharacterStateComponent {
	bool SlidingEnabled; // 0xf8(0x01)
	bool ShowDebug; // 0xf9(0x01)
	float SlideAngle; // 0xfc(0x04)
	float SlideAcceleration; // 0x100(0x04)
	float MaxSlideSpeed; // 0x104(0x04)
	float MaxClimbDistance; // 0x108(0x04)
	USoundBase* AudioSliding; // 0x110(0x08)
	USoundBase* IceSliding; // 0x118(0x08)
	UAudioComponent* AudioComponentSliding; // 0x120(0x08)
	UAudioComponent* AudioComponentIceSliding; // 0x128(0x08)

	void TrackGrindCallback(APlayerCharacter* User);
	void Server_StartTrackMovement(UTrackBuilderMovement* InMovement);
	void Server_SetIsSliding(bool isSliding);
	void JumpPress();
};

// Class FSD.WeakpointGlowComponent
// Size: 0x178 (Inherited: 0xb0)
struct UWeakpointGlowComponent : UActorComponent {
	FName EmissiveParam; // 0xb0(0x08)
	FRuntimeFloatCurve WeakpointHitCurve; // 0xd0(0x88)
	UMaterialInstance* MakeMIDFrom; // 0x158(0x08)
	float MaxEmissive; // 0x160(0x04)
	float MinEmissive; // 0x164(0x04)
	UFSDPhysicalMaterial* WeakPointMaterial; // 0x168(0x08)
	bool AddFirstChannelAutomatically; // 0x170(0x01)
	int32_t ReplaceMatIndex; // 0x174(0x04)

	bool StopLoopingGlow(int32_t aGlowID, bool aFade);
	void ShowBodypartHit(float amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, FName BoneName);
	void SetUpWeakPointGlowOnMesh(UMeshComponent* Mesh, int32_t MaterialIndex, UFSDPhysicalMaterial* PhysicalMaterial, UHealthComponentBase* HealthComponent);
	void All_ShowWeakPointHit(char Channel);
	void AddWeakpointGlow(bool loopIndefinitely, float loopTime, FRuntimeFloatCurve GrowCurve, FRuntimeFloatCurve FadeCurve, int32_t UniqueId, int32_t Channel);
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
// Size: 0x6b0 (Inherited: 0x690)
struct AAssaultRifle : AAmmoDrivenWeapon {
	float KillsResetAccuracyDuration; // 0x690(0x04)
	bool KillsTriggersStatusEffect; // 0x694(0x01)
	UStatusEffect* KillTriggeredStatusEffect; // 0x6a8(0x08)

	void OnTimerElapsed();
	void OnEnemyKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat);
	void Client_ResetAccuracy();
};

// Class FSD.FlareGun
// Size: 0x690 (Inherited: 0x690)
struct AFlareGun : AAmmoDrivenWeapon {
};

// Class FSD.SawedOffShotgun
// Size: 0x6e0 (Inherited: 0x690)
struct ASawedOffShotgun : AAmmoDrivenWeapon {
	UDamageComponent* DamageComponent; // 0x690(0x08)
	UDamageComponent* ShockWaveDamageComponent; // 0x698(0x08)
	float FearFactorOnFire; // 0x6a0(0x04)
	float FearFactorOnFireRadius; // 0x6a4(0x04)
	bool ShotgunJumpEnabled; // 0x6a8(0x01)
	float ShotgunJumpForce; // 0x6ac(0x04)
	bool ShockwaveEnabled; // 0x6b0(0x01)
	float ShockWaveDistance; // 0x6b4(0x04)
	float ShockWaveRadius; // 0x6b8(0x04)
	float ShockWaveLength; // 0x6bc(0x04)

	void SetShockWaveDamageComponent(UDamageComponent* Component);
};

// Class FSD.BurstWeapon
// Size: 0x6c8 (Inherited: 0x690)
struct ABurstWeapon : AAmmoDrivenWeapon {
	UDamageComponent* Damage; // 0x690(0x08)
	UDamageComponent* BurstFireBonusDamage; // 0x698(0x08)

	void OnTargetDamaged(UHealthComponentBase* Health, float amount, UFSDPhysicalMaterial* PhysicalMaterial);
	void OnReadyToFire();
};

// Class FSD.Revoler
// Size: 0x6a8 (Inherited: 0x690)
struct ARevoler : AAmmoDrivenWeapon {
	float OnKillFearFactor; // 0x690(0x04)
	float OnKillFearRange; // 0x694(0x04)

	void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat);
};

// Class FSD.BasicPistol
// Size: 0x6a8 (Inherited: 0x690)
struct ABasicPistol : AAmmoDrivenWeapon {
	float ConsecutiveHitsDamageBonus; // 0x690(0x04)
	float ConsecutiveHitsMaxBonus; // 0x6a0(0x04)

	void OnTargetDamaged(UHealthComponentBase* Health, float amount, UFSDPhysicalMaterial* PhysicalMaterial);
};

// Class FSD.ElectricalSMG
// Size: 0x6d0 (Inherited: 0x690)
struct AElectricalSMG : AAmmoDrivenWeapon {
	UStatusEffect* AoEStatusEffect; // 0x690(0x08)
	UParticleSystem* AoEParticle; // 0x698(0x08)
	USoundCue* AoESound; // 0x6a0(0x08)
	float AoEStatusEffectChance; // 0x6a8(0x04)
	float AoEStatusEffectRange; // 0x6ac(0x04)

	void OnTargetDamaged(UHealthComponentBase* Health, float amount, UFSDPhysicalMaterial* PhysicalMaterial);
	void OnStatusEffectPushed(UHealthComponentBase* Health);
	void All_OnAoETriggered(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal);
};

// Class FSD.AutoShotgun
// Size: 0x698 (Inherited: 0x690)
struct AAutoShotgun : AAmmoDrivenWeapon {

	void OnTargetDamaged(UHealthComponentBase* Health, float amount, UFSDPhysicalMaterial* PhysicalMaterial);
};

// Class FSD.LineCutter
// Size: 0x6b8 (Inherited: 0x690)
struct ALineCutter : AAmmoDrivenWeapon {
	bool StopUsingReversesProjectile; // 0x690(0x01)
	bool RotateProjectileUntillStop; // 0x691(0x01)
	bool ExplodeLastProjectileOnNextFireAttempt; // 0x692(0x01)
	TArray<UItemUpgrade*> Upgrades; // 0x698(0x10)
	TWeakObjectPtr<ALineCutterProjectile> LastProjectile; // 0x6a8(0x08)
	float MinExplosiveGoodbyeActivationTimme; // 0x6b0(0x04)

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
	void OnTargetDamaged(UHealthComponentBase* Health, float amount, UFSDPhysicalMaterial* PhysicalMaterial);
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
// Size: 0x198 (Inherited: 0xb0)
struct UWindowManager : UActorComponent {
	FMulticastInlineDelegate OnFirstWindowOpened; // 0xb0(0x10)
	FMulticastInlineDelegate OnLastWindowClosed; // 0xc0(0x10)
	USoundCue* AudioWindowOpen; // 0xd0(0x08)
	TArray<UWindowWidget*> WindowStack; // 0xd8(0x10)
	TMap<UWindowWidget*, UWindowWidget*> WindowList; // 0xe8(0x50)
	TMap<UUserWidget*, TWeakObjectPtr<UUserWidget>> WidgetSingletonCache; // 0x138(0x50)
	bool ResolutionDownscaleActive; // 0x188(0x01)
	float PrevFrameBudget; // 0x18c(0x04)
	float PrevMinScreenPct; // 0x190(0x04)

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
// Size: 0x580 (Inherited: 0x398)
struct AWoodLouse : AEnemyDeepPathfinderCharacter {
	USceneComponent* RollingCenter; // 0x398(0x08)
	UPawnSensingComponent* PawnSensing; // 0x3a0(0x08)
	enum class EWoodLouseState forceState; // 0x3a9(0x01)
	float RollingCenterOffsetOnStanding; // 0x3ac(0x04)
	float RollingCenterOffsetOnFold; // 0x3b0(0x04)
	float ChanceToWalk; // 0x3b8(0x04)
	bool DebugAngle; // 0x3bc(0x01)
	UFakeMoverSettings* FakeMoverSettings; // 0x3e0(0x08)
	AProjectile* BurstProjectileClass; // 0x3e8(0x08)
	float BurstTime; // 0x3f0(0x04)
	TArray<UStatusEffect*> StatusEffectsOnRoll; // 0x3f8(0x10)
	FBumpPlayerHit LastHit; // 0x408(0x18)
	float TiltModifier; // 0x420(0x04)
	float BurstXOffset; // 0x424(0x04)
	float BurstYOffset; // 0x428(0x04)
	float BurstZOffset; // 0x42c(0x04)
	float HighDifficultyCustomProjectileGravity; // 0x430(0x04)
	int32_t BurstCount; // 0x434(0x04)
	bool InvounerableOnRoll; // 0x43c(0x01)
	bool LockToRollMode; // 0x43d(0x01)
	bool LockToWalkMode; // 0x43e(0x01)
	float ForgetRange; // 0x440(0x04)
	float ForgetTime; // 0x444(0x04)
	float RefreshTimeMax; // 0x44c(0x04)
	float RefreshTimeMin; // 0x450(0x04)
	float BumpPower; // 0x454(0x04)
	float DirectionalBumpPower; // 0x458(0x04)
	enum class EWoodLouseState CurrentState; // 0x45c(0x01)
	AActor* CurrentTarget; // 0x480(0x08)
	float FoldedStateMaxTime; // 0x488(0x04)
	float FoldedStateMinTime; // 0x48c(0x04)
	float UnfoldedStateMaxTime; // 0x490(0x04)
	float UnflodedStateMinTime; // 0x494(0x04)
	USoundBase* BumpSound; // 0x4a0(0x08)
	float TimeBetweenBumpingSamePlayer; // 0x4a8(0x04)
	float MinBumpDamage; // 0x4ac(0x04)
	float MaxBumpDamage; // 0x4b0(0x04)
	float BumpDamage; // 0x4b4(0x04)
	UDamageClass* BumpDamageType; // 0x4b8(0x08)
	float MaxBumpPower; // 0x4c0(0x04)
	float BumpRange; // 0x4c4(0x04)
	float AcceptableAngles; // 0x4cc(0x04)
	float RollSpeedModifier; // 0x4d0(0x04)
	float RollAlpha; // 0x4d4(0x04)
	float TiltAlpha; // 0x4d8(0x04)
	USoundBase* RollingSound; // 0x4e0(0x08)
	FName RollingSpeedParamName; // 0x4e8(0x08)
	TWeakObjectPtr<UAudioComponent> RollingSoundComponent; // 0x4f0(0x08)
	UFakeMoverSettings* RollMoveSettings; // 0x4f8(0x08)
	UFakeMoverSettings* StopRollMoveSettings; // 0x500(0x08)
	FGameplayTagQuery TargetQuery; // 0x508(0x48)
	bool RotateTowardsTarget; // 0x568(0x01)
	float SeeTargetSafetyTime; // 0x56c(0x04)
	bool WantsToStandUp; // 0x574(0x01)
	bool IsShooting; // 0x575(0x01)
	bool CanStandOnAnySurface; // 0x576(0x01)

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

// Class FSD.ZapperItem
// Size: 0x388 (Inherited: 0x368)
struct AZapperItem : AAnimatedItem {
	UCapacityHoldingItemAggregator* Capacity; // 0x368(0x08)
	UItemPlacerAggregator* ItemPlacer; // 0x370(0x08)
	AZapper* ZapperClass; // 0x378(0x08)
	float Cooldown; // 0x380(0x04)
	float CooldownRemaining; // 0x384(0x04)

	void Server_PlaceZapper(FVector Location);
};

// Class FSD.Zapper
// Size: 0x2a0 (Inherited: 0x220)
struct AZapper : AActor {
	USphereComponent* AttackArea; // 0x220(0x08)
	FGameplayTagContainer AllowedTags; // 0x228(0x20)
	UParticleSystem* ZapParticles; // 0x248(0x08)
	float Damage; // 0x250(0x04)
	UDamageClass* DamageClass; // 0x258(0x08)
	int32_t Charges; // 0x260(0x04)
	float ChargeTime; // 0x264(0x04)
	float CoolDownTime; // 0x268(0x04)
	float ChargeProgress; // 0x26c(0x04)
	float CooldownRemaining; // 0x270(0x04)
	ULightComponent* ZappingLight; // 0x278(0x08)
	USceneComponent* ZappingPoint; // 0x280(0x08)
	TArray<FZapperTarget> Targets; // 0x288(0x10)

	USceneComponent* GetZappingPoint();
	ULightComponent* GetZappingLight();
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
// Size: 0x6e8 (Inherited: 0x690)
struct AZipLineItem : AAmmoDrivenWeapon {
	float MaxDistance; // 0x690(0x04)
	float MinDistance; // 0x694(0x04)
	float MinAngle; // 0x698(0x04)
	float MaxAngle; // 0x69c(0x04)
	FGameplayTagQuery ExcludeSurfaceTags; // 0x6a0(0x48)

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
// Size: 0x228 (Inherited: 0xf8)
struct UZipLineStateComponent : UCharacterStateComponent {
	FZipLineConnectorHandler ZipLineConnector; // 0xf8(0x30)
	float VerticalOffset; // 0x128(0x04)
	float HorizontalOffset; // 0x12c(0x04)
	float TravelSpeed; // 0x130(0x04)
	float AccelAndDecelAlpha; // 0x134(0x04)
	float JumpForce; // 0x138(0x04)
	float SpeedBoostActivationDuration; // 0x13c(0x04)
	float SpeedBoostActivionMinAngle; // 0x140(0x04)
	float BaseSpeedBoost; // 0x144(0x04)
	float AdditionalSpeedBoostPerAngle; // 0x148(0x04)
	float SpeedBoostCoolDownDuration; // 0x14c(0x04)
	float AccelerationAlpha; // 0x150(0x04)
	float DecelerationAlpha; // 0x154(0x04)
	float MinStartDistanceToEnd; // 0x158(0x04)
	float ReleaseDistance; // 0x15c(0x04)
	bool bCanActivateSpeedBoost; // 0x160(0x01)
	bool bShowSpeedBoostActivator; // 0x161(0x01)
	float SpeedBoostActivationProgress; // 0x164(0x04)
	USoundBase* AudioOnStart; // 0x170(0x08)
	USoundBase* AudioOnDuring; // 0x178(0x08)
	USoundBase* AudioOnChangingDirection; // 0x180(0x08)
	USoundBase* AudioOnStop; // 0x188(0x08)
	USoundBase* AudioOnSpeedBoostActivated; // 0x190(0x08)
	UDialogDataAsset* ShoutStartUsing; // 0x198(0x08)
	UDialogDataAsset* ShoutSpeedBoostActivated; // 0x1a0(0x08)
	TWeakObjectPtr<AZipLineProjectile> ZipLineProjectile; // 0x1a8(0x08)
	FZipLine ZipLine; // 0x1b0(0x38)
	float DamageBeforeFalling; // 0x1fc(0x04)
	float friendlyFireModifier; // 0x200(0x04)
	float DamageResetTime; // 0x204(0x04)
	UAudioComponent* AudioComponent; // 0x208(0x08)

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


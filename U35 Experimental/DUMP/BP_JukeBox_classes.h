// BlueprintGeneratedClass BP_JukeBox.BP_JukeBox_C
// Size: 0x2fc (Inherited: 0x220)
struct ABP_JukeBox_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* SM_SpaceRig_Jukebox_B; // 0x228(0x08)
	UWidgetComponent* Widget5; // 0x230(0x08)
	UWidgetComponent* Widget4; // 0x238(0x08)
	UWidgetComponent* Widget3; // 0x240(0x08)
	UWidgetComponent* Widget2; // 0x248(0x08)
	UWidgetComponent* Widget1; // 0x250(0x08)
	UWidgetComponent* Widget_Display; // 0x258(0x08)
	UStaticMeshComponent* Jukebox; // 0x260(0x08)
	USphereComponent* DanceSphere; // 0x268(0x08)
	UStaticMeshComponent* SM_Speaker1; // 0x270(0x08)
	UStaticMeshComponent* SM_Speaker; // 0x278(0x08)
	UBoxComponent* Box; // 0x280(0x08)
	UAudioComponent* JukeBox_Random_Cue; // 0x288(0x08)
	UInstantUsable* InstantUsable; // 0x290(0x08)
	USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	float Timeline_0_Scale_Transform_97D3E280454882350654EE88E83F3CA7; // 0x2a0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_97D3E280454882350654EE88E83F3CA7; // 0x2a4(0x01)
	UTimelineComponent* Timeline_1; // 0x2a8(0x08)
	float RotationSpeed; // 0x2b0(0x04)
	bool Can Use; // 0x2b4(0x01)
	int32_t MusicIndex; // 0x2b8(0x04)
	FVector Scale; // 0x2bc(0x0c)
	TArray<TSoftObjectPtr<USoundBase>> MusicList; // 0x2c8(0x10)
	UFSDAchievement* PartyTimeAchievement; // 0x2d8(0x08)
	int32_t PartyTimeDwarves; // 0x2e0(0x04)
	TArray<TSoftObjectPtr<USoundBase>> SafeMusicList; // 0x2e8(0x10)
	int32_t LocalMusicIndex; // 0x2f8(0x04)

	void UpdateCurrentMusic();
	void GetAvailableMusic(TArray<TSoftObjectPtr<USoundBase>> OutMusicList);
	void PayCredits(APlayerCharacter* User, int32_t Amount, bool Purchased);
	void OnRep_MusicIndex();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnLoaded_C15A19DC4718016F57823CA232EE5860(UObject* Loaded);
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void ReceiveBeginPlay();
	void ToggleSpeakerRocking();
	void BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void LoadAndPlay(TSoftObjectPtr<USoundBase> Music);
	void Stop Juke Box();
	void StopJukebox();
	void SetupDisableJukeboxMusic();
	void OnStreamerModeChanged(bool NewValue);
	void OnSaluteEvent_Event_1();
	void ExecuteUbergraph_BP_JukeBox(int32_t EntryPoint);
};


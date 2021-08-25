// BlueprintGeneratedClass BP_JukeBox.BP_JukeBox_C
// Size: 0x2fc (Inherited: 0x220)
struct ABP_JukeBox_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* SM_SpaceRig_Jukebox_B; // 0x228(0x08)
	struct UWidgetComponent* Widget5; // 0x230(0x08)
	struct UWidgetComponent* Widget4; // 0x238(0x08)
	struct UWidgetComponent* Widget3; // 0x240(0x08)
	struct UWidgetComponent* Widget2; // 0x248(0x08)
	struct UWidgetComponent* Widget1; // 0x250(0x08)
	struct UWidgetComponent* Widget_Display; // 0x258(0x08)
	struct UStaticMeshComponent* Jukebox; // 0x260(0x08)
	struct USphereComponent* DanceSphere; // 0x268(0x08)
	struct UStaticMeshComponent* SM_Speaker1; // 0x270(0x08)
	struct UStaticMeshComponent* SM_Speaker; // 0x278(0x08)
	struct UBoxComponent* Box; // 0x280(0x08)
	struct UAudioComponent* JukeBox_Random_Cue; // 0x288(0x08)
	struct UInstantUsable* InstantUsable; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	float Timeline_0_Scale_Transform_97D3E280454882350654EE88E83F3CA7; // 0x2a0(0x04)
	char Timeline_0__Direction_97D3E280454882350654EE88E83F3CA7; // 0x2a4(0x01)
	char UnknownData_2A5[0x3]; // 0x2a5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2a8(0x08)
	float RotationSpeed; // 0x2b0(0x04)
	bool Can Use; // 0x2b4(0x01)
	char UnknownData_2B5[0x3]; // 0x2b5(0x03)
	int32_t MusicIndex; // 0x2b8(0x04)
	struct FVector Scale; // 0x2bc(0x0c)
	struct TArray<struct TSoftObjectPtr<struct USoundBase>> MusicList; // 0x2c8(0x10)
	struct UFSDAchievement* PartyTimeAchievement; // 0x2d8(0x08)
	int32_t PartyTimeDwarves; // 0x2e0(0x04)
	char UnknownData_2E4[0x4]; // 0x2e4(0x04)
	struct TArray<struct TSoftObjectPtr<struct USoundBase>> SafeMusicList; // 0x2e8(0x10)
	int32_t LocalMusicIndex; // 0x2f8(0x04)

	void UpdateCurrentMusic(); // Function BP_JukeBox.BP_JukeBox_C.UpdateCurrentMusic
	void GetAvailableMusic(struct TArray<struct TSoftObjectPtr<struct USoundBase>> OutMusicList); // Function BP_JukeBox.BP_JukeBox_C.GetAvailableMusic
	void PayCredits(struct APlayerCharacter* User, int32_t amount, bool Purchased); // Function BP_JukeBox.BP_JukeBox_C.PayCredits
	void OnRep_MusicIndex(); // Function BP_JukeBox.BP_JukeBox_C.OnRep_MusicIndex
	void Timeline_0__FinishedFunc(); // Function BP_JukeBox.BP_JukeBox_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_JukeBox.BP_JukeBox_C.Timeline_0__UpdateFunc
	void OnLoaded_C15A19DC4718016F57823CA232EE5860(struct UObject* Loaded); // Function BP_JukeBox.BP_JukeBox_C.OnLoaded_C15A19DC4718016F57823CA232EE5860
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_JukeBox.BP_JukeBox_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_JukeBox.BP_JukeBox_C.ReceiveBeginPlay
	void ToggleSpeakerRocking(); // Function BP_JukeBox.BP_JukeBox_C.ToggleSpeakerRocking
	void BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_JukeBox.BP_JukeBox_C.BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_JukeBox.BP_JukeBox_C.BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void LoadAndPlay(struct TSoftObjectPtr<struct USoundBase> Music); // Function BP_JukeBox.BP_JukeBox_C.LoadAndPlay
	void Stop Juke Box(); // Function BP_JukeBox.BP_JukeBox_C.Stop Juke Box
	void StopJukebox(); // Function BP_JukeBox.BP_JukeBox_C.StopJukebox
	void SetupDisableJukeboxMusic(); // Function BP_JukeBox.BP_JukeBox_C.SetupDisableJukeboxMusic
	void OnStreamerModeChanged(bool NewValue); // Function BP_JukeBox.BP_JukeBox_C.OnStreamerModeChanged
	void OnSaluteEvent_Event_1(); // Function BP_JukeBox.BP_JukeBox_C.OnSaluteEvent_Event_1
	void ExecuteUbergraph_BP_JukeBox(int32_t EntryPoint); // Function BP_JukeBox.BP_JukeBox_C.ExecuteUbergraph_BP_JukeBox
};


// BlueprintGeneratedClass BP_DownedState.BP_DownedState_C
// Size: 0x198 (Inherited: 0x140)
struct UBP_DownedState_C : UDownedStateComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	TSoftObjectPtr<UObject> SeeYouInHell_Particles; // 0x148(0x28)
	TSoftObjectPtr<UObject> SeeYOuInHell_Charge_Particles; // 0x170(0x28)

	void OnLoaded_4C0CAFB9405C60A5642DA2A8AFDA785B(UObject* Loaded);
	void OnLoaded_5277138148709B6872AFA8AE00BD1B01(UObject* Loaded);
	void OnLoaded_EE490F594C2547CD96CB63943EA06475(UObject* Loaded);
	void OnLoaded_369215DE4E9E3D75961755AB344B6937(UObject* Loaded);
	void ReceiveBeginPlay();
	void Receive_TriggerDownedBomb();
	void All_ShowDownedBomb();
	void All_ShowBombIntro();
	void Server_SpawnDBField();
	void ExecuteUbergraph_BP_DownedState(int32_t EntryPoint);
};


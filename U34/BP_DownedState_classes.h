// BlueprintGeneratedClass BP_DownedState.BP_DownedState_C
// Size: 0x198 (Inherited: 0x140)
struct UBP_DownedState_C : UDownedStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	struct TSoftObjectPtr<struct UObject> SeeYouInHell_Particles; // 0x148(0x28)
	struct TSoftObjectPtr<struct UObject> SeeYOuInHell_Charge_Particles; // 0x170(0x28)

	void OnLoaded_4C0CAFB9405C60A5642DA2A8AFDA785B(struct UObject* Loaded); // Function BP_DownedState.BP_DownedState_C.OnLoaded_4C0CAFB9405C60A5642DA2A8AFDA785B
	void OnLoaded_5277138148709B6872AFA8AE00BD1B01(struct UObject* Loaded); // Function BP_DownedState.BP_DownedState_C.OnLoaded_5277138148709B6872AFA8AE00BD1B01
	void OnLoaded_EE490F594C2547CD96CB63943EA06475(struct UObject* Loaded); // Function BP_DownedState.BP_DownedState_C.OnLoaded_EE490F594C2547CD96CB63943EA06475
	void OnLoaded_369215DE4E9E3D75961755AB344B6937(struct UObject* Loaded); // Function BP_DownedState.BP_DownedState_C.OnLoaded_369215DE4E9E3D75961755AB344B6937
	void ReceiveBeginPlay(); // Function BP_DownedState.BP_DownedState_C.ReceiveBeginPlay
	void Receive_TriggerDownedBomb(); // Function BP_DownedState.BP_DownedState_C.Receive_TriggerDownedBomb
	void All_ShowDownedBomb(); // Function BP_DownedState.BP_DownedState_C.All_ShowDownedBomb
	void All_ShowBombIntro(); // Function BP_DownedState.BP_DownedState_C.All_ShowBombIntro
	void Server_SpawnDBField(); // Function BP_DownedState.BP_DownedState_C.Server_SpawnDBField
	void ExecuteUbergraph_BP_DownedState(int32_t EntryPoint); // Function BP_DownedState.BP_DownedState_C.ExecuteUbergraph_BP_DownedState
};


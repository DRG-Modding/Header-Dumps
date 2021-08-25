// BlueprintGeneratedClass BP_ProceduralController.BP_ProceduralController_C
// Size: 0xb8 (Inherited: 0xb0)
struct UBP_ProceduralController_C : UProceduralController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)

	void SendRoomData(); // Function BP_ProceduralController.BP_ProceduralController_C.SendRoomData
	void SendTunnelData(); // Function BP_ProceduralController.BP_ProceduralController_C.SendTunnelData
	void ReceivedRoomData(int32_t Seed, struct TArray<struct FRoomNode> Rooms, struct TArray<struct FPathObstacle> obstacles); // Function BP_ProceduralController.BP_ProceduralController_C.ReceivedRoomData
	void ReceivedTunnelData(struct TArray<struct FTunnelNode> Tunnels); // Function BP_ProceduralController.BP_ProceduralController_C.ReceivedTunnelData
	void Server_RequestPLSData(); // Function BP_ProceduralController.BP_ProceduralController_C.Server_RequestPLSData
	void Server_RequestCarverData(enum class EDebrisItemPass pass); // Function BP_ProceduralController.BP_ProceduralController_C.Server_RequestCarverData
	void RequestPLSData(); // Function BP_ProceduralController.BP_ProceduralController_C.RequestPLSData
	void RequestCarverData(enum class EDebrisItemPass pass); // Function BP_ProceduralController.BP_ProceduralController_C.RequestCarverData
	void ExecuteUbergraph_BP_ProceduralController(int32_t EntryPoint); // Function BP_ProceduralController.BP_ProceduralController_C.ExecuteUbergraph_BP_ProceduralController
};


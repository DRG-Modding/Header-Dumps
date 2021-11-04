// BlueprintGeneratedClass BP_ProceduralController.BP_ProceduralController_C
// Size: 0xb8 (Inherited: 0xb0)
struct UBP_ProceduralController_C : UProceduralController {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)

	void SendRoomData();
	void SendTunnelData();
	void ReceivedRoomData(int32_t Seed, TArray<FRoomNode> Rooms, TArray<FPathObstacle> obstacles);
	void ReceivedTunnelData(TArray<FTunnelNode> Tunnels);
	void Server_RequestPLSData();
	void Server_RequestCarverData(enum class EDebrisItemPass pass);
	void RequestPLSData();
	void RequestCarverData(enum class EDebrisItemPass pass);
	void ExecuteUbergraph_BP_ProceduralController(int32_t EntryPoint);
};


#ifndef UE4SS_SDK_BP_ProceduralController_HPP
#define UE4SS_SDK_BP_ProceduralController_HPP

class UBP_ProceduralController_C : public UProceduralController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SendRoomData();
    void SendTunnelData();
    void ReceivedRoomData(int32 Seed, const TArray<FRoomNode>& Rooms, const TArray<FPathObstacle>& Obstacles);
    void ReceivedTunnelData(const TArray<FTunnelNode>& tunnels);
    void Server_RequestPLSData();
    void Server_RequestCarverData(EDebrisItemPass pass);
    void RequestPLSData();
    void RequestCarverData(EDebrisItemPass pass);
    void ExecuteUbergraph_BP_ProceduralController(int32 EntryPoint);
};

#endif

#ifndef UE4SS_SDK_BP_ProceduralController_HPP
#define UE4SS_SDK_BP_ProceduralController_HPP

class UBP_ProceduralController_C : public UProceduralController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SendRoomData();
    void SendTunnelData();
    void ReceivedRoomData(int32 Seed, const TArray<FRoomNode>& Rooms, const TArray<FPathObstacle>& obstacles);
    void ReceivedTunnelData(const TArray<FTunnelNode>& Tunnels);
    void Server_RequestPLSData();
    void Server_RequestCarverData(EDebrisItemPass pass);
    void RequestPLSData();
    void RequestCarverData(EDebrisItemPass pass);
    void ExecuteUbergraph_BP_ProceduralController(int32 EntryPoint, EDebrisItemPass K2Node_Event_pass, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue_1, int32 K2Node_Event_seed, const TArray<FRoomNode>& K2Node_Event_rooms, const TArray<FPathObstacle>& K2Node_Event_obstacles, const TArray<FTunnelNode>& K2Node_Event_tunnels, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue_2, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue_3, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue_4, bool CallFunc_IsGeneratedDataReady_ReturnValue, EDebrisItemPass K2Node_CustomEvent_Pass, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue_5, bool CallFunc_IsCarverDataReady_ReturnValue);
};

#endif

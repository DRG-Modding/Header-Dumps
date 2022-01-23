#ifndef UE4SS_SDK_PLS_Motherlode_Star_HPP
#define UE4SS_SDK_PLS_Motherlode_Star_HPP

class APLS_Motherlode_Star_C : public APLS_Motherlode_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class URoomGenerator*> RandomRooms;

    void CreateCaveGraph();
    void ExecuteUbergraph_PLS_Motherlode_Star(int32 EntryPoint, class URoomGenerator* CallFunc_GetRandomRoom_Room, FVector CallFunc_AddRoom_outCenter, FRoomNode CallFunc_AddRoom_outRoom, int32 CallFunc_AddRoom_ReturnValue);
};

#endif

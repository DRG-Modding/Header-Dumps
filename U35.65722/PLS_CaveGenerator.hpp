#ifndef UE4SS_SDK_PLS_CaveGenerator_HPP
#define UE4SS_SDK_PLS_CaveGenerator_HPP

class APLS_CaveGenerator_C : public APLS_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void CreateCaveGraph();
    void CreateSpawn();
    void ExecuteUbergraph_PLS_CaveGenerator(int32 EntryPoint, class ARoomBurner* CallFunc_GetActorOfClass_ReturnValue, class URoomGenerator* CallFunc_GetRoomGenerator_ReturnValue, FVector CallFunc_AddRoom_outCenter, FRoomNode CallFunc_AddRoom_outRoom, int32 CallFunc_AddRoom_ReturnValue);
};

#endif

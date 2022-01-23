#ifndef UE4SS_SDK_PLS_Extraction_HPP
#define UE4SS_SDK_PLS_Extraction_HPP

class APLS_Extraction_C : public APLS_Linear_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URoomGeneratorGroup* Room_Group;
    class URoomGenerator* StartingRoom;
    class URoomGenerator* EndRoom_Linear;
    FRoomGeneratorGroupInstance groupInstance;

    void CreateCaveGraph();
    void CreateGraphFirstPass_1();
    void ExecuteUbergraph_PLS_Extraction(int32 EntryPoint, FRandRange K2Node_MakeStruct_RandRange, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FVector CallFunc_AddRoom_outCenter, FRoomNode CallFunc_AddRoom_outRoom, int32 CallFunc_AddRoom_ReturnValue, FRandRange K2Node_MakeStruct_RandRange_1, FVector CallFunc_FindLocationInDirection_ReturnValue, class UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, FRoomGeneratorGroupInstance CallFunc_CreateGroupInstance_ReturnValue, FVector CallFunc_CreateLinearPathFromDNA_LastOrigin, int32 CallFunc_CreateLinearPathFromDNA_LastRoomID, class URoomGenerator* CallFunc_CreateLinearPathFromDNA_LastRoomGenerator, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_FindLocationInDirection_ReturnValue_1, FGameplayTagQuery CallFunc_MakeGameplayTagQuery_ReturnValue, FVector CallFunc_AddRoom_outCenter_1, FRoomNode CallFunc_AddRoom_outRoom_1, int32 CallFunc_AddRoom_ReturnValue_1, class URoomGenerator* CallFunc_GetRandomRoomWithTags_ReturnValue, int32 CallFunc_ConnectRoomIds_ReturnValue, class URoomGenerator* CallFunc_GetRandomRoom_Room);
};

#endif

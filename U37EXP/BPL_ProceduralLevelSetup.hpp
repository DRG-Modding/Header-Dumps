#ifndef UE4SS_SDK_BPL_ProceduralLevelSetup_HPP
#define UE4SS_SDK_BPL_ProceduralLevelSetup_HPP

class UBPL_ProceduralLevelSetup_C : public UBlueprintFunctionLibrary
{

    void CreateLinearPathFromDNA(class APLS_Base_C* ProceduralSetup, FVector Origin, FVector PathDirection, float horizontalDeviation, float verticalDeviation, FRandRange PathRoomDistance, bool PlaceFirstRoomAtOrigin, bool AddRoomRadiusToRoomDistance, class UMissionDNA*& DNA, FRoomGeneratorGroupInstance& groupInstance, class UObject* __WorldContext, FVector& LastOrigin, int32& LastRoomID, class URoomGenerator*& LastRoomGenerator);
    void CreateLinearPath(class APLS_Base_C* ProceduralSetup, FVector Origin, FVector& PathDirection, FVector2D& GraphDeviation, int32 RoomCount, TArray<class URoomGenerator*>& PathRooms, FRandRange& PathRoomDistance, bool PlaceFirstRoomAtOrigin, class UObject* __WorldContext, FVector& LastOrigin, int32& LastRoomID);
    void CreateLinearPathGrouped(class APLS_Base_C* ProceduralSetup, FVector Origin, FVector PathDirection, int32 RoomCount, float horizontalDeviation, float verticalDeviation, FRandRange PathRoomDistance, TArray<class URoomGeneratorGroup*>& RoomGroups, bool PlaceFirstRoomAtOrigin, bool AddRoomRadiusToRoomDistance, class UObject* __WorldContext, FVector& LastOrigin, int32& LastRoomID, class URoomGenerator*& LastRoomGenerator);
};

#endif

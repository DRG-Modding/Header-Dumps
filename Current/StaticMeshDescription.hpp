#ifndef UE4SS_SDK_StaticMeshDescription_HPP
#define UE4SS_SDK_StaticMeshDescription_HPP

struct FUVMapSettings
{
    FVector Size;
    FVector2D UVTile;
    FVector Position;
    FRotator Rotation;
    FVector Scale;

};

class UStaticMeshDescription : public UMeshDescriptionBase
{

    void SetVertexInstanceUV(FVertexInstanceID VertexInstanceID, FVector2D UV, int32 UVIndex);
    void SetPolygonGroupMaterialSlotName(FPolygonGroupID PolygonGroupID, const FName& slotName);
    FVector2D GetVertexInstanceUV(FVertexInstanceID VertexInstanceID, int32 UVIndex);
    void CreateCube(FVector Center, FVector HalfExtents, FPolygonGroupID PolygonGroup, FPolygonID& PolygonID_PlusX, FPolygonID& PolygonID_MinusX, FPolygonID& PolygonID_PlusY, FPolygonID& PolygonID_MinusY, FPolygonID& PolygonID_PlusZ, FPolygonID& PolygonID_MinusZ);
};

#endif

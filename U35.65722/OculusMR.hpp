#ifndef UE4SS_SDK_OculusMR_HPP
#define UE4SS_SDK_OculusMR_HPP

#include "OculusMR_enums.hpp"

class AOculusMR_BoundaryActor : public AActor
{
    class UOculusMR_BoundaryMeshComponent* BoundaryMeshComponent;
};

class UOculusMR_BoundaryMeshComponent : public UMeshComponent
{
    EOculusMR_BoundaryType BoundaryType;
    float BottomZ;
    float TopZ;
    class UMaterial* WhiteMaterial;
    class AOculusMR_CastingCameraActor* CastingCameraActor;
};

class AOculusMR_CastingCameraActor : public ASceneCapture2D
{
    class UVRNotificationsComponent* VRNotificationComponent;
    class UTexture2D* CameraColorTexture;
    class UTexture2D* CameraDepthTexture;
    class UOculusMR_PlaneMeshComponent* PlaneMeshComponent;
    class UMaterial* ChromaKeyMaterial;
    class UMaterial* ChromaKeyLitMaterial;
    class UMaterial* OpaqueColoredMaterial;
    class UMaterialInstanceDynamic* ChromaKeyMaterialInstance;
    class UMaterialInstanceDynamic* ChromaKeyLitMaterialInstance;
    class UMaterialInstanceDynamic* CameraFrameMaterialInstance;
    class UMaterialInstanceDynamic* BackdropMaterialInstance;
    class AOculusMR_BoundaryActor* BoundaryActor;
    class ASceneCapture2D* BoundarySceneCaptureActor;
    class UTexture2D* DefaultTexture_White;
    TArray<class UTextureRenderTarget2D*> BackgroundRenderTargets;
    class ASceneCapture2D* ForegroundCaptureActor;
    TArray<class UTextureRenderTarget2D*> ForegroundRenderTargets;
    class UOculusMR_Settings* MRSettings;
    class UOculusMR_State* MRState;
};

struct FOculusMR_PlaneMeshTriangle
{
    FVector Vertex0;
    FVector2D UV0;
    FVector Vertex1;
    FVector2D UV1;
    FVector Vertex2;
    FVector2D UV2;
};

class UOculusMR_PlaneMeshComponent : public UMeshComponent
{

    bool SetCustomMeshTriangles(const TArray<FOculusMR_PlaneMeshTriangle>& Triangles);
    void ClearCustomMeshTriangles();
    void AddCustomMeshTriangles(const TArray<FOculusMR_PlaneMeshTriangle>& Triangles);
};

class UOculusMR_Settings : public UObject
{
    EOculusMR_ClippingReference ClippingReference;
    bool bUseTrackedCameraResolution;
    int32 WidthPerView;
    int32 HeightPerView;
    float CastingLatency;
    FColor BackdropColor;
    float HandPoseStateLatency;
    FColor ChromaKeyColor;
    float ChromaKeySimilarity;
    float ChromaKeySmoothRange;
    float ChromaKeySpillRange;
    EOculusMR_VirtualGreenScreenType VirtualGreenScreenType;
    float DynamicLightingDepthSmoothFactor;
    float DynamicLightingDepthVariationClampingValue;
    EOculusMR_PostProcessEffects ExternalCompositionPostProcessEffects;
    bool bIsCasting;
    EOculusMR_CompositionMethod CompositionMethod;
    EOculusMR_CameraDeviceEnum CapturingCamera;
    bool bUseDynamicLighting;
    EOculusMR_DepthQuality DepthQuality;

    void SetUseDynamicLighting(bool Val);
    void SetIsCasting(bool Val);
    void SetDepthQuality(EOculusMR_DepthQuality Val);
    void SetCompositionMethod(EOculusMR_CompositionMethod Val);
    void SetCapturingCamera(EOculusMR_CameraDeviceEnum Val);
    void SaveToIni();
    void LoadFromIni();
    bool GetUseDynamicLighting();
    bool GetIsCasting();
    EOculusMR_DepthQuality GetDepthQuality();
    EOculusMR_CompositionMethod GetCompositionMethod();
    EOculusMR_CameraDeviceEnum GetCapturingCamera();
    int32 GetBindToTrackedCameraIndex();
    void BindToTrackedCameraIndexIfAvailable(int32 InTrackedCameraIndex);
};

struct FTrackedCamera
{
    int32 Index;
    FString Name;
    float FieldOfView;
    int32 SizeX;
    int32 SizeY;
    ETrackedDeviceType AttachedTrackedDevice;
    FRotator CalibratedRotation;
    FVector CalibratedOffset;
    FRotator UserRotation;
    FVector UserOffset;
    FRotator RawRotation;
    FVector RawOffset;
};

class UOculusMR_State : public UObject
{
    FTrackedCamera TrackedCamera;
    class USceneComponent* TrackingReferenceComponent;
    double ScalingFactor;
    bool ChangeCameraStateRequested;
    bool BindToTrackedCameraIndexRequested;
};

class UOculusMRFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool SetTrackingReferenceComponent(class USceneComponent* Component);
    bool SetMrcScalingFactor(float ScalingFactor);
    bool IsMrcEnabled();
    bool IsMrcActive();
    class USceneComponent* GetTrackingReferenceComponent();
    class UOculusMR_Settings* GetOculusMRSettings();
    float GetMrcScalingFactor();
};

#endif

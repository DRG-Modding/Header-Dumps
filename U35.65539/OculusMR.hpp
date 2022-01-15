#ifndef UE4SS_SDK_OculusMR_HPP
#define UE4SS_SDK_OculusMR_HPP

#include "OculusMR_enums.hpp"

class AOculusMR_BoundaryActor : AActor
{
    UOculusMR_BoundaryMeshComponent* BoundaryMeshComponent;
}

class UOculusMR_BoundaryMeshComponent : UMeshComponent
{
    EOculusMR_BoundaryType BoundaryType;
    float BottomZ;
    float TopZ;
    UMaterial* WhiteMaterial;
    AOculusMR_CastingCameraActor* CastingCameraActor;
}

class AOculusMR_CastingCameraActor : USceneCapture2D
{
    UVRNotificationsComponent* VRNotificationComponent;
    UTexture2D* CameraColorTexture;
    UTexture2D* CameraDepthTexture;
    UOculusMR_PlaneMeshComponent* PlaneMeshComponent;
    UMaterial* ChromaKeyMaterial;
    UMaterial* ChromaKeyLitMaterial;
    UMaterial* OpaqueColoredMaterial;
    UMaterialInstanceDynamic* ChromaKeyMaterialInstance;
    UMaterialInstanceDynamic* ChromaKeyLitMaterialInstance;
    UMaterialInstanceDynamic* CameraFrameMaterialInstance;
    UMaterialInstanceDynamic* BackdropMaterialInstance;
    AOculusMR_BoundaryActor* BoundaryActor;
    ASceneCapture2D* BoundarySceneCaptureActor;
    UTexture2D* DefaultTexture_White;
    TArray<UTextureRenderTarget2D*> BackgroundRenderTargets;
    ASceneCapture2D* ForegroundCaptureActor;
    TArray<UTextureRenderTarget2D*> ForegroundRenderTargets;
    UOculusMR_Settings* MRSettings;
    UOculusMR_State* MRState;
}

class UOculusMR_PlaneMeshComponent : UMeshComponent
{

    bool SetCustomMeshTriangles(const TArray<FOculusMR_PlaneMeshTriangle>& Triangles);
    void ClearCustomMeshTriangles();
    void AddCustomMeshTriangles(const TArray<FOculusMR_PlaneMeshTriangle>& Triangles);
}

class UOculusMR_Settings : UObject
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
}

class UOculusMR_State : UObject
{
    FTrackedCamera TrackedCamera;
    USceneComponent* TrackingReferenceComponent;
    double ScalingFactor;
    bool ChangeCameraStateRequested;
    bool BindToTrackedCameraIndexRequested;
}

class UOculusMRFunctionLibrary : UBlueprintFunctionLibrary
{

    bool SetTrackingReferenceComponent(USceneComponent* Component);
    bool SetMrcScalingFactor(float ScalingFactor);
    bool IsMrcEnabled();
    bool IsMrcActive();
    USceneComponent* GetTrackingReferenceComponent();
    UOculusMR_Settings* GetOculusMRSettings();
    float GetMrcScalingFactor();
}

struct FOculusMR_PlaneMeshTriangle
{
    FVector Vertex0;
    FVector2D UV0;
    FVector Vertex1;
    FVector2D UV1;
    FVector Vertex2;
    FVector2D UV2;
}

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
}

#endif

#ifndef UE4SS_SDK_InteractiveToolsFramework_HPP
#define UE4SS_SDK_InteractiveToolsFramework_HPP

#include "InteractiveToolsFramework_enums.hpp"

class UInputBehavior : UObject
{
}

class UAnyButtonInputBehavior : UInputBehavior
{
}

class UInteractiveGizmoBuilder : UObject
{
}

class UAxisAngleGizmoBuilder : UInteractiveGizmoBuilder
{
}

class UInteractiveGizmo : UObject
{
    UInputBehaviorSet* InputBehaviors;
}

class UAxisAngleGizmo : UInteractiveGizmo
{
    TScriptInterface<IGizmoAxisSource> AxisSource;
    TScriptInterface<IGizmoFloatParameterSource> AngleSource;
    TScriptInterface<IGizmoClickTarget> HitTarget;
    TScriptInterface<IGizmoStateTarget> StateTarget;
    bool bInInteraction;
    FVector RotationOrigin;
    FVector RotationAxis;
    FVector RotationPlaneX;
    FVector RotationPlaneY;
    FVector InteractionStartPoint;
    FVector InteractionCurPoint;
    float InteractionStartAngle;
    float InteractionCurAngle;
}

class UAxisPositionGizmoBuilder : UInteractiveGizmoBuilder
{
}

class UAxisPositionGizmo : UInteractiveGizmo
{
    TScriptInterface<IGizmoAxisSource> AxisSource;
    TScriptInterface<IGizmoFloatParameterSource> ParameterSource;
    TScriptInterface<IGizmoClickTarget> HitTarget;
    TScriptInterface<IGizmoStateTarget> StateTarget;
    bool bEnableSignedAxis;
    bool bInInteraction;
    FVector InteractionOrigin;
    FVector InteractionAxis;
    FVector InteractionStartPoint;
    FVector InteractionCurPoint;
    float InteractionStartParameter;
    float InteractionCurParameter;
    float ParameterSign;
}

class UGizmoConstantAxisSource : UObject
{
    FVector Origin;
    FVector Direction;
}

class UGizmoConstantFrameAxisSource : UObject
{
    FVector Origin;
    FVector Direction;
    FVector TangentX;
    FVector TangentY;
}

class UGizmoWorldAxisSource : UObject
{
    FVector Origin;
    int32 AxisIndex;
}

class UGizmoComponentAxisSource : UObject
{
    USceneComponent* Component;
    int32 AxisIndex;
    bool bLocalAxes;
}

class UInteractiveToolPropertySet : UObject
{
    UObject* CachedProperties;
    bool bIsPropertySetEnabled;
}

class UBrushBaseProperties : UInteractiveToolPropertySet
{
    float BrushSize;
    bool bSpecifyRadius;
    float BrushRadius;
    float BrushStrength;
    float BrushFalloffAmount;
    bool bShowStrength;
    bool bShowFalloff;
}

class UInteractiveTool : UObject
{
    UInputBehaviorSet* InputBehaviors;
    TArray<UObject*> ToolPropertyObjects;
}

class USingleSelectionTool : UInteractiveTool
{
}

class UMeshSurfacePointTool : USingleSelectionTool
{
}

class UBaseBrushTool : UMeshSurfacePointTool
{
    UBrushBaseProperties* BrushProperties;
    bool bInBrushStroke;
    FBrushStampData LastBrushStamp;
    TSoftClassPtr<UBrushBaseProperties> PropertyClass;
    UBrushStampIndicator* BrushStampIndicator;
}

class UBrushStampIndicatorBuilder : UInteractiveGizmoBuilder
{
}

class UBrushStampIndicator : UInteractiveGizmo
{
    float BrushRadius;
    float BrushFalloff;
    FVector BrushPosition;
    FVector BrushNormal;
    bool bDrawIndicatorLines;
    bool bDrawRadiusCircle;
    bool bDrawFalloffCircle;
    int32 SampleStepCount;
    FLinearColor LineColor;
    float LineThickness;
    bool bDepthTested;
    bool bDrawSecondaryLines;
    float SecondaryLineThickness;
    FLinearColor SecondaryLineColor;
    UPrimitiveComponent* AttachedComponent;
}

class UClickDragInputBehavior : UAnyButtonInputBehavior
{
    bool bUpdateModifiersDuringDrag;
}

class ULocalClickDragInputBehavior : UClickDragInputBehavior
{
}

class UInteractiveToolBuilder : UObject
{
}

class UClickDragToolBuilder : UInteractiveToolBuilder
{
}

class UClickDragTool : UInteractiveTool
{
}

class AInternalToolFrameworkActor : AActor
{
}

class AGizmoActor : AInternalToolFrameworkActor
{
}

class UGizmoBaseComponent : UPrimitiveComponent
{
    FLinearColor Color;
    float HoverSizeMultiplier;
    float PixelHitDistanceThreshold;

    void UpdateWorldLocalState(bool bWorldIn);
    void UpdateHoverState(bool bHoveringIn);
}

class UGizmoArrowComponent : UGizmoBaseComponent
{
    FVector Direction;
    float Gap;
    float Length;
    float Thickness;
}

class UGizmoBoxComponent : UGizmoBaseComponent
{
    FVector Origin;
    FQuat Rotation;
    FVector Dimensions;
    float LineThickness;
    bool bRemoveHiddenLines;
    bool bEnableAxisFlip;
}

class UGizmoCircleComponent : UGizmoBaseComponent
{
    FVector Normal;
    float Radius;
    float Thickness;
    int32 NumSides;
    bool bViewAligned;
    bool bOnlyAllowFrontFacingHits;
}

class UGizmoTransformSource : UInterface
{

    void SetTransform(const FTransform& NewTransform);
    FTransform GetTransform();
}

class UGizmoAxisSource : UInterface
{

    bool HasTangentVectors();
    void GetTangentVectors(FVector& TangentXOut, FVector& TangentYOut);
    FVector GetOrigin();
    FVector GetDirection();
}

class UGizmoClickTarget : UInterface
{

    void UpdateHoverState(bool bHovering);
}

class UGizmoStateTarget : UInterface
{

    void EndUpdate();
    void BeginUpdate();
}

class UGizmoFloatParameterSource : UInterface
{

    void SetParameter(float NewValue);
    float GetParameter();
    void EndModify();
    void BeginModify();
}

class UGizmoVec2ParameterSource : UInterface
{

    void SetParameter(const FVector2D& NewValue);
    FVector2D GetParameter();
    void EndModify();
    void BeginModify();
}

class UGizmoLineHandleComponent : UGizmoBaseComponent
{
    FVector Normal;
    float HandleSize;
    float Thickness;
    FVector Direction;
    float Length;
    bool bImageScale;
}

class UGizmoRectangleComponent : UGizmoBaseComponent
{
    FVector DirectionX;
    FVector DirectionY;
    float OffsetX;
    float OffsetY;
    float LengthX;
    float LengthY;
    float Thickness;
    uint8 SegmentFlags;
}

class UGizmoLambdaHitTarget : UObject
{
}

class UGizmoComponentHitTarget : UObject
{
    UPrimitiveComponent* Component;
}

class UInputBehaviorSet : UObject
{
    TArray<FBehaviorInfo> Behaviors;
}

class UInputBehaviorSource : UInterface
{
}

class UInputRouter : UObject
{
    bool bAutoInvalidateOnHover;
    bool bAutoInvalidateOnCapture;
    UInputBehaviorSet* ActiveInputBehaviors;
}

class UInteractionMechanic : UObject
{
}

class UInteractiveGizmoManager : UObject
{
    TArray<FActiveGizmo> ActiveGizmos;
    TMap<FString, UInteractiveGizmoBuilder*> GizmoBuilders;
}

class UToolContextTransactionProvider : UInterface
{
}

class UInteractiveToolManager : UObject
{
    UInteractiveTool* ActiveLeftTool;
    UInteractiveTool* ActiveRightTool;
    TMap<FString, UInteractiveToolBuilder*> ToolBuilders;
}

class UToolFrameworkComponent : UInterface
{
}

class UInteractiveToolsContext : UObject
{
    UInputRouter* InputRouter;
    UInteractiveToolManager* ToolManager;
    UInteractiveGizmoManager* GizmoManager;
    TSoftClassPtr<UInteractiveToolManager> ToolManagerClass;
}

class AIntervalGizmoActor : UGizmoActor
{
    UGizmoLineHandleComponent* UpIntervalComponent;
    UGizmoLineHandleComponent* DownIntervalComponent;
    UGizmoLineHandleComponent* ForwardIntervalComponent;
}

class UIntervalGizmoBuilder : UInteractiveGizmoBuilder
{
}

class UIntervalGizmo : UInteractiveGizmo
{
    UGizmoTransformChangeStateTarget* StateTarget;
    UTransformProxy* TransformProxy;
    TArray<UPrimitiveComponent*> ActiveComponents;
    TArray<UInteractiveGizmo*> ActiveGizmos;
    UGizmoComponentAxisSource* AxisYSource;
    UGizmoComponentAxisSource* AxisZSource;
}

class UGizmoBaseFloatParameterSource : UObject
{
}

class UGizmoAxisIntervalParameterSource : UGizmoBaseFloatParameterSource
{
    TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource;
    float MinParameter;
    float MaxParameter;
}

class UKeyAsModifierInputBehavior : UInputBehavior
{
}

class UMeshSurfacePointToolBuilder : UInteractiveToolBuilder
{
}

class UMouseHoverBehavior : UInputBehavior
{
}

class UMultiClickSequenceInputBehavior : UAnyButtonInputBehavior
{
}

class UMultiSelectionTool : UInteractiveTool
{
}

class UGizmoLocalFloatParameterSource : UGizmoBaseFloatParameterSource
{
    float Value;
    FGizmoFloatParameterChange LastChange;
}

class UGizmoBaseVec2ParameterSource : UObject
{
}

class UGizmoLocalVec2ParameterSource : UGizmoBaseVec2ParameterSource
{
    FVector2D Value;
    FGizmoVec2ParameterChange LastChange;
}

class UGizmoAxisTranslationParameterSource : UGizmoBaseFloatParameterSource
{
    TScriptInterface<IGizmoAxisSource> AxisSource;
    TScriptInterface<IGizmoTransformSource> TransformSource;
    float Parameter;
    FGizmoFloatParameterChange LastChange;
    FVector CurTranslationAxis;
    FVector CurTranslationOrigin;
    FTransform InitialTransform;
}

class UGizmoPlaneTranslationParameterSource : UGizmoBaseVec2ParameterSource
{
    TScriptInterface<IGizmoAxisSource> AxisSource;
    TScriptInterface<IGizmoTransformSource> TransformSource;
    FVector2D Parameter;
    FGizmoVec2ParameterChange LastChange;
    FVector CurTranslationOrigin;
    FVector CurTranslationNormal;
    FVector CurTranslationAxisX;
    FVector CurTranslationAxisY;
    FTransform InitialTransform;
}

class UGizmoAxisRotationParameterSource : UGizmoBaseFloatParameterSource
{
    TScriptInterface<IGizmoAxisSource> AxisSource;
    TScriptInterface<IGizmoTransformSource> TransformSource;
    float Angle;
    FGizmoFloatParameterChange LastChange;
    FVector CurRotationAxis;
    FVector CurRotationOrigin;
    FTransform InitialTransform;
}

class UGizmoUniformScaleParameterSource : UGizmoBaseVec2ParameterSource
{
    TScriptInterface<IGizmoAxisSource> AxisSource;
    TScriptInterface<IGizmoTransformSource> TransformSource;
    float ScaleMultiplier;
    FVector2D Parameter;
    FGizmoVec2ParameterChange LastChange;
    FVector CurScaleOrigin;
    FVector CurScaleNormal;
    FVector CurScaleAxisX;
    FVector CurScaleAxisY;
    FTransform InitialTransform;
}

class UGizmoAxisScaleParameterSource : UGizmoBaseFloatParameterSource
{
    TScriptInterface<IGizmoAxisSource> AxisSource;
    TScriptInterface<IGizmoTransformSource> TransformSource;
    float ScaleMultiplier;
    float Parameter;
    FGizmoFloatParameterChange LastChange;
    FVector CurScaleAxis;
    FVector CurScaleOrigin;
    FTransform InitialTransform;
}

class UGizmoPlaneScaleParameterSource : UGizmoBaseVec2ParameterSource
{
    TScriptInterface<IGizmoAxisSource> AxisSource;
    TScriptInterface<IGizmoTransformSource> TransformSource;
    float ScaleMultiplier;
    FVector2D Parameter;
    FGizmoVec2ParameterChange LastChange;
    FVector CurScaleOrigin;
    FVector CurScaleNormal;
    FVector CurScaleAxisX;
    FVector CurScaleAxisY;
    FTransform InitialTransform;
}

class UPlanePositionGizmoBuilder : UInteractiveGizmoBuilder
{
}

class UPlanePositionGizmo : UInteractiveGizmo
{
    TScriptInterface<IGizmoAxisSource> AxisSource;
    TScriptInterface<IGizmoVec2ParameterSource> ParameterSource;
    TScriptInterface<IGizmoClickTarget> HitTarget;
    TScriptInterface<IGizmoStateTarget> StateTarget;
    bool bEnableSignedAxis;
    bool bFlipX;
    bool bFlipY;
    bool bInInteraction;
    FVector InteractionOrigin;
    FVector InteractionNormal;
    FVector InteractionAxisX;
    FVector InteractionAxisY;
    FVector InteractionStartPoint;
    FVector InteractionCurPoint;
    FVector2D InteractionStartParameter;
    FVector2D InteractionCurParameter;
    FVector2D ParameterSigns;
}

class USelectionSet : UObject
{
}

class UMeshSelectionSet : USelectionSet
{
    TArray<int32> Vertices;
    TArray<int32> Edges;
    TArray<int32> Faces;
    TArray<int32> Groups;
}

class USingleClickInputBehavior : UAnyButtonInputBehavior
{
    bool HitTestOnRelease;
}

class USingleClickToolBuilder : UInteractiveToolBuilder
{
}

class USingleClickTool : UInteractiveTool
{
}

class UGizmoNilStateTarget : UObject
{
}

class UGizmoLambdaStateTarget : UObject
{
}

class UGizmoObjectModifyStateTarget : UObject
{
}

class UGizmoTransformChangeStateTarget : UObject
{
    TScriptInterface<IToolContextTransactionProvider> TransactionManager;
}

class ATransformGizmoActor : UGizmoActor
{
    UPrimitiveComponent* TranslateX;
    UPrimitiveComponent* TranslateY;
    UPrimitiveComponent* TranslateZ;
    UPrimitiveComponent* TranslateYZ;
    UPrimitiveComponent* TranslateXZ;
    UPrimitiveComponent* TranslateXY;
    UPrimitiveComponent* RotateX;
    UPrimitiveComponent* RotateY;
    UPrimitiveComponent* RotateZ;
    UPrimitiveComponent* UniformScale;
    UPrimitiveComponent* AxisScaleX;
    UPrimitiveComponent* AxisScaleY;
    UPrimitiveComponent* AxisScaleZ;
    UPrimitiveComponent* PlaneScaleYZ;
    UPrimitiveComponent* PlaneScaleXZ;
    UPrimitiveComponent* PlaneScaleXY;
}

class UTransformGizmoBuilder : UInteractiveGizmoBuilder
{
}

class UTransformGizmo : UInteractiveGizmo
{
    UTransformProxy* ActiveTarget;
    bool bSnapToWorldGrid;
    bool bUseContextCoordinateSystem;
    EToolContextCoordinateSystem CurrentCoordinateSystem;
    TArray<UPrimitiveComponent*> ActiveComponents;
    TArray<UPrimitiveComponent*> NonuniformScaleComponents;
    TArray<UInteractiveGizmo*> ActiveGizmos;
    UGizmoConstantFrameAxisSource* CameraAxisSource;
    UGizmoComponentAxisSource* AxisXSource;
    UGizmoComponentAxisSource* AxisYSource;
    UGizmoComponentAxisSource* AxisZSource;
    UGizmoComponentAxisSource* UnitAxisXSource;
    UGizmoComponentAxisSource* UnitAxisYSource;
    UGizmoComponentAxisSource* UnitAxisZSource;
    UGizmoTransformChangeStateTarget* StateTarget;
    UGizmoScaledTransformSource* ScaledTransformSource;
}

class UTransformProxy : UObject
{
    bool bRotatePerObject;
    bool bSetPivotMode;
    FTransform SharedTransform;
    FTransform InitialSharedTransform;
}

class UGizmoBaseTransformSource : UObject
{
}

class UGizmoComponentWorldTransformSource : UGizmoBaseTransformSource
{
    USceneComponent* Component;
    bool bModifyComponentOnTransform;
}

class UGizmoScaledTransformSource : UGizmoBaseTransformSource
{
    TScriptInterface<IGizmoTransformSource> ChildTransformSource;
}

class UGizmoTransformProxyTransformSource : UGizmoBaseTransformSource
{
    UTransformProxy* Proxy;
}

struct UBrushStampData
{
}

struct UBehaviorInfo
{
    UInputBehavior* Behavior;
}

struct UInputRayHit
{
}

struct UActiveGizmo
{
}

struct UGizmoFloatParameterChange
{
    float InitialValue;
    float CurrentValue;
}

struct UGizmoVec2ParameterChange
{
    FVector2D InitialValue;
    FVector2D CurrentValue;
}

#endif

#ifndef UE4SS_SDK_FieldSystemEngine_HPP
#define UE4SS_SDK_FieldSystemEngine_HPP

struct FFieldObjectCommands
{
    TArray<FName> TargetNames;
    TArray<class UFieldNodeBase*> RootNodes;
    TArray<class UFieldSystemMetaData*> MetaDatas;

};

class AFieldSystemActor : public AActor
{
    class UFieldSystemComponent* FieldSystemComponent;

};

class UBoxFalloff : public UFieldNodeFloat
{
    float Magnitude;
    float MinRange;
    float MaxRange;
    float Default;
    FTransform Transform;
    TEnumAsByte<EFieldFalloffType> Falloff;

    class UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, FTransform Transform, TEnumAsByte<EFieldFalloffType> Falloff);
};

class UCullingField : public UFieldNodeBase
{
    class UFieldNodeBase* Culling;
    class UFieldNodeBase* Field;
    TEnumAsByte<EFieldCullingOperationType> Operation;

    class UCullingField* SetCullingField(const class UFieldNodeBase* Culling, const class UFieldNodeBase* Field, TEnumAsByte<EFieldCullingOperationType> Operation);
};

class UFieldNodeBase : public UActorComponent
{
};

class UFieldNodeFloat : public UFieldNodeBase
{
};

class UFieldNodeInt : public UFieldNodeBase
{
};

class UFieldNodeVector : public UFieldNodeBase
{
};

class UFieldSystem : public UObject
{
};

class UFieldSystemComponent : public UPrimitiveComponent
{
    class UFieldSystem* FieldSystem;
    bool bIsWorldField;
    bool bIsChaosField;
    TArray<TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers;
    FFieldObjectCommands ConstructionCommands;
    FFieldObjectCommands BufferCommands;

    void ResetFieldSystem();
    void RemovePersistentFields();
    void ApplyUniformVectorFalloffForce(bool Enabled, FVector Position, FVector Direction, float Radius, float Magnitude);
    void ApplyStrainField(bool Enabled, FVector Position, float Radius, float Magnitude, int32 Iterations);
    void ApplyStayDynamicField(bool Enabled, FVector Position, float Radius);
    void ApplyRadialVectorFalloffForce(bool Enabled, FVector Position, float Radius, float Magnitude);
    void ApplyRadialForce(bool Enabled, FVector Position, float Magnitude);
    void ApplyPhysicsField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
    void ApplyLinearForce(bool Enabled, FVector Direction, float Magnitude);
    void AddPersistentField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
    void AddFieldCommand(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
};

class UFieldSystemMetaData : public UActorComponent
{
};

class UFieldSystemMetaDataFilter : public UFieldSystemMetaData
{
    TEnumAsByte<EFieldFilterType> FilterType;

    class UFieldSystemMetaDataFilter* SetMetaDataFilterType(TEnumAsByte<EFieldFilterType> FilterType);
};

class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{
    int32 Iterations;

    class UFieldSystemMetaDataIteration* SetMetaDataIteration(int32 Iterations);
};

class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{
    TEnumAsByte<EFieldResolutionType> ResolutionType;

    class UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType> ResolutionType);
};

class UNoiseField : public UFieldNodeFloat
{
    float MinRange;
    float MaxRange;
    FTransform Transform;

    class UNoiseField* SetNoiseField(float MinRange, float MaxRange, FTransform Transform);
};

class UOperatorField : public UFieldNodeBase
{
    float Magnitude;
    class UFieldNodeBase* RightField;
    class UFieldNodeBase* LeftField;
    TEnumAsByte<EFieldOperationType> Operation;

    class UOperatorField* SetOperatorField(float Magnitude, const class UFieldNodeBase* LeftField, const class UFieldNodeBase* RightField, TEnumAsByte<EFieldOperationType> Operation);
};

class UPlaneFalloff : public UFieldNodeFloat
{
    float Magnitude;
    float MinRange;
    float MaxRange;
    float Default;
    float Distance;
    FVector Position;
    FVector Normal;
    TEnumAsByte<EFieldFalloffType> Falloff;

    class UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, FVector Position, FVector Normal, TEnumAsByte<EFieldFalloffType> Falloff);
};

class URadialFalloff : public UFieldNodeFloat
{
    float Magnitude;
    float MinRange;
    float MaxRange;
    float Default;
    float Radius;
    FVector Position;
    TEnumAsByte<EFieldFalloffType> Falloff;

    class URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, FVector Position, TEnumAsByte<EFieldFalloffType> Falloff);
};

class URadialIntMask : public UFieldNodeInt
{
    float Radius;
    FVector Position;
    int32 InteriorValue;
    int32 ExteriorValue;
    TEnumAsByte<ESetMaskConditionType> SetMaskCondition;

    class URadialIntMask* SetRadialIntMask(float Radius, FVector Position, int32 InteriorValue, int32 ExteriorValue, TEnumAsByte<ESetMaskConditionType> SetMaskConditionIn);
};

class URadialVector : public UFieldNodeVector
{
    float Magnitude;
    FVector Position;

    class URadialVector* SetRadialVector(float Magnitude, FVector Position);
};

class URandomVector : public UFieldNodeVector
{
    float Magnitude;

    class URandomVector* SetRandomVector(float Magnitude);
};

class UReturnResultsTerminal : public UFieldNodeBase
{

    class UReturnResultsTerminal* SetReturnResultsTerminal();
};

class UToFloatField : public UFieldNodeFloat
{
    class UFieldNodeInt* IntField;

    class UToFloatField* SetToFloatField(const class UFieldNodeInt* IntegerField);
};

class UToIntegerField : public UFieldNodeInt
{
    class UFieldNodeFloat* FloatField;

    class UToIntegerField* SetToIntegerField(const class UFieldNodeFloat* FloatField);
};

class UUniformInteger : public UFieldNodeInt
{
    int32 Magnitude;

    class UUniformInteger* SetUniformInteger(int32 Magnitude);
};

class UUniformScalar : public UFieldNodeFloat
{
    float Magnitude;

    class UUniformScalar* SetUniformScalar(float Magnitude);
};

class UUniformVector : public UFieldNodeVector
{
    float Magnitude;
    FVector Direction;

    class UUniformVector* SetUniformVector(float Magnitude, FVector Direction);
};

class UWaveScalar : public UFieldNodeFloat
{
    float Magnitude;
    FVector Position;
    float Wavelength;
    float Period;
    TEnumAsByte<EWaveFunctionType> Function;
    TEnumAsByte<EFieldFalloffType> Falloff;

    class UWaveScalar* SetWaveScalar(float Magnitude, FVector Position, float Wavelength, float Period, float Time, TEnumAsByte<EWaveFunctionType> Function, TEnumAsByte<EFieldFalloffType> Falloff);
};

#endif

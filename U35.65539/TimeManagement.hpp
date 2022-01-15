#ifndef UE4SS_SDK_TimeManagement_HPP
#define UE4SS_SDK_TimeManagement_HPP

#include "TimeManagement_enums.hpp"

class UFixedFrameRateCustomTimeStep : UEngineCustomTimeStep
{
    FFrameRate FixedFrameRate;
}

class UTimeManagementBlueprintLibrary : UBlueprintFunctionLibrary
{

    FFrameTime TransformTime(const FFrameTime& SourceTime, const FFrameRate& SourceRate, const FFrameRate& DestinationRate);
    FFrameNumber Subtract_FrameNumberInteger(FFrameNumber A, int32 B);
    FFrameNumber Subtract_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B);
    FFrameTime SnapFrameTimeToRate(const FFrameTime& SourceTime, const FFrameRate& SourceRate, const FFrameRate& SnapToRate);
    FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, const FFrameRate& FrameRate);
    FFrameNumber Multiply_FrameNumberInteger(FFrameNumber A, int32 B);
    bool IsValid_MultipleOf(const FFrameRate& InFrameRate, const FFrameRate& OtherFramerate);
    bool IsValid_Framerate(const FFrameRate& InFrameRate);
    FFrameRate GetTimecodeFrameRate();
    FTimecode GetTimecode();
    FFrameNumber Divide_FrameNumberInteger(FFrameNumber A, int32 B);
    FString Conv_TimecodeToString(const FTimecode& InTimecode, bool bForceSignDisplay);
    float Conv_QualifiedFrameTimeToSeconds(const FQualifiedFrameTime& InFrameTime);
    float Conv_FrameRateToSeconds(const FFrameRate& InFrameRate);
    int32 Conv_FrameNumberToInteger(const FFrameNumber& InFrameNumber);
    FFrameNumber Add_FrameNumberInteger(FFrameNumber A, int32 B);
    FFrameNumber Add_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B);
}

class UTimeSynchronizationSource : UObject
{
    bool bUseForSynchronization;
    int32 FrameOffset;
}

struct UTimedDataInputEvaluationData
{
    float DistanceToNewestSampleSeconds;
    float DistanceToOldestSampleSeconds;
}

struct UTimedDataChannelSampleTime
{
}

#endif

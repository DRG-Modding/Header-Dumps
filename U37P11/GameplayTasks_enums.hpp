enum class EGameplayTaskRunResult {
    Error = 0,
    Failed = 1,
    Success_Paused = 2,
    Success_Active = 3,
    Success_Finished = 4,
    EGameplayTaskRunResult_MAX = 5,
};

enum class EGameplayTaskState {
    Uninitialized = 0,
    AwaitingActivation = 1,
    Paused = 2,
    Active = 3,
    Finished = 4,
    EGameplayTaskState_MAX = 5,
};

enum class ETaskResourceOverlapPolicy {
    StartOnTop = 0,
    StartAtEnd = 1,
    ETaskResourceOverlapPolicy_MAX = 2,
};


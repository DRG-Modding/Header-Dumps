#ifndef UE4SS_SDK_NiagaraAnimNotifies_HPP
#define UE4SS_SDK_NiagaraAnimNotifies_HPP

class UAnimNotify_PlayNiagaraEffect : UAnimNotify
{
    UNiagaraSystem* Template;
    FVector LocationOffset;
    FRotator RotationOffset;
    FVector Scale;
    uint8 Attached;
    FName SocketName;

    UFXSystemComponent* GetSpawnedEffect();
}

class UAnimNotifyState_TimedNiagaraEffect : UAnimNotifyState
{
    UNiagaraSystem* Template;
    FName SocketName;
    FVector LocationOffset;
    FRotator RotationOffset;
    bool bDestroyAtEnd;
}

#endif

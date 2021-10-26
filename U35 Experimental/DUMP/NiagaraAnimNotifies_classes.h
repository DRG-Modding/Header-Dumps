// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
// Size: 0x90 (Inherited: 0x38)
struct UAnimNotify_PlayNiagaraEffect : UAnimNotify {
	UNiagaraSystem* Template; // 0x38(0x08)
	FVector LocationOffset; // 0x40(0x0c)
	FRotator RotationOffset; // 0x4c(0x0c)
	FVector Scale; // 0x58(0x0c)
	char Attached : 1; // 0x80(0x01)
	FName SocketName; // 0x84(0x08)

	UFXSystemComponent* GetSpawnedEffect();
};

// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
// Size: 0x60 (Inherited: 0x30)
struct UAnimNotifyState_TimedNiagaraEffect : UAnimNotifyState {
	UNiagaraSystem* Template; // 0x30(0x08)
	FName SocketName; // 0x38(0x08)
	FVector LocationOffset; // 0x40(0x0c)
	FRotator RotationOffset; // 0x4c(0x0c)
	bool bDestroyAtEnd; // 0x58(0x01)
};


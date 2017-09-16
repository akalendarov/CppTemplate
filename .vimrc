set enc=utf-8
set fenc=utf-8
set termencoding=utf-8
set nocompatible
set autoindent
set smartindent
set tabstop=4
set shiftwidth=4
set textwidth=120
set t_Co=256
syntax on
colorscheme elflord
set number
set showmatch
set comments=sl:/*,mb:\ *,elx:\ */

:autocmd FileType cpp nnoremap <F9> :w <CR> :set makeprg=g++\ -DANDREIKKAA\ -std=c++14\ -Wall\ -Wextra\ -pg\ -D_GLIBCXX_DEBUG\ -fsanitize=undefined\ -fsanitize=address\ %\ -o\ %<.exe <CR> :make <CR> :cwindow <CR>

:autocmd FileType cpp nnoremap <F10> :w <CR> :set makeprg=g++\ -DANDREIKKAA\ -std=c++14\ -O2\ -Wall\ -Wextra\ %\ -o\ %<.exe <CR> :make <CR> :cwindow <CR> 

:autocmd FileType cpp nnoremap <F5> :!./%<.exe <CR>

:autocmd FileType cpp nnoremap <F4> :!gdb ./%<.exe <CR>

:autocmd FileType cpp nnoremap <F3> :!valgrind ./%<.exe <CR>
